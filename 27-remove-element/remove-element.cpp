class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=nums.size();
        int index=0;
        for(int i=0;i<k;i++){
            if(nums[i]!=val){
                nums[index]=nums[i];
                index++;
            }
            
        }
        return index;
    }    
    
};