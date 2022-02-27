// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long gcd(long a, long b){
        if(a == 0){
            return b;
        }
        if(b == 0){
            return a;
        }
        if(a < b){
            return gcd(a,b-a);
        }
        else {
            return gcd(a-b, a);
        }
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long g =  gcd(A,B);
        long long h = (A * B)/g;
        vector<long long> v = {h,g};
        return v;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends