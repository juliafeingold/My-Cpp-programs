#include <iostream>

using namespace std;

struct ListNode {
    int data;
    ListNode *next;
    ListNode(int x) : data(x), next(nullptr) {}
};

void bubbleSort(ListNode *p);

int main()
{
    ListNode headNode(8);
    ListNode node2(18);
    ListNode node3(2);
    ListNode node4(0);
    ListNode node5(97);
    ListNode node6(18);
    ListNode node7(0);
    ListNode node8(97);
    ListNode node9(8);

    headNode.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    node5.next = &node6;
    node6.next = &node7;
    node7.next = &node8;
    node8.next = &node9;
    node9.next = NULL;  /// Is this assignment needed?

    ListNode * p = &headNode;
    /// Display the data in the list
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
        if (p == NULL)
        {
            cout << "@" << endl;
        }
    }
    ListNode * headPtr = &headNode;

    bubbleSort(headPtr);

    p = &headNode;

    while (p != NULL)
    {
        cout << p->data << "->";
    }

    return 0;
}

void bubbleSort(ListNode *p)
{
    //ListNode * c = p; // c is a head
    for(int i = 0; i < 9; i++)
    {

         ListNode * p1 = p;
         ListNode * p2 = p->next;

         while (p2 != nullptr)
         {
             if (p1->data > p2->data)
             {
                 int tempt = p1->data;
                 p1->data = p2->data;
                 p2->data = temp;
             }
             p1 = p1->next;
             p2 = p2->next;
         }

    }
}
