/*Given a node object representing a binary tree:

struct node
{
    int value;
    node* left;
    node* right;
}
        write a function that returns the sum of all values, including the root. Absence of a node will be indicated with a null value.

Examples:

10
| \
1  2
=> 13

1
| \
0  0
\
     2
=> 3*/



#include <iostream>

using namespace std;

struct node {
    int value;
    node *left;
    node *right;

    node(int d, node *r, node *l) : value(d), left(r), right(l) {};
};

int sumTheTreeValues(node *root);

node easyNode(10, new node(1, nullptr, nullptr), new node(2, nullptr, nullptr));
node unbalancedNode(11, new node(0, nullptr, nullptr), new node(0, nullptr, new node(1, nullptr, nullptr)));


int main() {
    int _r = sumTheTreeValues(&unbalancedNode);
    cout << "res " << _r;
    return 0;
}

int sumTheTreeValues(node *root) {
    if (root == nullptr)
        return 0;
    else
        return root->value + sumTheTreeValues(root->left) + sumTheTreeValues(root->right);
}