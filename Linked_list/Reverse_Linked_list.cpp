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
Node *revList(Node *head)
{
    vector<int> arr;
    Node *curr=head;
    while(curr!=NULL){
        arr.push_back(curr->data);
        curr=curr->next;
    }
    curr=head;
    while(curr!=NULL){
        curr->data=arr.back();
        arr.pop_back();
        curr=curr->next;
    }
    return head;
}

//changing the links
Node *reverse_Link(Node *head)
{
    Node *curr=head;
    Node *prev=NULL;
    while(curr !=NULL)
    {
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
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
    // head=revList(head);
    // printlist(head);
    cout << endl;
    head=reverse_Link(head);
    printlist(head);
    cout<<endl;

    return 0;
}



