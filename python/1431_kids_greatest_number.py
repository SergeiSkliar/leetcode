class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        greatestNumber = []
        for i in range(len(candies)):
            if candies[i] + extraCandies >= max(candies):
                greatestNumber.append(True)
            else:
                greatestNumber.append(False)
        return greatestNumber