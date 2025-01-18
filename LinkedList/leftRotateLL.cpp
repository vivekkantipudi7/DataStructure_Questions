/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
public:
    Node *function(Node *head, int p)
    {
        Node *temp = head;
        int cnt = 1;
        while (cnt != p)
        {
            cnt++;
            temp = temp->next;
        }
        return temp;
    }
    Node *rotate(Node *head, int k)
    {
        // Your code here
        Node *tail = head;
        if (head == NULL || head->next == NULL)
            return head;
        int length = 1;

        while (tail->next != NULL)
        {
            length++;
            tail = tail->next;
        }
        if (k % length == 0)
            return head;
        k = k % length;

        Node *newLastNode = function(head, k);

        tail->next = head;
        head = newLastNode->next;
        newLastNode->next = NULL;

        return head;
    }
};