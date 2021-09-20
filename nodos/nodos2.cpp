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
    cNodo *aux_ptr= nullptr; //es una buena costumbre iniciar el apuntador en NULL

    cnUNO.datoA=5;
    cnUNO.datoB="matemáticas";

    cnDOS.datoA=7;
    cnDOS.datoB="física";

    cnTRES.datoA=6;
    cnTRES.datoB="informática";

    //direccionando el apuntador en el objeto
    cnUNO.apuntador=&cnDOS;
    cnDOS.apuntador=&cnTRES;
    cnTRES.apuntador=NULL;


    //usando un apuntador auxiliar, podemos dirigirnos a cada uno de los nodos de manera 'externa'
    aux_ptr=&cnUNO; //iniciamos digigiendo el apuntador auxiliar a la dirección del primer nodo
        //aux_ptr->dataprint(); aux_ptr->dirprint(); //a partir del apuntador auxiliar, se manda a ejecutar el método para imprimir información

/*
    //convendría usar una función de repetición
    aux_ptr=aux_ptr->apuntador; //ahora el apuntador auxiliar se dirige al apuntador dentro del primer nodo, que dirige al segundo nodo.
        aux_ptr->dataprint(); aux_ptr->dirprint();

    aux_ptr=aux_ptr->apuntador;
        aux_ptr->dataprint(); aux_ptr->dirprint();
*/

    //for(int i=0;i<3;i++)
        //si el apuntador del último nodo dirige a 'NULL' podría servirnos como límite para el ciclo de mandar a imprimir, de manera que no sería necesario saber cuantos nodos hay en realidad.
        //(ver línea 50)
    while(aux_ptr!=nullptr)
    {
        aux_ptr->dataprint(); aux_ptr->dirprint();
        aux_ptr=aux_ptr->apuntador;
    }



return 0;
}
