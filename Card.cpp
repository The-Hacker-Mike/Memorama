/*
 * Created by Miguel Angel Medina Ruperto on 05/12/20.
 * Card implementation.
 */

#include "Card.h"

Card::Card(int number, bool covered)
{
    this->number = number;
    this->covered = covered;
}

void Card::setNumber(int number)
{
    this->number = number;
}

void Card::setStatus(bool status)
{
    covered = status;
}

int Card::getNumber()
{
    return number;
}

bool Card::getStatus()
{
    return covered;
}

void Card::flipCard()
{
    covered = !covered;
    // if the card is uncovered, its number value is shown.
    if (!covered)
    {
        std::cout << getNumber() << std::endl;
    }
    else
    {
        std::cout << "covered" << std::endl;
        std::cout << "-" << std::endl;
    }
}
