#include<iostream>
#include<stack>
using namespace std;

class twoStack{
    int *arr;
    int top1;
    int top2;
    int size;
    public:
        twoStack(int s){
            this->size = s;
            top1 = -1;
            top2 = s;
            arr = new int[s];
        }

        //Push in stack 1
        void push1(int num){
            //atleast one empty space is present
            if(top2-top1>1){
                top1++;
                arr[top1] = num;
            }
            else{
                cout << "Stack overflow" << endl;
            }
        }

        //push in stack 2
        void push2(int num){
            //atleast one empty space is present
            if(top2-top1>1){
                top2--;
                arr[top2] = num;
            }
            else{
                cout << "Stack overflow" << endl;
            }
        }

        //pop in stack 1
        int pop1(){
            if(top1>=0){
                int ans = arr[top1];
                top1--;
                return ans;
            }
            else {
                return -1;
            }
        }

        int pop2(){
            if(top2<size){
                int ans = arr[top2];
                top2++;
                return ans;
            }
            else {
                return -1;
            }
        }

};

int main(){
        twoStack s(8);
        s.push1(56);
        s.push2(22);
        s.push1(44);

        return 0;
}