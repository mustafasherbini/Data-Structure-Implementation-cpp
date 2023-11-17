#include <bits/stdc++.h>
//#include <atcoder/all>


template <typename T>
class Vector{
    int sz, cap;
    T *ptr= nullptr;

public:
    Vector(){
    sz=cap=0;
    ptr= new T[cap];
    }

    Vector(int newsz , T val=T()){
        sz=newsz;
        cap=1;
        while (cap<sz)cap*=2;
        ptr=new T[cap];
        for (int i = 0; i <newsz ; ++i) {
            ptr[i]=val;
        }
    }
    int Size(){return sz;}
    int Capacity(){return cap;}
    bool Empty(){return  !sz;}
    T Front(){return ptr[0];}
    T Back(){return ptr[sz-1];}
    T at(int pos){return ptr[pos];}
    void Clear(){
        sz=cap=0;
        T*temp = ptr;
        ptr= nullptr;
        if (temp != nullptr)delete []temp;
    }
    T operator [] (int pos){
        return ptr[pos];
    }
    void operator += (Vector vec){
        for (int i = 0; i <vec.Size() ; ++i) {
            this->PushBack(vec[i]);
        }
    }
    void operator = (Vector vec){
        sz=vec.sz;
        cap=vec.cap;
        this->reserve(cap);
        for (int i = 0; i <sz ; ++i) {
            ptr[i]=vec[i];
        }

    }

    void PushBack(int val){
        if (sz==cap)this->reserve(cap * 2 + (cap == 0));
    ptr[sz]=val;
    sz++;
    }
    void PopBack(){
        if (! this->Empty()) sz--;
    }
    void Insert(int pos , int val){
        if (pos>=sz){
            cout<<"Out of bounds";
            return;
        }
        if (sz==cap)reserve(cap * 2 + (cap == 0));
        for (int i = sz; i >pos ; --i) {
            ptr[i]=ptr[i-1];
        }
        ptr[pos]=val;
        sz++;

    }
    void Erase(int pos ){
        if (this->Empty() or pos>sz)return;
        for (int i = pos; i <sz ; ++i) {
            ptr[i]=ptr[i+1];
        }
        sz--;
    }
    void reserve(int newCap) {

        T *temp = new T[newCap];
        for (int i = 0; i < sz; ++i) temp[i] = ptr[i];

        cap = newCap;

        swap(ptr, temp);
        if (temp != nullptr) {
            delete[] temp;
            temp = nullptr;
        }
    }

    };



void solve(){
 Vector<int> vec,vx;
 vec.PushBack(5);
 vec.PushBack(17);
 vec.PopBack();
    for (int i = 0; i <10 ; ++i) {
        vec.PushBack(i);
    }
vec.Insert(2,20);

    vx=vec;
    vec+=vx;
    for (int i = 0; i <vec.Size() ; ++i) {
        cout<<vec.at(i);
    }


}
int main(){


    FAST()
    //    IN()
    //    OUT()
    int t=1;
//    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }


    return 0;
}
