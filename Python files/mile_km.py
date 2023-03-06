#!/bin/python3

# Ask user to enter values in miles
miles = input('Enter Miles ')

miles = int(miles)
# declare  constant convertion value for mile to kilometers
kilometers = miles * 1.60934

#print result
print('{} miles equals {} kilometers'.format(miles, kilometers))

