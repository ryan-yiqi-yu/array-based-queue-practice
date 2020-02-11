//FINAL EDIT .1

#include <iostream>

using namespace std;

class queue{
private:
    static const int MaxSize = 10;
    int arr[MaxSize];
    int count = 0;
    int front = -1;
    int back = -1;
    
public:
    
    
    void EnQueue(int value){
        if(count<MaxSize){
            if (IsEmpty()){
                front++;
            }
            back++;
            arr[back] = value;
            count++;
            if (back == 10){
                back = 0;
            }
        }
        else{
            cout<<"ERROR, queue is full"<<endl<<endl;
        }
    }
    
    
    
    
    void DeQueue(){
        if (IsEmpty()){
            cout<<"ERROR, queue is empty"<<endl<<endl;
        }
        else{
            cout<<"The front of the queue has value "<<arr[front]<<endl<<endl;
            front++;
            count--;
            if (front == 10){
                front == 0;
            }
        }
    }
    
    
    
    bool IsEmpty(){
        if (front == -1 && back == -1){
            return true;
        }
        else{
            return false;
        }
    }

    
};

int main(){
    queue test;
    test.DeQueue();
    test.EnQueue(7);
    test.DeQueue();
    test.EnQueue(9);
    test.EnQueue(28);
    test.EnQueue(900);
    test.EnQueue(54);
    test.EnQueue(3);
    test.EnQueue(59);
    test.EnQueue(420);
    test.EnQueue(990);
    test.EnQueue(634);
    test.DeQueue();
    test.EnQueue(96);
    test.EnQueue(96);
    test.EnQueue(96);
    test.DeQueue();
    test.DeQueue();
    test.EnQueue(634);
    test.EnQueue(634);
}
