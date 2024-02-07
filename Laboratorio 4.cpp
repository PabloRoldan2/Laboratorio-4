#include <iostream>
#include <cmath>

using namespace std;
//Función para realizar operaciones matemáticas
float operaciones(float a, float b, char operador) {
    switch (operador) { //Utiliza un switch para seleccionar la operación basada en el operador dado.
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
            	//cerr: es el flujo de error estándar que se utiliza para generar los errores. 
                cerr << "Error: División por cero." << endl; //Muestra un mensaje de error si se intenta dividir por cero.
                return 0.0;
            }
        case '%':
            if (b != 0) {
                return static_cast<int>(a) % static_cast<int>(b);
            } else {
                cerr << "Error: Módulo por cero." << endl; //Muestra un mensaje de error si se intenta calcular el módulo por cero.
                return 0.0;
            }
        default: //Si el operador no es ninguno de los anteriores, muestra un mensaje de error.
            cerr << "Error: Operador no válido." << endl;
            return 0.0;
    }
}

//Función para imprimir resultados
void Resultados(float resultado) {
	system("cls"); //Limpia la pantalla
    cout << "El resultado es: " << resultado << endl; //Imprime el resultado de la operación.
}

int main() {
    //Declaración de variables
    int cantidadOperaciones;
    float num1, num2;
    char operador;
	system("cls");
    //Solicitar al usuario la cantidad de operaciones a realizar
    cout << "Ingrese la cantidad de operaciones a realizar: ";
    cin >> cantidadOperaciones;

    //Bucle para realizar operaciones según la cantidad ingresada
    for (int i = 0; i < cantidadOperaciones; ++i) {
    	system("cls"); //Limpia la pantalla
        //Solicita al usuario los números y operador para la operación actual
        cout << "Ingrese el primer numero " << i + 1 << ": ";
        cin >> num1;

        cout << "Ingrese el segundo numero " << i + 1 << ": ";
        cin >> num2;
        
        cout << "Ingrese el operador (+, -, *, /, %) para la operación " << i + 1 << ": ";
        cin >> operador;

        //Llamada a la función de operación matemática
        float resultado = operaciones(num1, num2, operador);

        //Llamada a la función para imprimir resultados
        Resultados(resultado);
    }
	
	system("cls"); //Limpia la pantalla
    //Cierre del programa
    cout << "Programa finalizado." << endl;

    return 0;
}
