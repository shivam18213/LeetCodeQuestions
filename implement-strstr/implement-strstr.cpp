class Solution {
public:
   int strStr(string haystack, string needle) {
        
        if(needle.size()==0)
        {
            return 0;
        }
        int i=0;
        while(i<=double(haystack.size())-double(needle.size()))   
        {                                                         
            int k=0;                                              
            if(haystack[i]==needle[k])                            
            {                                       
                k++;
                while(k<needle.size())
                { 
                  if(haystack[i+k]!=needle[k])
                  {
                      break;
                  }
                  k++;
                }
                if(k==needle.size())
                {
                    return i;
                }
            }
            i++;
        }
        return -1;
    }
};