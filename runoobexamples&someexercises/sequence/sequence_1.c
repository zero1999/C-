#include <stdio.h>

//输入三个整数x,y,z，请把这三个数由小到大输出。
//利用冒泡排序

int main(int argc, char *argv[]) {
    int x,y,z;
    int arr[3];
    int i,j;
    int t=0;
    printf("\n请输入三个数字:\n");
    scanf("%d%d%d",&x,&y,&z);
    arr[0] = x;
    arr[1] = y;
    arr[2] = z;
    //获取数组长度  这里完全没必要这样做，只是好奇怎么获取c的数组长度
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(arr[i] > arr[j]){
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("从小到大排序: \n");
    for(i=0;i<len;i++){
        printf("%d\n",arr[i]);
    }
}