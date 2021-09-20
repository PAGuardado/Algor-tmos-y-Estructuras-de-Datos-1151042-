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
    cnUNO.datoB="matem�ticas";

    cnDOS.datoA=7;
    cnDOS.datoB="f�sica";

    cnTRES.datoA=6;
    cnTRES.datoB="inform�tica";

    //direccionando el apuntador en el objeto
    cnUNO.apuntador=&cnDOS;
    cnDOS.apuntador=&cnTRES;
    cnTRES.apuntador=NULL;


    //usando un apuntador auxiliar, podemos dirigirnos a cada uno de los nodos de manera 'externa'
    aux_ptr=&cnUNO; //iniciamos digigiendo el apuntador auxiliar a la direcci�n del primer nodo
        //aux_ptr->dataprint(); aux_ptr->dirprint(); //a partir del apuntador auxiliar, se manda a ejecutar el m�todo para imprimir informaci�n

/*
    //convendr�a usar una funci�n de repetici�n
    aux_ptr=aux_ptr->apuntador; //ahora el apuntador auxiliar se dirige al apuntador dentro del primer nodo, que dirige al segundo nodo.
        aux_ptr->dataprint(); aux_ptr->dirprint();

    aux_ptr=aux_ptr->apuntador;
        aux_ptr->dataprint(); aux_ptr->dirprint();
*/

    //for(int i=0;i<3;i++)
        //si el apuntador del �ltimo nodo dirige a 'NULL' podr�a servirnos como l�mite para el ciclo de mandar a imprimir, de manera que no ser�a necesario saber cuantos nodos hay en realidad.
        //(ver l�nea 50)
    while(aux_ptr!=nullptr)
    {
        aux_ptr->dataprint(); aux_ptr->dirprint();
        aux_ptr=aux_ptr->apuntador;
    }



return 0;
}
