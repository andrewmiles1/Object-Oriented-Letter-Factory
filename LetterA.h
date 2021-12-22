//header file for A factory
#ifndef LETTER_A_FACTORY_H
#define LETTER_A_FACTORY_H

class LetterA{
  char myLetter;
  int letterID;
  static int nextLetterID;

  public:LetterA();
  public:bool operator==(const LetterA &param);
  
};





#endif //LETTER_A_FACTORY_H