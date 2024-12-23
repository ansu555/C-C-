#include <iostream>
#include <list>

struct Node {
    int coeff;
    int power;
    Node* next;
};

void multiply(Node* poly1, Node* poly2, Node*& result) {
    Node* temp = result;
    while (temp!= nullptr) {
        temp->coeff = 0;
        temp = temp->next;
    }

    temp = poly1;
    while (temp!= nullptr) {
        Node* current = poly2;
        while (current!= nullptr) {
            Node* newNode = new Node();
            newNode->coeff = temp->coeff * current->coeff;                
            newNode->power = temp->power + current->power;
            newNode->next = result;
            result = newNode;

            current = current->next;
        }
        temp = temp->next;
    }
}

void printPolynomial(Node* head) {
    Node* temp = head;
    while (temp!= nullptr) {
        if (temp->coeff!= 0) {
            if (temp->power == 0) {
                std::cout << temp->coeff << " ";
            } else {
                std::cout << temp->coeff << "x^" << temp->power << " ";
            }
        }
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* poly1 = nullptr;
    Node* poly2 = nullptr;
    Node* result = nullptr;

    int num1, num2;
    std::cout << "Enter the number of terms in the first polynomial: ";
    std::cin >> num1;
    for (int i = 0; i < num1; i++) {
        Node* newNode = new Node();
        std::cout << "Enter the coefficient and power of term " << i + 1 << ": ";
        std::cin >> newNode->coeff >> newNode->power;
        newNode->next = poly1;
        poly1 = newNode;
    }

    std::cout << "Enter the number of terms in the second polynomial: ";
    std::cin >> num2;
    for (int i = 0; i < num2; i++) {
        Node* newNode = new Node();
        std::cout << "Enter the coefficient and power of term " << i + 1 << ": ";
        std::cin >> newNode->coeff >> newNode->power;
        newNode->next = poly2;
        poly2 = newNode;
    }

    multiply(poly1, poly2, result);

    std::cout << "The product of the two polynomials is: ";
    printPolynomial(result);

    return 0;
}