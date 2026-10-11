#include "sandbox.hh"

#include <iostream>

SandboxGame::SandboxGame() {}

SandboxGame::~SandboxGame() {}

bool SandboxGame::update() {
    std::cout << "running" << std::endl;
    return true;
}
