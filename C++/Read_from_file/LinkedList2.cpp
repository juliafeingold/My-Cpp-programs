#include <iostream>

using namespace std;

struct ListNode 
{

    int data;
    ListNode *next;
    ListNode(int x) : data(x), next(nullptr) {}

};

class LinkedList {

private:

    ListNode *head = nullptr;
    ListNode *tail= nullptr;

public:


    void addNode(int x)

    {
        ListNode *newNode = new ListNode(x);
        newNode->next = nullptr;

        if(head == nullptr)
        {
            head = newNode;
        }
        else
        {
            tail = head;

            while (tail->next)
                tail = tail->next;

            tail->next = newNode;    
        }
    }

    void addNodeToSortedList(int x)

    {
        ListNode *newNode;
        ListNode *tail;
        ListNode *prevNode = nullptr;

        //allocate a new node and store x there
        newNode = new ListNode(x);

        //if there are no nodes in the list make newNode the 1st node
        if(!head)
        {
            head = newNode;
            newNode->next = nullptr;
        }
        else
        {
            tail = head;//position tail at the head of list
            prevNode =nullptr;
        
            //skip all nodes whose value is less than x
            while(tail != nullptr && tail->data < x)
            {
                prevNode = tail;
                tail = tail->next;
            }

            //if the new node is the 1st , insert it before all others nodes
            //else insert after previous node
            if (prevNode == nullptr)
            {
                head = newNode;
                newNode->next = tail;
            }
            else
            {
                prevNode->next = newNode;
                newNode->next = tail;
            }
        }  
    }

    void deleteAll()
    {
        ListNode *tail;
        ListNode *prevNode;

        tail = head;

        //if the list is empty do nothing
        if(!head)
            return;

        while(tail != nullptr)
        {
            prevNode = tail;
            tail = tail->next;
            delete prevNode;
        }

        head = nullptr;
        tail = nullptr;
    }

    void display()
    {
        ListNode *tail;

        //position tail at the head of the list
        tail = head;

        //while tail points to a node, traverse the list
        while (tail)
        {
            //Display the value in this node
            cout << tail->data << "->" ;
            tail = tail->next;

        }
        cout << "@" << endl;
    }
};

int main()

{

    LinkedList ll;
    ll.addNode(6);
    ll.addNode(2);
    ll.addNode(28);
    ll.addNode(1);

    // Display  6 -> 2 -> 28 -> 1 -> @

    ll.display();
    ll.deleteAll();

    ll.addNodeToSortedList(6);
    ll.addNodeToSortedList(2);
    ll.addNodeToSortedList(28);
    ll.addNodeToSortedList(1);

    // /// Display  1 -> 2 -> 6 ->28 -> @

    ll.display();
    ll.deleteAll();

    return 0;
}