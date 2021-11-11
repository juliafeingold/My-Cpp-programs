/*
Goal: This practice allows us to learn how the append() function can be implemented.

Step 1:
Run the program and test if the numbers, i.e. 999, 998 and 997, are displayed properly.

Step2:
There are two cases in the appendNode()  function. What are these two cases? (To have multiple cases in a linked list function is very common. To be able to analyze the cases is essential when dealing with linked lists.)

Step 3:
There are two global functions, i.e. appendNode() and display(). In both functions, the variable head is a pointer to a ListNode list. But why the address-of operator & has to be used in appendNode()? Try to remove that operator and see if the function still works properly. (To answer the question you can refer to Pass-By-Reference by using reference for more information about this.)

Step 4:
Replace
 	if (head == nullptr)
by
	if (!head)
	and the result will still be the same. Why?
*/

#include <iostream>

using namespace std;

struct ListNode
{
	int data;
	ListNode *link;
};

void appendNode(ListNode *&head, int data);
void display(ListNode *head);
void insertNode(ListNode *&head, int data);

int main()
{
    ListNode *head = nullptr;
    appendNode(head, 999);
    appendNode(head, 998);
    appendNode(head, 995);
    appendNode(head, 996);
    display(head);

    return 0;
}

void appendNode(ListNode *&head, int data)
{
    ListNode * newNode = new ListNode;
    newNode->data = data;
    newNode->link = nullptr;

    /// There are two cases here
    if (head == nullptr) /// 1st case, the linked list is empty
    {
        head = newNode;
    }
else                          /// 2nd case.
 /// The linked list is not empty and the new node should be appended to the end.
    {
        ListNode * p = head;
        while (p->link != nullptr) /// Move the pointer to the last node
        {
            p = p->link; /// Move one step at a time
        }
        p->link = newNode; /// p points to the last node now. Connect the new node to it.
    }
}

void display(ListNode *head)
{
    ListNode *p = head;
    if (head != nullptr) /// Do display only when head is not NULL,
        while (p != nullptr)
        {
           cout << p->data << "    ";
           p = p->link;
        }
}


void insertNode(ListNode *&head, int data)
{
    ListNode * newNode = new ListNode;
    newNode->data = data;
    newNode->link = nullptr;

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        ListNode * p = head;
        ListNode * p1 = p->link;
        p->link = newNode;
        newNode->link = p1;
    }
    //allowed locate the right position in the list
    while (p->link != nullptr && p-> data > data)
    {
        previouseNode = p;
        p = p->link;
    }
    if(previouseNode == nullptr)
    {
        head = newNode;
        newNode->link = p;
    }
    else
    {
        previouseNode
    }
}
