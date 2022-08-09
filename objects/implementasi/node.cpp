#include "..\node.hpp"

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
node::node(const node &node){
    this->north = node.north;
    this->west = node.west;
    this->east = node.east;
    this->south = node.south;
    this->isRoom = node.isRoom;
    this->isHome = node.isHome;
    this->index = node.index;
}

//destructor kosong
node::~node(){}

//ambil info dinding di sampingnya
bool node::getNorth(){
    return this->north;
}
bool node::getSouth(){
    return this->south;
}
bool node::getEast(){
    return this->east;
}
bool node::getWest(){
    return this->west;
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
void node::setHome(bool isHome){
    this->isHome = isHome;
}

//set room
void node::setRoom(bool isRoom){
    this->isRoom = isRoom;
}

//get index
int node::getIndex(){
    return this->index;
}

//set index
void node::setIndex(int index){
    this->index = index;
}