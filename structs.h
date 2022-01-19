// Declara��o das estruturas
typedef struct {
	float x; // Float porque pode ser 13,2
	float y; // Float porque pode ser 13,2
} Coordenadas;

typedef struct {
	int id;	// Inteiro porque n�o existe ids com casas decimais
	int tipo; // 1 - papel�o, 2 - vidr�o, 3 - ole�o, escolhemos usar n�meros para ficar mais facil a manipula��o
	float capacidadeAtual; // Float porque pode ser 13,2
	Coordenadas coordenadas; // Criamos um tipo para ficar mais organizado
} Ecoponto;
