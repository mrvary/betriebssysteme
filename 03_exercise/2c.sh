#! /bin/bash

character=$1
length=$2
restlength=$(($2-1))

if [ $# = 2 ]
	then
		echo "words starting with $character and of length $length"
		echo $(grep "^$character.\{$restlength\}$" /usr/share/dict/words)
	else
		echo "Please provide a Char as first argument and a word-length as second!"
fi


