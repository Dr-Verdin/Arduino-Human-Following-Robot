# Arduino-Human-Following-Robot

## Introdução

Projeto de um Arduino Human Following Robot baseado no vídeo ["How To Make Arduino Human Following Robot"](https://www.youtube.com/watch?v=yAV5aZ0unag&t=24s) do DIY Builder.
O material utilizado está disponivel na pasta "Material".

## Lista de Componentes

| Quantidade | Componentes                                    | Valor Unit. (R$) |
|------------|------------------------------------------------|------------------|
| 1          | Arduino Uno                                    | [R$44,91](https://www.baudaeletronica.com.br/produto/arduino-uno-atmega328-smd-compativel-cabo-usb.html) |
| 1          | Motor Shield L293D                             | [R$19,99](https://www.baudaeletronica.com.br/produto/motor-shield-l293d-driver-ponte-h-para-arduino.html) |
| 2          | Kit motor DC + roda para Robô                  | [R$ 13,41](https://www.baudaeletronica.com.br/produto/kit-motor-dc-roda-para-robo.html) |
| 1          | Servo Motor                                    | [R$11,74](https://www.baudaeletronica.com.br/produto/micro-servo-9g-sg90-tower-pro.html) |
| 1          | Sensor de Distância Ultrassônico               | [R$9,20](https://www.baudaeletronica.com.br/produto/sensor-de-distancia-ultrassonico-hc-sr04.html) |
| 2          | Sensor de Obstáculo Infravermelho              | [R$6,30](https://www.baudaeletronica.com.br/produto/modulo-sensor-de-obstaculo-infravermelho-ir.html) |
| 2          | Kit 2 Baterias Recarregáveis 18650 3.7V-4.2V Li-ion | [R$30,00](https://produto.mercadolivre.com.br/MLB-1792812106-kit-2-bateria-recarregavel-18650-37v-42v-li-ion-lanterna-_JM#position%3D26%26search_layout%3Dgrid%26type%3Ditem%26tracking_id%3Ddbb92f25-839f-4a18-8795-f224b35d7b48) |
| 1          | Suporte para 3 Baterias de Litio 18650         | [R$18,98](https://produto.mercadolivre.com.br/MLB-2656593580-suporte-case-para-3s-baterias-18650-126v-com-mola-e-fios-_JM#position%3D23%26search_layout%3Dgrid%26type%3Ditem%26tracking_id%3D24d282f1-dfc9-4428-80fb-c2c0c75f4e5b) |
|            | Base de acrílico (qualquer uma serve desde que caibá os componentes) |    -     |
| **TOTAL**  |                                                | R$204,24 |

**Observações:** A maioria dos componentes foi adquirido com o orientador do projeto, ou seja, muito provavelmente pode ter variações de valores em relação aos preços da tabela. 
Os componentes que tivemos que comprar foram 1 Sensor de Obstáculo Infravermelho, 1 Suporte para 3 Baterias de Litio 18650 e o Motor Shield L293D; Além disso, tivemos que confessionar (em papelão), o "pescoço" e a "cabeça" do robo.

## Tutorial

A seguir estará o passo a passo para a montagem do robo de acordo com a nossa experiência (não necessáriamente seguirá a mesma ordem do video base):

1. Primeiramente, depois de escolhermos o projeto que queriamos executar, fomos buscar alguns componentes com o orientador (Simões) da disciplina. Felizmente adquirimos a maioria dos componentes necessários para o projeto e os que faltaram compramos numa loja de eletrônica ou confeccionamos nós mesmos;
2. Já com todos os componentes necessários começamos a montagem, com a base do robo já pronta (Kit motor DC + roda para Robô e base de acrílico) fixamos o Arduino e o Suporte de Bateria em cima;
3. Logo em seguida encaixamos o Motor Shield no Arduino;
4. Começando a montagem da cabeça:
    1. Fizemos peças improvisadas de papelão para a montagem da cabeça, pois o tempo era muito curto para aprendermos à mexer com uma impressora 3D da universidade:

    <img src="">"moldes"

    2. Com as peças já prontas colamos o Servo Motor na base maior do "pecoço";
    3. Para a "cabeça" encaixamos a máscara no Sensor de Distância Ultrassônico e em seguida colamos os dois Sensores de Obstáculo Infravermelhos nas laterias da máscara. Também colamos uma viseira em cima da cabeça;
    4. Com a "cabeça" e o "pescoço" prontos, colamos um no outro e depois fizamos o Servo Motor na frente da base.
5. Em seguida, já com todos os componentes fixados na base fizemos as conecções do circuito com Jumpers:

<img src="./Material/Circuit.jpg">

6. Com todo o Hardware pronto, passamos o código para o Arduino;
7. Voilá o robo está pronto, é só inserir as baterias e se tudo estiver certo ele funcionará. Caso queira é recomendado inserir uma chave para ligar e desligar, com isso não é necessário remover as baterias para desligá-lo.

## Desafios enfretados na execução do projeto

A seguir estará listado as dificuldades que enfrentamos na realização do projeto e como solucionamos esses problemas para conseguir finalizá-lo:

- O vídeo com o projeto original tem origem indiana e foi postado à 4 anos atrás, então tivemos um pequeno trabalho para identificar os componentes e buscar semelhantes caso a necessidade pedisse; 
- Quando compramos os componentes faltantes, acabamos comprando o Suporte de Bateria igual ao do vídeo (de 2 baterias), o que foi um problema mais adiante, pois os motores da base eram de 6V (12V no total, pois só usamos dois motores DC), ou seja, precisava, no nosso caso, de um Suporte de 3 Baterias. Felizmente o nosso orientador tinha esse suporte e não precisamos comprar outro;
- 

## Resultado final do projeto
### Imagens do projeto

### Video do projeto

## Agradecimentos

Agradeço ao excelentíssimo professor Eduardo do Valle Simões, vulgo Big Simas, que nos auxiliou na execução desse projeto e ao nosso veterano "[Bom Dia :sun_with_face:](https://github.com/mpferreira003)" que nos ajudou à finalizar esse projeto.

## Alunos

- Camila Piscioneri Magalhães [(Dr. Verdin)](https://github.com/Dr-Verdin).
- Matheus Guilherme Ferreira Mendonça Learte [(Matheus-Learte)](https://github.com/Matheus-Learte).