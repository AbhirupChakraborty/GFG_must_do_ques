vector<int> subarraySum(int arr[], int n, long long sum)
    {
        vector<int> v1;
    long long curr_sum=arr[0];
    long long s=0;
    long long e;
    for(e=1;e<=n;e++)
    {
        while(curr_sum>sum && s<e-1)
        {
            curr_sum=curr_sum-arr[s];
            s++;
        }
        if(curr_sum==sum)
        {
            v1.push_back(s+1);
            v1.push_back(e);
            break;
        }
        if(e<n)
        {
            curr_sum=curr_sum+arr[e];
        }
    }
    if (v1.empty()==true)
        v1.push_back(-1);
    return v1;
    }
