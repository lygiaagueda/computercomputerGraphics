# Atividade 4 - Modelos de iluminação
Lygia Águeda Aguiar Bezerra - 20170016898

## Modelos de iluminação
Nesta atividade foram aplicados modelos de iluminação tradicionais para rasterização(ambiente, difuso e especular). Para isso foi usado um código previamente disponibilizado pelo professor.

### Modelo de reflexão difuso
Para a aplicação desse modelo é necessário aplicar a fórmula abaixo:
 
<center>

![Figura 1 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/Atividade3-Transforma%C3%A7%C3%B5esGeom%C3%A9tricas/imagens//codigo_escala.png?raw=true)

</center>

Em que o cosseno de teta é o mesmo que L*N, sendo L a direção da luz e N o vetor normal a superfície. O que resulta no código abaixo.

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/Atividade3-Transforma%C3%A7%C3%B5esGeom%C3%A9tricas/imagens/escala.png?raw=true)

</center>

Que gera a figura apresentada abaixo.

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/Atividade3-Transforma%C3%A7%C3%B5esGeom%C3%A9tricas/imagens/escala.png?raw=true)

</center>


### Modelo de reflexão especular
Esse modelo também é conhecido por modelo de Phong e é preciso aplicar a seguinte fórmula

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/Atividade3-Transforma%C3%A7%C3%B5esGeom%C3%A9tricas/imagens/codigo_translacao.png?raw=true)

</center>

Em que o cosseno de teta já foi explicitado na sessão acima e o cosseno de alpha é R * V, em que R é a reflexão da luz e V é a direção para o ponto de visão. O que leva ao seguinte código.

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/Atividade3-Transforma%C3%A7%C3%B5esGeom%C3%A9tricas/imagens/translacao.png?raw=true)

</center>

Gerando o resultado apresentado abaixo.

<center>

![Figura 2 - Estruturas usadas para armazenar as coordenadas dos pontos e cor o pixel](https://github.com/lygiaagueda/computercomputerGraphics/blob/master/Atividade3-Transforma%C3%A7%C3%B5esGeom%C3%A9tricas/imagens/translacao.png?raw=true)

</center>

## Dificuldades
As dificuldades encontradas para realizar este trabalho foram mais relacionadas a encontrar funções para fazer operação entre vetores.

## Referências
Notas de aula.

## Compilando e executando o projeto
Para compilar e executar o projeto, basta digitar os seguintes comandos no terminal:

    $ g++ -Wall -Wextra -Wpedantic -std=c++17 -O0 -g3 -DDEBUG main.cpp -lglut -lGLEW -lGLU -lGL -o shading_gl
    $ ./shading_gl
