vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        if(s==0) 
        return {-1};

       long long sum = 0;

       int beg = 0;

       for(int i = 0 ;i<n ; i++){

           if(sum<s)
           {
               sum+=arr[i];
           }

           while(sum>s)
           {
               sum-=arr[beg];
               beg++;
           }

           if(sum == s)
           {
               return {beg+1 , i+1};
           }

       }

       return {-1};
    }
