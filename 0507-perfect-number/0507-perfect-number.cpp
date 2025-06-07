//Approach 1: Takes O(n) time complexity
/*
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1 ; i<num ; i++)
        {
            if(num%i==0) sum+=i;
        }
        if(sum==num) return true;
        return false;
    }
};
*/

//Approach 2: Takes 0(n^1/2) time complexity

class Solution {
public:
    bool checkPerfectNumber(int num){
        if(num<=1) return false;
        int sum=1;
        for(int i=2 ; i*i<=num ; i++)
        {
            if(num%i==0)
            {
                sum+=i;
                if(i!=num/i) sum+=num/i;
            }
        }
        if(sum==num) return true;
        return false;
    }
};