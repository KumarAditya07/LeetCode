class Solution {
public:
    string removeKdigits(string num, int k) {
         std::string result;
    for (char digit : num) {
        while (k > 0 && !result.empty() && result.back() > digit) {
            result.pop_back();
            k--;
        }
        if (!result.empty() || digit != '0') {
            result.push_back(digit);
        }
    }
    while (k > 0 && !result.empty()) {
        result.pop_back();
        k--;
    }
    return result.empty() ? "0" : result;
    }
};