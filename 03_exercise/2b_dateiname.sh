#! /bin/bash

dateiname=$(echo $1 | grep -o "[a-z]*$")
dateiname2=$($1##*/)
echo "Der Dateiname ist: ${dateiname}"
echo "Der Dateiname ist: ${dateiname2}"
