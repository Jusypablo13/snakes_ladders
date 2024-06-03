#include "Board.h"

Board::Board(int numTiles, int numSnakes, int numLadders, int penalty, int reward) {
    for (int i = 1; i <= numTiles; ++i) {
        tiles.push_back(new NormalTile(i));
    }
    // Place Snakes
    for (int i = 0; i < numSnakes; ++i) {
        int position = (rand() % numTiles) + 1;
        delete tiles[position - 1];
        tiles[position - 1] = new SnakeTile(position, penalty);
    }
    // Place Ladders
    for (int i = 0; i < numLadders; ++i) {
        int position = (rand() % numTiles) + 1;
        delete tiles[position - 1];
        tiles[position - 1] = new LadderTile(position, reward);
    }
}

Board::~Board() {
    for (auto tile : tiles) {
        delete tile;
    }
}

Tile* Board::getTile(int position) const {
    if (position < 1 || position > tiles.size()) {
        return nullptr;
    }
    return tiles[position - 1];
}
