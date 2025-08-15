// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low=0 , high=n;
        while(low<high)
        {
            long long mid = (low+high)/2;
            if(isBadVersion((int)mid)) high=mid;
            else low=mid+1;
        }
        return (int)low;
    }
};