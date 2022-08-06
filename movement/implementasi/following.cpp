#include "movement\following.hpp"

//algoritma following dengan tempel tembok kiri (hanya satu langkah)
void leftFollowing(robot robot){
    if(!robot.getLeftWall()){
        robot.putarKiri();
    }
    else if (robot.getLeftWall() && robot.getFrontWall()){
        robot.putarKanan();
    }
    robot.maju();
}

//algoritma following dengan tempel tembok kanan (hanya satu langkah)
void rightFollowing(robot robot){
    if(!robot.getRightWall()){
        robot.putarKanan();
    }
    else if (robot.getRightWall() && robot.getFrontWall()){
        robot.putarKiri();
    }
    robot.maju();
}