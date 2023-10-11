class Solution {
public:
    std::string longestNiceSubstring(std::string s) {
        int n = s.length();
        std::string longestNice;
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                std::string sub = s.substr(i, j - i + 1);
                if (isNice(sub) && sub.length() > longestNice.length()) {
                    longestNice = sub;
                }
            }
        }
        
        return longestNice;
    }
    
    bool isNice(const std::string& s) {
        std::unordered_set<char> lowercase, uppercase;
        for (char c : s) {
            if (isupper(c)) {
                uppercase.insert(c);
            } else {
                lowercase.insert(c);
            }
        }
        
        for (char c : lowercase) {
            if (uppercase.find(toupper(c)) == uppercase.end()) {
                return false;
            }
        }
        
        for (char c : uppercase) {
            if (lowercase.find(tolower(c)) == lowercase.end()) {
                return false;
            }
        }
        
        return true;
    }
};