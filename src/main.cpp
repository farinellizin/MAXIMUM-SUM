#include "Lista.hpp"

void le_arquivo(List *l) {
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
    le_arquivo(&l);
    //list_print(&l);
    list_faztudo(&l);
    return 0;
}