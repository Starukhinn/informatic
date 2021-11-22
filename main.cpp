#include <iostream>
#include <deque>

template <typename Item>

class Queue {
public:
    std::deque<Item> data;

    void push(Item item) {
        data.push_back(item);
    }

    void pop() {
        data.pop_front();
    }

    auto front() {
        return data.front();
    }

    auto back() {
        return data.back();
    }

    int size() {
        return data.size();
    }
};

//int main() {
//    Queue<int> queue;
//    queue.push(1);
//    std::cout << queue.front() << std::endl;
//    queue.pop();
//    std::cout << queue.size() << std::endl;
//}
