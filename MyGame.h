#ifndef MYGAME_H_
#define MYGAME_H_

#include <iostream>
#include <vector>
#include "Dice.h"
#include "Player.h"
#include "Board.h"
#include "GameMode.h"

using namespace std;

class MyGame {
    private:
        vector<Player> players;
        Board board;
        Dice dice;
        int turn;
        bool gameOver;
        GameMode* gameMode;

    public:
        MyGame(int numTiles, int numSnakes, int numLadders, int penalty, int reward, int numPlayers, int maxTurns, char gameType);
        ~MyGame();
        void start();
        void playTurn();
        void printTurnInfo(int turn, int playerId, int currentPosition, int diceRoll, char tileType, int finalPosition);
        void endGame();
        bool isGameOver() const { return gameOver; }
};

#endif
