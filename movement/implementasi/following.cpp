#include "movement\following.hpp"

void putarKiri(robot robot){
    if (robot.getFront() == "atas")robot.putar("kiri");
    else if (robot.getFront() == "kiri")robot.putar("bawah");
    else if (robot.getFront() == "bawah")robot.putar("kanan");
    else robot.putar("atas");
}

void putarKanan(robot robot){
    if (robot.getFront() == "atas")robot.putar("kanan");
    else if (robot.getFront() == "kanan")robot.putar("bawah");
    else if (robot.getFront() == "bawah")robot.putar("kiri");
    else robot.putar("atas");
}

void leftFollowing(const robot&robot){
    
}

void rightFollowing(const robot&robot){

}