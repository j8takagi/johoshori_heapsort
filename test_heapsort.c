#include <stdio.h>

void makeHeap(int data[], int heap[], int hnum);

void heapSort(int data[], int heap[], int hnum);

void downHeap(int heap[], int hlast);

void printarray(int data[], int cnt)
{
    for(int i = 0; i < cnt; i++) {
        if(i > 0) {
            printf(" ");
        }
        printf("%d", data[i]);
    }
    printf("\n");
}

int main(void) {
    int cnt = 7;
    int testdata[] = {60, 10, 20, 45, 5, 15, 30};
    int testdata2[cnt];
    int heapdata[cnt];
    int sortdata[cnt];

    printf("Test data: ");
    printarray(testdata, cnt);

    for(int i = 0; i < cnt; i++) {
        testdata2[i] = testdata[i];
    }
    downHeap(testdata2, cnt-1);
    printf("Test data2: ");
    printarray(testdata2, cnt);

    makeHeap(testdata, heapdata, cnt);
    printf("Heap data: ");
    printarray(heapdata, cnt);

    heapSort(testdata, sortdata, cnt);
    printf("Sort data: ");
    printarray(sortdata, cnt);
}
