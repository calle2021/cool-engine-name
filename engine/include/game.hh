#pragma once
#include <string>

namespace Engine {

class Game {
public:
    virtual ~Game() = default;
    virtual bool update() = 0;
    virtual std::string get_title() const = 0;
protected:
    Game() = default;
};

}