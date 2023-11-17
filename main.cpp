#include <bits/stdc++.h>

template <typename T>
class node{
public:
    int val;
    node<T> *nxt= nullptr,*prv= nullptr;
};
template <typename T>

class DoubleLinkedList{

    node<T> *head= nullptr,*tail= nullptr;
public:

    void insertFront(int val){
        node<T> *temp=new   node<T>();
    temp->val=val;
    temp->nxt=head;
    head->prv=temp;
    head=temp;
    temp->prv= nullptr;
        if (tail== nullptr)tail=head;

    }
    void deleteFront(){
        node<T>* deltemp=head;
        head=head->nxt;
        head->prv= nullptr;
        delete deltemp;

    }
    void insertBack(int val){
        node<T> *temp=new   node<T>();
        temp->val=val;
        temp->prv=tail;
        temp->nxt= nullptr;
        tail->nxt=temp;
        tail=temp;
        if (head== nullptr)head=tail;

    }
    void deleteBack(){
        node<T>*temp=tail;
tail=tail->prv;
tail->nxt= nullptr;
delete temp;
    }
    void insertafter(int pos ,int val ){
        node<T> * newnode=new node<T>(),*temp=head;
        newnode->val=val;
    int p=1;
        while (p<pos)temp=temp->nxt,p++;
        newnode->prv=temp;
        newnode->nxt=temp->nxt;
        temp->nxt=newnode;
        newnode->nxt->prv=newnode;

    }
    void deletepos(int pos){
        node<T> *temp=head;
        int p=1;
        if (pos==1)deleteFront();
        while (p<pos)temp=temp->nxt,p++;
        if (tail==temp)deleteBack();
        temp->prv->nxt=temp->nxt;
        temp->nxt->prv=temp->prv;
        delete temp;


    }



};


int main(){


}