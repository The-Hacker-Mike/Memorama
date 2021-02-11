/*
 * Created by Miguel Angel Medina Ruperto on 08/12/20.
 * Gameboard implementation.
 */

#include "Gameboard.h"

std::vector<Card> Gameboard::prepareCards()
{
    std::vector<Card> v;

    for (int cardValue = 1; cardValue < 9; cardValue++)
    {
        Card card2Insert = Card(cardValue, true);
        v.push_back(card2Insert);
        v.push_back(card2Insert);
    }

    std::cout << "my vector contains:" << std::endl;
    // auto = std::vector<Card>::iterator
    for (auto itr = v.begin(); itr != v.end(); itr++)
    {
        std::cout << (*itr).getNumber() << ", ";
    }

    return v;
}

std::vector<std::vector<Card>> Gameboard::makeBoard()
{
    std::vector<Card> allCards = prepareCards();
    std::vector<Card> v;
    int size = 4;
    board.reserve(size);

    for (int i = 0; i < allCards.size(); i++)
    {
        v.push_back(allCards[i]);
        if (v.size() % 4 == 0)
        {
            board.push_back(v);
            v.erase(v.begin(), v.end());
        }
    }
    return board;
}

std::vector<std::vector<Card>> Gameboard::arrangeCards()
{
    // Step 0, 1 and 2 are outside the loop because they should be executed only once.
    // Step 0: initialize the random generator
    srand(time(NULL));
    //std::cout << rand()%4 << std::endl;

    // Step 1: store the organized board in a vector.
    std::vector<std::vector<Card>> myBoard = makeBoard();

    // Step 2: select the (0, 0) card's value in the board
    int value2switch;
    int seachedVal;
    int xCoordinate;
    int yCoordinate;
    int i = 0;
    int j = 0;

    // Step 2.5: start the loop.
    while (true)
    {
        value2switch = myBoard[i][j].getNumber();
        xCoordinate = rand()%4;     // Step 3: generate a random int = x coordinate
        yCoordinate = rand()%4;     // Step 4: generate a random int = y coordinate
        seachedVal = myBoard[xCoordinate][yCoordinate].getNumber();

        // Step 5: compare value2switch and searchedVal.
        if (value2switch != seachedVal)
        {
            myBoard[i][j].setNumber(seachedVal);
            myBoard[xCoordinate][yCoordinate].setNumber(value2switch);
            // Step 6: check if the end of the matrix has been reached, else advance.
            if (i == 3 && j == 3)
            {
                break;
            }
            else if (j == 3)
            {
                i++;
                j = 0;
            }
            else
            {
                j++;
            }
        }
        // if they are alike, the loop continues till searchedVal is different from value2switch, value2switch doesn't change.
    }
    return myBoard;
}

void Gameboard::printHiddenBoard()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << " - ";
        }
        std::cout << std::endl;
    }
}
