# MEDAL01

Protótipo de um programa em C++ para organizar conquistas e resultados de olimpíadas científicas.

## Sobre o projeto

O **MEDAL01** é um projeto desenvolvido para praticar conceitos de programação em C++ por meio de uma aplicação relacionada ao registro e organização de conquistas em olimpíadas científicas.

Nesta primeira versão, o programa funciona no terminal e permite cadastrar, visualizar, buscar, editar e excluir conquistas.

## Funcionalidades

* Adicionar uma conquista
* Visualizar todas as conquistas cadastradas
* Buscar uma conquista pelo nome da competição
* Editar informações de uma conquista
* Excluir uma conquista
* Exibir os dados de cada conquista de forma organizada

Cada conquista possui atualmente:

* Nome da competição
* Área
* Tipo da conquista
* Categoria
* Ano
* Pontuação

## Tecnologias

* **C++**
* **Git**
* **GitHub**

## Como executar

### Compilação

Com o compilador `g++` instalado, execute:

```bash
g++ Medal_v01.cpp -o Medal_v01.exe
```

### Execução

No Windows:

```powershell
.\Medal_v01.exe
```

## Estado atual

**Versão 1.0 — concluída**

A versão atual possui um CRUD básico de conquistas e funciona inteiramente em memória. Isso significa que os dados cadastrados são perdidos quando o programa é encerrado.

## Próximos passos

O MEDAL01 foi pensado para evoluir gradualmente. Entre os próximos objetivos estão:

* Implementar persistência dos dados
* Armazenar informações de certificados
* Adicionar estatísticas de desempenho
* Melhorar a organização dos dados
* Recriar o projeto em Java utilizando Programação Orientada a Objetos
* Explorar posteriormente novas possibilidades de interface e armazenamento

## Objetivo de aprendizado

O projeto faz parte do processo de aprendizagem e serve como uma aplicação prática para desenvolver conhecimentos de programação, organização de código, Git, GitHub e, futuramente, Programação Orientada a Objetos e persistência de dados.
