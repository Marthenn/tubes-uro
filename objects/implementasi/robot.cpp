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

bool getFrontWall(){
}

bool getLeftWall(){

}

bool getRightWall(){

}