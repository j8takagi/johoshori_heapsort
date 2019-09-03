void swap(int heap[], int i, int j)
{
    int tmp;
    tmp = heap[i];
    heap[i] = heap[j];
    heap[j] = tmp;
}

int lchild(int i) {
    return (2 * i + 1);
}

int rchild(int i) {
    return (2 * i + 2);
}

int parent(int i) {
    return ((i - 1) / 2);
}

void makeHeap(int data[], int heap[], int hnum)
{
    int i;
    int k;

    for(i = 0; i < hnum; i++) {
        heap[i] = data[i];
        k = i;
        while(k > 0) {
            if(heap[k] > heap[parent(k)]) {
                swap(heap, k, parent(k));
                k = parent(k);
            } else {
                break;
            }
        }
    }
}

void downHeap(int heap[], int hlast)
{
    int n;
    int tmp;

    n = 0;
    while(lchild(n) <= hlast) {
        tmp = lchild(n);
        if(rchild(n) <= hlast) {
            if(heap[tmp] <= heap[rchild(n)]) {
                tmp = rchild(n);
            }
        }
        if(heap[tmp] > heap[n]) {
            swap(heap, n, tmp);
        } else {
            return;
        }
        n = tmp;
    }
    return;
}

void heapSort(int data[], int heap[], int hnum)
{
    int last;
    makeHeap(data, heap, hnum);
    for(last = hnum-1; last > 0; last--) {
        swap(heap, 0, last);
        downHeap(heap, last-1);
    }
    return;
}
