#ifndef BOARD_H_
#define BOARD_H_

#include <iostream>
#include <vector>
#include "Tile.h"

using namespace std;

class Board {
    private:
        vector<Tile*> tiles;
    public:
        Board(int numTiles, int numSnakes, int numLadders, int penalty, int reward);
        ~Board();
        Tile* getTile(int position) const;
};

#endif
