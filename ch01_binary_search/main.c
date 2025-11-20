#include <stdio.h>

// 函式原型宣告 (Function Prototype)
// 接收一個已排序的整數陣列、陣列大小、以及要搜尋的目標。
// 如果找到目標，返回其索引；如果找不到，則返回 -1 (一個常用的表示「未找到」的數值)。
int binary_search(int list[], int size, int item);

int main()
{
    // 1. 準備一個已排序的陣列
    int my_list[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    // C 語言中，我們需要手動計算陣列的大小
    int list_size = sizeof(my_list) / sizeof(my_list[0]);

    // --- 測試案例 1: 搜尋一個存在的數字 ---
    int item_to_find1 = 7;
    printf("在陣列中搜尋 %d...\n", item_to_find1);
    int result1 = binary_search(my_list, list_size, item_to_find1);

    if (result1 != -1) {
        printf("找到了，索引在: %d\n", result1); // 預期輸出: 3
    } else {
        printf("找不到 %d。\n", item_to_find1);
    }

    printf("\n");

    // --- 測試案例 2: 搜尋一個不存在的數字 ---
    int item_to_find2 = -1;
    printf("在陣列中搜尋 %d...\n", item_to_find2);
    int result2 = binary_search(my_list, list_size, item_to_find2);

    if (result2 != -1) {
        printf("找到了，索引在: %d\n", result2);
    } else {
        printf("找不到 %d。\n", item_to_find2); // 預期會執行到這裡
    }

    return 0;
}

// 二分搜尋法的實作框架
// 請在此處填寫您的程式碼
int binary_search(int list[], int size, int item)
{
    // TODO: 在這裡實作二分搜尋演算法。
    // 您需要 low, high 和 mid 變數，並使用一個 while 迴圈來縮小搜尋範圍。
    
    return -1; // 如果迴圈結束後仍未找到，返回 -1
}
