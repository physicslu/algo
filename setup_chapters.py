import os

directories = [
    "ch01_binary_search",
    "ch02_selection_sort",
    "ch03_recursion",
    "ch04_quick_sort",
    "ch05_hash_tables",
    "ch06_breadth_first_search",
    "ch07_dijkstra",
    "ch08_greedy_algorithms",
    "ch09_dynamic_programming",
    "ch10_knearest_search"
]

c_template = """#include <stdio.h>

int main() {
    printf("Hello from %%s main.c\\n", "%s");
    return 0;
}
"""

py_template = """import os

if __name__ == "__main__":
    print(f"Hello from {os.path.basename(os.getcwd())} main.py")
"""

for d in directories:
    if not os.path.exists(d):
        print(f"Directory {d} does not exist, skipping.")
        continue
    
    # Create main.c
    with open(os.path.join(d, "main.c"), "w") as f:
        f.write(c_template % d)
    
    # Create main.py
    with open(os.path.join(d, "main.py"), "w") as f:
        f.write(py_template)
        
    print(f"Created files in {d}")
