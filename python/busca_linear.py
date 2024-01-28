def busca_linear(lista, elemento_procurado):
    for i in range(len(lista)):
        
        if lista[i] == elemento_procurado:
            
            return i

    return -1

lista_numeros = [10, 25, 5, 8, 14, 30, 18]

elemento_procurado = 14
indice_encontrado = busca_linear(lista_numeros, elemento_procurado)

if indice_encontrado != -1:
    print(f'O elemento {elemento_procurado} foi encontrado no índice {indice_encontrado} da lista.')
else:
    print(f'O elemento {elemento_procurado} não foi encontrado na lista.')