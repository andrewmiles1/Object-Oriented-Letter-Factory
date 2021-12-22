#include <iostream>
#include "LetterA.h"

using namespace std;

int main() {
  LetterA *plett1 = new LetterA();
  LetterA *plett2 = new LetterA();

  if(*plett1 == *plett2){
    cout << "Leters are Equal" << endl;
  }
  else{
    cout << "Letters are Not Equal" << endl;
  }
  if(*plett1 == *plett1){
    cout << "Letters are Equal" << endl;
  }
  else{
    cout << "Letters are Not Equal" << endl;
  }

  delete plett1;
  delete plett2;
}