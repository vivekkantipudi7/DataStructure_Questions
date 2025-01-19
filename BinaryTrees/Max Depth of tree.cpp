/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        queue<TreeNode *> que;
        int lvl = 0;

        if (root == NULL)
            return 0;

        que.push(root);
        while (!que.empty())
        {
            int size = que.size();

            for (int i = 0; i < size; i++)
            {
                TreeNode *front = que.front();
                que.pop();
                if (front->left != NULL)
                    que.push(front->left);
                if (front->right != NULL)
                    que.push(front->right);
            }
            lvl++;
        }
        return lvl;
    }
};