#include <iostream>
#include "stabbingLines.h"
#include <fstream>
using namespace std;

void getStabbedLines (const int xcoord, Line linesArray[], const
int MaxLnsSize, const int NumLines, Point pointsArray[],
const int MaxPtsSize, Line stabbedLines[],
const int MaxStbSize, int& NumOfStbLines){
int Lx1, Lx2;

for(int i=0;  i<MaxPntsSize; i++){
    for(int j=0; j<MaxLnsSize; j++){
        if (linesArray[j].(p1)== pointsArray[i].(p1)){
            cout<< pointsArray[j].x <<pointsArray[j].y<< linesArray[i].lid;
                Lx1=pointsArray[j].x;
             }
             if (linesArray[j].(p2)== pointsArray[i].(p2)){
            cout<< pointsArray[j].x <<pointsArray[j].y<< linesArray[i].lid<<endl();
                Lx2=pointsArray[j].x;
             }

}
if(Lx2>=xcoord ){
    if(Lx1<=xcoord){
            staabbedLines[i]=linesArray[i];

    }
}
}


}
