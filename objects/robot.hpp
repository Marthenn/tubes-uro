#ifndef __ROBOT_HPP__
#define __ROBOT_HPP__

#include <iostream>
#include "library\peta.hpp"
using namespace std;

class robot{
    private:
        string front; // arah hadap robot (atas, kiri, kanan, bawah)
        pair <int, int> location; // posisi robot dalam bentuk pair <x, y>
    public:
        robot();
        robot(string front, pair <int, int>);
        robot(const robot &robot);
        ~robot();

        void putar(string arah);
        void putarKiri();
        void putarKanan();
        void maju();

        string getFront();
        pair <int, int> getLocation();
        bool getFrontWall();
        bool getLeftWall();
        bool getRightWall();
};

#endif