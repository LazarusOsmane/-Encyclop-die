#TYPE DE DONNEES:
type            example
str             x = "Hello World"
int             x = 20 
float           x = 20.5
complex         x = 1j  
list            x = ["apple", "banana", "cherry"] 
tuple           x = ("apple", "banana", "cherry") 
range           x = range(6)      
dict            x = {"name" : "John", "age" : 36}
set             x = {"apple", "banana", "cherry"}
frozenset       x = frozenset({"apple", "banana", "cherry"})   
bool            x = True    
bytes           x = b"Hello" 
bytearray       x = bytearray(5)
memoryview      x = memoryview(bytes(5))


#VARIABLE:
    
    #CREATION DE VARIABLE:
    a = 5
    b = "hello"

    #OBTENIR LE TYPE D'UNE VARIABLE: type()
    >>> a = 5
    >>> b = "hello"
    >>> print(type(a))
    <class int>
    >>> print(type(b))
    <class str>

    #AFFECTATION MULTIPLE:
    >>> x, y, z = "orange", "banana", "cherry"
    >>> print(x)
    "orange"
    >>> print(Y)
    "banana"
    >>> print(Z)
    "cherry"

    #AFFECTION MULTIPLE POUR UNE UNIQUE VALEUR:
    >>> x = y = z = "Orange"
    >>> print(x)
    "orange"
    >>> print(y)
    "orange"
    >>> print(z)
    "orange"

    #VARIABLE GLOBAL:
        #une variable en dehors d'une function est une variable global sa porter s'entend sur tout le programme.
        #pour la modifier dans une fontion utiliser le mot cles global.
    >>> x = 5
    >>> def modifier_x():
    >>>     global x
    >>>     x = 7
    >>> print(x)
    7

    #CASTING DE VARIABLE:
    >>> a = 5
    >>> b = '8'
    >>> c = 5.7
    >>> float(a)
    >>> int(b)
    >>> str(c)
    a = 5.0
    b = 8
    c = '5.7'
