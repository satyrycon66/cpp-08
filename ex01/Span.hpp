#ifndef SPAN_H
#define SPAN_H

#include <vector>

class Span {
private:
    std::vector<int> numbers;
    int max_size; // Changement de unsigned int à int

public:
    Span(int N); // Changement de unsigned int à int
    void addNumber(int number);
    void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();
};

#endif // SPAN_H
