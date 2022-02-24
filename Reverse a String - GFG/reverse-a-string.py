#User function Template for python3

def rev2(s, res):
    if(len(s) == 0):
        return res
  
    c = s[0]
    res = c+res
    s= s[1:]
    return rev2(s,res)



def reverseWord(s):
    return rev2(s,"")
    #your code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    while(t>0):
        s = input()
        print(reverseWord(s))
        t = t-1

# } Driver Code Ends