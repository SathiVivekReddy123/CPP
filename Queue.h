#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
using namespace std;
const int n=100;
void enqueue(int q[],int &front,int &rear,int val){
    if(rear == n-1){
        cout << "Queue Overflow";
    }
    else{
        if(front ==-1 && rear==-1){
            front = rear=0;
        }
        else rear++;
        q[rear]=val;
    }
}
void dequeue(int q[],int &front,int &rear){
    if(front > rear || front==-1){
        cout << "Queue is empty";
        front=rear=-1;
    }
    front++;
}
void display(int q[],int &front,int &rear){
    if(rear == -1 || front>rear){
        cout << "No elements to display";
    }
    else{
        for(int i=front;i<=rear;i++){
            cout << q[i] << " ";
        }
    }
}
#endif
