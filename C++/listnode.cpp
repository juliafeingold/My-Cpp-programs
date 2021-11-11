#include <iostream>

using namespace std;

struct ListNode {
        int data;
        ListNode *next;
        ListNode(int x) : data(x), next(nullptr) {}
};

class LinkedList {
public:
    ListNode *head = nullptr;
public:

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

    void deleteOne(int x)
    {
        ListNode *nodePtr;
        ListNode *prevNode;

        //if the list if empty do nothing
        if(!head)
            return;

        //if the first node is the one
        if (head->data == x)
        {
            nodePtr = head->next;
            delete head;
            head = nodePtr;
        }
        else
        {
            nodePtr = head;


            //skip aal nodes which value in not the number
            while (nodePtr != nullptr && nodePtr->data != x)
            {
                prevNode = nodePtr;
                nodePtr = nodePtr->next;
            }
            if(nodePtr)
            {
                prevNode->next = nodePtr->next;
                delete nodePtr;
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

    /*ListNode mergeSort(ListNode *head1, ListNode* head2)
    {
        /// Merge the sorted list ll2 to this list.
        /// This list must remain sorted after merging.


        ListNode *t1 = new ListNode;
        ListNode *t2 = new ListNode;
        ListNode *temp= new ListNode;

        if(!head1)
            return head2;

        if(!head2)
            return head1;

        t1 = head1;

        while (head2 != NULL)
        {
            t2 = head2;
            head2 = head2->next;
            t2->next = NULL;

            if(head1->data > t2->data)
            {
                t2->next = head1;
                head1 = t2;
                t1 = head1;
                continue;
            }

            flag:
            if(t1->next == NULL)
            {
                t1->next = t2;
                t1 = t1->next;
            }

            else if((t1->next)->data <= t2->data)
            {
                t1 = t1->next;
                goto flag;
            }
            else
            {
                temp = t1->next;
                t1->next = t2;
                t2->next = temp;
            }
        }

	return head1;
    }*/


    /*
    void mergeSortedLists(LinkedList ll2)
    {
        ListNode *first = new ListNode;
        ListNode *second = new ListNode;
        ListNode *temp = new ListNode;
        first = *head;
        temp = *head;

        if(first == NULL || first->next == NULL)
        {
            return;
        }
        else
        {
            while(first->next != NULL)
            {
                first = first->next;
                if(first->next != NULL)
                {
                    temp = temp->next;
                    first = first->next;
                }
            }
            second = temp->next;
            temp->next = NULL;
            first = *head;
        }

        MergeSort(&first);
        MergeSort(&second);

        *head = Merge(first, second);
    }*/

};

int main()
{
    LinkedList ll;
    ll.addNodeToSortedList(6);
    cout << "Display  6 -> @" << endl;
    ll.display();

    ll.addNodeToSortedList(2);
    ll.addNodeToSortedList(28);
    ll.addNodeToSortedList(1);

    cout << "Display  1 -> 2 -> 6 -> 28 -> @" << endl;
    ll.display();

    LinkedList ll2;
    ll2.addNodeToSortedList(7);
    ll2.addNodeToSortedList(3);
    ll2.addNodeToSortedList(20);
    ll2.addNodeToSortedList(11);

    cout << "Display  3 -> 7 -> 11 ->20 -> @" << endl;
    ll2.display();

    /// Merge ll2 to ll.
    //ll.mergeSortedLists(ll,ll2);
    cout << "Display  1 -> 2 -> 3 -> 6 -> 7 -> 11 ->20 -> 28 -> @" << endl;
    ll.display();

    ll.deleteOne(1);
    cout << "Display  2 -> 3 -> 6 -> 7 -> 11 ->20 -> 28 -> @" << endl;
    ll.display();

    ll.deleteOne(28);
    cout << "Display  2 -> 3 -> 6 -> 7 -> 11 ->20 -> @" << endl;
    ll.display();

    ll.deleteOne(11);
    cout << "Display  2 -> 3 -> 6 -> 7 -> 20 -> @" << endl;
    ll.display();

    ll.deleteAll();
    cout << "The list is empty." << endl;
    ll.display();

    ll2.deleteAll();
    cout << "The list is empty." << endl;
    ll2.display();


    return 0;
}
