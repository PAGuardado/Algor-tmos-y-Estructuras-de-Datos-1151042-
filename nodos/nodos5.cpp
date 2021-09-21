#include <iostream>
using namespace std;

class cNodo
{ //estructuras autoreferenciadas
  public:
    string datoA;
    int datoB;

    cNodo *apuntador; //apuntador que nos dirige al siguiente nodo

  public:
    //MÉTODO CONSTRUCTOR
    //cNodo(string, int);

    void dataprint()
    {
        cout<<datoA<<"\n"<<datoB<<"\n"<<endl;
    }

    void dirprint()
    {
       cout<<apuntador<<"\n"<<endl;
    }


};

/*
    //creación e inicialización del objeto con el método constructor
    cNodo::cNodo(string _datoA, int _datoB)
        {
            datoA=_datoA;
            datoB=_datoB;
        }
*/

int main()
{
    cNodo data_node;
    cNodo *aux1_ptr= nullptr; //es una buena costumbre iniciar el apuntador en NULL
    cNodo *aux2_ptr=&data_node;

    char continue_confirm;
    int usr_input;

        //scanf("%d", &usr_input);
        //cout<<"valor ingresado: "<<usr_input;

    //creación de nodos e ingreso manual de la información contenida
    while(aux2_ptr!=nullptr)
    {
        fflush(stdin);

        cout<<"materia: ";
        getline(cin, aux2_ptr->datoA); //getline permite que todos los caracteres sean ingresados al string.

        cout<<"calificación: ";
        cin>>aux2_ptr->datoB;

        cout<<"\n ¿continuar? \n"<<"('y' to continue / press 'q' to exit)"<<endl;
        cin>>continue_confirm;
        cout<<endl;

            if(continue_confirm=='y')
            {
                aux2_ptr->apuntador= new cNodo;
            }
            else
            {
                aux2_ptr->apuntador=nullptr;
            }
        aux2_ptr=aux2_ptr->apuntador;

    }

    //terminamos la construcción de nodos dirigiendo el apuntador del último a 'NULL'.
    //aux2_ptr->apuntador=nullptr;


    aux1_ptr=&data_node;
    while(aux1_ptr!=nullptr)
    {
        aux1_ptr->dataprint(); aux1_ptr->dirprint();
        aux1_ptr=aux1_ptr->apuntador;
    }



return 0;
}
