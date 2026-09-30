#include <stdio.h>
#include <string.h>
#include "jugador.h"

Jugador crearJugador(char *iniciales, int puntaje) {
    Jugador j;
    strcpy(j.iniciales, iniciales);
    j.puntaje = puntaje;
    return j;
}
