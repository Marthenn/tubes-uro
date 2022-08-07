#ifndef __DATA_HPP__
#define __DATA_HPP__

#include "dataNode.hpp"
#include "..\objects\robot.hpp"
#include <vector>

//apakah robot sudah pernah kembali ke home
bool back_home = 0;

//jalur yang digunakan robot
vector<int> path;

//data robot
robot r;

#endif