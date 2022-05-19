#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;

        left = NULL;
        right = NULL;
    }
};

void inorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}
int hot(Node *node)
{
    if (node == NULL)
        return 0;

    return max(hot(node->left), hot(node->right)) + 1;
}

int mit(Node *node)
{
    if (node == NULL)
        return 0;

    // return max(mit(node->left) + mit(node->right));
    return max(node->data, max(mit(node->left), mit(node->right)));
}

int sot(Node *node)
{
    if (node == NULL)
        return 0;

    return sot(node->left) + sot(node->right) + 1;
}

// level order traversal

void pcl(Node *node, int level)
{
    if (node == NULL)
        return;
    if (level == 1)
    {
        cout << node->data << " ";
    }
    else if (level > 1)
    {
        pcl(node->left, level - 1);
        pcl(node->right, level - 1);
    }
}

int lot(Node *node)
{
    int height = hot(node);

    for (int i = 1; i <= height; i++)
    {
        pcl(node, i);
    }

    return 0;
}

// end

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(9);
    root->left->right = new Node(8);
    root->right->left = new Node(12);

    inorder(root);

    cout << endl
         << "hot: " << hot(root);
    cout << endl
         << "sot: " << sot(root);
    cout << endl
         << "MIT: " << mit(root);

    cout << endl
         << "level order traversal : " << endl;

    lot(root);

    return 0;
}