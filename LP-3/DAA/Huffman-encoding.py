import heapq 
import time 
class MinHeapNode: 
    def __init__(self, data, freq): 
        self.data = data 
        self.freq = freq 
        self.le = None 
        self.right = None 
    def __lt__(self, other): 
        return self.freq < other.freq 
def store_codes(node, code, code_dict): 
    if node: 
        if node.data != '$': 
            code_dict[node.data] = code 
        store_codes(node.le , code + "0", code_dict) 
        store_codes(node.right, code + "1", code_dict) 
def huffman_code(data, freq): 
    heap = [MinHeapNode(data[i], freq[i]) for i in range(len(data))] 
    heapq.heapify(heap) 
    while len(heap) > 1: 
        le = heapq.heappop(heap) 
        right = heapq.heappop(heap) 
        new_node = MinHeapNode('$', le .freq + right.freq) 
        new_node.le = le 
        new_node.right = right 
        heapq.heappush(heap, new_node) 
    code_dict = {} 
    store_codes(heap[0], "", code_dict) 
 
    sorted_codes = sorted(code_dict.items(), key=lambda item: freq[data.index(item[0])]) 
    for char, code in sorted_codes: 
        print(f"{char}: {code}")
if __name__ == "__main__": 
    num_chars = int(input("Enter the number of characters: ")) 
data = [] 
freq = [] 
for _ in range(num_chars): 
    char = input("Enter character: ") 
    frequency = int(input(f"Enter frequency for '{char}': ")) 
    data.append(char) 
    freq.append(frequency) 
start_time = time.time() 
huffman_code(data, freq) 
end_time = time.time() 
print(f"Time taken: {end_time - start_time:.6f} seconds")
