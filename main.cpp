#include "MyGame.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    cout << "Number of arguments: " << argc << endl;
    for (int i = 0; i < argc; ++i) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }

    if (argc != 9) {
        cout << "Usage: " << argv[0] << " <numTiles> <numSnakes> <numLadders> <penalty> <reward> <numPlayers> <maxTurns> <gameType>" << endl;
        return 1;
    }

    int numTiles = atoi(argv[1]);
    int numSnakes = atoi(argv[2]);
    int numLadders = atoi(argv[3]);
    int penalty = atoi(argv[4]);
    int reward = atoi(argv[5]);
    int numPlayers = atoi(argv[6]);
    int maxTurns = atoi(argv[7]);
    char gameType = argv[8][0];

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