//INTRODUCTION:
//	Une varaible static est une variable qui conserve ca valeur en memoire meme apres un retour de fonction. 
//	Elle n'est pas reinitialisees apres un nouvelle l'appele de fonction. la valeur de la variable persiste en memoire jusqu'a la fin du programe.

//DEMONSTRATION:
//	Notez que les variables statiques sont automatiquement initialisées à 0 si nous ne les initialisons pas explicitement.

#include <stdio.h>

int	function(void)
{
	static int	n;

	n++;
	return (n);
}

int	function_two(void)
{
	static int	n;

	if (++n < 10)
		function_two();
	return (n);
}

int	main(void)
{
	printf("%d\n", function());
	printf("%d\n", function());
	printf("%d\n", function());
	printf("%d\n", function());
	printf("%d", function_two());
	return (0);
}

//OUTPUT:
//	1
//	2
//	3
//	4    
//	10
