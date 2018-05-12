#include "refers.h"

int main() {
    double current=1;
    int k=1;
    while (1) {
        double next=current-f(current)/df(current);
        if (abs(next-current)<EPS) {
            cout << next << " - это минимальный по модулю корень уравнения tg(x)=cos(x)-0.1\n";
            cout<<tan(next)-cos(next)+0.1<<'\n';
            break;
        }
        current=next;
        cout<<"Итерация "<<k++<<": x="<<next<<'\n';
    }
    cout<<"\nПереходим ко второй задаче - решить систему уравнений:\n2x-cos(y+1)-y=0\ny+sin(x)=-0.4\n";
    vector<vector<double>> lp(2,vector<double>(2));//коэффициенты левой части
    vector<double> rp(2),curr(2),next(2);
    curr={0,-0.5};
    k=1;
    while(1) {
        lp[0][0]=2;lp[0][1]=sin(curr[1]+1)-1;
        lp[1][0]=cos(curr[0]);lp[1][1]=1;
        /*rp[0]=curr[1]*(sin(curr[1]+1))+cos(curr[1]+1);
        rp[1]=-0.4+curr[0]*cos(curr[0])-sin(curr[0]);*/
        rp[0]=-2*curr[0]+cos(curr[1]+1)+curr[1];
        rp[1]=-curr[1]-sin(curr[0])-0.4;
        next=sum(curr,gMethod(lp,rp));
        if (norma(next,curr)<EPS) break;
        curr=next;
        cout<<"Итерация "<<k++<<": "<<"x="<<curr[0]<<" y="<<curr[1]<<'\n';
    }
    cout<<"Корень: "<<"x="<<next[0]<<" y="<<next[1]<<'\n';
    cout<<"f1(x,y)="<<2*next[0]-cos(next[1]+1)-next[1];
    cout<<"\nf2(x,y)="<<next[1]+sin(next[0])+0.4;
    return 0;
}