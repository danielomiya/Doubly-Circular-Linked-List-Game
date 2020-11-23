#include <iostream>
#include <stdlib.h>
#include <sstream>
#include "game.h"
#include "utils.h"

Game::Game() {
    gameBoard = new classDoublyCircularLinkedList();
}

Game::~Game() {
    delete gameBoard;
}

int generateNextPrimeNumber(int past){
    past++;
    int flag = 0;

    while (true){
        int divisor = 0;
        while (divisor!= past){
            if (past%divisor == 0){
                flag = 1;
                break;
            }
            divisor ++;
        }

        if (flag == 0){
            return past;
        }
        past++;
    }
}

void Game::start() {
    std::cout << "=================================================" << std::endl;
    std::cout << "   JOGO DA LISTA DUPLAMENTE ENCADEADA CIRCULAR" << std::endl;
    std::cout << "=================================================" << std::endl;
    std::cout << std::endl;

    std::cout << "Digite a quantidade de jogadores: ";
    std::cin >> nPlayers;

    if (nPlayers < MIN_PLAYERS) {
        nPlayers = MIN_PLAYERS;
        std::cout << std::endl << "Quantidade menor que o mínimo, assumindo " << MIN_PLAYERS << std::endl << std::endl;
    }

    std::cout << "Digite a quantidade de casas no tabuleiro: ";
    std::cin >> nSteps;

    if (nSteps < MIN_STEPS) {
        nSteps = MIN_STEPS;
        std::cout << std::endl << "Quantidade menor que o mínimo, assumindo " << MIN_STEPS << std::endl << std::endl;
    }

    std::cout << "Digite a quantidade inicial de moedas: ";
    std::cin >> nCoins;

    if (nCoins <= 0) {
        nCoins = 15;
        std::cout << std::endl << "Quantidade de moedas deve ser maior que 0, assumindo 15" << std::endl << std::endl;
    }

    int playersList[nPlayers];

    int past = 1;
    int prime = 0;

    for (int i = 0; i < nPlayers; i++){
        prime = generateNextPrimeNumber(past);
        playersList[i] = generateNextPrimeNumber(prime);
        past = prime;
    }

    for (int i = 0; i < nPlayers; i++){
        int value = gameBoard->elementValueByIndex(0);
        gameBoard->setElementValueByIndex(0, value + playersList[i]);
    }

    int stepsRegister[nSteps];

    for (int i = 0; i < nSteps; i++){
        stepsRegister[i] = 0;
    }

    while (true) {
        /* gameloop */
        for (int i = 0; i < nPlayers; i++){
            int direction;
            int diceQ = 0;
            std::cout << "Digite 1 para escolher o sentído horário ou 0 para o anti-hoário\n";
            std::cin >> direction;
            std::cout << "Digite 1 para usar um dado ou 2 para dois dados\n";
            std::cin >> diceQ;
            int dice = randint(6 * diceQ);
            std::cout << "Jogador " << i << "Você andará " << dice << " casas no sentido " << direction << "\n";
            int cursor = 0;

            while (gameBoard->elementValueByIndex(cursor) % playersList[i] != 0){
                cursor++;
            }

            int elementValue = gameBoard->elementValueByIndex(cursor);
            
            gameBoard->setElementValueByIndex(cursor, elementValue - playersList[i]);

            while (cursor != ((cursor + dice)%nSteps)){
                cursor++;
            }
            
            int elementValue = gameBoard->elementValueByIndex(cursor);
            
            gameBoard->setElementValueByIndex(cursor, elementValue + playersList[i]);

            if (stepsRegister[cursor] != 0 && stepsRegister[cursor] != playersList[i]){
                /* Ver a quem pertence e fazer as operações */
            }
            else{
                if (stepsRegister[cursor] == playersList[i]){
                    /* Colocar propriedade */
                }
                else{
                    stepsRegister[cursor] = playersList[i];
                }
            }
            
        }
    }
    
}