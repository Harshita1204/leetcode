class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end()); // sort the array 
        return nums[nums.size()/2];
    }
};

// think of the majority element as taking up more than half the array , After sorting , all identical elements are together.
// since it occupies more than half of the positions , it must cross the middle of the array.
