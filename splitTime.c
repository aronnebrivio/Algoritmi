// Esercizio 1.1
#include <stdio.h>

void split_time (long int tot_sec, int *h, int *m, int *s);

int main () {
	long int time;
	int h, m, s;
	printf("Inserisci il numero di secondida convertire: ");
	scanf("%ld", &time);
	split_time(time, &h, &m, &s);
	printf("%d : %d : %d \n", h, m, s);
	return 0;
}

void split_time (long int tot_sec, int *h, int *m, int *s) {
	*h = tot_sec / 3600;
	tot_sec %= 3600;
	*m = tot_sec / 60;
	*s = tot_sec % 60;
}
