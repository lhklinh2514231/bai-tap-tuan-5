#include <stdio.h>
int main (){
    int a[100];
    int n;
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        int diachi=i;
        for (int j=i+1;j<n;j++){
            if(a[j]<a[diachi]){
                diachi=j;
            }
        }
            int b=a[diachi];
            a[diachi]=a[i];
            a[i]=b;
        for (int j=0;j<n;j++){
            printf ("%d ",a[j]);
        }
        printf ("\n");
    }
    return 0;
}