#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int d) : data(d), left(nullptr), right(nullptr) {}
};

// Standard LCA for two values (both guaranteed to exist).
BinaryTreeNode<int>* lcaHelper(BinaryTreeNode<int>* root, int a, int b) {    if (!root) return nullptr;
    if (root->data == a || root->data == b) return root;
    BinaryTreeNode* l = lcaHelper(root->left, a, b);
    BinaryTreeNode* r = lcaHelper(root->right, a, b);
    if (l && r) return root;
    return l ? l : r;
}

BinaryTreeNode* lcaOfThreeNodes(BinaryTreeNode* root, int node1, int node2, int node3) {
    BinaryTreeNode* x = lcaHelper(root, node1, node2);
    return lcaHelper(root, x->data, node3);
}

int lcaOfThree(Node* root, int n1, int n2, int n3) {
    Node* x = lca(root, n1, n2);   // LCA of first two
    Node* y = lca(root, x->data, n3); // then with the third
    return y->data;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n1, n2, n3;
        scanf("%d %d %d", &n1, &n2, &n3);

        // Level-order input, -1 means null.
        int v;
        scanf("%d", &v);
        Node* root = new Node(v);
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* cur = q.front(); q.pop();
            int l, r;
            scanf("%d", &l);
            if (l != -1) { cur->left = new Node(l); q.push(cur->left); }
            scanf("%d", &r);
            if (r != -1) { cur->right = new Node(r); q.push(cur->right); }
        }
        printf("%d\n", lcaOfThree(root, n1, n2, n3));
    }
    return 0;
}