class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        set_not=set(nums)
        if(len(set_not)==len(nums)):
            return False
        else:
            return True
        