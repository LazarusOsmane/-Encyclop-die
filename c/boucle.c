//INTRODUCION:
//	Les boucle sont utiliser quand nous voulons excuter un block d'instruction plusieur fois.
//	Une boucle a besoin d'une condition, tant que celle ci sera vrais le block d'instruction voulue s'excutera

//DEMONSTRATION

#include <stdio.h>

void function(void)
{
	int	n;

// boucle while 
	n = 0;
	while (n++ < 5)
		printf("hello world\n");

// boucle for
	for (n = 0; n < 5; n++)
		printf("hello le monde\n");	

// boucle do while
	n = 0;
	do
		printf("hello la terre\n");
	while (n++ < 4);
}

int	main(void)
{
	function();
	return (0);
}

//OUTPUT:
//	hello world
//	hello world
//	hello world
//	hello world
//	hello world
//	hello le monde
//	hello le monde
//	hello le monde
//	hello le monde
//	hello le monde
//	hello la terre
//	hello la terre
//	hello la terre
//	hello la terre
//	hello la terre
