#! /bin/bash

user=$LOGNAME
homedir=/home/$LOGNAME
filecount=$(ls $homedir -la | grep -c ^-)
processcount=$(ps -u $user | grep -c "^[0-9]*")

echo "Files in home directory: $filecount"
echo "Number of current processes: $processcount"

