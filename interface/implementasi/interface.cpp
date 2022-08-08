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
    cout<<"Rute yang diambil oleh robot:\n";
    for (int i = 0; i < path.size()-1; i++){
        cout<<path[i]<<"->";
    }
    cout<<path[path.size()-1]<<endl;
    system("pause");
    cout<<endl;
}

void start(){
    cout<<"Halo, selamat datang pada program hasil cakru 14 KRSRI Programming\n";
    cout<<"Program ini akan mensimulasikan gerak robot\n";
    cout<<"Gerak robot yang disimulasikan akan menggunakan denah KRSRI Nasional 2022\n";
    cout<<"Perlu diperhatikan bahwa robot tidak menggunakan jalur yang paling optimal\n";
    system("pause");
    cout<<"Mohon masukkan home yang akan digunakan (l/r): ";
    cin>>home;

    if(home == 'l'){
        //set initial values
        r.setLocation({2,0});
        n3.setHome(true);
        n6.setRoom(true);
    }
    else{
        //set initial values
        r.setLocation({2,8});
        n29.setHome(true);
        n26.setRoom(true);
    }

    cout<<"\nKondisi awal:\n";
    printMap();
}

void jalan(robot robot){
    do{
        path.push_back(peta[r.getLocation().second][r.getLocation().first].getIndex());
        if(back_home)rightFollowing(robot);
        else leftFollowing(robot);
        printMap();
    }
    while(peta[r.getLocation().second][r.getLocation().first].getHome());
}

void selesai(){
    printPath();
    cout<<"Terima kasih telah menggunakan program ini\n";
    system("pause");
}