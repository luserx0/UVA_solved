#include <fstream>
#include <iostream>
#include <vector>
#include <stdlib.h> //atoi,atol,atoll

using namespace std;

int main(){

    int i;

    string line;
    ifstream infile;
    infile.open ("listin.txt");
    getline(infile,line);
    long f = atol(line.c_str());

    vector <long> flist(1001);
    for (i=0; i<f; i++){
        getline(infile,line);
        int a,b;
        sscanf(line.c_str(), "%d %d", &a, &b);
        flist[a]++;
        flist[b]++;
    }

    int maxf  = 0;
    for (i=0; i<1001; i++){
        if (flist[i] > maxf) { maxf = flist[i]; }
    }

    ofstream output;
    output.open("listout.txt");

    for(i=0; i<1001; i++){
        if (flist[i] == maxf) {output<<i<<'\n';}

    }

    output.close();
    infile.close();



    return 0;
}
