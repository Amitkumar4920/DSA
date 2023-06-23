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

// insert at begin;
Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

// insert at end
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;

    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = temp;
    return head;
}
// insert at given position

Node *insertAtPos(Node *head, int x, int pos)
{
    Node *temp = new Node(x);

    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }

    Node *curr = head;

    for (int i = 1; i <= pos - 2 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
        return head;

    // Insertion and returning head
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
// delete at begining
Node *delHead(Node *head)
{
    if (head == NULL)
        return NULL;
    else
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
}
// delete at end;
Node *delLast(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
        curr = curr->next;

    delete (curr->next);

    curr->next = NULL;
    return head;
}
// delete given position

void deleteNodeAtPos(Node *head, int pos)
{
    Node *temp = head;

    if (pos == 0)
    {
        head = temp->next;
        delete (temp);
        return;
    }
    else
    {

        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        Node *todel = temp->next;
        temp->next = temp->next->next;
        delete (todel);
    }
}

// Search function

int serach(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;
    while (curr != 0)
    {
        if (curr->data == x)
            return pos;

        else
        {
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}

// Resurcively search

int SearchR(Node *head, int x)
{
    if (head == NULL) return -1;
    if (head->data == x)
        return 1;
    else
    {
        int res = SearchR(head->next, x);
        if (res == -1)
            return -1;
        else
            return res + 1;
    }
}

// Resursively display function
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
    temp1->next = temp2;

    head = insertBegin(head, 100);

    head = insertEnd(head, 200);
    rprinrlist(head);
    cout << endl;

    head = insertAtPos(head, 500, 4);

    rprinrlist(head);
    cout << endl;

    head = delHead(head);
    rprinrlist(head);

    cout << endl
         << endl;

    head = delLast(head);
    rprinrlist(head);
    cout << "hi" << endl;

    deleteNodeAtPos(head, 2);
    rprinrlist(head);

    int find = serach(head, 500);

    cout << find << endl;
    if (find == -1)
        cout << "NOt found";
    else
        cout << "found at " << find << " position"<<endl;


    int findR = SearchR(head, 500);

    // cout << findR << endl;
    if (findR == -1)
        cout << "NOt found";
    else
        cout << "found at " << findR << " position";
    return 0;
}
