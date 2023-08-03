//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
    
    bool isPossible(int A[],int M,int N ,long long  sol){
        long long paintSum =0;
         int c =1;
        for(int i =0;i<N;i++){
            if(A[i]>sol){
                 return false;
            }
            
            if(paintSum + A[i]>sol){
                c++;
                paintSum = A[i];
                if(c>M){
                    return false;
                }
            }
            else{
                paintSum += A[i];
            }
        }
        return true;
    }
  public:
    long long minTime(int arr[], int n, int k)
    {
        // if(k>n) return -1;
       long long  s =0;
       long long  e = 0;
       //yaha accumulate issiliye use nhi kiya kyoki bohot bde input h
       for(int i =0 ;i<n;i++){
           e += arr[i];
       }
       long long  ans =-1;
       
       while(s<=e){
           //yab jada bde input hote h to its compulsory ki hum aise mid le
           long long  mid = s + (e-s)/2;
           if(isPossible(arr,k,n,mid)){
               ans = mid  ;
               e = mid-1;
               
           }
           else{
               s = mid+1;
           }
       }
       return ans;
       
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends