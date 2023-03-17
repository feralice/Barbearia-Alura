#include <stdio.h>

int mdc(int x, int y, int z){
    if(y==0 || z==0)
        return x;
    else
        return mdc(y,x%z);
}
int main(){
    int x, y, z;
    printf("Digite os numeros: ");
    scanf("%d%d%d\n", &x, &y, &z);
    printf("O mdc de %d, %d e %d = %d", x, y, z, mdc((x,y),z));
    return 0;
}#include <stdio.h>

int mdc(int x, int y, int z){
    if(y==0 || z==0)
        return x;
    else
        return mdc(y,x%z);
}
int main(){
    int x, y, z;
    printf("Digite os numeros: ");
    scanf("%d%d%d\n", &x, &y, &z);
    printf("O mdc de %d, %d e %d = %d", x, y, z, mdc((x,y),z));
    return 0;
}