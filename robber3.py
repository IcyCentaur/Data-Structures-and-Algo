def rob(self, root: Optional[TreeNode]) -> int:
        def rob_Util(node):
            if not node:
                return (0,0)
            
            left, right = rob_Util(node.left), rob_Util(node.right)
            now = node.val + left[1] + right[1]

            later = max(left) + max(right)
            return (now, later)

        return max(rob_Util(root))
