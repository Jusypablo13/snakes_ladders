#include "MyGame.h"

MyGame::MyGame(int numTiles, int numSnakes, int numLadders, int penalty, int reward, int numPlayers, int maxTurns, char gameType)
    : board(numTiles, numSnakes, numLadders, penalty, reward), turn(1), gameOver(false) {
    for (int i = 1; i <= numPlayers; ++i) {
        players.push_back(Player(i));
    }
    if (gameType == 'A') {
        gameMode = new AutomaticGame();
    } else {
        gameMode = new ManualGame();
    }
}

MyGame::~MyGame() {
    delete gameMode;
}

void MyGame::start() {
    gameMode->start(*this);
}

void MyGame::playTurn() {
    Player& currentPlayer = players[turn % players.size()];
    int currentTurn = turn++;
    int currentPosition = currentPlayer.getPosition();
    int diceRoll = dice.roll();
    int newPosition = currentPosition + diceRoll;

    Tile* newTile = board.getTile(newPosition);
    char tileType = newTile ? newTile->getType() : 'N';
    newPosition = newTile ? newTile->action(newPosition) : newPosition;

    currentPlayer.setPosition(newPosition);
    printTurnInfo(currentTurn, currentPlayer.getId(), currentPosition, diceRoll, tileType, newPosition);

    if (newPosition >= board.getTile(newPosition)->getPosition()) {
        cout << "-- GAME OVER --" << endl;
        cout << "Player " << currentPlayer.getId() << " is the winner!!!" << endl;
        gameOver = true;
    }
}

void MyGame::printTurnInfo(int turn, int playerId, int currentPosition, int diceRoll, char tileType, int finalPosition) {
    cout << turn << " " << playerId << " " << currentPosition << " " << diceRoll << " " << tileType << " " << finalPosition << endl;
}

void MyGame::endGame() {
    cout << "Thanks for playing!!!" << endl;
    gameOver = true;
}
