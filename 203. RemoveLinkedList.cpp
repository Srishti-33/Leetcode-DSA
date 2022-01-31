#include <iostream>
using namespace std;
class Node {
   public:
   int data;
   Node* next;

   Node(int data) {
       this -> data = data;
       next = NULL;
   }
};

Node* takeinput_Better() {
    int data;
    cout << "Enter the data in the linked list " << endl;
    cin>> data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1) {
        Node* newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail -> next = newNode;
            tail = tail -> next;
        }
        cin >> data;
    }
    return head;
}


Node* remove(Node* head, int val)  // 1 2 3 4 3 5 4
{
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL) 
    {
        if(temp -> data == val) 
        {
            if(prev == NULL)
            {
                temp = temp -> next;
                head = temp;
            }
            else 
            {
               prev -> next = temp -> next;
               temp = prev -> next;
            }
        }
        else 
        {
           prev = temp;
           temp = temp -> next;
        }
    }
    return head;
}


void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main() {
    Node* head = takeinput_Better();
    int val;
    cout << "Enter the value you want to remove " << endl;
    cin >> val;
    head = remove(head,val);
    print(head);
    return 0;
}
