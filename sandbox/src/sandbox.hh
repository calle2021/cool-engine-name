#pragma once
#include "engine.hh"

class SandboxGame : public Game {
public:
    SandboxGame();
    ~SandboxGame();
    bool update() override;
};