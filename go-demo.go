package main

import (
	"fmt"
	"io"
	"os"
)

func main() {
	// Replace "yourfile.txt" with the actual path to the file
	filePath := "yourfile.txt"

	// Open the file for reading
	file, err := os.Open(filePath)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	defer file.Close()

	// Read the file content
	content, err := io.ReadAll(file)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	err = printContent(content)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
}
