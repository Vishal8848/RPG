/**
 *  This file consists of the class which
 *  uses the object of class RANDOM from
 *  file prng.h to build the password
 */

#ifndef PASSWORD_H_INCLUDED
#define PASSWORD_H_INCLUDED

const char CharSet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '@', '#', '$', '&'};

class PASSWORD  {
    private:
        RANDOM _Inst;
        int C_Index, Length;
        char *makePassword(), _password[20];
    public:
        PASSWORD(int);
        const char* Password();
};

PASSWORD::PASSWORD(int Password_Length = 20)    {  Length = Password_Length; }

char* PASSWORD::makePassword()  {
    for(int i = 0; i < Length; i++) {
        C_Index = _Inst.getRandomNumber()%CSET;
        _password[i] = CharSet[C_Index];
    }
    _password[Length] = '\0';
    return _password;
}

const char* PASSWORD::Password()    {   return makePassword();  }

#endif // PASSWORD_H_INCLUDED
