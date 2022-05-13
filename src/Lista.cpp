#include "Lista.hpp"

void create_empty_list(List *l){
	l -> first = 0;
	l -> last  = 0;
}

void list_insert(List *l, Item d) {
	if (l -> last >= MAXTAM) {
		printf("LISTA CHEIA!\n");
	} else {
		l -> vet[l -> last] = d;
		l  -> last++;
	}
}

void list_print(List *l){
	for(int i = l -> first; i < l -> last; i++) {
		cout << l -> vet[i].val << "\t" << endl; }
}

void list_faztudo(List *l) {
    int biggest_sum = 0, first_pos_biggest = 0, last_pos_biggest = 0, dynamic_sum, start = l -> first, finish = (l -> last - 1), i, j;

	for (i = start; i <= finish; i++) {
		biggest_sum += l -> vet[i].val;
	}

	for (i = start; i <= finish; i++) {
		dynamic_sum = 0;
		for (j = i; j <= finish; j++) {
			dynamic_sum += l -> vet[j].val;
			if ((dynamic_sum >= biggest_sum) && (i != j)) {
				biggest_sum = dynamic_sum;
				first_pos_biggest = i;
				last_pos_biggest = j;
			}
		}
	}
    
    cout << endl << endl << "\t- Biggest sum among the entire array: " << biggest_sum << endl << endl;
    cout << "\t- First position of the sub-array: " << first_pos_biggest << endl;
    cout << "\t- Last position of the sub-array: " << last_pos_biggest << endl << endl;
}