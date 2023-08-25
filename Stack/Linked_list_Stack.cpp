#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

struct MyStack
{
    Node *head;
    int size;

    MyStack(){
        head = NULL;
        size = 0;
    }

    void push(int x){
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }

    int pop(){
        if (head == NULL){
            cout << "Stack is empty" << endl;
            return INT_MAX;
        }
        else{
            int res = head->data;
            Node *temp = head;
            head = head->next;
            delete (temp);
            size--;
            return res;
        }
    }

    int peek(){
        if (head == NULL){
            cout << "Stack is Empty" << endl;
            return INT_MAX;
        }
        return head->data;
    }

    int size_(){
        return size;
    }

    bool isEmpty(){
        return head == NULL;
    }
};

int main()
{
    MyStack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    cout << s.size_() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}