// C++ program to detect loop in a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node
{
public:
    int data;
    Node *next;
};
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
}
void push(struct Node **head_ref, int new_data)
{
    /* allocate node */
    struct Node *new_node = new Node;

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

// Returns true if there is a loop in linked list
// else returns false.
bool detectLoop(struct Node *h)
{
    unordered_set<Node *> s;
    while (h != NULL)
    {
        // If this node is already present
        // in hashmap it means there is a cycle
        // (Because you will be encountering the
        // node for the second time).
        if (s.find(h) != s.end())
            return true;

        // If we are seeing the node for
        // the first time, insert it in hash
        s.insert(h);

        h = h->next;
    }

    return false;
}

bool detect_loop(Node **head)
{
    Node *fast = *head;
    Node *slow = *head;

    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            // loop found
            //  now detect node where loop start
            Node *start = *head;
            Node *f = fast;
            while (start != f)
            {
                start = start->next;
                f = f->next;
            }

            cout << "loop start from node->value :" << start->data << '\n';

            // find length of loop
            Node *len = start;
            len = len->next;
            int count = 1;
            while (len != start)
            {
                len = len->next;
                count++;
            }
            cout << "length of loop : " << count << endl ; 
            return true;
        }
    }
    return false;
}

/* Driver program to test above function*/
int main()
{
    /* Start with the empty list */
    Node *head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);

    /* Create a loop for testing */
    head->next->next->next->next = head;

    detect_loop(&head);
    if (detectLoop(head))
    {
        cout << "loop found";
    }
    else
        cout << "No Loop";

    return 0;
}
// This code is contributed by Geetanjali
