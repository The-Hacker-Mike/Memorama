/*
 * Created by Miguel Angel Medina Ruperto on 06/12/20.
 * Gameboard header.
 */

#include <vector>
#include <cstdlib>
#include <ctime>
//#include <chrono> luego intentar hacer random ints con chrono
#include "Card.h"

class Gameboard
{
    private:
        std::vector<std::vector<Card>> board;
        //std::string name; name of the game is an attribute of the game itself not from board

    public:
        Gameboard() = default;                         // i don't need another constructor
        std::vector<Card> prepareCards();              // make the cards
        std::vector<std::vector<Card>> makeBoard();    // create the board with a vector of vectors of cards
        std::vector<std::vector<Card>> arrangeCards(); // organize the cards into their positions
        void printHiddenBoard();
};
