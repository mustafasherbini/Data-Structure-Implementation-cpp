#include <bits/stdc++.h>

template <typename T>
class node{
public:
    T val;
    node<T>* nxt= nullptr;

};
template <typename T>

class Queue{
    node<T> *head, *tail;
    int sz=0;
public:
    void push(T val){
        node<T>*temp = new node<T>;
        temp->val=val;
        sz++;
        if(head== nullptr){
            head=tail=temp;
            return;
        }
        tail->nxt=temp;
        tail=temp;

    }
    void pop(){
        sz--;
        node<T> *deltemp=head;
        head=head->nxt;
        delete deltemp;
        if (head== nullptr)tail= nullptr;
    }
    T front(){
        return head->val;
    }
    int size(){
        return sz;
    }
    bool empty(){return sz==0;}


};


int main(){




    return 0;
}