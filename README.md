# Snakes and Ladders Game Simulation

## Participants:
- José Pablo López Rodríguez 
- Luis Carlos Marrufo Padilla 
- Joaquín Hiroki Campos Kishi 
- Leonardo Macias

This project is a simplified and modified version of the classic Snakes and Ladders game implemented in C++. The game supports 2 players and follows the rules described below.

## Board Features
- The board contains 30 tiles.
- Includes 3 snake-type squares ('S') and 3 ladder-type squares ('L').
- Snakes move the player back 3 squares; ladders move the player forward 3 squares.
- Each square is identified by a number starting from 1.

## Player Features
- Supports 2 players, each starting at square 1.
- Player 1 always starts the first turn.

## Game Features
- The game consists of successive turns.
- Players can continue the game ('C') or end it ('E').
- An instruction menu is displayed before the first turn.

### Turn Execution
- Each turn displays:
  - Turn number.
  - Current player number.
  - Player's current and final square, based on dice roll.
  - Type of square landed on ('N', 'S', 'L').
  - Final position, considering any penalties or rewards.

### End of Game
- The game ends when a player wins by reaching the final square, the maximum number of turns is reached, or a player chooses to end the game ('E').
- Messages indicate the end of the game and the outcome.

## Technical Specifications
- Main method initialization in `main.cpp`.
- `MyGame` class handles game mechanics.
- Utilizes a `Dice` class for rolling dice.