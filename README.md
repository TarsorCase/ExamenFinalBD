<p align="center">
 <h1> Modelo de Base de Datos simple</h1>
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

<h3 align="center">🔎 Justificación </h3>
<p align="center">✨ Las bases de datos: El corazón de la eficiencia y la toma de decisiones empresariales ✨</p>
<div style="padding: 10px; border: 2px solid #ccc; border-radius: 10px; background-color: #f9f9f9; margin: 20px;">
  <h4>📚 Almacenamiento de información</h4>
  <p>Permiten almacenar grandes cantidades de información organizada de manera que se puede acceder, gestionar y actualizar eficientemente.</p>
</div>
<div style="padding: 10px; border: 2px solid #ccc; border-radius: 10px; background-color: #f9f9f9; margin: 20px;">
  <h4>📊 Toma de decisiones</h4>
  <p>La información organizada en una base de datos puede ser utilizada para análisis y toma de decisiones estratégicas, ayudando a las empresas a comprender mejor sus operaciones, clientes y mercados.</p>
</div>
<div style="padding: 10px; border: 2px solid #ccc; border-radius: 10px; background-color: #f9f9f9; margin: 20px;">
  <h4>⚙️ Eficiencia operacional</h4>
  <p>Automatizan y simplifican muchos procesos, reduciendo errores humanos y aumentando la eficiencia.</p>
</div>
<div style="padding: 10px; border: 2px solid #ccc; border-radius: 10px; background-color: #f9f9f9; margin: 20px;">
  <h4>🏢 Soporte para aplicaciones de negocios</h4>
  <p>Las bases de datos son la columna vertebral de muchas aplicaciones empresariales como sistemas de planificación de recursos empresariales (ERP) y gestión de relaciones con clientes (CRM).</p>
</div>

<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />

<h3 align="center">🐢 Estructura Repositorio</h3>

## Funcionalidades del Modelo de Base de Datos

El modelo de base de datos simple ofrece las siguientes funciones de gestion: 

1---> Clase número

2---> Agregar evento

3---> Eliminar evento

4---> Eliminar todos los eventos de una fecha específica

5---> Imprimir eventos de una fecha específica

6---> Buscar eventos en una fecha específica

7---> Mostrar ayuda

## How to Use

```
git clone https://github.com/TarsorCase/ExamenFinalBD.git
```
```
cd ExamenFinalBD/
```
```
dotnet run ExamenFinal.cpp
```
![](https://github.com/TarsorCase/Cifrado-Cesar/blob/master/Photos/Parte1.png)

Dependiendo de la situacion en el que lo vaya usar eliga cualquier de las opciones: ``` 1 ``` o ``` 2 ``` o ``` 3 ```

![](https://github.com/TarsorCase/Cifrado-Cesar/blob/master/Photos/Parte2.png)

En el caso de cifrado poner un texto por ejmplo: ``` Hola ``` 

![](https://github.com/TarsorCase/Cifrado-Cesar/blob/master/Photos/Parte3.png)

En el caso de poner ``` Hola ``` el programa no pedira el numero de desplazamiento que se desea por lo que ponemos: ``` 4 ``` 

![](https://github.com/TarsorCase/Cifrado-Cesar/blob/master/Photos/Parte4.png)

Este es un POC(Proof of concept) de el cifrado que ofrece el programa en este caso tomamos la opcion de calcular el cifrado de la palabra ``` Hola ``` despues de eso elegimos la cantidad de posiciones que deseamos que se mueva  cada caracter en este caso ``` 4 ``` esto nos ofrece como resultado final la palabra ``` Lspe ``` esto concluyendo con un cifrado exitoso.

## Contribution Guidelines
Las contribuciones directas al proyecto son de un equipo de trabajo del que formamos parte, pero es importante reconocer la orientación y enseñanza del profesor para lograr el proyecto. Siéntanse libres de subir un pull request si desean contribuir.

## Creditos
- **Nicole Lozada** - [nicole.lozada@ucb.edu.bo](mailto:nicole.lozada@ucb.edu.bo)
- **Gerard Gonzalez** - [gerard.gonzalez@ucb.edu.bo](mailto:gerard.gonzalez@ucb.edu.bo)
- **Docente** - Orientación y enseñanza

## Herramientas Utilizadas
- **C++**: Lenguaje de programación principal.
- **g++**: Compilador utilizado para construir el proyecto.
- **GitHub**: Plataforma para alojar el repositorio y facilitar la colaboración.

## Disclaimer
Por favor, tener en cuenta que este repositorio es un proyecto universitario. Los recursos aquí disponibles son totalmente utilizables para cualquier individuo interesado en entender cómo funciona el proyecto.

## Contact
Si tienes alguna pregunta, inquietud o comentario sobre este repositorio, por favor no dudes en comunicarte. Puedes contactarnos abriendo un problema o enviándonos un correo electrónico a:

- [nicole.lozada@ucb.edu.bo](mailto:nicole.lozada@ucb.edu.bo)
- [gerard.gonzalez@ucb.edu.bo](mailto:gerard.gonzalez@ucb.edu.bo)

Happy Coding! 🚀

