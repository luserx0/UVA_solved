#include <cstdio>
#include <vector>
using namespace std;

    int n, k, carriage, Swaps;
    int i, j, x, y;
    vector <int> trains;

void Bubble(){
    Swaps=0;
    for (x=0; x<k; x++){
        for(y=0; y<k-1; y++){
            if(trains[y] > trains[y+1]){
                swap(trains[y],trains[y+1]);
                Swaps++;
            }
        }
    }
}


int main(){

    //freopen("trainSwap.txt","r",stdin);

    scanf("%d\n", &n);

    for (i=0; i<n; i++) {

        scanf("%d\n", &k);

        for(j=0; j<k; j++) {
            scanf("%d", &carriage);
            trains.push_back(carriage);
        }
        Bubble();
        trains.clear();
        printf("Optimal train swapping takes %d swaps.\n", Swaps);
    }




    return 0;
}
