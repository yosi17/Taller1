#include <stdio.h>
#include "ranking.h"

void inicializarRanking(Ranking *r) {
    for (int i = 0; i < 3; i++) {
        strcpy(r->top[i].iniciales, "---");
        r->top[i].puntaje = 0;
    }
}

void actualizarRanking(Ranking *r, Jugador nuevo) {
    for (int i = 0; i < 3; i++) {
        if (nuevo.puntaje > r->top[i].puntaje) {
            for (int j = 2; j > i; j--) {
                r->top[j] = r->top[j-1];
            }
            r->top[i] = nuevo;
            break;
        }
    }
}

void mostrarRanking(Ranking *r) {
    printf("\nTOP 3:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s - %d\n", i+1, r->top[i].iniciales, r->top[i].puntaje);
    }
}
