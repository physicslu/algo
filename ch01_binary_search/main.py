def binary_search(sorted_list, item):
    """
    在一個已排序的列表中執行二分搜尋。

    :param sorted_list: 一個已排序的元素列表。
    :param item: 要在列表中搜尋的項目。
    :return: 如果找到項目，則返回其索引；否則返回 None。
    """
    low = 0
    high = len(sorted_list) - 1

    while low <= high:
        # // 是整數除法，會自動捨去小數
        mid = (low + high) // 2
        guess = sorted_list[mid]

        if guess == item:
            return mid
        if guess > item:
            # 猜測的數字太大了，需要往下調整 high 的邊界
            high = mid - 1
        else:
            # 猜測的數字太小了，需要往上調整 low 的邊界
            low = mid + 1
    
    # 如果迴圈結束還沒找到，代表項目不存在
    return None

if __name__ == "__main__":
    my_list = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]
    
    print(f"在列表 {my_list} 中搜尋 7...")
    print(f"找到了，索引在: {binary_search(my_list, 7)}")  # 應該會印出 3

    print(f"\n在列表 {my_list} 中搜尋 -1...")
    print(f"找到了，索引在: {binary_search(my_list, -1)}") # 應該會印出 None
