# Tarea de Diagnóstico) 
## ¿De qué trata?
El código simula el esqueleto de un sistema para gestionar los contactos de una empresa. La idea principal era aplicar herencia y polimorfismo para no repetir código. 

Tenemos una clase padre (abstracta) llamada `Persona` de la cual heredan tres tipos de contactos:
* **Empleado:** (Tiene puesto y salario)
* **Cliente:** (Define si es VIP o no)
* **Proveedor:** (Tiene categoría de suministro)

También hay una clase `SistemaEmpresa` que usa un vector para guardar y mostrar a todas estas personas juntas.

## Conceptos clave aplicados
* **Herencia:** Para reutilizar los atributos de `Persona`.
* **Encapsulamiento:** Uso de `private` / `protected` y Getters/Setters.
* **Polimorfismo:** Uso de punteros y el método `virtual` para mostrar los detalles dependiendo de si es empleado, cliente o proveedor.

## Para correr el código
Si lo quieres compilar y probar en la terminal, solo usa:

```bash
g++ main.cpp -o sistema
./sistema
