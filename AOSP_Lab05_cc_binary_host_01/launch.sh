#!/bin/bash

# Get the TCP ports starting with '65' used for 0.0.0.0
ports=$(netstat -tuln | awk '/0.0.0.0/ && $4 ~ /^0.0.0.0:65/{split($4, a, ":"); print a[2]}')

ines=1

if [ -n "$ports" ]; then
    for a in 1 2 3 4 5 6 7 8 9 10
    do
    ines=$a
    for port in $ports; do
        aux=$((ines+6519))  # Corrected the syntax for arithmetic operation
        if [ $aux == $port ]; then  # Corrected syntax for comparison and added missing '$' before 'port'
            ((ines++))  # Corrected syntax for incrementing
        fi
    done
    if [ $ines == $a ]; then 
    	break
    fi
    done
else
    echo " "
fi

echo "LAUNCH INSTANCE NUM $ines"
launch_cvd --base_instance_num="$ines"

