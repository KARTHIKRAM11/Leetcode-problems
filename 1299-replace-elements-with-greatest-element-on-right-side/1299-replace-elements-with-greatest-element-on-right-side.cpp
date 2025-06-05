class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n =arr.size();
        int maximum=INT_MIN;

        for(int i=0 ; i<n ; i++)
        {   
            maximum=INT_MIN;
            for(int j=i+1 ; j<n ;  j++)
            {
                if(arr[j]>maximum)
                {
                    maximum=arr[j];
                }
            }
            arr[i]=maximum;
        }
        arr[n-1]=-1;

        return arr;
    }
};