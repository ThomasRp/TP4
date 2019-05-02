#include "clavier.h"
#include <iostream>
#include "kbhit.h"

using namespace std;
int nsDigicode::clavier::saisirChiffre()
{
    int chiffre (_kbhit());
    if(chiffre == 0) return -1;
    else
        return chiffre - '0';
}
