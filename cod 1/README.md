# código 1 = Princípio da responsabilidade única

O código 1 serve para calcular a área e o perimetro de um retângulo das dimenções que o usuario quiser calcular e depois printa os resultados na tela. O código ruim afeta o príncipio de responsabilidade única, pois de acordo com o Princípio de Responsabilidade Única, cada função deve ter apenas uma responsabilidade, o que facilita a manutenção e a evolução do código, porém no função 'calcularRetangulo' a função faz duas coisas, ele calcula a área e o perimetro do mesmo. Na versão do código que atende a este princípio a função 'calcularRetangulo' é dividida em duas: 'calcularAreaRetangulo' e 'calcularPerimetroRetangulo' que agora calculam a área e o perimetro separadamente, sendo assim, atendendo ao pricípio de responsabilidade única.
Os códigos vão estar em commits diferentes, o primeiro commit é o errado e o segundo é o certo. 