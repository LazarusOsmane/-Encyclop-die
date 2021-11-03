#!usr/bin/env python3

import socket

def main():
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    print(type(s))
main()
