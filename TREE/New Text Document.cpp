#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;

    Node(int k) {
        key = k;
        left = right = NULL;
    }
};

// Inorder Traversal
void inOrder(Node *root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << root->key << " ";
        inOrder(root->right);
    }
}

// Preorder Traversal
void PreOrder(Node *root) {
    if (root != NULL) {
        cout << root->key << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

// Postorder Traversal
void PostOrder(Node *root) {
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->key << " ";
    }
}

// height of tree

int height(Node *root) {
    if (root == NULL)
        return 0;
    else
        return max(height(root->left), height(root->right) + 1);
}

// Nodes at given level
void printkDist(Node *root, int k) {
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->key << " ";
    else {
        printkDist(root->left, k - 1);
        printkDist(root->right, k - 1);
    }
}

// Level order Traversal

///--recurive approach

void LevelOrder(Node *root) {
    int h = height(root);
    for (int i = 0; i <= h; i++)
        printkDist(root, i);
}

///--using Queue

void QueueLevelOrder(Node *root) {
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);

    while (q.empty() == false) {
        Node *curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}

// Level order traversal line by line

void QueueLevelOrderbyLine(Node *root) {
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (q.size() > 1) {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL) {
            cout << "\n";
            q.push(NULL);
            continue;
        }
        cout << curr->key << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}

// size of binary tree recursively
int getSize(Node *root) {
    if (root == NULL)
        return 0;
    else
        return (1 + getSize(root->left) + getSize(root->right));
}

// size of binary tree iteretively

int SizeofBinaryTree_itr(Node *root) {
    if (root == NULL)
        return 0;
    queue<Node *> q;
    q.push(root);
    int size = 0;

    while (q.empty() == false) {
        size++;
        Node *curr = q.front();
        q.pop();

        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
    return size;
}

// Maximum of binary tree recursively
int getMax(Node *root) {
    if (root == NULL)
        return INT_MIN;
    else
        return max(root->key, max(getMax(root->left), getMax(root->right)));
}

// Maximum of binary tree iteratively

int MaxofBinaryTree_itr(Node *root) {
    if (root == NULL)
        return 0;
    queue<Node *> q;
    q.push(root);
    int Max = INT_MIN;

    while (q.empty() == false) {
        Node *curr = q.front();
        q.pop();
        Max = max(Max, curr->key);

        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
    return Max;
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    inOrder(root);
    PreOrder(root);
    PostOrder(root);
    cout << endl;
    int height_ = height(root);
    cout << height_;
    cout << endl;
    printkDist(root, 2);

    cout << endl;
    LevelOrder(root);
    cout << endl;

    QueueLevelOrder(root);
    cout << endl;

    QueueLevelOrderbyLine(root);

    cout << endl;

    int size = getSize(root);
    cout << size << endl;
    int size2 = SizeofBinaryTree_itr(root);
    cout << size2 << endl;

    int max_ = getMax(root);
    cout << max_ << endl;

    int Max_2 = MaxofBinaryTree_itr(root);
    cout << Max_2 << endl;

    return 0;
}