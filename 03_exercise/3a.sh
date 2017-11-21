#! /bin/bash

temp=$(($1%2))
if [ $temp  = 0 ]
	then 
		echo "even"
	else
		echo "odd"
fi
