x = "MADAM"
y = "MAJDAM"


def is_palindrome(string: str) -> bool:
    if string[::-1] == string:
        return True
    return False


def extract_palindrome(string: str):
    for i in range(len(string)):
        extracted_string = string[:i] + string[i + 1 :]
        if is_palindrome(extracted_string):
            return extracted_string
    return


def main():
    print(extract_palindrome(y))


if __name__ == "__main__":
    main()
