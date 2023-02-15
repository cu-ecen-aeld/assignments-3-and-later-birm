#!/bin/bash
if [ -z "$1" ]
then
	echo "Dir not set"
	exit 1
fi
if [ -z "$2" ]
then 
	echo "Search not set"
	exit 1
fi

Y=$(find $1 -name "*$2*" -print | wc -l)
X=$(ls -1 $1 | wc -l)
echo "The number of files are ${X} and the number of matching lines are ${Y}" 
