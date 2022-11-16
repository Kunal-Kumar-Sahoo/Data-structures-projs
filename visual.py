import networkx as nx
import matplotlib.pyplot as plt
import sys

class GraphVisualization:
    def __init__(self, filePath):
        self.visual = []
        self.source = filePath
    def generateFromMatrix(self):
        with open(self.source, 'r') as f:
            matrix_string = f.read()
            matrix = matrix_string.split('\n')
            matrix = [i.split() for i in matrix]
            matrix.remove([])
            for i in range(len(matrix)):
                for j in range(len(matrix[i])):
                    if(matrix[i][j] == '1'):
                        self.addEdge(i+1, j+1)

    def addEdge(self, a, b):
        temp = [a, b]
        self.visual.append(temp)
    def visualize(self):
        G = nx.Graph()
        G.add_edges_from(self.visual)
        nx.draw_networkx(G)
        plt.show()

# Driver code
if __name__ == '__main__':
    G = GraphVisualization(sys.argv[1])
    G.generateFromMatrix()
    G.visualize()
