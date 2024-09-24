#include <stdio.h>

int main() {
    int anno1, anno2, mese1, mese2, giorno1, giorno2, differenza, giorniDiff, mesiDiff, anniDiff;

    printf("Calcola la differenza di tempo tra due date\n");


    printf("Inserisci anno, mese e giorno della prima data: \n");
    scanf("%d", &anno1);
    scanf("%d", &mese1);
    scanf("%d", &giorno1);


    printf("Inserisci anno, mese e giorno della seconda data: \n");
    scanf("%d", &anno2);
    scanf("%d", &mese2);
    scanf("%d", &giorno2);


    differenza = giorno1 - giorno2 + (mese1 - mese2) * 30 + (anno1 - anno2) * 360;

    giorniDiff = differenza % 30;
    mesiDiff = (differenza / 30) % 12;
    anniDiff = differenza / 360;


    printf("La differenza tra le due date e di %d giorni, %d mesi e %d anni\n", giorniDiff, mesiDiff, anniDiff);

    return 0;
}
