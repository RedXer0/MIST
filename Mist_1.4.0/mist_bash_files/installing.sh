#!/bin/bash

loading=("Installing" "iNstalling" "inStalling" "insTalling" "instAlling" "instaLling" "instalLing" "installIng" "installiNg" "installinG")

copy(){
    load &
    pid=$!

    for i in 'seq 1 17'
    do
        sleep 15
    done

    kill $pid
}

load(){
    while [ 1 ]
    do
        for i in "${loading[@]}"
    do
        echo -ne "\r$i"
        sleep 0.2
    done
    done
}

copy