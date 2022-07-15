// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
    if(size == 1) return a[0];
    int maj = 0;
    int count=1;
    
    for(int i=1; i < size; i++){
        if(a[maj] == a[i]) count++;
        else count--;
        
        if(count == 0){
            maj = i;
            count=1;
        }
    }
    int occ = 0;
    for(int i=0; i < size; i++){
        if(a[i] == a[maj]) occ++;
    }
    if(occ > size/2) return a[maj];
    else return -1;
        
}

// { Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}
  // } Driver Code Ends