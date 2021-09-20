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
    cNodo *aux_ptr= nullptr; //es una buena costumbre iniciar el apuntador en NULL
    cNodo data_node;//solo ser� necesaria la declaraci�n de el primer nodo

    cNodo *build_ptr=&data_node;

        build_ptr->datoA=5;
        build_ptr->datoB="matem�ticas";

    //creaci�n de los siguientes nodos
    //2 nodo
    build_ptr->apuntador= new cNodo;
    build_ptr=build_ptr->apuntador;

        build_ptr->datoA=7;
        build_ptr->datoB="f�sica";

    //3 nodo
    build_ptr->apuntador= new cNodo;
    build_ptr=build_ptr->apuntador;

        build_ptr->datoA=6;
        build_ptr->datoB="inform�tica";

    //4 nodo
    build_ptr->apuntador= new cNodo;
    build_ptr=build_ptr->apuntador;

        build_ptr->datoA=7;
        build_ptr->datoB="qu�mica";

    //terminamos la construcci�n de nodos dirigiendo el apuntador del �ltimo a 'NULL'.
    build_ptr->apuntador=nullptr;


    aux_ptr=&data_node;
    while(aux_ptr!=nullptr)
    {
        aux_ptr->dataprint(); aux_ptr->dirprint();
        aux_ptr=aux_ptr->apuntador;
    }



return 0;
}
