#include "sandbox.hh"
#include <memory>
#include <iostream>

int main() {
    int res = 0;
    try {
        res = Application::get_instance().run(std::make_unique<SandboxGame>());
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return res;
}