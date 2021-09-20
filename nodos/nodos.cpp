#include <iostream>
using namespace std;

class cNodo
{ //estructuras autoreferenciadas
  public:
    int datoA;
    string datoB;

    cNodo *apuntador; //apuntador que nos dirige al siguiente nodo

  public:
    void dataprint()
    {
        cout<<datoA<<"\n"<<datoB<<"\n"<<endl;
    }

    void dirprint()
    {
       cout<<apuntador<<"\n"<<endl;
    }

//    void cninput()
//    {

//    }

};



int main()
{

    cNodo cnUNO, cnDOS, cnTRES;
    cNodo *apuntador= nullptr; //es una buena costumbre iniciar el apuntador en NULL

    cnUNO.datoA=5;
    cnUNO.datoB="matemáticas";

    cnDOS.datoA=7;
    cnDOS.datoB="física";

    cnTRES.datoA=6;
    cnTRES.datoB="informática";

    //direccionando los apuntadores
    cnUNO.apuntador=&cnDOS; // se dirige el apuntador al espacio de memoria que usará el siguiente nodo
    cnDOS.apuntador=&cnTRES;


    //imprimir información
    cnUNO.dataprint(); cnUNO.dirprint();
    cnDOS.dataprint(); cnDOS.dirprint();
    cnTRES.dataprint();


return 0;
}
