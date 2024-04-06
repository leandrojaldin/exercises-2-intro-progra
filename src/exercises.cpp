
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HER
    for(int i = 0; i <= s1.size(); i++){
        if (s1 [i] == ' '){
          cout <<i << endl;
      }
    }
    cout << s1.size() << endl;
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERe
  string word = "";

    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] != ' ') {
            word += s1[i];
        } else {
            if (word != "") {
                cout << "[" << word << "]" << endl; // Agregamos endl aquí
                word = "";
            }
        }
    }

    if (word != "") {
        cout << "[" << word << "]" << endl; // Agregamos endl aquí también
    }
}


void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
    int cakeCount = 0;

    string numberStr = "";
    bool foundSpace = false; // Variable para rastrear si hemos encontrado un espacio en blanco

    for (char c : s1) {
        if (c == ' ') {
            foundSpace = true; // Marcamos que hemos encontrado un espacio en blanco
            if (!numberStr.empty()) {
                int cake = 0;
                // Convertimos la cadena en un número entero
                for (char digit : numberStr) {
                    cake = cake * 10 + (digit - '0');
                }
                if (cake == 1) {
                    cout << "Om-nom-nom :P" << endl;
                    cakeCount++;

                    if (cakeCount >= 10) {
                        return; // Salimos del ciclo si se han realizado más de 10 visitas
                    }
                } else {
                    cout << "No cake :(" << endl;
                    return; // Salimos del ciclo si no hay más pastel
                }
            }
            numberStr = ""; // Reiniciamos numberStr para la próxima iteración
        } else {
            if (foundSpace) {
                // Si encontramos un espacio en blanco previamente, reiniciamos foundSpace
                foundSpace = false;
            }
            numberStr += c;
        }
    }

    // Procesamos el último número en numberStr si es que hay alguno
    if (!numberStr.empty()) {
        int cake = 0;
        // Convertimos la cadena en un número entero
        for (char digit : numberStr) {
            cake = cake * 10 + (digit - '0');
        }
        if (cake == 1) {
            cout << "Om-nom-nom :P" << endl;
        } else {
            cout << "No cake :(" << endl;
        }
    } else if (foundSpace) {
        // Si encontramos un espacio en blanco al final, imprimimos "No cake :("
        cout << "No cake :(" << endl;
    }
}


void exercise_4(int n) {
  // TODO: YOUR CODE HERE
      if (n < 0) {
        cout << "El numero es negativo. Intentelo de nuevo" << endl;
        return;
    }

    // Verificamos si el número es demasiado grande
    if (n > 14) {
        cout << "El numero es muy grande. Intentelo de nuevo" << endl;
        return;
    }

    // Calculamos el factorial
    int factorial = 1;
    for (int i = 2; i <= n; ++i) {
        factorial *= i;
    }

    // Mostramos el resultado
    cout << factorial << endl
}


void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}