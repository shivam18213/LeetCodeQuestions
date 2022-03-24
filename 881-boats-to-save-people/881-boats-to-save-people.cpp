class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int start=0;
        int end = people.size()-1;
        int count=0;
        while(start <= end){
            
            if(people[start] + people[end] <= limit){
                end--;
                start++;
                count++;
            }
            else{
                end--;
                count++;
            }
        }
        return count;
        
    }
};