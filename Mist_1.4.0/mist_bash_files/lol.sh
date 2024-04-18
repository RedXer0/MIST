#!/bin/bash

lol=("LOL" "   " "LOL")

copy(){
    laugh &
    pid=$!

    for i in 'seq 1 5'
    do
        sleep 6
    done

    kill $pid
}

laugh(){
    while [ 1 ]
    do
        for i in "${lol[@]}"
    do
        echo -ne "\r$i"
        sleep 0.2
    done
    done
}

copy