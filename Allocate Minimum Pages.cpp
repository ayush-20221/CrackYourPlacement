bool valid(int arr[],int n, int m, int mid)
    {
        int k = 1, sum=0 ;
        for(int i=0;i<n;i++)
        {
            if(sum+arr[i]>mid)
            { 
            k++;
            sum = arr[i] ;
            }
            else 
            sum += arr[i] ;
        }
        return k<=m ;
    }
    
    
    long long findPages(int n, int arr[], int m) {
        // code here
       int mini = 0 ;
       int maxi = 0 ;
       int res = 0 ;
        for(int i=0;i<n;i++)
        {
            maxi += arr[i] ;
            mini = max(mini,arr[i]) ;
        }
        while(mini<=maxi)
        {
            int mid = (mini+maxi)/2 ;
            if(valid(arr,n,m,mid))
            {
                res = mid ;
                maxi = mid-1 ;
            }
            else 
            mini = mid+1 ;
        }
        
       
        return res ;
    }