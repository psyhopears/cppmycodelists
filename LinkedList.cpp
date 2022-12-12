#include "LinkedList.h"

//Constructor
LinkedList::LinkedList() {
			this->head = nullptr;
}

//Destructor
LinkedList::~LinkedList(){
	while (this->head != nullptr)
				pop();
}

//Add Links(push)
void LinkedList::push(int value) {
	head = new Node{ value, head };
}

//insert
void LinkedList::insert(int value, int pos) {
			Node* prev = new Node();
			Node* curr = new Node();
			Node* newNode = new Node();
			newNode->value = value;
	
			int tempPos = 0;   // goes through the list
	
			curr = head;      // Initialize current to head;
			if (head != nullptr)
			{
				while (curr->next != nullptr && tempPos != pos)
				{
					prev = curr;
					curr = curr->next;
					tempPos++;
				}
				if (pos == 0)
				{
					cout << "Adding at Head! " << endl;
					// Call function to addNode from head;
				}
				else if (curr->next == nullptr && pos == tempPos + 1)
				{
					cout << "Adding at Tail! " << endl;
					// Call function to addNode at tail;
				}
				else if (pos > tempPos + 1)
					cout << " Position is out of bounds " << endl;
				//Position not valid
	
				else
				{
					prev->next = newNode;
					newNode->next = curr;
					cout << "Node added at position: " << pos << endl;
				}
			}
			else
			{
				head = newNode;
				newNode->next = nullptr;
				cout << "Added at head as list is empty! " << endl;
			}
}

//Remove Links(pop)
int LinkedList::pop(){
	int value;
			if (head != nullptr) {
				value = head->value;
				Node* temp = head;
				head = head -> next;
				delete temp;
			}
			else
				throw range_error("List is empty");
	
			return value;
}

//Length
int LinkedList::size() const{

	int count = 0;
	Node* curNode = head;
	while (curNode)
	{
		curNode = curNode -> next;
		count++;
	}

	return count;
};

//count 
int LinkedList::count(int search_for) const{
	Node* current = head;
	int count = 0;
	while (current != nullptr) {
		if (current->value == search_for)
			count++;
		current = current->next;
	}
	return count;
}

//find a value
bool LinkedList::search_element(int value) {
	Node* curr = head;
	int position = 0;
	bool found = false;
	if (curr != nullptr)
		while (curr != nullptr) {
			position++;
			if (curr->value == value) {
				found = true;
				break;
			}
			curr = curr->next;
		}
	return found;
}

int& LinkedList::operator[](const int& index) {
	Node* temp = head;
	for (int i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return temp->value;
};

LinkedList& LinkedList::operator=(const LinkedList& list){
	Node* copy;
	if (this != &list) // not a self-assignment
	{
		if (size() != list.size()) // resource cannot be reused
		{
			return *this;
		}
	}
	
}
