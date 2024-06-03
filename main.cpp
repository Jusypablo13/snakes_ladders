#include "MyGame.h"
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc != 9) {
        cout << "Usage: " << argv[0] << numTiles << numSnakes<< numLadders<< penalty<< reward<< numPlayers<< maxTurns<< gameType<< endl;
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

    MyGame game(numTiles, numSnakes, numLadders, penalty, reward, numPlayers, maxTurns, gameType);
    game.start();

    return 0;
}
