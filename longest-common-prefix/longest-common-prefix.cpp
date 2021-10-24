
class Solution {
public:
    
    
    string longestCommonPrefix(vector<string>& strs) {
  
    if(strs.size()==1)
        return strs[0];
    int i=0,j=0,k=1,f=0;
    string res="";
    for(int a=0;a<strs.size()-1;a++){
    if(strs[a].size() < strs[a+1].size())
    {string temp = strs[a];
        strs[a]=strs[a+1];
        strs[a+1]=temp;}
    }
    while(i<strs[0].size() && f!=1){
        res+= strs[0][i];
        j=1;
        while(j<strs.size() && f!=1){
        //    cout<<strs[j].substr(0,k)<<" "<<res<<'\n';
            k=i;
            if(res==strs[j])
                f=2;
            
            else if(strs[j].substr(0,k+1)==res){
                f=0;
            }
            else if(strs[j].substr(0,k+1)!=res){
                f=1;
            }
            k++;
            j++;
            }
        
            if (f==1)
            break;
         //   cout<<"flag"<<f<<'\n';
        ++i;
}       
        if(f==2)
            return res;
        else{
        res= res.substr(0,res.length()-1);
        return res;}
    }
};