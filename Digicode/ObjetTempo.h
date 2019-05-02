#ifndef OBJETTEMPO_H
#define OBJETTEMPO_H

#include "Chrono.h"

using namespace std;
namespace nsDigicode {

    class ObjetTempo
    {
    protected:
        bool myAttente;
        int myDelai;
        Chrono* mypChrono;
    public:
        ObjetTempo(Chrono* pchrono, int delai);
        Chrono* getChrono();
        void finTempo();
        int getDelai();
    };

} /* ns_Digicode */

#endif /* _OBJETTEMPO */
