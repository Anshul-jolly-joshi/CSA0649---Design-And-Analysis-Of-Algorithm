class HamiltonianCircuit:
    def __init__(self, graph):
        self.graph = graph
        self.V = len(graph)
        self.path = [None] * self.V

    def is_safe(self, v, pos):
        if self.graph[self.path[pos-1]][v] == 0:
            return False
        if v in self.path:
            return False
        return True

    def hamiltonian_circuit_util(self, pos):
        if pos == self.V:
            if self.graph[self.path[pos-1]][self.path[0]] == 1:
                return True
            else:
                return False

        for v in range(1, self.V):
            if self.is_safe(v, pos):
                self.path[pos] = v
                if self.hamiltonian_circuit_util(pos+1):
                    return True
                self.path[pos] = None

        return False

    def hamiltonian_circuit(self):
        self.path[0] = 0
        if not self.hamiltonian_circuit_util(1):
            print("No Hamiltonian Circuit exists")
            return False

        print("Hamiltonian Circuit exists. Path:")
        for vertex in self.path:
            print(vertex, end=" ")
        print(self.path[0])

# Example usage
graph = [[0, 1, 0, 1, 0],
         [1, 0, 1, 1, 1],
         [0, 1, 0, 0, 1],
         [1, 1, 0, 0, 1],
         [0, 1, 1, 1, 0]]

hc = HamiltonianCircuit(graph)
hc.hamiltonian_circuit()
