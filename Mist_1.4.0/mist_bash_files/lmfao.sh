#!/bin/bash

lmao=("L    " " M   " "  F  " "   A " "    O" "LMFAO" "     " "LMFAO")

copy(){
    laughing &
    pid=$!

    for i in 'seq 1 5'
    do
        sleep 6
    done

    kill $pid
}

laughing(){
    while [ 1 ]
    do
        for i in "${lmao[@]}"
    do
        echo -ne "\r$i"
        sleep 0.2
    done
    done
}

copy