#include "Span.hpp"
#include <iostream>

int main() {
    Span sp = Span(10);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    // Exemple d'ajout de plusieurs nombres en utilisant push_back()
    int moreNumbersArr[] = {8, 15, 1, 20};
    for (size_t i = 0; i < sizeof(moreNumbersArr) / sizeof(moreNumbersArr[0]); ++i) {
        sp.addNumber(moreNumbersArr[i]);
    }

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return 0;
}
