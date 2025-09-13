# Atividades Práticas de Laboratório

Resolução das atividades dos capítulos 5 e 6 da disciplina de Paradigmas de Programação.

## Atividade 1

- ### O valor impresso depende do local de definição ou do local de chamada da função?

    O valor impresso depende do local de definição.

- ### Qual linguagem se comporta como escopo estático e qual se aproxima de dinâmico?

    Ambas linguagens se comportam como escopo estático.

---

## Atividade 2

- ### Por que `a` sempre reinicia do zero, mas `b` acumula valor entre chamadas?

    Pois B foi declarado com um valor estático, sempre que recebe um novo valor ele é tido como o novo "normal" durante a execução do script. Entretanto, A é inicializada como 0 toda vez que é chamado.

- ### Como isso se relaciona com tempo de vida da variável?

    Isso mostra que variáveis estáticas tem o tempo de vida maior (durante toda a execução) e as "normais" reiniciam por bloco.

---

## Atividade 3

- ### Por que o Java não permite essa operação e o Python permite?

    Em Java não é permitido fazer a junção de dois tipos diferentes (int, str, bool), em Python é permitido fazer a conversão, porém para junção é necessário ser do mesmo tipo. Ou seja, Java é mais estático e Python mais dinâmico.

- ### Quais as vantagens e desvantagens de cada abordagem?

    Uma linguagem estática reduz os riscos no desenvolvimento, por conta das diversas "regras" de linguagem, porém é massante, por outro lado, uma linguagem dinâmida oferece uma menor segurança no desenvolvimento e maior flexibilidade. 

## Atividade 4

- ### Qual a diferença entre um array e um registro/objeto?

    A diferença é no tipo de elementos que cada um suporta. Enquanto um array guarda apenas informações do mesmo tipo um objeto pode guardar de tipos diferentes.

- ### Quando seria mais adequado usar array e quando usar struct/classe?

    Array é indicado ser utilizado em coleções de itens que são pré-ordenados, ou seja, do mesmo tipo. Já no caso de Struct é recomendado utilizar em situações de armazenamento de itens de diferentes tipos.