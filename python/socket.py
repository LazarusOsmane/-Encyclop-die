#INTRODUCTION:
    #Interface de connexion qui permet de creer une connecion distante avec le service specifique d'une machine.

#LIBRARY:
    import socket

#FAMILLE D'ADRESSE:
    socket.AF_INET  #ipv4
    socket.AF_INET6 #ipv6
    socket.AF_UNIX  #permet de comuniquer entre les processus d'une meme machine

#TYPE DE SOCKET:
    socket.SOCK_STREAM #socket TCP
    socket.SOCK_DGRAM  #socket UDP

#CREER UN SOCKET: socket.socket(famille_dadresses, type_de_socket, protocol)
    s = socket.socket(socket.AF_INIT, socket.SOCK_STREAM, 0)
    #RETOUR 

#SE CONNECTER A UN SOCKET: connect()


