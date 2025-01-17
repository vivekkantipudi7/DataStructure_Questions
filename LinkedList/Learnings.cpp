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

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node *y = new Node(arr[0], nullptr); // *y ante idhi pointer annamaata newNode ki
    cout << y;                           // some memory print avvudhi
    cout << y->data;                     // 2

    // okavela pointer pettakapothe it will be an object
    Node x = Node(arr[0], nullptr);
    cout << x.data; // 2
}