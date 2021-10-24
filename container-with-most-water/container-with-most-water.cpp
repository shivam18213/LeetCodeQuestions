class Solution {
public:
        int maxArea(vector<int>& height) {
            int p1 = 0;
            int p2 = height.size()-1;
            int lh, rh;
            int marea=0,carea=0;
            while(p1 < p2){
                lh = height[p1];
                rh = height[p2];
                carea = min(lh,rh)* (p2 - p1);
                if(carea > marea)
                    marea=carea;
                if(lh < rh){
                    p1++;
                }
                else{
                    p2--;
                }
            }
            return marea;
        }
};