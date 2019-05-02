#include <iostream>
#include "alarme.h"
#include <unistd.h>
using namespace std;

void nsDigicode::Alarme::declencher()
{
    while(true)
    {
        cout << "Alarme : la porte n’a pas été refermée" << endl;
         sleep(1);
    }
}
