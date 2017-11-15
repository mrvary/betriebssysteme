#! /bin/bash

# copy passwd-file to directory
# cp /etc/passwd ./passwd

# variable for filename
# weekday=$(date +%A)-passwd
weekNumber="$(date +%U)-passwd"

# get usernames, sort them and output them into a file
cut -d ':' -f 1 /etc/passwd | sort > $weekNumber
#result=$(grep ^[a-zA-Z_-]* /etc/passwd >> "$filename")
