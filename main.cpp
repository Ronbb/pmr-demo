#include <iostream>
#include <memory_resource>
#include <unordered_map>
#include <string>

int main(int, char**) {
    std::cout << "Hello, world!\n";
    auto upstream = std::pmr::monotonic_buffer_resource();
    auto pool = std::pmr::synchronized_pool_resource(&upstream);

    auto cache = std::pmr::unordered_map<int, std::pmr::string>{&pool};

    cache[9]="8888888888";
}
