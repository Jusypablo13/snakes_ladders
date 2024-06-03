#include "Player.h"

Player::Player(int id) : id(id), position(1) {}

int Player::getPosition() const {
    return position;
}

void Player::setPosition(int newPosition) {
    position = newPosition;
}

int Player::getId() const {
    return id;
}
