#include "movement\following.hpp"

void leftFollowing(robot robot){
    do{
        if(!robot.getLeftWall()){
            robot.putarKiri();
        }
        else if (robot.getLeftWall() && robot.getFrontWall()){
            robot.putarKanan();
        }
        robot.maju();
    }
    while(!peta[robot.getLocation().second][robot.getLocation().first].getHome());
}

void rightFollowing(robot robot){
    do{
        if(!robot.getRightWall()){
            robot.putarKanan();
        }
        else if (robot.getRightWall() && robot.getFrontWall()){
            robot.putarKiri();
        }
        robot.maju();
    }
    while(!peta[robot.getLocation().second][robot.getLocation().first].getHome());
}