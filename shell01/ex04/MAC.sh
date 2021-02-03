#!/bin/bash
ifconfig | grep 'ether*' | sed  -e 's/\(\tether \)//g' | tr -d ' $' 

#grep todo lo que contenga ether. s = sustituye.  \( valida el paréntesis.  '.ether ' string a cambiar (todo lo que precede a ether + ether + un espacio). // (string de sustitución NINGUNA). g = global aplica a todos los casos, no solo al priero que se encuentre. 
