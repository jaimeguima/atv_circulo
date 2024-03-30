#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"

#define PI 3.1415

// Definição da estrutura 
typedef struct Circulo {
    float x;
    float y;
    float raio;
} Circulo;

/**
 * @brief Cria um novo círculo
 * 
 * @param x cordenada x do centro
 * @param y cordenada y do centro
 * @param raio raio do circulo
 * @return ponteiro de Circulo
 */

Circulo* circ_cria(float x, float y, float raio) {
    Circulo *novo_circulo = malloc(sizeof(Circulo));
    if (novo_circulo != NULL) {
        novo_circulo->x = x;
        novo_circulo->y = y;
        novo_circulo->raio = raio;
    }
    return novo_circulo;
}

/**
 * @brief libera a memória alocada para um circulo
 * 
 * @param c circulo que deve ser excluido
 */
void circ_libera(Circulo *c) {
    free(c);
}

/**
 * @brief calcula a area de um circulo
 * 
 * @param c recebe o circulo
 * @return float retorna o valor da area
 */
float circ_area(Circulo *c) {
    return PI * c->raio * c->raio;
}

/**
 * @brief  Verifica se dois círculos são concêntricos (possuem o mesmo centro)
 * 
 * @param c1 circulo 1
 * @param c2 circulo 2
 * @return int retorna 1 para verdadeiro, 0 para false.
 */
int circ_concentricos(Circulo *c1, Circulo *c2) {
    if((c1->x == c2->x) && (c1->y == c2->y)) {
        return 1;
    }else {
        return  0;
    }
}

/**
 * @brief obtem o raio de um circulo
 * 
 * @param c circulo
 * @return float valor do raio
 */
float circ_raio(Circulo *c) {
    return c->raio;
}