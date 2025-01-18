class Solution
{
public:
    int function(Node *slow, Node *fast)
    {
        int cnt = 1;
        fast = fast->next;
        while (slow != fast)
        {
            cnt++;
            fast = fast->next;
        }
        return cnt;
    }
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head)
    {
        // Code here
        Node *slow = head;
        Node *fast = head;
        if (head == NULL || head->next == NULL)
            return 0;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return function(slow, fast);
            }
        }
        return 0;
    }
};