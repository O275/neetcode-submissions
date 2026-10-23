class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        count = {}

        for num in nums:
            if num in count:
                return True
                count[num] += 1
            else:
                count[num] = 1
        return False