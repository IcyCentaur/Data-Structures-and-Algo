def helper(root, min_, max_):
        if root is None:
            return True
        if ((max_ is not None and root.val >= max_) or (root.val <= min_ and min_ is not None)):
            return False
        return helper(root.left, min_, root.val) and helper(root.right, root.val, max_)

class Solution:

    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True
        
        return helper(root, float('-inf'), float('inf'))
