#include "MyGame.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int numTiles, numSnakes, numLadders, penalty, reward, numPlayers, maxTurns;
    char gameType;

    cout << "Enter number of tiles: ";
    cin >> numTiles;

    cout << "Enter number of snakes: ";
    cin >> numSnakes;

    cout << "Enter number of ladders: ";
    cin >> numLadders;

    cout << "Enter penalty for landing on a snake: ";
    cin >> penalty;

    cout << "Enter reward for landing on a ladder: ";
    cin >> reward;

    cout << "Enter number of players: ";
    cin >> numPlayers;

    cout << "Enter maximum number of turns: ";
    cin >> maxTurns;

    cout << "Enter game type (A for automatic, M for manual): ";
    cin >> gameType;

    cout << "numTiles: " << numTiles << endl;
    cout << "numSnakes: " << numSnakes << endl;
    cout << "numLadders: " << numLadders << endl;
    cout << "penalty: " << penalty << endl;
    cout << "reward: " << reward << endl;
    cout << "numPlayers: " << numPlayers << endl;
    cout << "maxTurns: " << maxTurns << endl;
    cout << "gameType: " << gameType << endl;

    MyGame game(numTiles, numSnakes, numLadders, penalty, reward, numPlayers, maxTurns, gameType);
    game.start();

    return 0;
}
