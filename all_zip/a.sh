#!/bin/bash 
for i in {1..160} 
do 

echo "$i"
wget http://voidrealms.com/downloads/tutorials/qt$i.zip
sleep 1
done

