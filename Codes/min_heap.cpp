#include <iostream>
#include <vector>

using namespace std;

void insert_min_heap(vector<int>& heap, int value) {
    heap.push_back(value);
    int index = heap.size() - 1;
    while (index > 0 && heap[(index - 1) / 2] > heap[index]) {
        swap(heap[index], heap[(index - 1) / 2]);
        index = (index - 1) / 2;
    }
}

void delete_min_heap(vector<int>& heap, int value) {
    int index = -1;
    for (int i = 0; i < heap.size(); i++) {
        if (heap[i] == value) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        return;
    }
    heap[index] = heap[heap.size() - 1];
    heap.pop_back();
    while (true) {
        int left_child = 2 * index + 1;
        int right_child = 2 * index + 2;
        int smallest = index;
        if (left_child < heap.size() && heap[left_child] < heap[smallest]) {
            smallest = left_child;
        }
        if (right_child < heap.size() && heap[right_child] < heap[smallest]) {
            smallest = right_child;
        }
        if (smallest != index) {
            swap(heap[index], heap[smallest]);
            index = smallest;
        } else {
            break;
        }
    }
}

int main() {
    vector<int> heap;
    int values[] = { 13, 16, 31, 41, 51, 100 };
    int n = sizeof(values) / sizeof(values[0]);
    for (int i = 0; i < n; i++) {
        insert_min_heap(heap, values[i]);
    }
    cout << "Initial heap: ";
    for (int j = 0; j < heap.size(); j++) {
        cout << heap[j] << " ";
    }
    cout << endl;

    delete_min_heap(heap, 13);
    cout << "Heap after deleting 13: ";
    for (int j = 0; j < heap.size(); j++) {
        cout << heap[j] << " ";
    }
    cout << endl;

    return 0;
}
