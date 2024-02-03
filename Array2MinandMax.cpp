pair<long long, long long> getMinMax(long long a[], int n) {
    // sort(a, a+n);
    // return {a[0],a[n-1]};
    
    // long long min =  INT_MAX;
    // long long max = INT_MIN;
    
    // for(int i=0;i<n;i++)
    // {
    //     if(a[i] > max)
    //         max = a[i];
    //     if(a[i] < min)
    //         min = a[i];
    // }
    // return {min,max};

    pair<long long , long long > obj;
    obj.first =  INT_MAX; // min
    obj.second = INT_MIN; //max 
    
    for(int i=0;i<n;i++)
    {
        if(a[i] < obj.first)
            obj.first = a[i];
        if(a[i] > obj.second)
            obj.second = a[i];
    }
    return obj;
}