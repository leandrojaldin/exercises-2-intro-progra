
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
    for (char c : s1) {
        if (c == ' ') {
            int cake = 0;
            for (char digit : numberStr) {
                cake = cake * 10 + (digit - '0');
            }

            if (numberStr.size() > 0 && cake == 1) {
                cout << "Om-nom-nom :P" << endl;
                cakeCount++;

                if (cakeCount >= 10) {
                    return; // Salimos del ciclo si se han realizado más de 10 visitas
                }
            } else {
                cout << "No cake :(" << endl;
                return; // Salimos del ciclo si no hay más pastel
            }
            numberStr = ""; // Reiniciamos numberStr para la próxima iteración
        } else {
            numberStr += c;
        }
    }
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
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