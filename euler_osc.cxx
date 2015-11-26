#include <iostream>
#include <cmath>

using namespace std;

void EulerForward(double* p, const int N, const double dt);
void EulerBackward(double* p, const int N, const double dt);

int main(){
  
  t = 20*M_PI;
  int steps = 1000;
  const int N = (int) t*steps;
  const double dt = 1.0/steps;
  double y[N][2];
  y[0][0]=1;
  y[0][1]=0;
  
  EulerForward(y, N, dt);
  EulerBackward(y, N, dt);
  
  for(int i=0; i<N; i++){
  cout<< i*dt << '\t' << y[i][0] <<endl;
  }
}

void EulerForward(double* p, const int N, const double dt){
  for(int i=1; i<=N; i++){
    p[i][0] = p[i-1][0] + p[i-1][1]*dt;
    p[i][1] = p[i-1][1] - p[i-1][0]*dt;
    }
  }

void EulerBackward(double* p, const int N, const double dt){
  for(int i=1; i<=N; i++){
    p[i][0] = (p[i-1][0] + p[i-1][1]*dt)/(1+dt*dt);
    p[i][1] = (p[i-1][1] - p[i-1][0]*dt)/(1+dt*dt);
    }
  }
