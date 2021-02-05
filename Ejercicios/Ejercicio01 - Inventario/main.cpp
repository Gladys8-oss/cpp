#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

string productos [5][5] = {
  { "001","iphone X", "0"},
  { "002","Lapton Dell", "5" },
  { "003","Monitor Samsung", "2" },
  { "004","Mouse", "100"},
  { "005","HeadSet", "25" }
};

void movimientoInventario (string codigo, int cantidad, string tipoMovimiento) {
for (int i = 0; i < 5; i++)
{
 if (productos[i][0] == codigo){
		if (tipoMovimiento == "+"){
		   productos[i][2] = to_string(stoi(productos[i][2]) + cantidad);
		} else{
           productos[i][2] = to_string(stoi(productos[i][2]) - cantidad);
		}
      }
    }
 }

void ListarProductos(){
            system("cls");
			cout << endl;
			cout << "Listado de Productos" << endl;
			cout << "********************" << endl;
			cout << "Codigo, Descripcion y Existencia" << endl;
			
			for (int i = 0; i < 5; i++)
			{
				cout << productos[i][0] << " | " <<productos[i][1] <<  " | " <<productos[i][2] << endl;
			}
};
void salidaDeInventario() {
	string codigo = "";
	int cantidad = 0;
	
	system ("cls");
	cout << endl;
	cout << "Salida de Productos del Inventario" << endl;
	cout << "**********************************" << endl;
	cout << "Ingrese el codigo del producto ";
	cin >> codigo;
	cout << endl;
	cout << "Ingrese la cantidad del producto: ";
	cin >> cantidad;
	cout << endl;
	
	movimientoInventario(codigo, cantidad, "-");
}

void AjusteNegativoDeInventario() {
	string codigo = "";
	int cantidad = 0;
	
	system ("cls");
	cout << endl;
	cout << "Ajuste Negativo De Inventario" << endl;
	cout << "**********************************" << endl;
	cout << "Ingrese el codigo del producto ";
	cin >> codigo;
	cout << endl;
	cout << "Ingrese la cantidad del producto: ";
	cin >> cantidad;
	cout << endl;
	
	movimientoInventario(codigo, cantidad, "-");
}

void ingresoDeInventario() {
	string codigo = "";
	int cantidad = 0;
	
	system ("cls");
	cout << endl;
	cout << "Ingreso de Productos al Inventario" << endl;
	cout << "**********************************" << endl;
	cout << "Ingrese el codigo del producto ";
	cin >> codigo;
	cout << endl;
	cout << "Ingrese la cantidad del producto: ";
	cin >> cantidad;
	cout << endl;
	
	movimientoInventario(codigo, cantidad, "+");
}

void AjustePositivoDeInventario() {
	string codigo = "";
	int cantidad = 0;
	
	system ("cls");
	cout << endl;
	cout << "Ajuste Positivo de Inventario" << endl;
	cout << "**********************************" << endl;
	cout << "Ingrese el codigo del producto ";
	cin >> codigo;
	cout << endl;
	cout << "Ingrese la cantidad del producto: ";
	cin >> cantidad;
	cout << endl;
	
	movimientoInventario(codigo, cantidad, "+");
}
 /* productos [0][0] = "001";
  productos [0][1] = "iphone X";
  
  productos [0][0] = "001";
  productos [0][0] = "001";*/
int main(int argc, char *argv[])
{
	int opcion = 0;
	while (true){
	system ("cls");
		
    cout << "Sistema de Inventario";
	cout << endl;
	cout << "*********************";
	cout << endl;
	cout << endl;
	cout <<"1 - Productos" <<endl;
	cout <<"2 - Ingreso de Invetario" <<endl;
	cout <<"3 - Salida de Inventario" <<endl;
	cout <<"4 - Ajuste Positivo" <<endl;
	cout <<"5 - Ajuste Negativo" <<endl;
	cout <<"0 - Salir" <<endl;
	cout << "Ingrese una opcion del menu :";
	cin >> opcion;
	switch (opcion)
    {
		case 1:
			ListarProductos();
			break;
			
			case 2:
				ingresoDeInventario();
				break;
		    case 3:
				salidaDeInventario();
				break;
            case 4:
            AjustePositivoDeInventario();
			    break;

			case 5:
			AjusteNegativoDeInventario() ;
			    break;

				default:
				cout << "***********ERROR************/n" 
				     << "Ingrese una Opcion que este dentro del menu" << endl;
					break;
    }
    system("pause");
    cout << endl;
				if (opcion == 0){
					break;
					}
	              }
	
	system("pause");
	return 0;
}
