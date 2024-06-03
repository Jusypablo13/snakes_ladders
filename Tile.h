#ifndef TILE_H_
#define TILE_H_

#include <iostream>

using namespace std;

class Tile {
    protected:
        int position;
    public:
        Tile(int position) : position(position) {}
        virtual ~Tile() = default;
        virtual char getType() const = 0;
        int getPosition() const { return position; }
        virtual int action(int position) const = 0;
};

class NormalTile : public Tile {
    public:
        NormalTile(int position) : Tile(position) {}
        char getType() const override { return 'N'; }
        int action(int position) const override { return position; }
};

class SnakeTile : public Tile {
    private:
        int penalty;
    public:
        SnakeTile(int position, int penalty) : Tile(position), penalty(penalty) {}
        char getType() const override { return 'S'; }
        int action(int position) const override { return position - penalty; }
};

class LadderTile : public Tile {
    private:
        int reward;
    public:
        LadderTile(int position, int reward) : Tile(position), reward(reward) {}
        char getType() const override { return 'L'; }
        int action(int position) const override { return position + reward; }
};

#endif
