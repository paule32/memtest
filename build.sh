rm -rf .obj
mkdir .obj
cd src
gcc -Wno-write-strings -Isrc -O2 -c TString.cc -o ../.obj/TString.o
gcc -Wno-write-strings -Isrc -O2 -c TDesktop.cc -o ../.obj/TDesktop.o
gcc -Wno-write-strings -Isrc -O2 -c TApplication.cc -o ../.obj/TApplication.o
gcc -Wno-write-strings -Isrc -I -O2 -c start.cc -o ../.obj/start.o
cd ..

gcc -o start .obj/TString.o .obj/TDesktop.o .obj/TApplication.o .obj/start.o -lstdc++
