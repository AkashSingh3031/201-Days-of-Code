class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_to_index = {}        #key=number, value=index
        
        for i, num in enumerate(nums):           #i=index, num = numbers
            if target-num in num_to_index:
                return [num_to_index[target-num], i]
            num_to_index[num] = i
            
        return []               #return list of Index
        