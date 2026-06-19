/*
Omari Callender
Homework 4
Lottery Simulation
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "hw4_functions_callender.cpp"

using namespace std;

int main()
{
    const int SIZE = 5;

    int winning[SIZE];
    int ticket[SIZE];

    winningDigits(winning, SIZE);
    userTicket(ticket, SIZE);

    checkRepeating(winning, ticket, SIZE);

    int matches = checkWinner(winning, ticket, SIZE);

    printResult(winning, ticket, matches, SIZE);

    return 0;
}