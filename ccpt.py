n, m, p = input().split()
n = int(n)
m = int(m)
p = int(p)

grafo = [[] for _ in range(n)]

for i in range(0,m):
    a, b = input().split()
    a = int(a)
    b = int(b)
    grafo[a-1].append(b-1)
    grafo[b-1].append(a-1)


def bfs(grafo, inicio, fim):
    visitados, fila = [], [inicio]
    while fila:
        vertice = fila.pop(0)
        if vertice not in visitados:
            if vertice == fim:
                return"Lets que lets"
            visitados.append(vertice)
            fila.extend(x for x in grafo[vertice] if x not in visitados)
    return "Deu ruim"

for j in range(0, p):
    k, l = input().split()
    k = int(k)
    l = int(l)
    print(bfs(grafo, k-1, l-1))