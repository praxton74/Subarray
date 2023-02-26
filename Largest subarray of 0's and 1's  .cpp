class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        // Your code here
        int maxi=0;
        int sum=0;
        unordered_map<int, int> mp;
        mp[0]=-1;
                                                              // TREAT 0==-1 and 1==1
        for(int i=0;i<N;i++)
        {
            if(arr[i]==0)
            sum+=-1;
            else
            sum+=arr[i];
          
            if(mp.find(sum)!=mp.end())
            {
              maxi=max(maxi,i-mp[sum]);
            }
            else
            {
              mp[sum]=i;
            }
        }
        
        return maxi;
    }
};
