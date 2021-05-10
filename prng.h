/** This file contains the actual function
 *  responsible for the creation of one
 *  random value which is in-turn used to
 *  develop the random password, character
 *  by character, up to mentioned limit
 */

#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

#include <fstream>

#define BASE 123456789      // Multiplier Value
#define JUMP 12345          // Additive Value
#define CSET 66             // Size of CharSet[]

class PRNG;                 // Pseudo-Random Number Generator

class PRNG    {
    private:
        int Seed, Rand();
    public:
        PRNG();
        ~PRNG();
        const int getRandomNumber();
};

PRNG::PRNG()    {
    std::ifstream sread(".seed");
    sread>>Seed;
    sread.close();
}

PRNG::~PRNG()   {
    std::ofstream swrite(".seed", std::ios::trunc);
    swrite<<Rand();
    swrite.close();
}

int PRNG::Rand()  {
    Seed = Seed*BASE + JUMP;
    return abs((Seed/65536)%32768);
}

const int PRNG::getRandomNumber() {   return Rand();  }

typedef class PRNG RANDOM;

#endif // RANDOM_H_INCLUDED
