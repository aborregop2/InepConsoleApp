#include "PassarellaUsuari.h"
#include <iostream>
#include <string>
using namespace std;

class TxRegistraUsuari{
    private:
        string nomU;
        string sobrenomU;
        string contrasenyaU;
        string correuElectronicU;
        string dataNaixementU;

    public:
        TxRegistraUsuari(string nU,string sU,string cU,string ceU,string dnU) : nomU(nU), sobrenomU(sU),contrasenyaU(cU), correuElectronicU(ceU), dataNaixementU(dnU)
        {
          
        }
        ~TxRegistraUsuari()
        {

        }
        void executar()
        {
            PassarellaUsuari u(nomU, sobrenomU, contrasenyaU, correuElectronicU, dataNaixementU);
            u.insereix();
        }  
        
};
