#include <iostream>
using namespace std;

// ¿cómo sumar los datos contenidos en los distintos nodos?

class cNode
{
  public:
    int numero;

    cNode *next_node_ptr;
        cNode()
        {
            next_node_ptr=nullptr; //el apuntador en cada nodo deberá apuntar en un inicio a 'NULL'
        }

  public:
    void dataprint()
    {
        cout<<numero<<"\n"<<endl;
    }

    void dirprint()
    {
       cout<<next_node_ptr<<"\n"<<endl;
    }

};



int main()
{
    cNode node_data;

    int many_nodes;

    cout<<"¿cuántos nodos se ingresarán? ";
    cin>> many_nodes;

    cNode *input_aux_ptr=&node_data;
        for (int i=0; i<many_nodes; i++)
        {
            fflush(stdin);

                int j=i+1;
            cout<<"ingrese el número para el nodo "<<j<<": ";
            cin>>input_aux_ptr->numero;

            input_aux_ptr->next_node_ptr=new cNode;
            input_aux_ptr=input_aux_ptr->next_node_ptr;

            cout<<endl;
        }

    cNode *print_aux_ptr=&node_data;
        for (int i=0; i<many_nodes; i++)
        {
                int j=i+1;
            cout<<"(nodo "<<j<<" )"<<endl;

            print_aux_ptr->dataprint(); print_aux_ptr->dirprint();
            print_aux_ptr=print_aux_ptr->next_node_ptr;
        }


    cNode *sum_aux_ptr=&node_data;
    int sumador=0;
        for (int i=0; i<many_nodes; i++)
        {
            sumador = sumador +  sum_aux_ptr->numero;
            sum_aux_ptr=sum_aux_ptr->next_node_ptr;
        }
        cout<<sumador;


return 0;
}
