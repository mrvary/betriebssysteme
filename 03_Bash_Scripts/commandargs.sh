#! /bin/bash

if [ $1 = "--help" ] || [ $1 = "-h" ]
	then
		echo "There is no help available.."
		exit 0
fi

if [ $# = 1 ]
	then 
		echo "Enough arguments"
	else
		echo "Everything fine bro"
fi


