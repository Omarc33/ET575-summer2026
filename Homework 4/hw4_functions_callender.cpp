/*
Omari Callender
Homework 4
Lottery Simulation Functions
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void winningDigits(int winning[], int size)
{
    srand(time(0));

    for(int i = 0; i < size; i++)
    {
        winning[i] = rand() % 19 + 1;
    }
}

void userTicket(int ticket[], int size)
{
    for(int i = 0; i < size; i++)
    {
        do
        {
            cout << "Enter number " << i + 1 << " between 1 and 19: ";
            cin >> ticket[i];

        }while(ticket[i] < 1 || ticket[i] > 19);
    }
}

void checkRepeating(int winning[], int ticket[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            while(winning[i] == winning[j])
            {
                winning[j] = rand() % 19 + 1;
            }
        }
    }

    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            while(ticket[i] == ticket[j])
            {
                cout << "Repeating number found. Enter another number: ";
                cin >> ticket[j];
            }
        }
    }
}

int checkWinner(int winning[], int ticket[], int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(winning[i] == ticket[i])
        {
            count++;
        }
    }

    return count;
}

void printResult(int winning[], int ticket[], int matches, int size)
{
    cout << "\nWinning digits = \t";

    for(int i = 0; i < size; i++)
    {
        cout << winning[i] << "\t";
    }

    cout << "\n\nUser ticket = \t\t";

    for(int i = 0; i < size; i++)
    {
        cout << ticket[i] << "\t";
    }

    cout << "\n\nMatch numbers = \t" << matches << endl;
}