#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void printlist(Node *head){
    Node *curr = head;
    while (curr != NULL){
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}

// Naive approach
void printNth_FromEnd(Node *head, int n){
    int len = 0;
    Node *curr = head;
    while (curr != NULL){
        len++;
        curr = curr->next;
    }

    if (len < n) return;

    curr = head;
    for (int i = 1; i < len - n + 1; i++)
        curr = curr->next;

    cout << (curr->data) << " ";
}
// Using two pointer
void printNth_FromEnd_twoP(Node *head, int n){
    if (head == NULL) return;

    Node *first = head;
    for (int i = 0; i < n; i++){
        if (first == NULL) return;
        first = first->next;
    }

    Node *second = head;
    while (first != NULL){
        second = second->next;
        first = first->next;
    }
    cout << (second->data);
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(59);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

    printlist(head);
    cout << endl;
    printNth_FromEnd(head, 2);
    cout << endl;

    printNth_FromEnd_twoP(head,2);
    return 0;
}
