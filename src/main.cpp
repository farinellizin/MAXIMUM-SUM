#include "Lista.hpp"

void read_file(List *l) {
    string linha;
    Item aux;
    int valor;

    ifstream file;
    file.open("valores.txt");
    if (file.is_open()) {
        while (!file.eof()) {
            getline(file, linha);
            valor = stoi(linha);
            aux.val = valor;
            list_insert(l, aux);
        }
        file.close();
    }
}

int main () {
    List l;
    create_empty_list(&l);
    read_file(&l);
    list_maxsum(&l);
    return 0;
}