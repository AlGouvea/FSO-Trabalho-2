# FSO-Trabalho-2

## Contexto
<p>O trabalho consiste em três questões julgadas por um juíz online (CDMOJ) que tem como objetivo a solidificação dos conhecimentos obtidos na disciplina de Fundamentos de Sistemas Operacionais.</p>

## Questão 1 - Substituição de Páginas (FIFO)

### Enunciado
<p>Lucas, um jovem aluno de Engenharia de Software, é muito curioso e meticuloso. Recentemente ele aprendeu sobre os algoritmos de substituição de páginas e ficou muito curioso sobre a estratégia de fila.

O professor disse que esta estratégia de substituição de páginas sofre da anomalia de Belady, que alocando mais quadros podemos obter uma maior taxa de page faults.</p>

### Entrada
<p>A entrada é composta por um único caso de teste contendo diversas linhas. A primeira linha possui um número inteiro N ( 3 \leq N \leq 10^5 ), a segunda linha possui N números P_i ( 1 \leq P_i \leq 10^6 ) representando a página que é acessada pelo sistema. A partir da terceira linha uma número inteiro Q (1 \leq Q \leq 10^5) será dado, indicando para quantos quadros a sequência de páginas deve ser testada.

A entrada termina em EOF.</p>

### Saída
<p>Para cada teste de quadros você deverá imprimir uma única linha contendo a quantidade de quadros e de page faults. A última linha deve contar a string Belady detectado ou Sem anomalia caso seja identificado a anomalia de Belady para os testes feitos.</p>

## Questão 2 - Arquivos Idênticos

### Enunciado
<p>A sua tarefa é determinar se os arquivos passados como argumento para o seu programa são iguais ou diferentes.

Para determinar se arquivos são iguais ou diferentes você deve comparar todos os bytes dos dois arquivos. E, claro, se os tamanhos forem diferentes você já pode considerar que os arquivos são diferentes.

Para tratar os parâmetros você deve utilizar os parâmetros argc e argv, da main. A maneira mais comum é declarando a sua função principal da seguinte maneira:</p>
```c
int main(int argc, char **argv) {
}
```

### Entrada
<p>O seu programa será invocado com parâmetros na linha de comando, que representam arquivos, por exemplo: </p>

```c
./solucao arquivo1 arquivo2 arquivo3
```
  
<p>Você pode considerar que serão passados até 2000 arquivos como argumento para o seu programa.

Cada arquivo pode conter um tamanho que varia de 1 byte até 300
MegaBytes. E cada arquivo pode ser tanto binário como de texto.</p>

### Saída
<p>Para cada par você deverá imprimir os nomes dos arquivos e a string iguais quando os arquivos forem idênticos e diferentes se tiverem ao menos 1 byte diferente.</p>

## Questão 3 - Procurando pseudo-aleatórios modulados

### Enunciado
<p>A pacata cidade de South Park nada de pacata tem. Butters, digo, Professor Chaos está aterrorizando mais uma vez! Ele busca o que ninguém jamais procurou, as ocorrências de alguns números pseudo-aleatórios modulares!
O desejo de professor Chaos é muito simples. Ele possui duas sementes para geração de números pseudo-aleatórios e precisa saber quantas ocorrências de alguns números ocorrem a cada 100000 (isso mesmo cem mil) gerações de números pseudo-aleatórios para as duas sementes que ele possui.</p>


### Entrada
<p>A entrada possui um único caso de teste contendo um número indeterminado de linhas.

A primeira possui dois números inteiros sem sinal, S1 e S2, representanto, respectivamente, a primeira semente e a segunda semente.</p>
```c
Use rand_r() para gerar os números pseudo-aleatórios
```
<p>Depois da primeira linha existirão diversas linhas contendo dois inteiros M_i e B_i, representando, respectivamente, MÓDULO (em C representado pelo sinal %) e o número que seja se procurar.</p>

### Saída
<p>Para cada linha contendo M_i e B_i você deve responder quantas ocorrências de B_i aconteceram para cada um dos 200000 números (100000 de cada semente) pseudo-aleatórios módulo M_i.</p>
