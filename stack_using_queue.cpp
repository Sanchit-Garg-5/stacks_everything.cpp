#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define max_len 1000
class stack1{
    public:
    queue<ll>me; queue<ll>me1;
    bool empty1(){
        if(me.empty()){return true;} return false;
    }
    ll top1(){
        if(empty1()){return -1;}
        return me.back();
    }
    void push1(ll data){
        me.push(data);
    }
    void pop1(){
        while(!me.empty() && me.size()!=1){
            me1.push(me.front()); me.pop();
        }
        if(!me.empty()){me.pop();}
        while(!me1.empty()){
            me.push(me1.front()); me1.pop();
        }
    }
    ll size1(){
        return me.size();
    }
};
int main(){
    stack1 astack;
}
