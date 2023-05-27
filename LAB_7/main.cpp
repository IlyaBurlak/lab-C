#include <iostream>
#include "Circular_buffer/CircularBuffer.h"
int main() {
    CircularBuffer<int>buffer(10);
    buffer.push_back(1);
    buffer.push_back(2);
    buffer.push_front(0);
    buffer.capacity();
    buffer.pop_back();
    buffer.pop_front();
    for (size_t i = 0; i < buffer.size(); ++i) {
        std::cout << buffer[i] << " ";

    }
    return 0;
}