#pragma once

class Game {
public:
    virtual ~Game() = default;
    virtual bool update() = 0;
protected:
    Game() = default;
};