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
            size_t found = s.find('#', i);
            if (found != string::npos)
            {
                int len = std::stoi(s.substr(i, found - i));
                i = found + 1;
                decoded.push_back(s.substr(i, len));
                i += len;
            }
            else
            {
                break;
            }
        }
        return decoded; 
    }
};
