#!/bin/zsh

cmake . -Bbuild -Wdev -Werror=dev && cmake --build ./build -j$(nproc)

cp ./build/client/client ./uTracker
cp ./build/server/server ./uTracker_server
