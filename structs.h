// Declaração das estruturas
typedef struct {
	float x; // Float porque pode ser 13,2
	float y; // Float porque pode ser 13,2
} Coordenadas;

typedef struct {
	int id;	// Inteiro porque não existe ids com casas decimais
	int tipo; // 1 - papelão, 2 - vidrão, 3 - oleão, escolhemos usar números para ficar mais facil a manipulação
	float capacidadeAtual; // Float porque pode ser 13,2
	Coordenadas coordenadas; // Criamos um tipo para ficar mais organizado
} Ecoponto;
