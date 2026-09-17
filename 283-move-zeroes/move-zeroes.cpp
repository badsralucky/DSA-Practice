class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        // finding the first zero the element in the array
        int j = -1;
        for(int i= 0; i<n; i++){
            if(nums[i] == 0){
                j = i ;
                break;
            }
        }
        if(j == -1)
        return;
        // iterate in the array and swap the non zeros with zeros
     for (int i =j+1;i<n;i++){
        if(nums[i] != 0){
            swap(nums[i] , nums[j]);
            j++;
        }
    }   
    }
};