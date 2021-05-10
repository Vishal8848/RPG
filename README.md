# RPG

Random Password Generator

Project Features :
  
  1. Languages   : C++
  2. Databases   : -None-
  3. IDE         : CodeBlocks
  4. Compiler    : MinGW GCC (Under GNU General Public License)
  5. Environment : Windows (.exe)
  6. Type        : CUI(Character User Interface), Terminal
  
Project Description : 
  
    When run, the final product prompts for the password size and a password of that size is generated according to the inbuilt PRNG system in the program.
    
    Technically, The project is framed using C++ class concept for data integrity and security.
    
    The Project is aimed at producing a random password based on the string length. This works majorly on the principle of PRNGs (Pseudo-Random Number Generators). A local function _Rand()_ is defined which is responsible for the generation of Random Numbers. The numbers generated are not truly random but seem to be so unless and until the seed for the generation of the random number sequence is known provided the logic behind it's generation is given.
    
File Description :

   _"prng.h"_  - Contains a class **PRNG** which has member function _Rand()_ to generate the pseudo-random number. The consructor of the class retreives the seed value and the destructor replaces the file with a different seed value which is responsible for the random number generation.
   
   _"password.h"_ - Contains a class **PASSWORD** which has member function _makePassword()_ to generate the psuedo-random string (i.e.: password) whose characters belong to the array _CharSet_ predefined in the same file where the base operations are made using the object of _RANDOM_ class (aka PRNG).
   
   _".seed"_  - Contains the _Seed_ value for the generation of pseudo-random number. This file is accessed by the PRNG class.
