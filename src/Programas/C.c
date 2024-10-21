int main() {
    char nombre[50];  // Creamos una variable para almacenar el nombre del usuario

    // Pedimos al usuario que ingrese su nombre
    printf("¿Cuál es tu nombre? ");
    fgets(nombre, sizeof(nombre), stdin);  // Leemos la entrada del usuario

    // Mostramos el mensaje de bienvenida
    printf("Hola %s", nombre);
    printf("Este programa está hecho en el lenguaje de programación: C\n");

    return 0;
}