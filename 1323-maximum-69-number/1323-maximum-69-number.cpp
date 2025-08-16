class Solution {
public:
    int maximum69Number (int num) {
        int x = num;
        vector<int> numArray;
        while(x>0)
        {
            numArray.push_back(x%10);
            x/=10; 
        }
        reverse(numArray.begin() , numArray.end());
        for(int i=0 ; i<numArray.size() ; i++)
        {
            if(numArray[i] == 6)
            {
                numArray[i]=9;
                break;
            }
        }
        int number=0;
        for(const int digit : numArray)
        {
            number=number*10 + digit;
        }
        return number;
    }
};