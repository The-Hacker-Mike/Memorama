/*
 * Created by Miguel Angel Medina Ruperto on 05/12/20.
 * Card header.
 */

#include <iostream>
#pragma once

class Card
{
    private:
        // Attributes
        int number;
        bool covered;

    public:
        // Constructors
        Card() = default;
        Card(int number, bool covered);
        // Methods
        void setNumber(int number);
        void setStatus(bool status);
        int getNumber();
        bool getStatus();
        void flipCard();
};
