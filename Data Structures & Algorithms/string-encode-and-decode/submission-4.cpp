class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encoded{};
        for(int i =0; i < strs.size(); i++) {
            encoded += strs[i];
            encoded += "\r";
        }
        return encoded;
    }

    vector<string> decode(string s) {
        std::stringstream ss(s);
        std::string token{};

        std::vector<std::string> vec;
        while(getline(ss, token, '\r')) {
            vec.push_back(token);
        }
        return vec;
    }
};
