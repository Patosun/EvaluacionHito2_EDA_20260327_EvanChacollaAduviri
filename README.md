# Programa evaluacion procesual-EDA-Evan Leonel Chacolla Aduviri

## Descripcion del sistema
El sistema se ejecuta en consola el cual lo que hace es gestionar turnos de atencion de estudiantes, permite registrar a los mismos con su nombre y codigo, atenderlos por orden de llegada, listarlos y buscarlos.
## Estructura usada y justificacion
Para la creacion de este proyecto se utilizo las listas doblemente enlazadas de manera que cada nodo contiene:

nombre: Nombre del estudiante 

codigo: Codigo del estudiante

siguente: Puntero al siguente nodo

anterior: Puntero al nodo anterior

#### Justificacion
El por que se uso listas doblemente enlazadas es por que estas permiten recorrer los elementos almacenados en ambos sentidos (Ej: De cabeza a cola o de cola a cabeza), esto no es posible con una lista simple,
esto ayuda a la eliminacion la cual se realiza desde la cabeza/primer nodo.

## Complejidad (insercion, eliminacion, busqueda)
Para la realizacion de este sistema, la complejidad es media:

Insercion : El sistema ingresa los datos al final usando el puntero "cola"

Eliminacion :  El sistema siempre empieza a eliminar desde la cabeza

Busqueda : El sistema recorre nodo por nodo para buscar el dato

## Instrucciones de compilacion y ejecucion
Para la ejecucion de este sistema es requerido de algunas herramiendas extras instaladas:

Mingw: Para la ejecucion de proyectos de c++ en el editor de codigo Viual Studio Code

Git/GitHub: Para la clonacion del repositorio.

Visual Studio Code: Para la ediion de codigo

#### Ejecucion
Para la ejecucion se debe de usar VScode con mingw, o en su defecto usar algun compilador web

#### Menu del sistema
El menu que se muestra sera el siguente

1. Registrar estudiante
2. Atender estudiante
3. Mostrar estudiante en espera
4. Buscar estudiante por nombre
5. Mostrar lista inversa de estudiantes en espera
6. salir
