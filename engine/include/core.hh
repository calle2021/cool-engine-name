#pragma once

#include "game.hh"
#include <memory>

namespace Engine {

class Core {
public:
    static Core& get_instance() {
        static Core instance;
        return instance;
    }
    void run(std::unique_ptr<Game> game_ptr);
private:
    Core() {};
    std::unique_ptr<Game> game;
};

}