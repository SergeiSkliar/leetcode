class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        setJ = set(J)
        return sum([i in setJ for i in S])
