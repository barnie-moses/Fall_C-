#include<iostream>
#include<cmath>

using namespace std;

double Factorio( int * time, int & ore, double * U238){
    const int orePerCycle = 10;
    const int timePerCycle = 12;
    const double U235PerCycle = 0.007;
    const double U238PerCycle = 0.993;

    int numCycleByTime =(*time)/timePerCycle;
    int numCycleByOre = ore/orePerCycle;

    int NumCycle = min(numCycleByOre,numCycleByTime);

    //remaining time
    *time -= NumCycle * timePerCycle;
    // U238 ores produced
    *U238 += (NumCycle*U238PerCycle);
    // remaining ore
    ore -= NumCycle * orePerCycle;
    return NumCycle * U235PerCycle;

}

int main (){
    int t = 900;
    int r = 45;
    double U = 0;
    int * time{&t};
    int & ore = r;
    double * Uu{&U};

    cout<<Factorio(time,ore,Uu)<<endl;
}