//INTRODUCTION:
//	Une varaible est une information stocker a emplacement memoire dans la ram (la stack).
//	Une variable a un nom est une valeur. On dit variable car cette valeur peut changer au cour du programe

//TYPE DE DONNEES:
//	char 
// 	signed char	
// 	unisigned char

// 	short 
// 	short int 
// 	signed short 
// 	signed short inr 

// 	int 
// 	signed 
// 	signed int
// 	unsigned
//	unsigned int
//
//	long
//	signed long
//	unsigned long
//
//	long long
//	signed long long
//	unsigned long long
//
//	float 
//
//	double double float
//
//	long double bouble float 

//DEMONSTRATION

#include <stdio.h>

int	main(void)
{
	char		var;
	signed char	sc;
	unsigned char 	uc;
	short		shr;
	int		num;
	signed int	si;
	unsigned int 	ui; 
	long		lon;
        float		flt;
	double		dbl;

	var = 'a';
	sc = 'b';
	uc = 'c';
	shr = 32000;
	num = -2147483647;
	si = 42.42;
	ui =  -21474836;
	lon =  2147483650;
	flt = 4.2;
	dbl = 42.42;

	printf("size in octet of char		%ld\n" , sizeof(var));
	printf("size in octet of unsigned char	%ld\n" , sizeof(uc));	
	printf("size in octet of signed char	%ld\n\n" , sizeof(sc));	
	printf("size in octet of short		%ld\n\n" , sizeof(shr));	
	printf("size in octet of int		%ld\n" , sizeof(num));
	printf("size in octet of unsigned int	%ld\n" , sizeof(ui));	
	printf("size in octet of signed int	%ld\n\n" , sizeof(si));	
	printf("size in octet of float		%ld\n" , sizeof(flt));
	printf("size in octet of long		%ld\n" , sizeof(lon));	
	printf("size in octet of double		%ld\n" , sizeof(dbl));	
	return (0);
}

//OUTPUT:
//size in octet of char           1
//size in octet of unsigned char  1
//size in octet of signed char    4
//size in octet of short          2

//size in octet of int            4
//size in octet of unsigned int   4
//size in octet of signed int     4

//size in octet of float          4
//size in octet of long           8
//size in octet of double         8
