#include "GameMode.h"
#include "MyGame.h"

void ManualGame::start(MyGame &game) {
    cout << "Press C to continue next turn, or E to end the game:" << endl;
    char command;
    while (true) {
        cin >> command;
        if (command == 'C') {
            game.playTurn();
        } else if (command == 'E') {
            game.endGame();
            break;
        } else {
            cout << "Invalid option, please press C to continue next turn or E to end the game" << endl;
        }
    }
}

void AutomaticGame::start(MyGame &game) {
    while (!game.isGameOver()) {
        game.playTurn();
    }
}
