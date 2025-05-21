# Desafio-Cartas-Super-Trunfo-

# Super Trunfo em C

Este trabalho implementa uma simulação simplificada do jogo **Super Trunfo** em linguagem C, com três desafios de complexidade progressiva. Cada desafio reforça o uso de estruturas de decisão.

---

## Estrutura dos Desafios

### Desafio 1 - Comparação com `if` e `if-else`
- O jogador e o oponente possuem cartas com um único atributo: **força**.
- A comparação é feita diretamente com `if`.

### Desafio 2 - Comparação com múltiplos atributos (`switch` + `if-else`)
- O jogador escolhe qual atributo deseja usar: **força**, **magia** ou **velocidade**.
- A lógica de decisão usa `switch` e `if-else`.

### Desafio 3 - Comparação com dois atributos (uso do operador ternário)
- O jogador escolhe dois atributos.
- A pontuação é calculada com `operador ternário (? :)` para cada comparação.
- O vencedor é aquele com mais pontos.

---

## Execução

### Compilação:
```bash
gcc super_trunfo_final.c -o super_trunfo
```

### Execução:
```bash
./super_trunfo      # Linux / Mac
super_trunfo.exe    # Windows
```

---

## Estruturas Utilizadas

- `if`, `if-else`, `else if`
- `switch`
- `operador ternário`
- Vetores
- Menus interativos
- Funções separadas para organização

---

## Autor
miguel henrique

