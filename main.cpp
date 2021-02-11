/* Miguel Angel Medina Ruperto
 * Creation date: 5/11/2020
 * Program to create a popular game called "Memorama" with C++
 */

#include "Gameboard.h"
//#include ""

int main()
{
    std::cout << "Hello, World!" << std::endl;
    Card c1 = Card(5, true);
    std::cout << c1.getStatus() << std::endl;
    c1.flipCard();
    std::cout << c1.getStatus() << std::endl;
    c1.flipCard();

    Gameboard board = Gameboard();
    //board.arrangeCards();
    board.printHiddenBoard();
    return 0;
}
