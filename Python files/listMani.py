letters = ["a", "b", "c", "d", "e"]

#use len() to count number of items in the list
print(len(letters))

#use .append() to append items to the list
#yourlist.append(newitem)

print(letters)
letters.append("f")
print(letters)

#use .pop() to remove items from the back of the lists
#yourlist.pop()
letters.pop()
print(letters)


#You can store popped item(removed items) in a variable
popped_item = letters.pop()
print(letters)
print(popped_item)

# you can remove a partcular item from a list by index using pop
letters.pop(1)
print(letters)
