#ifndef PASSARELLA_VIDEOJOC_H
#define PASSARELLA_VIDEOJOC_H

#include <iostream>
using namespace std;

class PassarellaVideojoc{
    private:
        string nom;
        int qualificacioEdat;
        string dataLlansament;
        int minsEstimat;
        string genere;

    public:
        PassarellaVideojoc(string nomV, int qeV, string dL, int minV, string gV);
        
        string obteNom();
        int obteQualifiacioEdat();
        string obteDataLlansament();
        int obteMinsEstimat();
        string obteGenere();
};




#endif