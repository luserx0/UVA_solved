#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>

using namespace std;




int main(){
    int n, q, i;
    long a;

    string line;
    ifstream indafile;
    indafile.open ("encyin.txt");

    getline(indafile,line);
    sscanf(line.c_str(), "%d %d", &n, &q);

    long pages[n], quests[q];

    for (i=0; i<n; ++i){
        getline(indafile,line);
        a=atoi(line.c_str());
        pages[i] = a;
    }

    for (i=0; i<q; ++i){
        getline(indafile,line);
        a=atoi(line.c_str());
        quests[i] = a;
    }


    ofstream outputit;
    outputit.open("encyout.txt");

    for (i=0; i<q; i++){
        a=quests[i]-1;
        outputit<<pages[a]<<'\n';
    }

    outputit.close();

    return 0;
}

