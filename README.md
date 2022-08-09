# Tugas Besar Divisi Programming KRSRI 2022

## Deskripsi
Penugasan ini memfokuskan pada pemahaman mengenai algoritma maze solving, tepatnya adalah left-wall following dan right-wall following. Oleh karena itu, pada kesempatan ini program tidak dibuat mencari solusi optimal dengan algoritma lain seperti bfs karena memfokuskan pada wall-following algorithm.

## Panduan
Terdapat beberapa file maupun folder yang digunakan:
1. `main.cpp`, berisi implementasi main program.
2. `interface`, berisi implementasi fungsi-fungsi yang berhubungan dengan berjalannya program.
3. `library`, berisi data-data yang digunakan seperti peta maze.
4. `movement`, berisi implementasi fungsi-fungsi yang berhubungan dengan algoritma wall-following.
5. `objects`, berisi implementasi dari class robot dan node pad program.

## Cara menjalankan program
1. Compile program dengan cara menjalankan command:
```
g++ -o main main.cpp interface\implementasi\interface.cpp movement\implementasi\following.cpp objects\implementasi\node.cpp objects\implementasi\robot.cpp library\implementasi\data.cpp library\implementasi\peta.cpp
```
2. Jalankan executable program dengan cara menjalankan command:
```
.\main
```