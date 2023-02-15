#!/bin/bash
if [ -z "$1" ]
then
	echo "Destination not set"
	exit 1
fi
if [ -z "$2" ]
then 
	echo "Contents not set"
	exit 1
fi

echo $1
echo $2

mkdir -p $(dirname ${1})
echo $2 > ${1}

