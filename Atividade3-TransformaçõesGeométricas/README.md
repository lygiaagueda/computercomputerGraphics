# Atividade 3 - Transformações geométricas
Lygia Águeda Aguiar Bezerra - 20170016898

## Transformações geométricas
Nesta atividade foram desenvolvidas transformações geométricas presentes na estrutura do pipeline gráfico. Elas estão desenvolvidas nos tópicos abaixo, sendo elas a transformação escalar, translação, projeção perspectiva e posição da câmera.

### Escala
Nessa transformação altera-se o tamanho do objeto. Para isso é preciso alterar a matriz Model. Para o exemplo desse trabalho foi pedido que a escala tivesse valor (x,y,z) = (1/3, 3/2, 1), resultando em um cósigo pra a matriz Model como o apresentado abaixo.

<center>

![Figura 1 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>

Que resulta na figura abaixo.

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>

### Translação
Na translação o objeto sofre um deslocamento, para o caso do exemplo que será apresentado os valores de seu deslocamento será (x,y,z) = (1,0,0). Para que haja uma alteração de translação no objeto também é necessário alterar a matriz Model para como está apresentada abaixo.

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>

Resultando na seguinte figura

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>

### Projeção perspectiva
Com essa transformação é possível notar uma diferença de perspectiva entre os objetos. Para isso é preciso alterar a matriz de projeção de acordo como d desesejado, sende este a distância de projeção até a origem da câmera.
Essa matriz possui a seguinte configuração

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>

Então é preciso alterar a matriz de projeção no código da seguinte forma, assumindo que o d pedido é igual a 1/2

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>

Resultando na figura abaixo

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>

### Posição da câmera
Nesta seção será necessário alterar a matriz View para mudar a posição da câmera. Para isso deve-se levar em  consideração 3 variáveis, são elas:
- Posição da câmera: ponto em que a câmera se localiza.
- Diração da câmera: definida pelo ponto a que está apontando menos a sua posição.
- Vetor Up: que é perpendicula ao eixo y, geralmente assumindo valor (0, 1, 0).

Com essas informações é possível calcular o x, y e z da camera como mostrado abaixo.

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>

Possuindo esses três valros é possível obter a matriz View da seguinte forma:

Sendo B transposta igual a

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>

e o T igual a

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>

Precisando assim do seguinte código

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>

O que resulta na imagem apresentada abaixo quando é dado um valor de posição da câmera igual a (-1/10, 1/10, 1/4), Valor de Up igual a (0, 1, 0) e o ponto para onde a câmera está apontado igual a (0, 0, 0).

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>

### Transformação livre
Nesta seção serão feitas alterações nas 3 matrizes citadas durante este trabalho(Model, View e Projeção). Para a model será aplicado um fator de escala (2, 2, 2), para a View será alterada apenas o valor da posição da câmera para (-0.2, 0.1, 0.25)e namatriz de projeção será adoto um d com valor 1/4.
Resultando nos seguintes códigos.

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>

O que leva o objeto a se apresentar da seguinte forma.

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/mygl_framework/print/estruturas.png?raw=true)

</center>


## Dificuldades
A maior dificuldade encontrada foi saber ultilizar as matrizes da forma correta, como por exemplo entender quando estava sendo usado uma matriz transposta. 


## Referências
Notas de aula.

https://learnopengl.com/Getting-started/Camera

## Compilando e executando o projeto
Para compilar e executar o projeto, basta digitar os seguintes comandos no terminal:

    $ make
    $ ./transform_gl
