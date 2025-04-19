echo "Checking if the file 'example.txt' exists in this directory"

if [ -f "example.txt" ]
then
    echo "The file example.txt exists!"
else
    echo "The file example.txt does not exist."
    echo "Creating example.txt for you..."
    echo "This is an example file created by my script" > example.txt
    echo "File created successfully!"
fi