#include <cstdio>
#include <iostream>

using namespace std;

#define MAXN 1000008

struct bool_arr{
      
   long number;
   bool state = true;
};

int main(){
   
   freopen("testcases/efimerides.in34", "r", stdin);
   //freopen("efimerides.out", "w", stdout);

   long N, K, max=0;
   scanf("%ld %ld", &N, &K);
   
   long map[ N ];
   
   for( long i = 0; i < N; ++i ){

      scanf("%ld", &map[ i ] );
      //cout << map[i].state  <<'\n';
   }
   
   
   if( N % K == K-1 ){ //special case
      
      for( long i = 0; i < N; ++i ){
         max += map[i];
      }
   }   
   else{   
      
      for( long i = 0; i < K; ++i ){
      
         long sum=0;
         long j = i;
         bool state[ N ];

         while( !(state[j]) ){
        
            sum += map[j];
            state[j] = true;

            j = (j + K) % N;
            //cout << map[j] << " " << j <<" " << i << '\n';

         }
         
         if( sum > max )
            max = sum;
      }
   }

   
   printf("%lld\n", max);

   return 0;
}
