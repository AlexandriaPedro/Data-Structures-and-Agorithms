def sequentialSearch(array, target):
    for index in range(len(array)):
        if array[index] == target:
            return print(f"O elemento {target} foi encontrado no array")
    return print(f"O elemento {target} não está no array")

def main():
    array = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]

    target = 10

    sequentialSearch(array, target)

if __name__ == '__main__':
    main()