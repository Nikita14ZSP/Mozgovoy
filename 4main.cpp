#include <stdio.h>
#include <algorithm> 
using namespace std;

int x[100];
void Partitions(int p, int max, int n){
  int i;
  if (!n)
  {
    printf("%d", x[0]);
    for (i = 1; i < p; i++) 
    printf(" %d",x[i]);
    printf("\n");
  } 
  else
    for (i = 1; i <= min(max,n); i++){
    x[p] = i;
    Partitions(p+1,i,n-i);
    }

}
int main(){
    int a;
    scanf("%d",&a); 
    Partitions(0,a,a);
}