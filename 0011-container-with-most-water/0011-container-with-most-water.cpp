class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int a = 0;
        int b = n-1;
        int ans = 0;

        while(a<b){
            int area;
            area = (b-a)*min(height[a],height[b]);
            if(height[a] >= height[b]){
                b--;
            }
            else a++;
            ans = max(ans,area);
        }
    return ans;
    }
};