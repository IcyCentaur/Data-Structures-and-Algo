class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        x = sum(int(val) * 10**i for i, val in enumerate(num1[::-1]))
        y = sum(int(val) * 10**i for i, val in enumerate(num2[::-1]))
        z = x*y
        return str(z)
