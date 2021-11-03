//INTRODUCTION:
//	Les tableaux sont une suite de variables de même type, situées dans un espace contigu en mémoire. 
//	cette espace contigu et enfaite une suite d'adresse memoire qui ce suivent les une apres les autres.
//	chaque addresse ne peut contenir qu'un meme type de donnee.

//DEMONSTRATION
//	NOTE:
//		Les string sons des tableaux de charactere.
#include <stdio.h>

void	function(void)
{
	int	n;
	char	tab[13] = "hello world\n";
	int	num[12];

	for (n = 0; n <= 12; n++)
		printf("%d\n", num[n] = n);
	n = 0;
	while (tab[n])
		printf("%c", tab[n++]);
}

// dans la nouvelle version de C la version C99 la declaration de tableaux dynamique est autorise, mais attention des compilateur de version moin recente comme
// la version C89 refuse ce genre de pratique. Dans l'absolue il deconseille de proceder de la sorte privilégier toujour l'allocation dynamique.
 
void	function_two(void)
{
	int n = 7;
	char tab[n] = "salut\n";

	n = 0;
	while (tab[n])
		printf("%c", tab[n++]);
}

int main(void)
{
	function();
	function_two();
	return (0);
}

//OUTPUT:
//	0
//	1
//	2
//	3
//	4
//	5
//	6
//	7
//	8
//	9
//	10
//	11
//	12
//	hello world
//	salut% 
