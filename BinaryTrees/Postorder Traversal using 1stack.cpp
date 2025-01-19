class Solution
{
public:
    vector<int> postOrder(Node *node)
    {
        // code here
        vector<int> post;
        Node *cur = node;
        stack<Node *> st;
        while (cur != nullptr || !st.empty())
        {
            if (cur != NULL)
            {
                st.push(cur);
                cur = cur->left;
            }
            else
            {
                Node *temp = st.top()->right;
                if (temp == NULL)
                {
                    temp = st.top();
                    st.pop();
                    post.push_back(temp->data);
                    while (!st.empty() && temp == st.top()->right)
                    {
                        temp = st.top();
                        st.pop();
                        post.push_back(temp->data);
                    }
                }
                else
                {
                    cur = temp;
                }
            }
        }
        return post;
    }
};