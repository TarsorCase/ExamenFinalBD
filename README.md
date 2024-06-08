
 <h1 align="center"> Modelo de Base de Datos simple</h1>
 <div align="center">
<p align="center">
   <img title="blackeye-im" src="https://github.com/TarsorCase/ExamenFinalBD/raw/master/Photos/base-de-datos.png" width="260" height="260" style="display: inline-block;">
</p>
</div>

<p align="center">
<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />
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

<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />

<h3 align="center">➤Funciones</h3>
<details>
<summary>Agregar evento ---> Add <-fecha-> <-evento-></summary>
</details>

<details>
<summary>Eliminar evento ---> Del <-fecha-> <-evento-></summary>
</details>

<details>
<summary>Eliminar fecha ---> DelDate <-fecha-></summary>
</details>

<details>
<summary>Imprimir eventos ---> Print <-fecha-></summary>
</details>

<details>
<summary>Buscar fecha ---> FindDate <-fecha-></summary>
</details>

<details>
<summary>Ayuda ---> Help</summary>
</details>




<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />
<h3 align="center">🌲Pseudocodigo </h3>
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
g++ main.cpp utils.cpp events.cpp -o Programm
```
```
./Programm
```

![](https://github.com/TarsorCase/ExamenFinalBD/blob/master/Photos/HelpCommand.png)

Antes que nada ponemos ``` Help ``` , para ser recibidos con un manual el cual detalla cada opcion que el programa ofrece, denotando el comando a poner en cada ejemplo.


![](https://github.com/TarsorCase/ExamenFinalBD/blob/master/Photos/AddCommand.png)

Por ejemplo decidimos añadir con el comando ``` Add ``` un evento llamado ``` Tropper ``` el cual se va llevar acabo el ```2024-8-6``` con un enter añadimos este evento en nuestra base de datos.

![](https://github.com/TarsorCase/ExamenFinalBD/blob/master/Photos/MultipleAdd.png)

Ocupamos ``` Add ``` varias veces para poder guardar varios eventos en la misma fecha ```2024-8-6```.

![](https://github.com/TarsorCase/ExamenFinalBD/blob/master/Photos/Print.png)

Al finalizar de añadir lo eventos que queremos usamos ``` Print ``` para poder imprimir en la temrinal todas las fechas con sus eventos correspondientes, en este caso solo se muestra una linea con fecha ```2024-8-6```, ya que loe eventos que previamente ingresamos tienen la misma fecha. Sin embargo si hubieran tenido diferentes fechas se mostrarian en orden uno abajo de otro con sus eventos alado para cada fecha.

![](https://github.com/TarsorCase/ExamenFinalBD/blob/master/Photos/DelCommand.png)

Ahora hacemos uso del comando ``` Del ``` para eliminar un evento llamado ``` Tropper ``` el cual se va llevar acabo el ```2024-8-6``` con un enter eliminamos este evento de nuestra base de datos y nos aparece el mensaje ``` Deleted successfully ```.


![](https://github.com/TarsorCase/ExamenFinalBD/blob/master/Photos/DellAll.png)

Si deseamos optimizar este proceso hacemos uso del comando ``` Del ``` y la fecha ```2024-8-6``` ya que con esta combinacion eliminamos todos los eventos de de esta fecha y nos aparece el mensaje ``` Deleted 2 events ``` ya que si hacemos recuerdo quedaaban dos eventos en esa fecha.

<img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png" alt="linea" />


<h3 align="center">🔎 Contribution Guidelines </h3>

</p>

**Las contribuciones** directas al proyecto son de un equipo de trabajo del que formamos parte, pero es importante reconocer la orientación y enseñanza del profesor para lograr el proyecto. 
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
