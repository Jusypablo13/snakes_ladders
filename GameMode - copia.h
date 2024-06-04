#ifndef GAMEMODE_H_
#define GAMEMODE_H_

#include <iostream>

using namespace std;

class MyGame;  // Forward declaration

class GameMode {
    public:
        virtual void start(MyGame &game) = 0;
};

class ManualGame : public GameMode {
    public:
        void start(MyGame &game) override;
};

class AutomaticGame : public GameMode {
    public:
        void start(MyGame &game) override;
};

#endif
