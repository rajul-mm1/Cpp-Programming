# include <iostream>
using namespace std;

int main(){

    int n;
    printf("enter the value of n:");
    scanf("%d",&n);

    for(int i = 0; i<n; i++){

        cout << i << endl;
        if(i == 4){
            break;
        }
    }

    printf("The continue statement will start from here");

    for(int j =0;j<n;j++){
        if(j == 4){
        continue;
    }
    cout << j << "\n";
    }
    return 0;
}