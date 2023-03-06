#/bin/python3
letters = ["a", "b", "c", "d", "e"]

#for element in letters[1:3]:
#   print(element)

length = len(letters)

for number in letters:
	if number != "e":
		continue
	else:
		print("Found")
