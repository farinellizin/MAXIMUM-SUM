#ifndef LISTA_HPP
#define LISTA_HPP
#define MAXTAM 100
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

typedef struct Item {
    int val;   
} Item;

typedef struct List {
    Item vet[MAXTAM];
    int first;
    int last;
} List;

void create_empty_list (List *l);
void list_insert(List *l, Item d);
void list_print(List *l);
void list_maxsum(List *l);

#endif