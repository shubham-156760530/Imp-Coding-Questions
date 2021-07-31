long long int minValue(int a[], int b[], int n)
    {
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        
        long long int res = 0;
        
        for(int i = 0; i < n; i++){
            res = res + a[i]*b[i];
        }
        
        return res;
        // Your code goes here
    }
