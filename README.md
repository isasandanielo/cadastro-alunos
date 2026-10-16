# Cadastro de Alunos em C

Programa em C que cadastra o nome e a nota de 3 alunos e oferece um menu interativo para exibir todos os cadastros ou apenas os alunos aprovados (nota maior ou igual a 7).

## Funcionalidades

- Cadastro do nome e da nota de 3 alunos
- Listagem de todos os alunos cadastrados
- Listagem dos alunos aprovados (nota ≥ 7)
- Menu em loop, que só encerra quando o usuário escolhe sair

## Conceitos praticados

- `struct` para representar um aluno
- Vetor de structs
- Funções que recebem vetores como parâmetro
- Estruturas de repetição (`for` e `do...while`)
- Menu com `switch`
- Entrada e saída com `scanf` e `printf`

## Como executar

**Pré-requisito:** um compilador C, como o GCC (MinGW).

1. Baixe ou clone o repositório.
2. Compile o código:
   ```bash
   gcc main4.c -o programa
   ```
3. Execute:
   ```bash
   ./programa
   ```
   No Windows (PowerShell ou CMD), use `programa.exe`.

Se preferir, abra o arquivo `main4.c` no **Dev-C++** (ambiente em que foi feito) e compile com `F11`.

## Exemplo de uso

```
Digite o nome do 1 aluno: Ana
Digite a nota do 1 aluno: 8.5
Digite o nome do 2 aluno: Bruno
Digite a nota do 2 aluno: 5
Digite o nome do 3 aluno: Carla
Digite a nota do 3 aluno: 9

---- Escolha uma opcao----
[1] Mostrar todos os alunos
[2] Mostrar todos os alunos aprovados
[3] Sair
Opcao desejada:
2

Alunos aprovados:
Ana - 8.50Carla - 9.00
```

## Estrutura do projeto

```
.
├── main4.c      # Código-fonte
├── .gitignore   # Ignora arquivos gerados na compilação
└── README.md
```

## Autora

Feito por **Isabela** como exercício de estudo.