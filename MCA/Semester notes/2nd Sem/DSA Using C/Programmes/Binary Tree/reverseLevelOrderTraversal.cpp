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

void reverseLevelOrderTraversal(node* root){
    stack<node*> st;
    queue<node*> q;
    q.push(root);

    while (!q.empty()){
        root = q.front();
        q.pop();
        st.push(root);

        if(root -> right)
            q.push(root -> right);
        if(root -> left)
            q.push(root -> left);
    }
    while(!st.empty()){
        root = st.top();
        cout << root -> data << " ";
        st.pop();
    } 
}

int main() {
    node* root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "The reverse level-order traversal of the tree is: ";
    cout << endl;
    reverseLevelOrderTraversal(root);
    return 0;
}
