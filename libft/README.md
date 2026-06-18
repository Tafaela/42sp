*This project has been created as part
of the 42 curriculum by <rermacor>*

# Libft

## Sobre o Projeto

A **Libft** é o primeiro projeto do currículo da 42. O objetivo é recriar diversas funções da biblioteca padrão da linguagem C para compreender seu funcionamento interno, praticar gerenciamento de memória, manipulação de strings e estruturas de dados.

Esta biblioteca será reutilizada em diversos projetos futuros da formação, servindo como base para o desenvolvimento de programas mais complexos.

---

## Compilação

O projeto é compilado utilizando as flags:

```bash
-Wall -Wextra -Werror
```

### Compilar a biblioteca

```bash
make
```

### Remover arquivos objeto

```bash
make clean
```

### Remover arquivos objeto e biblioteca

```bash
make fclean
```

### Recompilar tudo

```bash
make re
```

---

## Utilização

Inclua o arquivo de cabeçalho no seu projeto:

```c
#include "libft.h"
```

Compile seu programa juntamente com a biblioteca:

```bash
cc main.c -L. -lft -o programa
```

---

# Funções

## Verificação de Caracteres

| Função | Descrição |
|----------|----------|
| ft_isalpha | Verifica se o caractere é uma letra. |
| ft_isdigit | Verifica se o caractere é um número. |
| ft_isalnum | Verifica se o caractere é alfanumérico. |
| ft_isascii | Verifica se pertence à tabela ASCII. |
| ft_isprint | Verifica se o caractere é imprimível. |

---

## Conversão de Caracteres

| Função | Descrição |
|----------|----------|
| ft_toupper | Converte letra minúscula para maiúscula. |
| ft_tolower | Converte letra maiúscula para minúscula. |

---

## Manipulação de Memória

| Função | Descrição |
|----------|----------|
| ft_memset | Preenche uma região de memória com um valor específico. |
| ft_bzero | Preenche uma região de memória com zeros. |
| ft_memcpy | Copia blocos de memória sem tratar sobreposição. |
| ft_memmove | Copia blocos de memória tratando sobreposição. |
| ft_memchr | Procura um byte em uma região de memória. |
| ft_memcmp | Compara duas regiões de memória. |
| ft_calloc | Aloca memória e inicializa com zeros. |

---

## Manipulação de Strings

| Função | Descrição |
|----------|----------|
| ft_strlen | Retorna o tamanho de uma string. |
| ft_strlcpy | Copia uma string de forma segura. |
| ft_strlcat | Concatena strings de forma segura. |
| ft_strchr | Localiza a primeira ocorrência de um caractere. |
| ft_strrchr | Localiza a última ocorrência de um caractere. |
| ft_strncmp | Compara duas strings até n caracteres. |
| ft_strnstr | Procura uma substring dentro de outra string. |
| ft_strdup | Cria uma cópia alocada de uma string. |

---

## Conversão de Tipos

| Função | Descrição |
|----------|----------|
| ft_atoi | Converte string para inteiro. |
| ft_itoa | Converte inteiro para string. |

---

## Manipulação Avançada de Strings

| Função | Descrição |
|----------|----------|
| ft_substr | Extrai uma substring. |
| ft_strjoin | Junta duas strings em uma nova string. |
| ft_strtrim | Remove caracteres especificados das extremidades. |
| ft_split | Divide uma string utilizando um delimitador. |
| ft_strmapi | Aplica uma função a cada caractere e cria uma nova string. |
| ft_striteri | Aplica uma função diretamente em cada caractere da string. |

---

## Escrita em File Descriptors

| Função | Descrição |
|----------|----------|
| ft_putchar_fd | Escreve um caractere em um file descriptor. |
| ft_putstr_fd | Escreve uma string em um file descriptor. |
| ft_putendl_fd | Escreve uma string seguida de quebra de linha. |
| ft_putnbr_fd | Escreve um número inteiro em um file descriptor. |

---

## Listas Encadeadas

A estrutura utilizada é:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

### Funções de Lista

| Função | Descrição |
|----------|----------|
| ft_lstnew | Cria um novo nó. |
| ft_lstadd_front | Adiciona um nó ao início da lista. |
| ft_lstadd_back | Adiciona um nó ao final da lista. |
| ft_lstsize | Retorna a quantidade de nós. |
| ft_lstlast | Retorna o último nó da lista. |
| ft_lstdelone | Remove um nó e libera sua memória. |
| ft_lstclear | Remove e libera todos os nós da lista. |
| ft_lstiter | Aplica uma função a cada elemento da lista. |
| ft_lstmap | Cria uma nova lista aplicando uma função aos elementos. |

---

## Estrutura do Projeto

```text
libft/
├── libft.h
├── Makefile
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ...
├── ft_lstmap.c
└── libft.a
```

---

## Objetivos de Aprendizagem

- Manipulação de memória
- Ponteiros
- Strings em C
- Alocação dinâmica
- Estruturas de dados
- Modularização de código
- Criação de bibliotecas estáticas
- Utilização de Makefiles

---

Projeto desenvolvido como parte do currículo da 42.