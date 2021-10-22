#include<iostream>
#include<string>

using namespace std;

void add_to_list();

class Node
{
  public:
	int key;
	string data;
	Node* next;
	
	Node()
	{
		next=NULL;
	}
	void addToList(Node *head)
	{
    bool quit = false;
    string temp;
    Node *current = new Node;
    current->next = NULL;

    while (!quit)
	{

        cout << "Enter a word(quit to stop)";
        cin >> temp;

        if (temp == "quit"){
            quit = true;
        }
        else{
            current->data = temp;
            current -> next = current;
        }
    }
    return;
   }
};
 

void addToList(Node *head);

int main(){
    bool quit = false;
    int choice;
    Node *head = new Node;
    head->next = NULL;
    addToList(head);
}
