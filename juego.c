#include <stdio.h>
#include "jugador.h"
#include "ranking.h"

int main() {
    Ranking r;
    inicializarRanking(&r);

    int opcion;
    do {
        printf("\nMENU\n");
        printf("1. Ingresar jugador\n");
        printf("2. Ver ranking\n");
        printf("3. Salir\n");
        scanf("%d", &opcion);

        if (opcion == 1) {
            char iniciales[4];
            int puntaje;
            printf("Iniciales (3 letras): ");
            scanf("%s", iniciales);
            printf("Puntaje: ");
            scanf("%d", &puntaje);

            Jugador j = crearJugador(iniciales, puntaje);
            actualizarRanking(&r, j);
        } else if (opcion == 2) {
            mostrarRanking(&r);
        }

    } while (opcion != 3);

    return 0;
}
