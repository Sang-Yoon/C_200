import os


def main():
    for filename in os.listdir():
        if "." not in filename:
            os.remove(filename)


if __name__ == "__main__":
    main()
