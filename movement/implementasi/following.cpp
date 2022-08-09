#include "..\following.hpp"

//algoritma following dengan tempel tembok kiri (hanya satu langkah)
void leftFollowing(){
    if(!r.getLeftWall()){
        r.putarKiri();
    }
    else if (r.getLeftWall() && r.getFrontWall() && !r.getRightWall()){
        r.putarKanan();
    }
    else if (r.getFrontWall() && r.getLeftWall() && r.getRightWall()){
        r.putarKiri();r.putarKiri();
    }
    r.maju();
}

//algoritma following dengan tempel tembok kanan (hanya satu langkah)
void rightFollowing(){
    if(!r.getRightWall()){
        r.putarKanan();
    }
    else if (r.getRightWall() && r.getFrontWall() && !r.getLeftWall()){
        r.putarKiri();
    }
    else if (r.getFrontWall() && r.getLeftWall() && r.getRightWall()){
        r.putarKanan();r.putarKanan();
    }
    r.maju();
}