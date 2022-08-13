def friends_problem(n: int):
    if n == 1 or n == 0:
        return 1

    return friends_problem(n - 1) + (friends_problem(n - 2) * (n - 1))


if __name__ == "__main__":
    friends = friends_problem(4)
    print(friends)
