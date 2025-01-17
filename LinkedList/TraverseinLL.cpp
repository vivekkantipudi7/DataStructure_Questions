#include <bits/stdc++.h>
using namespace std;
struct Node // user defined data type idhi
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1) // dheenni constructor antaam
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1) // dheenni constructor antaam
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node *head = convertArr2LL(arr);
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}