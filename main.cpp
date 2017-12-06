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
    int voltagem;
    char estado[10];
};


int main(int argc, char **argv)
{
    cout << "STRUCT 01\n\n";
    
    computador pc01;
    cout << "Insira os dados do computador 01. \n";
    
    cout << "Marca: ";
    cin >> pc01.marca;
    
    cout << "Ano: ";
    cin >> pc01.ano;
    
    cout << "Memoria RAM: ";
    cin >> pc01.memoria;
    
    cout << "Estado: ";
    cin >> pc01.estado;
    
    cout << "\n";
    
    cout << "Computador 01. \n";
    cout << "Marca: " << pc01.marca << "\n";
    cout << "Ano: " << pc01.ano << "\n";
    cout << "Memoria RAM: " << pc01.memoria << " GB\n";
    cout << "Estado: " << pc01.estado << "\n";
    
    cout << "\n\nSTRUCT 02\n\n";
    
    impressora imp01;
    cout << "Insira os dados da impressora 01. \n";
    
    cout << "Marca: ";
    cin >> imp01.marca;
    
    cout << "Ano: ";
    cin >> imp01.ano;
    
    cout << "Voltagem: ";
    cin >> imp01.voltagem;
    
    cout << "Estado: ";
    cin >> imp01.estado;
    
    cout << "\n";
    
    cout << "Computador 01. \n";
    cout << "Marca: " << imp01.marca << "\n";
    cout << "Ano: " << imp01.ano << "\n";
    cout << "Voltagem: " << imp01.voltagem << " V\n";
    cout << "Estado: " << imp01.estado << "\n";
    
    return 0;
}