#include <iostream>
#include <vector>
#include <queue>

void newGraph();
void Prima(int start);
long long totalWeight();

// Структура ребра
struct Edge {
    int to, weight;
};

// Граф в виде списка смежности и вектор расстояний до вершин
std::vector<std::vector<Edge>> graph;
std::vector<int> dist;

int main() {
    newGraph();
    Prima(0);
    std::cout << totalWeight() << std::endl;
    return 0;
}

// Функция чтения графа из входных данных
void newGraph() {
    int vertices, num_edges;
    std::cin >> vertices >> num_edges;
    graph.resize(vertices);
    dist.assign(vertices, INT32_MAX);
    for (int i = 0; i < num_edges; ++i) {
        int x, y, weight;
        std::cin >> x >> y >> weight;
        graph[x - 1].push_back({ y - 1, weight });
        graph[y - 1].push_back({ x - 1, weight });
    }
}

// Функция поиска минимального остовного дерева алгоритмом Прима
void Prima(int start) {
    int n = graph.size();

    // Очередь с приоритетом для хранения пар (расстояние, вершина)
    std::priority_queue<std::pair<int, int>,
    std::vector<std::pair<int, int>>,
    std::greater<>> priority_queue;

    priority_queue.push(std::make_pair(0, start));
    dist[start] = 0;

    while (!priority_queue.empty()) {
        int curr_vertex = priority_queue.top().second;
        priority_queue.pop();
        // Проходим по всем ребрам, выходящим из текущей вершины
        for (const auto& e : graph[curr_vertex]) {
            // Если расстояние до следующей вершины меньше, чем уже записанное в вектор расстояний,
            // то обновляем его и добавляем вершину в очередь с приоритетом
            if (dist[e.to] > e.weight) {
                dist[e.to] = e.weight;
                priority_queue.push(std::make_pair(dist[e.to], e.to));
            }
        }
    }
}

// Функция подсчета суммарного веса минимального остовного дерева
long long totalWeight() {
    long long total_weight = 0;
    for (int i = 0; i < graph.size(); ++i) {
        total_weight += dist[i];
    }
    return total_weight;
}