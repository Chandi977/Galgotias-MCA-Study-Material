#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root) {
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    if (data == -1) return NULL;

    root = new node(data);

    cout << "Enter data to insert in left of " << data << ": " << endl;
    root->left = buildTree(root->left);

    cout << "Enter data to insert in right of " << data << ": " << endl;
    root->right = buildTree(root->right);

    return root;
}

void printTree(node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
}

int main() {
    node* root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "The pre-order traversal of the tree is: ";
    printTree(root);
    cout << endl;
    return 0;
}
