#include <iostream>
#include "stabbingLines.h"
#include <fstream>

using namespace std;

void readPoints(ifstream& inPutPointFile, Point pointsArray[],
const int MaxPntsSize, int& numPoints){

if (inPutPointFile.is_open()){
        int i=0;

    while(! inPutPointFile.eof()){
            inPutPointFile >> pointsArray[i].Pid >>pointsArray[i].x >> pointsArray[i].y
            i++;
}
}
inPutPointFile.close();
}
