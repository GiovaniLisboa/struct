#include <stdlib.h>
#include <iostream>
using std::cout;
using std::cin;

struct computador
{
    char marca[20];
    int ano;
    int memoria;
    char estado [10];
};

struct impressora
{
    char marca[20];
    int ano;
    int area;
    char estado[10];
    int voltagem;
};


int main(int argc, char **argv)
{
    bool teste = false;
    char resposta = a;
    int item = 0;
    a
    while (teste == false)
    {
        computador pc+item;
        cout << "Insira os dados do computador 01. \n";
    
        cout << "Marca: ";
        cin >> pc01.marca;
        cout << "\n";
    
        cout << "Ano: ";
        cin >> pc01.ano;
        cout << "\n";
    
        cout << "Memoria RAM: ";
        cin >> pc01.memoria;
        cout << "\n";
    
        cout << "Estado: ";
        cin >> pc01.estado;
        cout << "\n";
    
        cout << "\n";
    
        cout << "Computador 01. \n";
        cout << "Marca: " << pc01.marca << "\n";
        cout << "Ano: " << pc01.ano << "\n";
        cout << "Memoria RAM: " << pc01.memoria << "\n";
        cout << "Estado: " << pc01.estado << "\n";

        while (resposta != 's' || resposta != 'n')
        {
            cout << "Deseja inserir novo item?\n";
            cin >> resposta;
            cout << "\n";
        }
    }
    
    
    struct funcionario func[ 50 ];
    int i = 0;

    for( i = 1; i < 3; i++ )
    {
    	cout <<"\nNome do Funcionario " << i << ": " << '\n';
    	cin >> func[i].nome;
    	
    	cout <<"Idade do Funcionario " << i << ": " << '\n';
    	cin >> func[i].idade;
    };

    for( i = 1; i < 3; i++ )
    {
    	cout << "-----------------------------------\n";
    	cout << "Nome do Funcionario " << i << ": " << func[i].nome << '\n';
    	cout << "\nIdade do Funcionario " << i << ": " << func[i].idade << '\n';
        cout << "-----------------------------------\n";
        cout << "\n";
    };
 
    system ("pause"); 
    return 0;

}