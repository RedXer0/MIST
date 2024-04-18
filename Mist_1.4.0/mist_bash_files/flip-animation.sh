#!/bin/bash

coin=("0" "—" "0" "—" "0" "—")

copy(){
    flip &
    pid=$!

    for i in 'seq 1 10'
    do
        sleep 5
    done

    kill $pid
}

flip(){
    while [ 1 ]
    do
        for i in "${coin[@]}"
    do
        echo -ne "\r$i"
        sleep 0.2
    done
    done
}

copy