class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int index = i;
            int x = nums[i];
            int sum = 0;
            while(x){
                sum += (x%10);
                x = x/10;
            }
            if(sum==index) return index;
        }
        return -1;
    }
};