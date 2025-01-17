#ifndef ARBOLNOTAS_H_INCLUDED
#define ARBOLNOTAS_H_INCLUDED

typedef struct{
    char nombreAlumno[30];
    int legajo;
}stAlumno;

typedef struct{
    int nota;
    int numExamen;
}stNota;

typedef struct arbolNotas{
    stNota nota;
    stAlumno alumno;
    struct arbolNotas* izq;
    struct arbolNotas* der;
}arbolNotas;

arbolNotas* inicArbolNotas();
stNota cargarNota();
void mostrarNota(stNota A);
stAlumno cargarAlumno();
void mostrarAlumno(stAlumno A);
void mostrarNodoNotas(arbolNotas* A);
arbolNotas* crearArbolNotas(stNota datoNota, stAlumno datoAlumno);
arbolNotas* insertarNotas(arbolNotas* arbol, stAlumno datoAlumno,stNota datoNota);
arbolNotas* buscarNota(arbolNotas* arbol,int numExamen,int legajo);
void preorderNotas(arbolNotas* arbol);
void inorderNotas(arbolNotas* arbol);
void postorderNotas(arbolNotas* arbol);
arbolNotas* borrarNota(arbolNotas* arbol,stNota datoNota,int legajo);
arbolNotas* NMD (arbolNotas* arbol);
arbolNotas* NMI (arbolNotas* arbol);
int existeNota(arbolNotas* arbol ,int legajo,stNota datoNota);
arbolNotas* modificarNota (arbolNotas* arbol,int nroExamen,int legajo,int nuevaNota);
int cantNotasxLegajo (arbolNotas* arbol, int legajo);
arbolNotas* borrarLegajo(arbolNotas* arbol,int cant,int legajo);
int existeLegajo (arbolNotas* arbol,int legajo);



#endif // ARBOLNOTAS_H_INCLUDED
