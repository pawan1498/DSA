#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void del(Node **head, int key)
{
    Node *temp = *head;
    Node *prev = NULL;

    // If head node itself holds
    // the key to be deleted
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next; // Changed head
        delete temp;        // free old head
        return;
    }

    // Else Search for the key to be deleted,
    // keep track of the previous node as we
    // need to change 'prev->next' */
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        // If key was not present in linked list
        if (temp == NULL)
            return;

        // Unlink the node from linked list
        prev->next = temp->next;

        // Free memory
        delete temp;
    }
}
void append(Node **head, int key)
{
    Node *new_node = new Node;
    new_node->data = key;
    new_node->next = NULL;
    Node *temp = *head;

    if (temp == NULL)
    {
        *head = new_node;
        return;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void n_node_end(Node **head, int n)
{
    Node *curr = *head;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    // count << 

    Node *temp = *head;
    for (int i = 1; i < count-n+1; i++)
    {
        temp = temp->next ; 
    }
    cout << n <<"node from end is :"<< temp->data <<endl ; 
    
}
void printList(Node *node)
{
    int count =8;
    while (node != NULL && count--)
    {
        cout << " " << node->data;
        node = node->next;
    }
}

int main()
{
    Node *head = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);
    append(&head, 6);
    del(&head, 1);

    n_node_end(&head, 3);
    printList(head);
}