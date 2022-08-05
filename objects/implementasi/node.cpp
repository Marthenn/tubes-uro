#include "objects\node.hpp"

//default constructor
node::node(){
    north = true;
    west = true;
    east = true;
    south = true;
    isRoom = false;
    isHome = false;
    index = 0;
}

//user defined constructor
node::node(bool north, bool west, bool east, bool south, bool isRoom, bool isHome, int index){
    this->north = north;
    this->west = west;
    this->east = east;
    this->south = south;
    this->isRoom = isRoom;
    this->isHome = isHome;
    this->index = index;
}

//copy constructor dengan merubah index
node::node(const node &node, int index){
    this->north = node.north;
    this->west = node.west;
    this->east = node.east;
    this->south = node.south;
    this->isRoom = node.isRoom;
    this->isHome = node.isHome;
    this->index = index;
}

//destructor kosong
node::~node(){}

//ambil info dinding di sampingnya
bool node::getWall(){
    bool wall[4];
    wall[0] = north;
    wall[1] = west;
    wall[2] = east;
    wall[3] = south;
    return wall;
}

//cek room
bool node::getRoom(){
    return isRoom;
}

//cek home
bool node::getHome(){
    return isHome;
}

//set home
bool node::setHome(bool isHome){
    this->isHome = isHome;
}

//set room
bool node::setRoom(bool isRoom){
    this->isRoom = isRoom;
}

//get index
int node::getIndex(){
    return this->index;
}

//set index
int node::setIndex(int index){
    this->index = index;
}