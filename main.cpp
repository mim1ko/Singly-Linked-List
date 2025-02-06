#include <iostream>

struct Node {
	int value;
	Node* next = nullptr;
};

struct List {
	Node* head=nullptr;
	Node* firstptr;

	void insert(int new_val) {
		Node* new_node = new Node{};
		new_node->value = new_val;
		new_node->next = nullptr;

		if (!head) {
			head = new_node;
			firstptr = head;
		}
		
		head->next = new_node;
		head = new_node;
	}

	void printing() {
		Node* ptr = firstptr;
		while (ptr) {
			std::cout << ptr->value << ' ';
			ptr = ptr->next;
		}
	}
};

int main() {
	List a;
	a.insert(12);
	a.insert(13);
	a.insert(14);
	a.insert(15);

	a.printing();
}
