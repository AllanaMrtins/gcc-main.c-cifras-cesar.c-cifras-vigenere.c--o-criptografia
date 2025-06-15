# 🔐 Criptografia Clássica com C

Este projeto realiza a comparação entre duas cifras clássicas: **César** e **Vigenère**, desenvolvidas em linguagem C. O programa permite ao usuário escolher entre as cifras, criptografar textos e observar o tempo de execução de cada método.

## 💻 Funcionalidades

### Cifra de César
- Entrada de texto e chave numérica.
- Saída com texto criptografado.

### Cifra de Vigenère
- Entrada de texto e palavra-chave.
- Criptografia baseada em deslocamento por caracteres da chave.

## 🧠 Exemplos

### César
- Texto: `casa`
- Chave: `3`
- Resultado: `fdvd`

### Vigenère
- Texto: `escola`
- Chave: `abc`
- Resultado: `etspmb`

## 📌 Observações
- Aceita apenas letras do alfabeto (sem acentos).
- Ignora diferenciação entre maiúsculas e minúsculas na cifra.
- A execução deve ser feita via terminal após a compilação do projeto.

## ▶️ Como compilar e executar

No terminal, dentro da pasta do projeto:

```bash
gcc main.c cifras/cesar.c cifras/vigenere.c -o criptografia
./criptografia
