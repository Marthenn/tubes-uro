#include "..\interface.hpp"

void printMap(){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (r.getLocation().first==j && r.getLocation().second==i){
                cout<<"R ";
            }
            else if (peta[i][j].getHome()){
                cout<<"H ";
            }
            else if (peta[i][j].getRoom()){
                cout<<"X ";
            }
            else{
                cout<<peta[i][j].getIndex()<<" ";
            }
        }
        cout<<endl;
    }
    cout<<"Legenda:\n R = Robot\n H = Home\n X = Room\n"<<endl;
}

void printPath(){
    cout<<"Jalur yang ditempuh:\n";
    for (int i = 0; i < path.size(); i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}