#include"queue.h"
using namespace std;
int main(){
    int q[n];
    int front = -1,rear = -1;
    enqueue(q,front,rear,11);
    enqueue(q,front,rear,22);
    enqueue(q,front,rear,33);
    enqueue(q,front,rear,44);
    dequeue(q,front,rear);
    enqueue(q,front,rear,55);
    enqueue(q,front,rear,66);
    display(q,front,rear);
}
