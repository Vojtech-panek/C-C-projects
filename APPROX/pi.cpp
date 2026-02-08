
#include <iostream>
void printPi(int N, double pi){ 
    if(N%100==0){
        std::cout << "PI after " << N << " iterations: " << pi*4 << "\n";         
    }
}
double count(int N){
    double pi = 0.0;
    for (int k = 0; k < N; k++) {
    pi += (k % 2 == 0 ? 1.0 : -1.0) / (2*k + 1);
    printPi(k, pi);
    }

    
    return pi;
}

int main() {
    int iter{};
    std::cout << "PI APPROXIMATOR: "<<"\n";
    std::cout << "Enter the number of iterations: "<<"\n";  
    std::cin>>iter;
    count(iter);    
   
    return 0;
}
