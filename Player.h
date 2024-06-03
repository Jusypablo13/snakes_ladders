#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>

using namespace std;

class Player {
    private:
        int id, position;
    public:
        Player(int id);
        int getPosition() const;
        int getId() const;
        void setPosition(int newPosition);
};

#endif
