import os
import pathlib


def main():
    working_dir = pathlib.Path("./problems") 

    for i in range(20, 124):
        with open(working_dir / f"{i}.c", "w") as f:
            if os.path.exists(working_dir / f"{i}.c"):
                print(f"done {i}")


if __name__ == "__main__":
    main()