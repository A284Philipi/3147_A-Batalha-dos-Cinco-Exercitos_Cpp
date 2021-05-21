#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int homens, anoes, elfos, orcs, aguias, wargs, exercito_gandalf, exercito_sauron;
    cin >> homens;
    cin >> elfos;
    cin >> anoes;
    cin >> orcs;
    cin >> wargs;
    cin >> aguias;
    exercito_gandalf = homens + anoes + elfos + aguias;
    exercito_sauron = orcs + wargs;
    if (exercito_gandalf >= exercito_sauron){
        cout << "Middle-earth is safe." <<endl;
    }else{
        cout << "Sauron has returned." <<endl;
    }
    return 0;
}
