#ifndef __INTERFACE_HPP__
#define __INTERFACE_HPP__

#include "..\library\data.hpp"
#include "..\library\peta.hpp"
#include "..\objects\robot.hpp"

/**
 *menampilkan posisi peta sekarang
 */
void printMap();

/**
 *menampilkan jalur yang diambil robot
 */
void printPath();

/**
 *menampilkan pesan awal
 */
void start(){
    cout<<"Halo, selamat datang pada program hasil cakru 14 KRSRI Programming\n";
    cout<<"Program ini akan mensimulasikan gerak robot\n";
    cout<<"Gerak robot yang disimulasikan akan menggunakan denah KRSRI Nasional 2022\n";
    cout<<"Perlu diperhatikan bahwa robot tidak menggunakan jalur yang paling optimal\n";
    system("pause");
}

/**
 *menjalankan robot dengan left dan right following secara beruntun dengan tetap memperhatikan aspek CLI
 */
void jalan(robot robot){
    
}

#endif