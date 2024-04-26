#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};

class LinkedList {
    public:
        Node* head;
        int len = 0;

        LinkedList() {
            this->head = nullptr;
        }

        void append(int data) {
            Node* newNode = new Node(data);
            if(head == nullptr) {
                head = newNode;
                len++;
                return;
            }
            Node* current = head;
            while(current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
            len++;
        }

        void printList() {
            Node* current = head;
            while(current != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }

        void printAddress() {
            Node* current = head;
            while(current != nullptr) {
                cout << current << " ";
                current = current->next;
            }
            cout << endl;
        }

        void reverseList() {
            Node* last = nullptr;
            Node* current = head;
            Node* next = nullptr;
            while(current != nullptr) {
                next = current->next;
                current->next = last;
                last = current;
                current = next;
            }
            head = last;
        }
};

class Stack: LinkedList {
    public:
        void push(int data) {
            Node* newNode = new Node(data);
            if(head == nullptr) {
                head = newNode;
                len++;
                return;
            }
            newNode->next = head;
            head = newNode;
            len++;
        }

        int pop() {
            int ret_value = head->data;
            //Node* newNode = head;
            head = head->next;
            //free(newNode);
            len--;
            return ret_value;
        }

        bool isEmpty() {
            return head == nullptr;
        }
        
        int size() {
            int count = 0;
            Node* current = head;
            while(current != nullptr) {
                count++;
                current = current->next;
            }
            return count;
        }

        int top() {
            int ret_value = head->data;
            return ret_value;
        }
};

int main() {
    LinkedList list;
    list.append(420);
    list.append(69);
    list.append(8086);
    list.printList();
    list.reverseList();
    list.printList();
    Stack stack;
    stack.push(420);
    stack.push(69);
    stack.push(8086);
    stack.top();
}