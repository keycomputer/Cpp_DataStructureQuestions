
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        // sort(arr+l, arr+r+1);  // ascending 
        // return arr[k-1];
        // Kth Largest 
        // sort(arr+l, arr+r+1, greater<int>()); // descending 
        // 7  -  1 
        // 10 -  2 
        // 4  -  3 
        // 4 7 10
        // 3  -  if True -> 4,7 -> 3,4,7
        
        // 6 8 1 2 3 
        // 3rd smallest 
        priority_queue <int> pq;
        for(int i=l;i<=r;i++)
        {
            if(pq.size() == k )
            {
                if(pq.top() > arr[i]){  // checking top data of PQ is greeate than array i index sdat
                    // remove one element 
                    // i index value push
                    pq.pop();
                    pq.push(arr[i]);
                }
            }
            else
            {
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};