typedef struct Monedero {
	int cantidadVeinteMil;
	int cantidadDiezMil;
	int cantidadCincoMil;
	int cantidadDosMil;
	int cantidadUnMil;
	int cantidadQuinintos;
	int cantidadCien;
	int cantidadCincuenta;
	int cantidadDiez;
} Monedero;

Monedero monedero = { 0, 0, 0, 0, 0, 0, 0, 0, 0};

typedef struct Solucion {
    int VeinteMil;
	int DiezMil;
	int CincoMil;
	int DosMil;
	int UnMil;
	int Quinintos;
	int Cien;
	int Cincuenta;
	int Diez;
	bool esSolucion;
} Solucion;
