#include <iostream>
using namespace std;

int main(void)
{
    int N,i,rating;
    rating = 1800;
    cin >> N;
    for(i = 1; i < 9; i++) {
        if(rating <= N) {
            printf("%d\n", i);
            break;
        }
        rating -= 200;
    }
}