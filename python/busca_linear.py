# Definir a função de Busca Linear
def busca_linear(lista, elemento_procurado):
    for i in range(len(lista)):
        # Compara o elemento atual da lista com o elemento que estamos procurando
        if lista[i] == elemento_procurado:
            # Se encontrarmos o elemento, retornamos o índice onde ele está na lista
            return i
    # Se o elemento não for encontrado, retornamos -1
    return -1

# Exemplo de utilização da função
lista_numeros = [10, 25, 5, 8, 14, 30, 18]

elemento_procurado = 14
indice_encontrado = busca_linear(lista_numeros, elemento_procurado)

if indice_encontrado != -1:
    print(f'O elemento {elemento_procurado} foi encontrado no índice {indice_encontrado} da lista.')
else:
    print(f'O elemento {elemento_procurado} não foi encontrado na lista.')