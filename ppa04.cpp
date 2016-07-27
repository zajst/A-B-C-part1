#include <iostream>
using namespace std;

int profitEarned(int prices[]){

    //Write your solution code below this line
    int max_value = prices[4] - prices[0];
    for (int i = 4; i>0; i--) {
        for (int j=0; j<i; j++) {
            if ((prices[i] - prices[j]) > max_value)
                max_value = prices[i] - prices[j];
        }
    }
    return max_value;

}

int main() {
    int a[] ={ 87000, 67000, 45000, 34000, 33000};
    cout<<profitEarned(a)<<endl;
    return 0;
}
