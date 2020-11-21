#include <iostream>
#include "game.h"

Game::Game() {
    gameBoard = new DoublyLinkedList();
}

Game::~Game() {
    delete gameBoard;
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
}
