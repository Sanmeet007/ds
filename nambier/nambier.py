NUMBER: int = 988012743


def array_from_int(x: int):
    array = []

    while x != 0:
        r = x % 10
        array.append(r)
        x //= 10
    array.reverse()

    return array


def main():
    x = array_from_int(NUMBER)
    final_string = ""
    nambier_number = 0
    previous_nature = x[0] % 2  # 1

    for i, k in enumerate(x):
        current_nature = sum(x[: i + 1]) % 2
        nambier_number += k

        if current_nature != previous_nature:
            final_string += f"{nambier_number}"
            nambier_number = 0
            previous_nature = current_nature

    print(final_string)


if __name__ == "__main__":
    main()
