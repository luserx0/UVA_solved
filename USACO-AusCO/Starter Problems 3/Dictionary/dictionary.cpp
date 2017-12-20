#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int d, w, i, j;
    long a;

    string liney;
    ifstream ifiley;
    ifiley.open("dictin.txt");

    getline(ifiley,liney);
    sscanf(liney.c_str(), "%d %d", &d, &w);

    long Integerlandese[d], Wholenumberlandese[d],
        Queries[w];
    for (i=0; i<d; ++i){
        getline(ifiley,liney);
        long a, b;
        sscanf(liney.c_str(), "%d %d", &a, &b);
        Integerlandese[i] = a;
        Wholenumberlandese[i] = b;
    }

    for (i=0; i<w; ++i){
        getline(ifiley,liney);
        a = atol(liney.c_str());
        Queries[i] = a;
    }


    ofstream ofiley;
    ofiley.open("dictout.txt");

    for (i=0; i<w; ++i) {
        int found = 0;
        a = Queries[i];
        for (j=0; j<d; ++j) {
            if (Integerlandese[j] == a){
                ofiley << Wholenumberlandese[j] << '\n';
                found = 1;
            }
        }
        if (found == 0)
           ofiley <<  "C?"<< '\n';
    }

    ofiley.close();
    ifiley.close();

    return 0;
}
