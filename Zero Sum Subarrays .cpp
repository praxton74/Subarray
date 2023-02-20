long long int findSubarray(vector<long long int> &arr, int n ) 
    {
        //code here
        unordered_map<long long int,long long int>m;
        long long int  ans=0;
        long long  int pre_sum=0;
        for(long long int i=0;i<n;i++)
        {
            pre_sum+=arr[i];
            if(pre_sum==0)
            {
                ans++;
            }
            if(m.find(pre_sum)!=m.end())
            {
               ans+= m[pre_sum]; // updating the answer by counting the occurence of the presum  
            }
            m[pre_sum]++;
        }

        return ans;
        
        
    }
