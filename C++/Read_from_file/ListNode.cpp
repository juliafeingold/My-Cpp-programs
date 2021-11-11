#include <iostream>
#include <cstdlib>

using namespace std;

struct ListNode {
    char letter;
    ListNode *link1, *link2, *link3;
    ListNode (char l) : letter(l), link1(nullptr), link2(nullptr), link3(nullptr) {}
};

int main()
{
    //Data
    srand(time(0));
    // set letters to each node
    ListNode *head = nullptr;
    ListNode node1('L');
    ListNode node2('I');
    ListNode node3('V');
    ListNode node4('E');
    int randNum;
    int i;

    //setting links for node1
    node1.link1 = &node2;
    node1.link2 = &node3;
    node1.link3 = &node4;

    //setting links for node2
    node2.link1 = &node1;
    node2.link2 = &node3;
    node2.link3 = &node4;

    //setting links for node3
    node3.link1 = &node1;
    node3.link2 = &node2;
    node3.link3 = &node4;

    //setting lings for node4
    node4.link1 = &node1;
    node4.link2 = &node2;
    node4.link3 = &node3;

    //head linkes to 'L'
    head = &node1;

    cout << head->letter;

    for(i = 0; i < 9; i++) {
        //generate random number
        randNum = 1 + rand() % 3;

        switch(randNum) {
            case 1 : head = head->link1;
                break;
            case 2 : head = head->link2;
                break;
            case 3 : head = head->link3;
                break;
            default : cout << "ERROR!" << endl;
        }
        cout << head->letter;
    }
    cout << endl;

    return 0;
}