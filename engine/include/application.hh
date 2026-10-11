#pragma once

#include "game.hh"
#include <memory>

class Application {
public:
    static Application& get_instance() {
        static Application instance;
        return instance;
    }
    int run(std::unique_ptr<Game> game_ptr);
private:
    Application() {};
    std::unique_ptr<Game> game;
};