#include <bits/stdc++.h>


template <typename T>
class node{
public:
    T val;
    node<T>* nxt= nullptr;

};
template <typename T>
class Stack{
    node<T> * head= nullptr;
    int sz=0;
public:
    void push(int val){
        node<T>*temp = new node<T>;
        sz++;
        temp->val=val;
        temp->nxt=head;
        head=temp;
    }
    void pop(){
        node<T>*temp=head;
        head=head->nxt;
        delete temp;
        sz--;
    }
    T top(){
        return head->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        return  (sz==0);
    }

};


int main(){




    return 0;
}