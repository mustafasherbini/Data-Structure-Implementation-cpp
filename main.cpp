#include <bits/stdc++.h>
//#include <atcoder/all>
#define f first
#define s second
#define FAST()    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define IN()  freopen("input.txt", "r", stdin);
#define OUT() freopen("output.txt", "w", stdout) ;
using namespace std;using ll =  long long ;using ld =  double ;
const ll  N =2e5+5, M=1e9+7; const double  EPS = 1e-7;
typedef __int128 i28;
using vi = vector<ll>;
template<class T> using min_heap = priority_queue<T, std::vector<T>, std::greater<T>>;
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1}, dx4[] = {1, 0 , 0 , -1};


int dy[] = {1, -1, 0, 0, 1, -1, -1, 1}, dy4[] = {0, 1, -1 ,0 };


template <typename T>
class node{
public:
    T val;
    node<T>* nxt= nullptr;

};


template <typename T>

class linkedList{

public:
    node<T>* head= nullptr;

    void insertFront(T val){
        node<T>*temp = new node<T>();
       temp->val=val;
       if (head!= nullptr)  temp->nxt=head;
       head=temp;
    }
    void insertBack(T val){
        node<T>*temp=head;
        if (head== nullptr)insertFront(val);
        while (temp->nxt!= nullptr)temp=temp->nxt;
        node<T>* newtemp=new node<T>();
        newtemp->val=val;
        temp->nxt=newtemp;
        newtemp->nxt= nullptr;
         }
    void deleteFront(){
        node<T>*temp=head;
        head=head->nxt;
        delete temp;
              }
    void deleteBack(){

        node<T>*temp=head;
                  while (temp->nxt->nxt!= nullptr)temp=temp->nxt;
        node<T>*temp2=temp->nxt;
                  temp->nxt= nullptr;
                  delete temp2;

                }
    void  insertAfter(int p,int val){
        int pos=1;
        node<T>* temp=head;
        while (pos<p){
        p++;
        temp=temp->nxt;
        }
        node<T>* newtemp=new node<T>();
        newtemp->val=val;
        newtemp=temp->nxt;
        temp->nxt=newtemp;

    }
    void  deleteAfter(int p){
        int pos=1;
        node<T>* temp=head;
        while (pos<p-1){
            p++;
            temp=temp->nxt;
        }
        node<T>* deltemp=temp->nxt;
       temp->nxt=temp->nxt->nxt;
        delete deltemp;

    }
};

int main(){



    return 0;
}