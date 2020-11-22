#ifndef GAME_H
#define GAME_H

#include "doublyCircularLinkedList.h"

#define MIN_PLAYERS 2
#define MIN_STEPS   10

enum BoardDirection {
    clockwise = 0,
    counterclockwise
};

class Game {
   private:
    int nPlayers;
    int nSteps;
    int nCoins;

    classDoublyCircularLinkedList *gameBoard;

   public:
    Game();
    ~Game();

    void start();
};

#endif
