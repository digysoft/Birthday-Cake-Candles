/******************************************************************************

                            DigySoft E.I.R.L
                              C++ Compiler

Program: Birthday Cake Candles
Author: Jose Vidal
E-mail: jvidalsm@gmail.com
Date: 27/05/2021
Version: 1.0.0

Description:
You are in charge of the cake for a child's birthday. You have decided the cake
will have one candle for each year of their total age. They will only be able to
blow out the tallest of the candles. Count how many candles are tallest.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    long int total_max_number = 0;
    long int max_number = 0;
    long int total_number = 0;
    long int total_number_aux = 0;
    long int number = 0;
    long int * pData;

    cin >> total_number;
    total_number_aux = total_number;
    pData = (long int*) calloc (total_number,sizeof(long int));

    while (total_number_aux > 0)
    {
        cin >> number;
        if (number > max_number) max_number = number;
        total_number_aux--;
        pData[total_number_aux] = number;
    }

    while (total_number > 0)
    {
        total_number--;
        if (pData[total_number] == max_number) total_max_number++;
    }
    free(pData);
    cout<<total_max_number;
    return 0;
}
