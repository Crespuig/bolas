#ifndef _EVENTOH_
#define _EVENTOH_
#include <QString>

class Evento {
public:
	enum Tipo { colisionBolas, rebote, colisionJugador, pulsacion, pausa};

	Tipo tipo;
	QString nombreEvento;
	int posX,posY;
	int instante;
	int tecla;
	
	QString nombreBola1;
	QString nombreBola2;

	Evento(Tipo t, int x=0, int y=0, int i=-1, QString n1=QString(), QString n2=QString());
	Evento();

};
 
#endif