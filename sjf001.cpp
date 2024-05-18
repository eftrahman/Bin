#include<bits/stdc++.h>
using namespace std;
class prcss{
public :
    int p,bt;
};
void swap(prcss a, prcss b) {
  prcss t;
  t.p = a.p;
  t.bt = a.bt;
  a.p = b.p;
  a.bt = b.bt;
  b.p = t.p;
  b.bt = t.bt;
}
void printArray(prcss array[], int size) {
    int i;
    for (i = 0; i < size; i++){
        cout << array[i].p << " ";
    }
    cout << endl;
}
int partition(prcss array[], int low, int high) {
    int pivot = array[high].bt;
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (array[j].bt <= pivot) {
        i++;
        swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return (i + 1);
}

void quickSort(prcss array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}
int main(){
    int n;
    cin>>n;
    prcss ps[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Burst time for Process "<<i<<" : ";
        cin>>ps[i].bt;
        ps[i].p=i;
        cout<<endl;
    }
    cout<<endl;
    printArray(ps, n);
    quickSort(ps, 0, n - 1);
    cout<<endl;
    printArray(ps, n);
    //ganttchart(ps,n);
    return 0;
}

