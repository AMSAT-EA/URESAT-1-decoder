
//
// spacechess
// Programmed by Felix Paez EA4GQS and Raul de Frutos
//


#ifndef SPACECHESS_H
#define	SPACECHESS_H

#define NUM_FILAS 			8
#define NUM_COLUMNAS 		8

// tipos de pieza teniendo en cuenta el color

#define VACIO				0
#define PEON_BLANCO			1
#define TORRE_BLANCA		2
#define CABALLO_BLANCO  	3
#define ALFIN_BLANCO 		4
#define DAMA_BLANCA 		5
#define REY_BLANCO 			6

#define PEON_NEGRO 			7
#define TORRE_NEGRA 		8
#define CABALLO_NEGRO 		9
#define ALFIN_NEGRO 		10
#define DAMA_NEGRA 			11
#define REY_NEGRO 			12


// tipos de pieza sin tener en cuenta el color

#define PEON 				0
#define CABALLO 			1
#define ALFIL 				2
#define TORRE 				3
#define DAMA 				4
#define REY 				5


#define TIPO_PIEZA 			6
#define MOVIMIENTO 			56
#define DESPLAZAMIENTO 		2

#define BLANCAS 			0
#define NEGRAS 				1

#define NUM_RAMAS_BLANCAS 	16
#define NUM_RAMAS_NEGRAS 	26

#define MAX_MOVIMIENTOS MOVIMIENTO

#define MAX_SUCESORES		100

typedef struct nodo {

    int16_t id_nodo;

    uint8_t estado[NUM_FILAS][NUM_COLUMNAS];
    uint8_t profundidad;
    float valoracion;

    int16_t id_padre;
	int8_t f_origen;	// fila origen
	int8_t c_origen;   // columna origen
	int8_t op_mov_x;   // x operador
	int8_t op_mov_y;   // y operador

	uint8_t reposo;	// indica si es un nodo de reposo

} NODO;

// FALTA COMER AL PASO!!!

void inicializa_tablero(void);
int8_t es_enroque(char movimiento[4]);
void actualiza_enroque(char movimiento[4]);
int8_t tipo_pieza_sin_color(int8_t tipo_pieza_tablero);
int8_t expande_nodo(NODO nodo, char color);
float valor_minimax(NODO nodo, char color, int8_t * out_f_orig, int8_t * out_c_orig, int8_t * out_op_y_mov, int8_t * out_op_x_mov);
float valoracion_estado(uint8_t estado[8][8]);
float decision_minimax(NODO nodo, char color_computadora, int8_t * f_orig, int8_t * c_orig, int8_t * op_y, int8_t * op_x);
int8_t valida_operador(uint8_t estado[8][8], int8_t pieza, char color, int8_t fila_origen, int8_t columna_origen, int8_t fila_destino, int8_t columna_destino);

#endif

