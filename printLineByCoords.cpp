#include <iostream>
#include "stabbingLines.h"
#include <fstream>
using namespace std;
void printLineByCoords(LineId lid, Line linesArray[], const
int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){

for(int i=0;  i<MaxPntsSize; i++){
    for(int j=0; j<MaxLnsSize; j++){
        if (linesArray[j].(p1)== pointsArray[i].(p1)){
            cout<< pointsArray[j].x <<pointsArray[j].y<< linesArray[i].lid;

             }
             if (linesArray[j].(p2)== pointsArray[i].(p2)){
            cout<< pointsArray[j].x <<pointsArray[j].y<< linesArray[i].lid<<endl();

             }

}
}
}

