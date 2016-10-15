#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
int main(){
    int alpha = 23, beta = 21, gamma = 24;
    int t = alpha-3;
    int t2 = beta+3+gamma;
    t=t+t2;
    alpha = t;
    beta = 0;
    gamma =0;
    printf("%d %d %d\n", alpha, beta, gamma);
    return 0;
}
