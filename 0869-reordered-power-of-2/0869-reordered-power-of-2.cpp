class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string num = to_string(n);
        for(int i = 0 ; i <31 ; i++)
        {
            string powerOf2 = to_string(1<<i);
            if(num == powerOf2) return true;
        }
        return false;
    }
};