#ifndef VOYANT_H
#define VOYANT_H
#include <string>

namespace nsDigicode {
enum Couleur {vert, rouge};
enum Etat {allume, eteint};
class Voyant
{
public:
    void allumer();
    void eteindre();
    Voyant(Couleur couleur, Etat etat);
    std::string getStatut();
private:
    Couleur myCouleur;
    Etat myEtat;
};
}

#endif // VOYANT_H
