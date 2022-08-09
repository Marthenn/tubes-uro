#ifndef __NODE_HPP__
#define __NODE_HPP__

#include <iostream>
using namespace std;

class node{
    private:
        bool north, west, east, south; //posisi dinding di sampingnya
        bool isRoom, isHome; //apakah node dalam room atau home
        int index; //indeks node
    public:
        //default constructor
        node();
        
        //user defined constructor
        node(bool north, bool west, bool east, bool south, bool isRoom, bool isHome, int index);

        //copy constructor dengan merubah index
        node(const node &node);

        //destructor
        ~node();

        //ambil info dinding di sampingnya
        bool getNorth();
        bool getSouth();
        bool getWest();
        bool getEast();

        //cek room;
        bool getRoom();

        //cek home;
        bool getHome();

        //ubah status home
        void setHome(bool isHome);

        //ubah status room
        void setRoom(bool isRoom);

        //dapatkan index node skrg
        int getIndex();

        //ubah index node
        void setIndex(int index);
};

#endif