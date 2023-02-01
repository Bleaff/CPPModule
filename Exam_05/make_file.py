import sys 

def main():
    filenames = sys.argv
    for filename in filenames:
        file = open(filename, 'a')

if __name__ == "__main__":
    main()

