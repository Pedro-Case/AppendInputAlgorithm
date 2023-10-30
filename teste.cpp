#include <iostream>
using namespace std;

string* append(string lista[],int tamanho,string elemento){
    string* lista_nova = new string[tamanho + 1];
    for(int idx; idx < tamanho; idx++){
        lista_nova[idx] = lista[idx];
    }
    lista_nova[tamanho] = elemento;
    delete[]lista;
    lista = nullptr;
    return lista_nova;
}

void show(string lista[], int tamanho){
    for(int i; i < tamanho; i++){
        cout << lista[i] << ' ';
    }
    cout << '\n';
}

int main() {
    int tamanho = 0;
    string* lista_entradas = new string[tamanho];
    for (std::string entrada; std::getline(std::cin, entrada);) {
        lista_entradas = append(lista_entradas, tamanho, entrada);
        tamanho++;
        show(lista_entradas, tamanho);
    }
    return 0;
}
