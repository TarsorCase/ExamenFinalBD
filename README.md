
<p align="center">
  <a href="#"><img title="blackeye-im" src="https://github.com/TarsorCase/ExamenFinalBD/blob/master/Photos/base-de-datos.png" width="260" height="260"></a>
</p>
<p align="center">
  <h3 align="center">🎓 Propuesta</h3>
El objetivo de este proyecto es desarrollar un modelo de base de datos simple en C++ 
para gestionar eventos y fechas de manera eficiente. Este modelo está diseñado para s
er utilizado en aplicaciones que requieren una manera estructurada y eficiente de alm
acenar y acceder a eventos asociados con fechas específicas.
</p> 
<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />
  <h3 align="center">📖 Tabla Base de datos</h3>
  
| Base de Datos | Tipo          | Sistema de Gestión | Licencia       | Lenguaje de Consulta | Soporte para Transacciones | Escalabilidad           | Modelo de Datos | Soporte para la Nube    |
|---------------|---------------|--------------------|----------------|---------------------|----------------------------|-------------------------|-----------------|-------------------------|
| MySQL         | Relacional    | MySQL              | GPL            | SQL                 | Sí                         | Vertical                | Tablas          | AWS, Azure, Google Cloud|
| PostgreSQL    | Relacional    | PostgreSQL         | PostgreSQL     | SQL                 | Sí                         | Horizontal y Vertical   | Tablas          | AWS, Azure, Google Cloud|
| MongoDB       | No relacional | MongoDB            | SSPL, Apache   | NoSQL               | Limitado                   | Horizontal              | Documentos      | AWS, Azure, Google Cloud|
| Cassandra     | No relacional | Apache Cassandra   | Apache         | NoSQL               | No                         | Horizontal              | Clave-valor     | AWS, Azure, Google Cloud|
| Neo4j         | No relacional | Neo4j              | GPL, Comercial | Cypher              | Sí                         | Horizontal              | Grafo           | AWS, Azure, Google Cloud|


Estas son las tecnologias mas conocidas en el sector de las bases de datos aqui tenemos sus caracterisitcas y una compracion al respecto.

<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />

<h3 align="center">🔎 Justificacion </h3>

</p>

**Almacenamiento de información** Permiten almacenar grandes cantidades de información organizada de manera que se puede acceder, gestionar y actualizar eficientemente.
**Toma de decisiones** La información organizada en una base de datos puede ser utilizada para análisis y toma de decisiones estratégicas, ayudando a las empresas a comprender mejor sus operaciones, clientes y mercados.
**Eficiencia operacional** Automatizan y simplifican muchos procesos, reduciendo errores humanos y aumentando la eficiencia.
**Soporte para aplicaciones de negocios** Las bases de datos son la columna vertebral de muchas aplicaciones empresariales como sistemas de planificación de recursos empresariales (ERP) y gestión de relaciones con clientes (CRM).

<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />

<h3 align="center">🐢 Estructura Repositorio</h3>
Un proyecto bastante versatil y sencillo pero eso no significa que no pueda lograr grandes cosas
encontramos todo el contenido en un solo ![main](main.cpp) 
<h2 align="center">➤Estructura</h2>

  ```cpp
  struct Fecha {
    int anio;
    int mes;
    int dia;
};
  ```

<h2 align="center">➤Funciones</h2>
<details>
<summary>Validar Fecha</summary>
  
  ```cpp
bool validarFecha(int anio, int mes, int dia) {
    if(anio == 0) {
        cout << "Year value is invalid: " << anio << endl;
        return false;
    }
    if(mes < 1 || mes > 12 )
    {
        cout << "Month value is invalid: "<< mes << endl;
        return false;
    }
    if (dia < 1 || dia > 31) 
    {
        cout << "Day value is invalid: "<<dia<<endl;
        return false;
    }
    if(mes == 2) 
    {
        if(dia > 29)
        {
            cout << "Day value is invalid: "<< dia << endl;
            return false;
        }
    }
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11) 
    {
        if(dia > 30) {
            cout << "Day value is invalid: "<< dia << endl;
            return false;
        }
    }
    return true;
}
```

Basicamente mediante una funcion booleana dentro de funcionan agrego filtros en forma de sentencias que permiten detectar si una fecha no es valida es decir su formato es erroneo
</details>

<details>
<summary>Contar Guiones</summary>

  ```cpp
int contarGuiones(const string& str) {
    int count = 0;
    for (char c : str) {
        if (c == '-') {
            count++;
        }
    }
    return count;
}
```

Esta funcion me permite asegurarme que la fecha siga el formato year-moth-day
</details>

<details>
<summary>formatearFecha</summary>

  ```cpp
string formatearFecha(int anio, int mes, int dia) {
    return to_string(anio) + "-" + (mes < 10 ? "0" : "") + to_string(mes) + "-" + (dia < 10 ? "0" : "") + to_string(dia);
}
```

Esta funcion me permite agregar los 0 que faltan a la fecha
</details>

