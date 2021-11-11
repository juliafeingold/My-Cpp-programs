#include <iostream>

using namespace std;

struct Rectangle
{
int height;
int width;
};

struct ListNode {
Rectangle rect;
ListNode *next = nullptr;
ListNode(int h, int w)
{
rect.height = h;
rect.width = w;
};
};

void display(ListNode* head)
{

ListNode *p = head;

while (p != NULL)
{
cout << "(";
cout << p->rect.height << ", ";
cout << p->rect.width << ")->";

p = p->next;
if (p == NULL)
{
cout << "@";
}
}
cout << endl;

}

/// Reverse the nodes in the list
void reverseLL(ListNode* &head)
{
    ListNode *current = head;
    ListNode *prev = NULL, *next = NULL;


    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void parseString(string line)
{
    while(line[0] == ' ')
    {
       line.erase(0, 1);
    }
}

string get1Token(string line)
{
    string head = "";

}

int main()
{
/// Part 1

ListNode node1(1, 1);
ListNode node2(2, 2);
ListNode node3(3, 3);
ListNode node4(4, 4);
ListNode node5(5, 5);
ListNode node6(6, 6);
ListNode node7(7, 7);

node1.next = &node2;
node2.next = &node3;
node3.next = &node4;
node4.next = &node5;
node5.next = &node6;
node6.next = &node7;

ListNode *head = &node1;
/// Display the the list
/// (1, 1)->(2, 2)->(3, 3)->(4, 4)->(5, 5)->(6, 6)->(7, 7)->@
display(head);

reverseLL(head);
/// Display the the list
/// (7, 7)->(6, 6)->(5, 5)->(4, 4)->(3, 3)->(2, 2)->(1, 1)->@
display(head);

node5.next = nullptr;
reverseLL(head);
/// Display the the list
/// (5, 5)->(6, 6)->(7, 7)->@
display(head);

node6.next = nullptr;
reverseLL(head);
/// Display the the list
/// (6, 6)->(5, 5)->@
display(head);

node6.next = nullptr;
reverseLL(head);
/// Display the the list
/// (6, 6)->@
display(head);

/* Part 2: Uncomment this block of code*/

parseString(" ABC \"D. Trump\" E ");
/// The function parse() will display
/// ABC
/// D. Trump
/// E

///  You get extra 10% if the following function works.

/*parseString("     ABC    E   \"Big Data\"  1234  \"Donald John Trump\"  ");

/// The function parse() will display

/// ABC

/// E

/// Big Data

/// 1234

/// Donald John Trump
*/

return 0;
}
