#pragma once
#include "engine.hh"
#include <string>

class SandboxGame : public Engine::Game {
public:
    SandboxGame();
    ~SandboxGame();
    bool update() override;
    std::string get_title() const override { return name; }
private:
    std::string name;
};