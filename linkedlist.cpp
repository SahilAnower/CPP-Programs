#include <iostream>
using namespace std;

class Linked
{
public:
    int data;
    Linked *next;
};

void display(Linked *ptr)
{
    cout << "Node Values Are: " << endl;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

Linked* insertion(int data, int pos, Linked *head)
    {
        Linked *p = head;
        Linked *ptr = new Linked();
        ptr->data = data;
        ptr->next = NULL;
        int count = 1;
        if (count == pos)
        {
            // insertion in front
            head = ptr;
            ptr->next = p;
            return head;
        }
        count++;
        while (p != NULL)
        {
            if (count == pos)
            {
                Linked* r=p->next;
                p->next=ptr;
                ptr->next=r;
                return head;
                // insertion in middle.
            }
            p = p->next;
            count++;
        }
        cout << "Not a valid index/position." << endl;
        return head;
        // pos too high to insert
    }

Linked *head = NULL;

int main()
{
    // Linked* head=NULL
    Linked *first = NULL;
    Linked *second = NULL;
    Linked *third = NULL;
    first = new Linked();
    second = new Linked();
    third = new Linked();
    first->data = 7;
    first->next = second;
    second->data = 9;
    second->next = third;
    third->data = 11;
    third->next = NULL;
    head = first;
    display(head);
    head=insertion(2,4,head);
    display(head);
    head=insertion(8,5,head);
    display(head);
    return 0;
}