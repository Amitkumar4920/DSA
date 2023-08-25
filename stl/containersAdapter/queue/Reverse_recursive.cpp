// CPP program to reverse a Queue
#include <bits/stdc++.h>
using namespace std;

void Print(queue<int>& Queue){
	while (!Queue.empty()) {
		cout << Queue.front() << " ";
		Queue.pop();
	}
}


void reverseQueue(queue<int>& Queue){
	if(Queue.empty()){
        return;
    }
    int x=Queue.front();
    Queue.pop();
    reverseQueue(Queue);
    Queue.push(x);
}

int main()
{
	queue<int> Queue;
	Queue.push(10);
	Queue.push(20);
	Queue.push(30);
	Queue.push(40);
	reverseQueue(Queue);
	Print(Queue);
}
