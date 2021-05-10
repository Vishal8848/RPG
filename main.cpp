/**
 *  Title    : Pseudo-Random Password Generator
 *  Target   : To create a password randomly for on-site and captcha verification
 *  Creation : 05 May 2021
 *  Theory   : Built based on the logic of PRNGs (Pseudo-Random Number Generators) whose output
 *             is not truly random but seems so until and unless the seed for generating the
 *             sequence is found provided the logic (i.e.: the arithmetic operations) behind
 *             the generation of one output value is known.
 *  Author   : R. B. Vishal Pranav
 */

#include <iostream>
#include "prng.h"
#include "password.h"

using namespace std;

int main()
{
    int Pass_Length, LengthFlag = 0;

    do  {

        system("cls");

        if(LengthFlag)
        {
            cout << endl << endl <<"\tExceeds Length Limit (1 - 20)";
            LengthFlag = 0;
        }

        cout << endl << endl << "\tEnter Password Length       : ";

        cin >> Pass_Length;

        if(Pass_Length > 0 && Pass_Length < 20)
        {
            PASSWORD P1(Pass_Length);

            cout << endl << endl << "\tRandomly Generated Password : " << P1.Password() << endl << endl << endl;

            break;
        }
        else
        {
            LengthFlag = 1;
            continue;
        }

    }   while(1);

    system("pause");

    return 0;
}
