// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        if(n < 3){
            return -1;
        }
    
         int f= INT_MIN, s=INT_MIN, t= INT_MIN;
         for(int i=0; i < n; i++){
             if(a[i] > f){
                 t = s;
                 s = f;
                 f = a[i];
             }
             else if(a[i] > s && a[i] < f){
                 t = s;
                 s = a[i];
            }
            else if(a[i] > t && a[i] < s){
                t = a[i];
            }
         }
         return t;
    }

};

// { Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     // } Driver Code Ends