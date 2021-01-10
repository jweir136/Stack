#include <iostream>

template <typename T>
class Stack {
    using any_value = T;

    private:
        struct Node {
            any_value value;
            Node* next;
        };

    public:
        Node* root;

        Stack() {
            this->root = nullptr;
        }

        void push(any_value value) {
            Node* temp = this->root;
            Node* new_node = new Node;
            new_node->value = value;
            new_node->next = temp;
            this->root = new_node;
        }
};

int main() {
    Stack<int>* s = new Stack<int>();
    std::cout << s->root;
    s->push(1);
    std::cout << s->root;
}