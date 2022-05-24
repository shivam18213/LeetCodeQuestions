// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> stk;
       for(int i=0; i < x.size(); i++){
           
           if((x[i] == '{') || (x[i] == '[') || (x[i] == '(')){
               stk.push(x[i]);
               continue;
           }
           
           else{
               if(stk.empty()) return false;
               else if(x[i] == '}' && stk.top() == '{') stk.pop();
               else if(x[i] == ')' && stk.top() == '(') stk.pop();
               else if(x[i] == ']' && stk.top() == '[') stk.pop();
               else{
                   return false;
               }
           }
          
           
       }
       if(stk.empty()){
           return true;
       }
       else{
           return false;
       }
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends