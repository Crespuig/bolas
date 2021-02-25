#include "evento.h"

Evento::Evento( Tipo t, int x, int y, int i, QString n1, QString n2):
	tipo(t), posX(x),posY(y),instante(i),nombreBola1(n1),nombreBola2(n2) {


	tecla=-1;

}

Evento::Evento(){
	
}