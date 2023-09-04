1) Rode o programa anterior para valores grandes de n. As mensagens sempre estar˜ao ordenadas pelo valor de i?

Passo 1. Criar um arquivo com extensão .c chamado stderr.c
![image](https://github.com/yurinichimura/sistemaops/assets/139904028/d7ddb592-4bf4-4e13-a22f-57b9dd80a647)

Passo 2. Colocar dentro do seu arquivo o código que será rodado e , colocamos o nosso n = 100.
![image](https://github.com/yurinichimura/sistemaops/assets/139904028/c6583a61-5f8e-4e54-9dc6-5a4c8b5dc522)

Passo 3. Usando o gcc para fazer a compilação do código e executa-lo
![image](https://github.com/yurinichimura/sistemaops/assets/139904028/5004b9d6-50f9-4fd6-8229-7515289baee2)

Rodando o código é possível observar que , com a saída stderr.c , ele sai desordenado. Com todos os números fora de ordem.

![image](https://github.com/yurinichimura/sistemaops/assets/139904028/1d0b145f-9b9e-4a66-bcd0-22a910318bc7)
![image](https://github.com/yurinichimura/sistemaops/assets/139904028/b4868fed-b114-4277-9554-24840abd20a2)
![image](https://github.com/yurinichimura/sistemaops/assets/139904028/e6f36187-a623-45d8-99f4-378e41fe0bd8)
![image](https://github.com/yurinichimura/sistemaops/assets/139904028/8b8e4a1e-419e-4850-a986-fb887f73d8e4)

2) O que acontece se o programa anterior escreve-se as mensagens para sys.stdout, usando print, ao invés de para sys.stderr?

Passo 1. Criar um arquivo com extensão .c chamado stdout.c
![image](https://github.com/yurinichimura/sistemaops/assets/139904028/b891f6bb-60dc-4258-8d54-a61921470bfd)

Passo 2. Colocar dentro do seu arquivo o código que será rodado e , colocamos o nosso n = 100.
![image](https://github.com/yurinichimura/sistemaops/assets/139904028/31e60fa1-f351-4801-af25-76c0d1fa6b9a)

Passo 3. Usando o gcc para fazer a compilação do código e executa-lo
![image](https://github.com/yurinichimura/sistemaops/assets/139904028/fb0dfb75-4a74-4e36-a8c4-aeefb47e33cb)

Tanto no stderr quanto no stdout , não tem uma sáida númerica ordenada.

![image](https://github.com/yurinichimura/sistemaops/assets/139904028/1623c875-7913-4f6a-a962-840f82d3c9b8)
![image](https://github.com/yurinichimura/sistemaops/assets/139904028/532b896e-1821-423b-8dbf-07d17309815f)
![image](https://github.com/yurinichimura/sistemaops/assets/139904028/c21e2c3d-1aca-4a50-a2d8-910317057aa4)
![image](https://github.com/yurinichimura/sistemaops/assets/139904028/58f817bd-99e1-4f03-b8ef-12d703953a23)





