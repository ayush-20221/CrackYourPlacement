long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end()) ;
    int profit=0,mini=INT_MAX ;
    for(int i=0;i<n-m+1;i++)
    {
        int j= i+m-1;
        profit = a[j]-a[i] ;
        mini = min(mini,profit) ;
    }
    return mini ;
    }  