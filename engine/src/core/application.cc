#include "application.hh"
#include <iostream>

int Application::run(std::unique_ptr<Game> game_ptr) {
    game = std::move(game_ptr);
    while(game->update()) {
    }
    return 1;
}
