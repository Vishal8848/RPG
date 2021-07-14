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
       
File Description :

   _"prng.h"_  - Contains a class **PRNG** which has member function _Rand()_ to generate the pseudo-random number. The consructor of the class retreives the seed value and the destructor replaces the file with a different seed value which is responsible for the random number generation.
   
   _"password.h"_ - Contains a class **PASSWORD** which has member function _makePassword()_ to generate the psuedo-random string (i.e.: password) whose characters belong to the array _CharSet_ predefined in the same file where the base operations are made using the object of _RANDOM_ class (aka PRNG).
   
   _".seed"_  - Contains the _Seed_ value for the generation of pseudo-random number. This file is accessed by the PRNG class.
   
   An example of the outcome :
   ![randpass](https://user-images.githubusercontent.com/83658629/125667223-96ce13ca-79a9-422f-8ed1-6dd3faa9ef4f.jpg)

