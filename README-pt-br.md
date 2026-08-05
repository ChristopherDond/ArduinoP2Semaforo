# [English version](README.md)

# Simulador de Semáforo com Arduino

Simulação de um semáforo controlado por um Arduino UNO usando três LEDs, seguindo a sequência padrão Vermelho → Amarelo → Verde → Amarelo.

> Projetado e simulado no [Tinkercad Circuits](https://www.tinkercad.com/).

---

## Demonstração

![Diagrama do circuito](preview.png)

---

## Como funciona

O sketch controla três LEDs usando uma matriz de pinos `3×3` — cada LED possui três pinos digitais atribuídos (canais R, G, B). Apenas o canal relevante é colocado em HIGH em cada fase; o LED do meio combina Vermelho + Verde para produzir o amarelo.

| Fase | LED Ativo | Estado        | Duração |
|------|----------|---------------|---------|
| 1    | LED 0    | Vermelho      | 2000 ms |
| 2    | LED 1    | Amarelo (R+G) | 1500 ms |
| 3    | LED 2    | Verde         | 2000 ms |
| 4    | LED 1    | Amarelo (R+G) | 1500 ms |

Repete a sequência.

---

## Mapeamento de pinos

| Índice LED | Pino Vermelho | Pino Verde | Pino Azul |
|------------|----------------|------------|-----------|
| 0          | 2              | 3          | 4         |
| 1          | 5              | 7          | 6         |
| 2          | 8              | 10         | 9         |

---

## Componentes

- 1× Arduino UNO
- 3× LEDs (Vermelho, Amarelo/Âmbar, Verde)
- 3× resistores 220Ω
- 1× Protoboard
- Fios jumper

---

## Começando

### Tinkercad (simulação)

1. Abra o [projeto no Tinkercad](#) *(substitua pelo link de compartilhamento)*
2. Clique em **Start Simulation**

### Montagem física

1. Faça a ligação do circuito seguindo a tabela de mapeamento de pinos acima
2. Cada catodo do LED conecta-se ao GND através de um resistor 220Ω
3. Abra `ArduinoP2Semaforo.ino` na IDE do Arduino
4. Selecione a placa: **Arduino UNO** e a porta COM correta
5. Clique em **Upload**

---

## Estrutura do projeto

```
arduino-traffic-light/
├── ArduinoP2Semaforo.ino   # Sketch principal
├── circuit.png             # Screenshot do circuito
└── README.md
```

---

## Licença

MIT
