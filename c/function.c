//INTRODUCTION:
//	Une fonction est une suite d'instruction qui peut prendre des data en parametre et qui effectue un ensemble de tache, a la suite de ca elle en sort 
//	un resulta.

//DEMONSTRATION:
//	NOTE:
//		en c tout les programmes on ou moin une fonction de base appeller main. 
//		c'est c'elle ci qui va appeller toutes les autre foncions de notre programme.
//
//		TYPE nom_de_la_fonction(parametre)
//		{
//			instruction;
//			instruction;
//			ect....
//			return (la valeur retourner doit etre de type TYPE);
//		}
//		noter que type peut etre n'importe quoi un (int, char, tableau, pointeur, struture...).

#include <stdio.h>

int number(int a, int b)
{
	return (a + b);
}

// void egale la function ne retourne rien mais les fait quand meme quel que chose. 

void number_two(int a, int b, int c)
{
	a = a + b + c;
	printf("%d", a);
}

int main()
{
	printf("%d\n", number(42, 42));
	number_two(42, 42, 42);
	return (0);
}

//OUTPUT:
//84
//126
