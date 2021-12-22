#include "LetterA.h"
#include <iostream>

using namespace std;

int LetterA::nextLetterID = 0;

LetterA::LetterA(){
 this->myLetter = 'a';
 this->letterID = nextLetterID;
 nextLetterID++;
};

//compares the ID numbers between 'letters'
bool LetterA::operator==(const LetterA &param){
  if(this->letterID == param.letterID){
    return true;
  }
  else{
    return false;
  }
}


