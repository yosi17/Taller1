#ifndef RANKING_H
#define RANKING_H

#include "jugador.h"

typedef struct {
    Jugador top[3];
} Ranking;

void inicializarRanking(Ranking *r);
void actualizarRanking(Ranking *r, Jugador nuevo);
void mostrarRanking(Ranking *r);

#endif
