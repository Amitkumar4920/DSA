#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}

// Naive approach
void printMiddle(Node * head)
{
    if (head == NULL)
        return;
    int count = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    curr = head;
    for (int i = 0; i < count / 2; i++)
        curr = curr->next;

    cout << curr->data;
}
// Using two pointer

void print_Middle_TwoPointer(Node *head)
{
    if (head == NULL)
        return;
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(59);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

    printlist(head);
    cout << endl;
    printMiddle(head);
    cout << endl;
    print_Middle_TwoPointer(head);

    return 0;
}
