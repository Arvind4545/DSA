#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class that manages the linked list
class LinkedList {
private:
    Node* head;

public:
    // Constructor to initialize the linked list
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the end of the list
    void insert(int value) {
        Node* newNode = new Node(value);

        // If the list is empty, the new node becomes the head
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            // Traverse to the end of the list
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            // Insert the new node at the end
            temp->next = newNode;
        }
    }

    // Function to display the linked list
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        // Traverse and print the list
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    long long getNumber()
    {
        long long int iNum = 0; 

        struct Node *temp = head; 

        while(temp != NULL)
        {
            iNum = iNum * 10 + temp->data; 
            temp = temp -> next; 
        }

        return iNum; 
    }

    static long long multiplyLL(long long int iNum1, long long int iNum2)
    {
        int mod = 1e9 + 7; 
        return (iNum1 * iNum2 )%mod;  
    }

    // Destructor to free the memory used by the linked list
    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;

    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);

    LinkedList list2; 
    list2.insert(1); 
    list2.insert(0); 

    long long int iNum1 = list.getNumber();
    long long int iNum2 = list2.getNumber(); 

    cout<<"Multiplication is: "<< LinkedList::multiplyLL(iNum1,iNum2); 
    
    return 0;
}
