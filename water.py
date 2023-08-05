def maxArea(self, height: List[int]) -> int:
        j = len(height)-1
        max_c = 0
        area = 1
        i = 0
        while i < j:

            min_l = min(height[i], height[j])
            area = min_l * (j-i)
            max_c =max(max_c, area)


            if height[i]<height[j]:
                i+=1

            else:
                j-=1

        return max_c
