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
void start();

/**
 *menjalankan robot dengan left dan right following secara beruntun dengan tetap memperhatikan aspek CLI
 *@param robot robot yang akan dijalankan
 */
void jalan(robot robot);

#endif