#include "Span.hpp"
#include <algorithm>
#include <stdexcept>
#include <limits>

Span::Span(int N) : max_size(N) {} // Changement de unsigned int à int

void Span::addNumber(int number) {
    if (numbers.size() >= static_cast<size_t>(max_size)) { // Conversion de max_size en size_t
        throw std::out_of_range("Span is already full");
    }
    numbers.push_back(number);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (static_cast<size_t>(std::distance(begin, end)) > numbers.size() - static_cast<size_t>(max_size)) { // Conversion de numbers.size() en size_t
        throw std::out_of_range("Not enough space in Span to add all numbers");
    }
    numbers.insert(numbers.end(), begin, end);
}

int Span::shortestSpan() {
    if (numbers.size() <= 1) {
        throw std::logic_error("Not enough numbers to find shortest span");
    }
    std::sort(numbers.begin(), numbers.end());
    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < numbers.size(); ++i) {
        minSpan = std::min(minSpan, numbers[i] - numbers[i - 1]);
    }
    return minSpan;
}

int Span::longestSpan() {
    if (numbers.size() <= 1) {
        throw std::logic_error("Not enough numbers to find longest span");
    }
    return *std::max_element(numbers.begin(), numbers.end()) - *std::min_element(numbers.begin(), numbers.end());
}
