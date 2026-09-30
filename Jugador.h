#ifndef JUGADOR_H
#define JUGADOR_H

typedef struct {
    char iniciales[4];
    int puntaje;
} Jugador;

Jugador crearJugador(char *iniciales, int puntaje);

#endif
