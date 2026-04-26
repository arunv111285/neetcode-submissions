class Solution {
public:


    string encode(vector<string>& strs) {

        std::string encoded;
        for (auto & str : strs)
        {
            encoded += str;
            encoded += char(128);
        }
        return encoded;
    }

    vector<string> decode(string s) {
        std::vector<string> decoded;
        std::string cur;
        for (auto ch : s)
        {
            if (ch == char(128))
            {
                decoded.push_back(cur);
                cur.clear();
            }
            else
                cur += ch;
        }
        return decoded; 
    }
};
