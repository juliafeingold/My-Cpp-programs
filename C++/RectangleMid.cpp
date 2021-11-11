#include <iostream>

using namespace std;

struct Rectangle
{
    int height;
    int width;
};

struct ListNode
{
    Rectangle rect;
    ListNode *next = nullptr;
    ListNode(int h, int w)
    {
        rect.height = h;
        rect.width = w;

    }
};

void display(ListNode* head)
{
    ListNode *p = head;
    if(head != nullptr)
        while(p != nullptr)
        {
            cout << p->rect.height << " ";
            cout << p->rect.width << " ";
            p = p->next;
        }
}


/// Sort the list based on the size of the area (height * width)
void sortLL(ListNode* head, ListNode *h, ListNode *w)
{
    ListNode *p = head;
    int area = p->rect.height * p->rect.width;
    p = area;

    for(int i = 0; i < 7 ; i++)
    {
        ListNode * p1 = p;
        ListNode * p2 = p->next;

        while (p2 != nullptr)
        {
            if (p1->area > p2->area)
            {
                int temp = p1->area;
                p1->area = p2->area;
                p2->area = temp;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
    }
}

/// Remove the duplicated nodes in the list
void removeDuplicates(ListNode* p)
{
    //pointer to travers the linked list
    ListNode * c = p;

    //pointer to store the next pointer of a node to be deleted
    ListNode * link;

    if(c == NULL)
        return;

    //
    while(c->next != NULL)
    {
        if(c->rect == c->next->rect)
        {
            link = c->next->next;
            //delete[] c->next;
            c->next = link;
        }
        else
        {
            c = c->next;
        }
    }
}

/// Reverse the nodes in the list
void reverseLL(ListNode* head)
{
/// TO DO: Add your code here
return;
}

int main()
{
ListNode * head = nullptr;

/// Display "The list is empty."
sortLL(head);
/// Display "The list is empty."
display(head);

ListNode node1(8, 9);
head = &node1;
sortLL(head);
/// Display the height and width of the node"
display(head);


ListNode node2(8, 2);
ListNode node3(2, 4);
ListNode node4(8, 9);
ListNode node5(2, 4);
ListNode node6(1, 4);
ListNode node7(8, 9);

node1.next = &node2;
node2.next = &node3;
node3.next = &node4;
node4.next = &node5;
node5.next = &node6;
node6.next = &node7;

/// Display the the list
/// (8, 9)->(8, 2)->(2, 4)(8, 9)->(2, 4)->(1, 4)->(8, 9)->@
display(head);

sortLL(head);
/// Display the the list
/// (1, 4)->(2, 4)->(2, 4)->(8, 2)->(8, 9)->(8, 9)->(8, 9)->@
display(head);

removeDuplicates(head);
/// Display the the list
/// (1, 4)->(2, 4)->(8, 2)->(8, 9)->@
display(head);

/// You can get extra 10% if the following function is completed
/// reverseLL(head);
/// Display the the list
/// (8, 9)->(8, 2)->(2, 4)->(1, 4)->@
///display(head);

return 0;
}
