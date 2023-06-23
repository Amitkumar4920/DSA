#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;

    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

// insert at begining
Node *insertAtbegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    if (head != NULL)
        head->prev = temp;
    return temp;
}

// insert at end
Node *insertAtend(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;

    Node *curr = head;
    while (curr->next != 0)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

/// insert at any position
Node *insertAfter(Node *prev_node, int pos, int x)
{
}

// delet at begining

Node *delHead(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete (head);
        return NULL;
    }

    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete (temp);
    return head;
}

// delete at end;

Node *delLast(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete (head);
        return NULL;
    }
    Node *curr = head;

    while (curr->next != 0)
    {
        curr = curr->next;
    }
    curr->prev->next = NULL;

    delete (curr);
    return head;
}

// delete at any position

// Reverse a linked list

Node *RevereDLL(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *prev = NULL;
    Node *curr = head;
    while (curr != 0)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}

// Recursively display function
void rprinrlist(Node *head)
{
    if (head == NULL)
        return;

    cout << head->data << " ";
    rprinrlist(head->next);
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    rprinrlist(head);
    cout << endl;
    head = insertAtbegin(head, 30);
    rprinrlist(head);
    cout << endl;

    head = insertAtend(head, 5000);
    rprinrlist(head);
    cout << endl;

    head = delHead(head);
    rprinrlist(head);
    cout << endl;

    head = delLast(head);
    rprinrlist(head);
    cout << endl;

    head = RevereDLL(head);
    rprinrlist(head);
    cout << endl;

    return 0;
}