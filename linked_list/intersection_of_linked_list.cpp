#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

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
void printList(Node *node)
{

    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
}

void check(Node *temp1, Node *temp2, int x)
{
    while (x--)
    {
        temp1 = temp1->next;
    }
    cout << "blunder------------::::";
    while (temp1 != NULL)
    {
        if (temp1 == temp2)
        {
            cout << temp1->data<<endl;
            return ;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
}
void fun(Node *head, Node *Head)
{
    Node *temp1 = head;
    Node *temp2 = Head;

    int count1 = 0;
    int count2 = 0;

    while (temp1 != NULL)
    {
        count1++;
        temp1 = temp1->next;
    }

    while (temp2 != NULL)
    {
        count2++;
        temp2 = temp2->next;
    }

    if (count1 > count2)
    {
        int x = count1 - count2;
     
        check(head, Head, x);
    }
    else
    {
        int x = count2 - count1;
        check(Head, head, x);
    }
}
void find_intersection(Node *temp1, Node *temp2)
{
    unordered_map<Node *, int> M;

    while (temp1 != NULL)
    {
        if (M.find(temp1) == M.end())
        {
            M[temp1] = 1;
        }

        // Else update the frequency
        else
        {
            M[temp1]++;
        }
        temp1 = temp1->next;
    }

    while (temp2 != NULL)
    {
        if (M.find(temp2) == M.end())
        {
            M[temp1] = 1;
        }

        // Else update the frequency
        else
        {
            cout << "intersection node ";
            cout << temp2->data << endl;

            return;
        }
        temp2 = temp2->next;
    }
    cout << "-----------------------------------";
    for (auto &it : M)
    {
        cout << it.first << ' '
             << it.second << '\n';
    }
}
int main()
{
    Node *Head = NULL;
    Node *head = NULL;
    append(&Head, 9);
    append(&Head, 0);

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);
    append(&head, 6);
    append(&head, 7);
    append(&head, 8);

    Node *Temp = Head;
    Node *temp = head;

    Temp = Temp->next;
    temp = temp->next->next->next;
    // cout << temp->data << endl ;
    Temp->next = temp;

    find_intersection(head, Head);
    fun(head, Head);

    printList(head);
    cout << endl;
    printList(Head);
}