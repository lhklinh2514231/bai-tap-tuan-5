#include <stdio.h>
int main (){
    int a[100];
    int n;
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
    for (int i=0;i<n-1;i++){
        int k=i;
        for (int j=i+1;0<j;j--){
            if (a[j]<a[k]){
                int b=a[j];
                a[j]=a[k];
                a[k]=b;
            }
            k--;
        }
        for (int j=0;j<n;j++){
            printf ("%d ", a[j]);
        }
        printf ("\n");
    }
    return 0;
}