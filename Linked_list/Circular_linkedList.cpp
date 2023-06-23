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

// insert at begining
Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        temp->next = temp;
    else
    {
        Node *curr = head;
        while (curr->next != head)
            curr = curr->next;

        curr->next = temp;
        temp->next = head;
    }
    return temp;
}

// insert at begin in efficient manner by using swapping
Node *insertSwappingBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;

        // swapping start
        int t = head->data;
        head->data = temp->data;
        temp->data = t;

        return head;
    }
}

// insert at end
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        Node *curr = head;
        while (curr->next != head)
            curr = curr->next;

        curr->next = temp;
        temp->next = head;

        return head;
    }
}

// insert at end in efficient manner by using swapping
Node *insertSwappingEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;

        // swapping start
        int t = head->data;
        head->data = temp->data;
        temp->data = t;

        return temp;
    }
}

// delete head node of linked list
Node *delHead(Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == head)
    {
        delete (head);
        return NULL;
    }
    Node *curr = head;
    while (curr->next != head)
        curr = curr->next;

    curr->next = head->next;
    delete (head);

    return curr->next;
}

// delete head node of linked list in O(1)
Node *delHeadEfficient(Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == head)
    {
        delete (head);
        return NULL;
    }
    head->data = head->next->data;

    Node *temp = head->next;

    head->next = head->next->next;

    delete (temp);

    return head;
}

// delete kth node of linked list
Node *deleteKth(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
        return delHead(head);

    Node *curr = head;
    for (int i = 0; i < k - 2; i++)
        curr = curr->next;

    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete (temp);

    return head;
}

void printList(Node *head)
{
    if (head == NULL)
        return;
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = head;

    printList(head);

    head = insertBegin(head, 300);
    cout << endl;
    printList(head);

    cout << endl;

    head = insertBegin(head, 400);
    cout << endl;
    printList(head);

    cout << endl;

    head = insertEnd(head, 1000);
    cout << endl;
    printList(head);

    cout << endl;

    head = insertSwappingEnd(head, 2000);
    cout << endl;
    printList(head);

    cout << endl;

    head = delHead(head);
    cout << endl;
    printList(head);

    cout << endl;

    head = delHeadEfficient(head);
    cout << endl;
    printList(head);

    cout << endl;

    head = deleteKth(head,2);
    cout << endl;
    printList(head);

    cout << endl;
    return 0;
}