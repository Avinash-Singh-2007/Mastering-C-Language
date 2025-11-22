import os

# Folder path (current directory in this case)
folder = os.getcwd()

# Loop through files in the folder
for file in os.listdir(folder):
    if file.endswith(".exe"):
        file_path = os.path.join(folder, file)
        try:
            os.remove(file_path)
            print(f"Deleted: {file}")
        except Exception as e:
            print(f"Error deleting {file}: {e}")
