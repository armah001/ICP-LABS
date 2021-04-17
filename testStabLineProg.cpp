#include <iostream>
#include "stabbingLines.h"
#include <fstream>
using namespace std;

int main(){
ifstream.inputPointfile("points.txt");
Point pointsArray[8];
int MaxPntsSize=8;
int numPoints=24;

ifstream.inputLinefile("lines.txt");

Line linesArray[5];
int MaxLnsSize=8;
int numLines=5;


Line linesArray[10];
const int MaxLnsSize=10;
  const int MaxPntsSize=10;
 Point pointsArray[MaxPntsSize];


 Line stabbedLines[10];
const int MaxStbSize=10;
 int NumOfStbLines=10;

 readPoints(inputPointfile, pointsArray,MaxPntsSize);
 readLines(inputLinefile,linesArray[], MaxLnSize, numLines);

printLineByCoords(Lid, linesArray][], MaxLnSize, pointsArray[], MaxPntsSize);
getStabbedLines(xcoord, linesArray[], MaxLnSize, NumLines, pointsArray[],
                MaxPtSize, stabbedLines[], MaxStbSize, NumOfStbLines);






























}
