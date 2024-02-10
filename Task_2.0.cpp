#include <iostream>
#include <vector>

class CircularBuffer {
private:
    std::vector<int> buffer;
    size_t size;
    size_t head;
    size_t tail;

public:
    explicit CircularBuffer(size_t capacity) : size(capacity + 1), head(0), tail(0) {
        buffer.resize(size);
    }

    void push(int value) {
        buffer[tail] = value;
        tail = (tail + 1) % size;
        if (tail == head) {
            head = (head + 1) % size;
        }
    }

    int pop() {
        if (head == tail) {
            std::cerr << "Buffer is empty." << std::endl;
            return -1;
        }

        int value = buffer[head];
        head = (head + 1) % size;
        return value;
    }
};

int main() {
    CircularBuffer buffer(5);

    for(auto i=0;i<8;i++){
        buffer.push(i);
    }

    for(auto i=0;i<6;i++){
        std::cout << "Popped: " << buffer.pop() << std::endl;
    }

}

