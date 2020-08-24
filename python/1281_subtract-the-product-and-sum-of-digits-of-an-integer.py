class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        digits = [int(i) for i in str(n)]
        product = 1
        for d in digits:
            product *= d
        return product - sum(digits)