<details>
  <summary>insertarEventoEnOrden</summary>

  ```cpp
void insertarEventoEnOrden(vector<string>& eventos, const string& evento) {
    auto it = eventos.begin();
    while (it != eventos.end() && *it < evento) {
        ++it;
    }
    if(it == eventos.end() || *it != evento) {
        eventos.insert(it,evento);
    }
}
```

Con esto ordeno los eventos en orden acendente como es requerido
</details>

<details>
  <summary>imprimirFechas</summary>

  ```cpp
void imprimirFechas(const map<string, vector<string>>& fechas) {
    for (const auto& par : fechas) {
        cout << "Fecha: " << par.first << endl;
        for (const auto& evento : par.second) {
            cout << "  - " << evento << endl;
        }
        cout << "-----------------------------------" << endl;
    }
}
```

Con esta funcion muestro las fechas en consola
</details>

<details>
<summary>eliminarEvento</summary>

  ```cpp
bool eliminarEvento(vector<string>& eventos, const string& evento) {
    for (auto it = eventos.begin(); it != eventos.end(); ++it) {
        if (*it == evento) {
            eventos.erase(it);
            return true;
        }
    }
    return false;
}
```

esta funcion de tipo booleana me permite eliminar los eventos la uso para los comandos de eliminacion
</details>

<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />
<h3 align="center">🌲Diagrama de flujo </h3>
<img src="diagrama-bd.png" alt="linea" />
Aqui podemos ver la estructura primitiva del programa como mediante sentencias logramos filtrar las entradas
y almacenar los eventos en la fecha deseade
<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />
<h3 align="center">🥪 Como usarlo</h3>

```
git clone https://github.com/TarsorCase/ExamenFinalBD.git
```
```
cd ExamenFinalBD/
```
```
./ExamenFinal
```
![](https://github.com/TarsorCase/Cifrado-Cesar/blob/master/Photos/Parte1.png)

Dependiendo de la situacion en el que lo vaya usar eliga cualquier de las opciones: ``` 1 ```
 o ``` 2 ``` o ``` 3 ```

![](https://github.com/TarsorCase/Cifrado-Cesar/blob/master/Photos/Parte2.png)

En el caso de cifrado poner un texto por ejmplo: ``` Hola ``` 

![](https://github.com/TarsorCase/Cifrado-Cesar/blob/master/Photos/Parte3.png)

En el caso de poner ``` Hola ``` el programa no pedira el numero de desplazamiento que se des
ea por lo que ponemos: ``` 4 ``` 

![](https://github.com/TarsorCase/Cifrado-Cesar/blob/master/Photos/Parte4.png)

Este es un POC(Proof of concept) de el cifrado que ofrece el programa en este caso tomamos la
 opcion de calcular el cifrado de la palabra ``` Hola ``` despues de eso elegimos la cantidad
 de posiciones que deseamos que se mueva  cada caracter en este caso ``` 4 ``` esto nos ofrec
e como resultado final la palabra ``` Lspe ``` esto concluyendo con un cifrado exitoso.
<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />


<h3 align="center">🔎 Contribution Guidelines </h3>

</p>

**Las contribuciones** directas al proyecto son de un equipo de trabajo del que formamos parte, p
ero es importante reconocer la orientación y enseñanza del profesor para lograr el proyecto. 
Siéntanse libres de subir un pull request si desean contribuir.

<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />

<h3 align="center">🔎 Herramientas Utilizadas </h3>

<div align="center">
<p align="center">
  <a href=" " target="_blank" rel="noreferrer">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/5/5f/Windows_logo_-_2012.svg/768px-Windows_logo_-_2012.svg.png" alt="window" width="40" height="40"/>
  </a>
  <a href="https://git-scm.com/" target="_blank" rel="noreferrer">
    <img src="https://git-scm.com/images/logos/downloads/Git-Icon-1788C.png" alt="git" width="40" height="40"/>
  </a>
  <a href="https://code.visualstudio.com/" target="_blank" rel="noreferrer">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/9/9a/Visual_Studio_Code_1.35_icon.svg/2048px-Visual_Studio_Code_1.35_icon.svg.png" alt="vsc" width="40" height="40"/>
  </a>
  <a href="https://code.visualstudio.com/" target="_blank" rel="noreferrer">
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/linux/linux-original.svg" alt="vsc" width="40" height="40"/>
  </a>
  <a href="https://code.visualstudio.com/" target="_blank" rel="noreferrer">
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-line.svg" alt="vsc" width="40" height="40"/>
  </a>
</p>
 </div>


<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />
<h3 align="center">👤Creditos </h3>


<div align="center">
<p align="center">
  <a href="https://github.com/TarsorCase" target="_blank" rel="noreferrer">
    <img src="https://github.com/TarsorCase/ExamenFinalBD/blob/master/Photos/TarsorCase.jpg" alt="vsc" width="170" height="170"/>
  </a>
  <a href="https://github.com/NicoleLozadaLeon" target="_blank" rel="noreferrer">
    <img src="https://github.com/TarsorCase/ExamenFinalBD/blob/master/Photos/142690531.png" alt="vsc" width="170" height="170"/>
  </a>
</p>
</div>

<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />
