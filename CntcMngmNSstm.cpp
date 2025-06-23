#include <iostream>
using namespace std;

struct Node {
    string name;
    int number;
    Node* next;
};
Node* head = NULL;
Node* current;
void createNode(Node*& head, string name, int number){
    Node* newNode = new Node();
    newNode->name = name;
    newNode->number = number;
    newNode->next = NULL;
    
    if(head == NULL){
        head = newNode;
        return;
    }
    if(name < head->name){
        newNode->next = head;
        head = newNode;
        return;
    }
    current = head;
    while(current->next != NULL || name > current->next->name){
        current = current->next;
    }
    if(current->next == NULL) {
        current->next = newNode;
        return;
    }
    newNode->next = current->next;
    current->next = newNode;
}
int main(){
    while(true){
        string name;
        int number;
        int opt;
        cout<<"\n1. Display \n2. Search \n3. Add \n4. delete\n5. Exit\n";
        cin >> opt;
        if(opt == 1) {
            current = head;
            while(current!=NULL){
                cout<<"Name: "<<current->name<<"\nContact: "<<current->number<<"\n";
                current = current->next;
            }
        }
        else if(opt == 2) {
            cout << "Enter name to search: ";
            cin >> name;
            current = head;
            while(current != NULL) {
                if(current->name == name) {
                    cout << "Contact found: Name: " << current->name << ", Number: " << current->number << "\n";
                    break;
                }
                if(current->next == NULL) {
                    cout << "Contact not found.\n";
                    break;
                }
                current = current->next;
            }
        }
        else if(opt == 3) {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter number: ";
            cin >> number;
            createNode(head, name, number);
            cout << "Contact added successfully.\n";
            
        }
        else if(opt == 4) {
            cout << "Enter name to delete: ";
            cin >> name;
            current = head;
            //deleting the first node
            if(current->name == name) {
                head = current->next;
                delete current;
                cout << "Contact deleted successfully.\n";
                break;
            }
            while(current->next != NULL || current->next->name != name) {
                current = current->next;
            }
            if(current == NULL) {
                cout << "Contact not found.\n";
                break;
            } 
            //deleting the last node: current->next
            else if(current->next->next == NULL) {
                delete current->next;
                current->next = NULL;

                cout << "Contact deleted successfully.\n";
            }
            else {
                //deleting the middle node
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
                cout << "Contact deleted successfully.\n";
            }
        }
        else if(opt == 5) {
            cout << "Exiting the program.\n";
            break;
        }
        else {
            cout << "Invalid option selected.";
        }
    }
}
