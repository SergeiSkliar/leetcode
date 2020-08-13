class Solution:
    def reverse(self, x: int) -> int:
        if (x < 0):
            y = x * (-1)
        else:
            y = x
        reverse = 0
        for i in range(len(str(y))):
            a = y % 10
            reverse = reverse * 10 + a
            y = y // 10
        
        if reverse > 2**31-1:
            return 0
        elif (x < 0):
            return reverse * (-1)
        else:
            return reverse
