

// } Driver Code Ends
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        // code here
        map<int, int> mp;
        queue<pair<int, Node *>> q;

        q.push({0, root});

        while (!q.empty())
        {
            auto it = q.front();
            q.pop();
            Node *node = it.second;
            int line = it.first;

            if (mp.find(line) == mp.end())
                mp[line] = node->data;

            if (node->left)
                q.push({line - 1, node->left});
            if (node->right)
                q.push({line + 1, node->right});
        }
        vector<int> ans;

        for (auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
