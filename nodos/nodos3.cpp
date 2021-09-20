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

    data_node.datoA=5;
    data_node.datoB="matem�ticas";

    //se crea el siguiente nodo en la direcci�n indicada por el apuntador contenido en el nodo anterior.
    //2 nodo
    data_node.apuntador = new cNodo; //los siguientes nodos ni si quiera tendr�n nombre

        data_node.apuntador->datoA=7;
        data_node.apuntador->datoB="f�sica";

    //desde el apuntador que dirige al segundo nodo desde el primero se indica la creaci�n de un tercer nodo.
    //3 nodo
    data_node.apuntador->apuntador=new cNodo;

        data_node.apuntador->apuntador->datoA=6;
        data_node.apuntador->apuntador->datoB="inform�tica";

    //4 nodo
    data_node.apuntador->apuntador=new cNodo;

        data_node.apuntador->apuntador->datoA=7;
        data_node.apuntador->apuntador->datoB="qu�mica";

    //terminamos la construcción de nodos dirigiendo el apuntador del último a 'NULL'.
    data_node.apuntador->apuntador->apuntador=nullptr;

    aux_ptr=&data_node; //iniciamos digigiendo el apuntador auxiliar a la direcci�n del primer nodo
    while(aux_ptr!=nullptr)
    {
        aux_ptr->dataprint(); aux_ptr->dirprint();
        aux_ptr=aux_ptr->apuntador;
    }



return 0;
}
