#!/bin/bash

#prompt the user for the name of the .jar file
echo "Enter the name of the .jar file: "
read jar_file

# Launch the Java application
java -jar $jar_file &

# Pause for 1 minute
sleep 60

# Check if the Java application is still running
if pgrep java > /dev/null
then
	# If it is still running, return true
	exit 0
else
	# If it has exited, return false
	exit 1
fi

