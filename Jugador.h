
#ifndef JUGADOR_H
#define JUGADOR_H

typedef struct {
    char iniciales[4];  // 3 letras + '\0'
    int puntaje;
} Jugador;

void inicializarJugador(Jugador *jugador);
void ingresarJugador(Jugador *jugador);
void mostrarJugador(const Jugador *jugador);

#endif
