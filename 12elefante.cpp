/**
    Esteban Martinez #12, 3°D
    12/10/2022
*/

#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); mapeo();

string uni[10] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string dek[10] = {"", "Dieci", "Veinti", "Treinta", "Cuarenta", "Cincuenta", "Sesenta", "Setenta", "Ochenta", "Noventa"};

map<int, string> special;

void mapeo(){
    special[1] = "Un";
    special[10] = "Diez";
    special[11] = "Once";
    special[12] = "Doce";
    special[13] = "Trece";
    special[14] = "Catorce";
    special[15] = "Quince";
    special[20] = "Veinte";
    special[21] = "Veintiun";
    special[100] = "Cien";
}

void toText(int n){
    if(special[n] != "") cout << special[n];
    else{
        cout << dek[(n / 10)];
        if((n % 10) != 0 && (n / 10) > 2) cout << " y ";
        cout << uni[(n % 10)];
    }
}

int main(){_
    for(int i = 1; i <= 100; i++){
        toText(i);
        cout << " elefante";
        if(i > 1) cout << "s";
        cout << " se columpiaba";
        if(i > 1) cout << "n";
        cout << " sobre la tela de una arana, como veia";
        if(i > 1) cout << "n";
        cout << " que resistia, fue";
        if(i > 1) cout << "ron";
        cout << " a llamar a otro elefante." << endl;
    }
}