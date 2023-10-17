#include <iostream>
#include <thread>
#include <chrono>

void f1() {
    std::this_thread::sleep_for(std::chrono::duration(
            std::chrono::milliseconds(200)
            ));
    std::cout << "Mi primer hilo\n";
}

void ejemplo_1_fork_join() {
    std::thread t1;
    t1 = std::thread(f1);
    std::cout << "Hello, World!" << std::endl;
    t1.join();
}

void ejemplo_2_fork_detach() {
    std::thread t1;
    t1 = std::thread(f1);
    std::cout << "Hello, World!" << std::endl;
    t1.detach();
}

int main() {
    ejemplo_2_fork_detach();
    return 0;
}
