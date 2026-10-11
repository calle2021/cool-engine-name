#include "sandbox.hh"
#include <memory>
#include <iostream>

int main() {
    try {
       Engine::Core::get_instance().run(std::make_unique<SandboxGame>());
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}