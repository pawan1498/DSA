#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void append(Node **head_ref, int new_data)
{
    /* 1. allocate node */
    Node *new_node = new Node();

    Node *last = *head_ref; /* used in step 5*/

    /* 2. put in the data */
    new_node->data = new_data;

    /* 3. This new node is going to be
    the last node, so make next of
    it as NULL*/
    new_node->next = NULL;

    /* 4. If the Linked List is empty,
    then make the new node as head */
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
    {
        last = last->next;
    }

    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}
void push(Node **head_ref, int new_data)
{
    /* 1. allocate node */
    Node *new_node = new Node();

    /* 2. put in the data */
    new_node->data = new_data;

    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);

    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}
void del(Node **head, int key)
{
    Node *tmp = *head;
    Node *prev = NULL;
    if (tmp->data == key && tmp != NULL)
    {
        *head = tmp->next;
        delete tmp;
        return;
    }
    else
    {

        while (tmp->data != key && tmp != NULL)
        {
            prev = tmp;
            tmp = tmp->next;
        }

        // If key was not present in linked list
        if (tmp == NULL)
            return;

        // Unlink the node from linked list
        prev->next = tmp->next;

        // Free memory
        delete tmp;
    }
}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
}
void fun (Node **head ){
    Node * curr = NULL ; 
    Node * prev = *head; 
    Node *next = prev;
    Node *dprev = NULL;
    while(prev != NULL){
        cout << "*" <<endl;
        curr = prev -> next ; 
        next = curr -> next; 
        if( *head == prev){
            * head = curr; 
        }
        curr -> next = prev;
        prev -> next = next ; 
        prev = next ; 
        if(dprev -> data)
        dprev -> next = prev;
        dprev = curr; 
    }
    printList(*head);
   

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
    append(&head, 7);
    append(&head, 8);
    append(&head, 9);
    append(&head, 10);
   
    // del(&head, 3);
    cout << "Created Linked list is: ";
    printList(head);
    cout << endl;
    fun(&head);
}