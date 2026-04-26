class Solution {
public:


    string encode(vector<string>& strs) {

        std::string encoded;
        // for (auto & str : strs)
        // {
        //     encoded += str;
        //     encoded += char(128);
        // }
        for (auto & str : strs)
        {
            const auto length = str.size();
            encoded += (std::to_string(length) + "#" + str);
        }
        return encoded;
    }

    vector<string> decode(string s) {
        std::vector<string> decoded;
        // std::string cur;
        // for (auto ch : s)
        // {
        //     if (ch == char(128))
        //     {
        //         decoded.push_back(cur);
        //         cur.clear();
        //     }
        //     else
        //         cur += ch;
        // }

        std::string lenStr;
        for (int i = 0 ; i < s.size();)
        {
            if (s[i] == '#')
            {
                const auto len = std::stoi(lenStr);
                decoded.push_back(s.substr(i+1, len));
                i += (len + 1);
                lenStr.clear();
            }
            else
            {
                lenStr += s[i++];
            }
        }
        return decoded; 
    }
};
