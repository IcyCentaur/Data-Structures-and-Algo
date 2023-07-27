class Solution:
    def countSubstrings(self, input_str):
        n = len(input_str)
        count = 0
        for i in range(n):
            left = right = i
            while left >= 0 and right < n and input_str[left] == input_str[right]:
                count += 1
                left -= 1
                right += 1

        for i in range(n - 1):
            left = i
            right = i + 1
            while left >= 0 and right < n and input_str[left] == input_str[right]:
                count += 1
                left -= 1
                right += 1

        return count
