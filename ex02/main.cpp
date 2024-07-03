#include <iostream>
#include "MutantStack.hpp"

int main() {
    // Test d'ajout d'éléments
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(8);

    // Test de l'accès au sommet de la pile
    std::cout << "Top element: " << mstack.top() << std::endl;

    // Test de la suppression du sommet de la pile
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;

    // Test de l'itération à travers les éléments
    std::cout << "Elements in stack:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    // Test de la copie de la pile
    MutantStack<int> mstack_copy = mstack;
    std::cout << "Copied stack elements:" << std::endl;
    while (!mstack_copy.empty()) {
        std::cout << mstack_copy.top() << std::endl;
        mstack_copy.pop();
    }

    return 0;
}