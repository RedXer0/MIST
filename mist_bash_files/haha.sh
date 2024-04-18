#!/bin/bash

ha=("HAha" "haHA")

copy(){
    laugh &
    pid=$!

    for i in 'seq 1 5'
    do
        sleep 3
    done

    kill $pid
}

laugh(){
    while [ 1 ]
    do
        for i in "${ha[@]}"
    do
        echo -ne "\r$i"
        sleep 0.2
    done
    done
}

copy