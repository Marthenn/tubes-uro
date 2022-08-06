#include "objects\robot.hpp"

//default constructor
robot::robot(){
    front = "atas"; //default menghadap ke atas
    location = {0, 0}; //default posisi robot di kiri atas
}

//user defined constructor
robot::robot(string front, pair <int,int> location){
    this->front = front;
    this->location = location;
}

//copy constructor
robot::robot(const robot &robot){
    this->front = robot.front;
    this->location = robot.location;
}

//destructor kosong
robot::~robot(){
}

//ubah arah gerak
void robot::putar(string arah){
    this->front = arah;
}

//putar robot ke kiri
void robot::putarKiri(){
    if (this->getFront() == "atas")this->front="kiri";
    else if (this->getFront() == "kiri")this->front="bawah";
    else if (this->getFront() == "bawah")this->front="kanan";
    else this->front="atas";
}

//putar robot ke kanan
void robot::putarKanan(){
    if (this->getFront() == "atas")this->front="kanan";
    else if (this->getFront() == "kanan")this->front="bawah";
    else if (this->getFront() == "bawah")this->front="kiri";
    else this->front="atas";
}

//robot bergerak maju sesuai arah hadapny
void robot::maju(){
    if (this->front == "atas"){
        this->location.second--;
    }
    else if (this->front == "bawah"){
        this->location.second++;
    }
    else if (this->front == "kiri"){
        this->location.first--;
    }
    else{
        this->location.first++;
    }
}

string robot::getFront(){
    return this->front;
}

pair <int, int> robot::getLocation(){
    return this->location;
}

bool robot::getFrontWall(){
    if (this->getFront()=="atas"){
        return peta[this->getLocation().second][this->getLocation().first].getNorth();
    }
    else if (this->getFront()=="bawah"){
        return peta[this->getLocation().second][this->getLocation().first].getSouth();
    }
    else if (this->getFront()=="kiri"){
        return peta[this->getLocation().second][this->getLocation().first].getWest();
    }
    else{
        return peta[this->getLocation().second][this->getLocation().first].getEast();
    }
}

bool robot::getLeftWall(){
    if (this->getFront()=="kanan"){
        return peta[this->getLocation().second][this->getLocation().first].getNorth();
    }
    else if (this->getFront()=="kiri"){
        return peta[this->getLocation().second][this->getLocation().first].getSouth();
    }
    else if (this->getFront()=="atas"){
        return peta[this->getLocation().second][this->getLocation().first].getWest();
    }
    else{
        return peta[this->getLocation().second][this->getLocation().first].getEast();
    }
}

bool robot::getRightWall(){
    if (this->getFront()=="kiri"){
        return peta[this->getLocation().second][this->getLocation().first].getNorth();
    }
    else if (this->getFront()=="kanan"){
        return peta[this->getLocation().second][this->getLocation().first].getSouth();
    }
    else if (this->getFront()=="bawah"){
        return peta[this->getLocation().second][this->getLocation().first].getWest();
    }
    else{
        return peta[this->getLocation().second][this->getLocation().first].getEast();
    }
}