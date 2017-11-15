#! /bin/bash

while read line 
do 
	echo "Line: $line"
done < $1
