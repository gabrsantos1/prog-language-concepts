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

## Capitulo 8 - Atividade 1

- ### Compare os três códigos (original com `goto`, versão com `while` e versão com `for`) e escreva um pequeno parágrafo discutindo qual forma é mais legível e por quê.

    O código com goto é menos legível, pois obriga o programador a acompanhar saltos manuais. A versão com while é simples e clara, mas ainda exige inicialização e atualização da variável de controle. Já a versão com for é a mais simples e legível, pois resume toda a lógica do contador em uma única linha, evitando erros e tornando o fluxo de repetição mais evidente.

## Capitulo 8 - Atividade 2

- ### Escreva um comentário final destacando em qual linguagem foi mais simples de implementar e justificar o motivo.

    Em C o switch/case deixa claro quais são as opções, mas exige mais código. Já em Python o código é mais curto e direto, sem necessidade de tipos explícitos e com menos linhas de código. É mais simples em Python, pois a linguagem exige menos código.

## Capitulo 8 - Atividade 3

- ### Comente sobre como seria a implementação desse mesmo programa utilizando apenas `goto` e rótulos, destacando as vantagens da abordagem moderna.

    Com goto precisaria criar rótulos e saltos manuais para números negativos, zero ou retornar o resultado. Essa abordagem deixaria o código com a manutenção dificultada por conta do fluxo lógico espalhado. Atualmente, com estruturas melhores, o código fica mais claro e legível e com a manutenção mais "fácil".

## Capitulo 9 - Atividade 1

- ### Qual a diferença observada entre as duas versões?

    Por valor a variável original não se altera, apenas uma cópia dela. Na versão por referência a varíavel original se altera por receber o endereço da memória da variável.

- ### Por que o valor da variável só se altera na versão por referência?

    Porque ao passar por referência, a função acessa diretamente o mesmo espaço de memória da variável no programa principal.

- ### Relacione essa diferença com as estratégias de passagem de parâmetros discutidas no Capítulo 9.

    A passagem por valor preserva a variável original, útil quando não queremos efeitos colaterais. Já a passagem por referência permite modificar a variável diretamente, o que pode ser vantajoso em termos de eficiência e quando é necessário alterar o valor original.

## Capitulo 9 - Atividade 2

- ### O que acontece com a ordem das mensagens exibidas?

    As mensagens aparecem intercaladas, mas não de forma determinística. A ordem pode variar a cada execução, pois depende do agendamento da corrotina pelo sistema.

- ### Por que as mensagens da corrotina e da função normal se intercalam?

    Porque a função marcada com go é executada concorrentemente com o fluxo principal. Enquanto uma função “dorme”, a outra pode continuar executando, alternando a saída no console.

- ### Relacione esse comportamento com a definição de **corrotinas** estudada no Capítulo 9.

    Corrotinas são rotinas que podem ser executadas de forma concorrente, permitindo múltiplos fluxos de execução dentro de um mesmo programa. A função escrever("Corrotina") é uma corrotina, e sua execução em paralelo com a função principal demonstra isso.