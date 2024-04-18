#!/bin/bash

bar=("[/]" "[-]" "[\]" )

copy(){
    Bar &
    pid=$!

    for i in 'seq 1 10'
    do
        sleep 5
    done

    kill $pid
}

Bar(){
    while [ 1 ]
    do
        for i in "${bar[@]}"
    do
        echo -ne "\r$i"
        sleep 0.2
    done
    done
}

copy