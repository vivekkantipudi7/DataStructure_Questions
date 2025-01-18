/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *function(ListNode *head, int p)
    {
        ListNode *temp = head;
        int cnt = 1;
        while (cnt != p)
        {
            cnt++;
            temp = temp->next;
        }
        return temp;
    }
    ListNode *rotateRight(ListNode *head, int k)
    {
        ListNode *tail = head;
        if (head == NULL || head->next == NULL)
            return head;
        int length = 1;

        while (tail->next != NULL)
        {
            length++;
            tail = tail->next;
        }
        if (k == length)
            return head;
        k = k % length;

        ListNode *newLastNode = function(head, length - k);

        tail->next = head;
        head = newLastNode->next;
        newLastNode->next = NULL;

        return head;
    }
};