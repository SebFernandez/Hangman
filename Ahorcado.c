#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>

void show (char W[20], char P[20], int Z);
int check (char W[20], char P[20], char V);

int main () {
	char word [20], play [20], D, L;
	int i, j, k, M, flag = 0, flag2;

	while (flag == 0) {
		flag2 = 0;
		M=0;
		system ("cls");
		printf ("Bienvendio al ahorcado.\nDebes ingresar una palabra menor a 10 caracteres y tenes 5 vidas.\nPalabra: ");

		do{
			gets (word);
		}	while (strlen (word) > 20);

		for (i = 0; i <= strlen (word); i++) {
			play [i] = '_';
			toupper (word [i]);
		}

		while (flag2 == 0) {
			show (word, play, M);
			fflush (stdin);
			printf ("Letra: ");
			do {
				scanf ("%c", &L);
				toupper (L);
			}	while (isalpha (L) == 0);
			k = check (word, play, L);
			if (k == -1) {
				M++;
			}
			if (strcmpi (word, play) == -1) {
				show (word, play, M);
				printf ("\n\n\tFelicitaciones! Has ganado.");
				flag2 = 1;
			} else if (M == 5) {
				system ("cls");
				printf ("\t__________________\tVidas: %d", (5-M));
				printf ("\n\t|\t\t |");
				printf ("\n\t|\t\t_O_");
				printf ("\n\t|\t\t_|_");
				printf ("\n\t|\t\t");
				printf ("\n\t|");
				printf ("\n\t|");
				printf ("\n\t|");
				printf ("\n\n\t\t");
				for (j = 0; j < strlen (word); j++){
					printf ("%c ", toupper(play[j]));
				}
				printf ("\n\n\tOh no! Has perdido.\n");
				printf ("\tLa palabra era: ");
				for (j = 0; j < strlen (word); j++) {
					printf ("%c", toupper (word[j]));
				}
				flag2 = 1;
			}
		}
		printf ("\n\n\tDeseas jugar devuelta? (Y/N): ");
		do {
			scanf ("%c", &D);
			tolower (D);
		}	while ((D != 'y') && (D != 'n'));

		fflush (stdin);

		if (D == 'n') {
			flag = 1;
		}

	}

	printf ("\n\n");
	system ("pause");
}

void show (char W[20], char P[20], int Z) {
	int j;

	if (Z == 0) {
			system ("cls");
			printf ("\t__________________\tVidas: %d", (5-Z));
			printf ("\n\t|\t\t |");
			printf ("\n\t|\t\t O");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\n\t\t");
			for (j = 0; j < strlen (W); j++){
				printf ("%c ", toupper(P[j]));
			}
			printf ("\n\n");
	} else if (Z == 1) {
			system ("cls");
			printf ("\t__________________\tVidas: %d", (5-Z));
			printf ("\n\t|\t\t | ");
			printf ("\n\t|\t\t O ");
			printf ("\n\t|\t\t | ");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\n\t\t");
			for (j = 0; j < strlen (W); j++){
				printf ("%c ", toupper(P[j]));
			}
			printf ("\n\n");
	} else if (Z == 2) {
			system ("cls");
			printf ("\t__________________\tVidas: %d", (5-Z));
			printf ("\n\t|\t\t |");
			printf ("\n\t|\t\t_O ");
			printf ("\n\t|\t\t | ");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\n\t\t");
			for (j = 0; j < strlen (W); j++){
				printf ("%c ", toupper(P[j]));
			}
			printf ("\n\n");
	} else if (Z == 3) {
			system ("cls");
			printf ("\t__________________\tVidas: %d", (5-Z));
			printf ("\n\t|\t\t |");
			printf ("\n\t|\t\t_O_ ");
			printf ("\n\t|\t\t | ");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\n\t\t");
			for (j = 0; j < strlen (W); j++){
				printf ("%c ", toupper(P[j]));
			}
			printf ("\n\n");
	} else if (Z == 4) {
			system ("cls");
			printf ("\t__________________\tVidas: %d", (5-Z));
			printf ("\n\t|\t\t |");
			printf ("\n\t|\t\t_O_");
			printf ("\n\t|\t\t_|");
			printf ("\n\t|\t\t ");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\t|");
			printf ("\n\n\t\t");
			for (j = 0; j < strlen (W); j++){
				printf ("%c ", toupper(P[j]));
			}
			printf ("\n\n");
	}
}

int check (char W[20], char P[20], char V) {
	int i, pos = -1;

	for (i = 0; i < strlen (W); i++) {
		if (V == W[i]) {
			P[i] = V;
			pos = 0;
		}
	}
	return pos;
}
