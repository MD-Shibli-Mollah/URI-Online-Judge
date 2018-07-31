#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    for(double i=0;i<=2;i+=0.2){
        for(double j=1;j<=3;j++){
            /*if(i==(int)i && (j+i)==(int)(j+i)){
                printf("I=%d J=%d\n",(int)i,(int)(i+j));
            }
            else if(i==(int)i && (j+i)!=(int)(j+i)){
                printf("I=%d J=%.2lf\n",(int)i,(i+j));
            }
            else if(i!=(int)i && (j+i)==(int)(j+i)){
                printf("I=%.2lf J=%d\n",i,(int)(i+j));
            }
            else{
                printf("I=%.2lf J=%.2lf\n",i,(i+j));
            }
            */
            if(i==(int)i && (j+i)==(int)(j+i)){
                cout<<"I="<<(int)i<<" "<<"J="<<(int)(j+i)<<endl;
            }
            else if(i==(int)i && (j+i)!=(int)(j+i)){
                cout<<"I="<<(int)i<<" "<<"J="<<(j+i)<<endl;
            }
            else if(i!=(int)i && (j+i)==(int)(j+i)){
                cout<<"I="<<i<<" "<<"J="<<(int)(j+i)<<endl;
            }
            else{
                cout<<"I="<<i<<" "<<"J="<<(j+i)<<endl;
            }
        }
    }
}
