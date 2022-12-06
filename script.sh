#!/bin/bash
# A simple Bash script


for i in 7 14 15 16 17 20 21 
do 
	find * -type d -d 0 -name "$i.*" | xargs -p -I % mv "%" Chapter_$i
done
