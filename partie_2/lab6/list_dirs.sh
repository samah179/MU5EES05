#!/bin/bash
# Script list_lab4.sh
# Lists all subdirectories of a directory
# Default: ~/Desktop/MU5EES05/partie_1/lab4
# If a parameter is provided, checks if it is valid

# Default directory
DEFAULT_DIR=~/Desktop/MU5EES05/partie_1/lab4

# If an argument is provided, use it
if [ $# -eq 1 ]; then
    DIR="$1"
else
    DIR="$DEFAULT_DIR"
fi

# Check if the directory exists
if [ ! -d "$DIR" ]; then
    echo "Error: '$DIR' is not a valid directory"
    exit 1
fi

# Change to the directory
cd "$DIR" || { echo "Cannot change to directory $DIR"; exit 1; }

# Loop through items and display only subdirectories
found=0
for item in *; do
    if [ -d "$item" ]; then
        echo "Directory: $item"
        found=1
    fi
done

# If no subdirectory was found
[ $found -eq 0 ] && echo "No subdirectories found in '$DIR'."