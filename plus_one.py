def plusOne(self, digits: List[int]) -> List[int]:
        y = "".join([str(i) for i in digits])
        res = int(y) + 1
        return [int(i) for i in str(res)]
