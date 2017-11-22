#! /bin/bash

character=$1
length=$2
restlength=$(($2-1))

if [ $# = 2 ]
	then
		echo "Words starting with $character and of length $length:"
		echo -e $(grep "^$character\\w\{$restlength\}$" /usr/share/dict/words)
	else
		echo "Please provide a Char as first argument and a word-length as second!"
fi


