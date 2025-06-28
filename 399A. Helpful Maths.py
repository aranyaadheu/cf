string = input()

numbers = string.split("+")
numbers.sort()

result = "+".join(numbers)

print(result)