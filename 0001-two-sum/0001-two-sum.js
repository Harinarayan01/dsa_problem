/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    var nums1=[];
    for(var i=0;i<nums.length;i++){
        for(var j=i+1;j<nums.length;j++){
            if(nums[i]+nums[j]===target){
                nums1.push(i);
                nums1.push(j);
            }
        }
    }
    return nums1;
    
};