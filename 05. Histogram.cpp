#include <iostream>
#include <string>

using namespace std;

int main(){
int n;
cin >> n;

int group1 = 0, group2 = 0, group3 = 0, group4 = 0, group5 = 0;

for (int i = 0; i <n ; i++){
    int number;
    cin >> number;
if(number < 200){
    group1++;
}else if(number >= 200 && number <= 399){
    group2++;
}else if(number >= 400 && number <= 599){
    group3++;
}else if(number >= 600 && number <= 799){
    group4++;
}else if(number >= 800){
    group5++;
}
}
double percent1 = group1 * 1.0 / n * 100;
double percent2 = group2 * 1.0 / n * 100;
double percent3 = group3 * 1.0 / n * 100;
double percent4 = group4 * 1.0 / n * 100;
double percent5 = group5 * 1.0 / n * 100;

cout.setf(ios::fixed);
cout.precision(2);

cout << percent1 <<"%"<< endl;
cout << percent2 << "%"<< endl;
cout << percent3 << "%"<< endl;
cout << percent4 << "%"<< endl;
cout << percent5 << "%"<< endl;




return 0;
}
