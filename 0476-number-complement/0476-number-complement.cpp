#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string dec2bin(int num) {
        string result = "";
        while (num > 0) {
            result += (num % 2 == 0) ? '0' : '1';
            num /= 2;
        }
        reverse(result.begin(), result.end());
        return result;
    }
    int findComplement(int num) {
        string binary = dec2bin(num);
        for (char& c : binary) {
            c = (c == '0') ? '1' : '0';
        }
        int complement = 0;
        for (char c : binary) {
            complement = complement * 2 + (c - '0');
        }

        return complement;
    }
};
