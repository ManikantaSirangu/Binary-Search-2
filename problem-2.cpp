//153. Find Minimum in Rotated Sorted Array
// Time Complexity : O(log(n))
// Space Complexity : O(1)
// Did this code successfully run on Leetcode : yes
// Three line explanation of solution in plain english

/* 
    if the element is less than previous element and next element then it is the minimum element
    because minimum element is the pivot.
*/

// Your code here along with comments explaining your approach

int findMin(vector<int>& nums) {
    int high = nums.size()-1, low = 0, mid;
    while(low<=high)
    {
        if(nums[low] <= nums[high]) return nums[low];
        mid = low + (high - low) / 2;
        if((mid == 0 || (nums[mid]<=nums[mid-1])) && (mid == nums.size()-1 || (nums[mid]<=nums[mid + 1])))
            return nums[mid];
        else if(nums[low] <= nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}