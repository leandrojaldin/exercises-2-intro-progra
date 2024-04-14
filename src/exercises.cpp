
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
                cout << "[" << word << "]" << endl; 
                word = "";
            }
        }
    }

    if (word != "") {
        cout << "[" << word << "]" << endl; 
    }
}


void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
    int cakeCount = 0;

    string numberStr = "";
    bool foundSpace = false; 

    for (char c : s1) {
        if (c == ' ') {
            foundSpace = true; 
            if (!numberStr.empty()) {
                int cake = 0;
                // 
                for (char digit : numberStr) {
                    cake = cake * 10 + (digit - '0');
                }
                if (cake == 1) {
                    cout << "Om-nom-nom :P" << endl;
                    cakeCount++;

                    if (cakeCount >= 10) {
                        return; 
                    }
                } else {
                    cout << "No cake :(" << endl;
                    return; 
                }
            }
            numberStr = ""; 
        } else {
            if (foundSpace) {
                
                foundSpace = false;
            }
            numberStr += c;
        }
    }

    
    if (!numberStr.empty()) {
        int cake = 0;
        
        for (char digit : numberStr) {
            cake = cake * 10 + (digit - '0');
        }
        if (cake == 1) {
            cout << "Om-nom-nom :P" << endl;
        } else {
            cout << "No cake :(" << endl;
        }
    } else if (foundSpace) {
        
        cout << "No cake :(" << endl;
    }
}


void exercise_4(int n) {
  // TODO: YOUR CODE HERE
      if (n < 0) {
        cout << "El numero es negativo. Intentelo de nuevo" << endl;
        return;
    }

    
    if (n > 14) {
        cout << "El numero es muy grande. Intentelo de nuevo" << endl;
        return;
    }

    // Calculamos el factorial
    int factorial = 1;
    for (int i = 2; i <= n; ++i) {
        factorial *= i;
    }

    
    cout << factorial << endl;
}

void exercise_5(int n, int k) {
   //HERE YOUR CODE
}


int exercise_6(int n) {
  // TODO: YOUR CODE HERE
     int sum = 0;
    
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    
    return sum;
}


void exercise_7(int n) {
  // TODO: YOUR CODE HERE
    double sum = 0.0;
    double term = 1.0;
    for (int i = 1; i <= n; ++i) {
        sum += term;
        term /= i;
    }
    cout << sum << endl;
}



void exercise_8(string s) {
  // TODO: YOUR CODE HERE
    string clean_string = "";
    for (char c : s) {
        if (c != ' ') {
            clean_string += c;
        }
    }
    
    // Verificar si la cadena resultante es un palíndromo
    bool is_palindrome = true;
    int n = clean_string.size();
    for (int i = 0; i < n / 2; ++i) {
        if (clean_string[i] != clean_string[n - i - 1]) {
            is_palindrome = false;
            break;
        }
    }
    
    if (is_palindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}


void exercise_9(string s) {
  // TODO: YOUR CODE HERE
    int primera_aparicion = -1;
    int segunda_aparicion = -1;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'f') {
            if (primera_aparicion == -1) {
                primera_aparicion = i;
            } else if (segunda_aparicion == -1) {
                segunda_aparicion = i;
                break; // Terminamos la búsqueda una vez que encontramos la segunda aparición
            }
        }
    }

    if (primera_aparicion == -1) {
        cout << -2 << endl;
    } else if (segunda_aparicion == -1) {
        cout << -1 << endl;
    } else {
        cout << segunda_aparicion << endl;
    }
}



int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
  double Un = 1.0;
  cout << "U0 = 1" << endl;
  for (int n = 1; n <= 10; ++n) {
    Un = Un / (n + 1);
    cout << "U" << n << " = " << Un << endl;
  }
}




void exercise_12() {
  // TODO: YOUR CODE HERE
    double U = 1.0;
    double V = 1.0;
    double e_approximation = 1.0; // Inicialmente 1.0, ya que e^0 = 1.

    cout << "U1 = " << U << " V1 = " << V << endl;
    for(int n = 1; n <= 10; ++n) {
        U = U / n;
        V += U;
        e_approximation += U; // Aproximación de 'e'
        cout << "U" << n+1 << " = " << U << " V" << n+1 << " = " << V << endl;
    }

    cout << "\nvalor aproximado de e" << e_approximation << endl;
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