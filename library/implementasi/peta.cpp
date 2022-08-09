#include "..\peta.hpp"

//Pendefinisian Peta
const int width = 9;
const int height = 4;
node peta[4][9] = {
    {node(true, true, true, false, false, false,1), node(true, true, true, false, false, false,8), node(true, true, true, false, false, false,9), node(), node(), node(), node(true, true, true, false, false, false,23), node(true, true, true, false, false, false,24), node(true, true, true, false, false, false,31)},
    {node(false, true, false, false, false, false,2), node(false, false, false, false, false, false,7), node(false, false, false, false, false, false,10), node(true, false, false, false, false, false, 15), node(false, false, false, false, false, false, -1), node(true, false, false, false, false, false, 16), node(false, false, false, false, false, false,22), node(false, false, false, false, false, false,25), node(false, false, true, false, false, false,30)},
    {node(false, true, true, false, false, false,3), node(false, true, true, true, false, false,6), node(false, true, true, false, false, false,11), node(false, true, true, false, false, false,14), node(), node(false, true, true, false, false, false,17), node(false, true, true, false, false, false,21), node(false, true, true, true, false, false,26), node(false, true, true, false, false, false,29)},
    {node(false, true, false, true, false, false,4), node(true, false, false, true, false, false,5), node(false, false, true, true, false, false, 12), node(false, true, false, true, false, false,13), node(true, false, false, true, true, false, 19), node(false, false, true, true, false, false, 18), node(false, true, false, true, false, false,20), node(true, false, false, true, false, false,27), node(false, false, true, true, false, false, 28)},
};

// node dengan indeks 0 berarti kosong
// node dengan indeks -1 berarti transisi (tidak dianggap)