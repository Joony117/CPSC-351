#!/bin/bash

# Script to convert HTML lab report to PDF
# This script will open the HTML file in the default browser for PDF conversion

echo "Converting Lab1_Report.html to PDF..."
echo "Please follow these steps:"
echo "1. The HTML file will open in your default browser"
echo "2. Press Cmd+P (Mac) or Ctrl+P (Windows) to print"
echo "3. Select 'Save as PDF' as the destination"
echo "4. Save the file as 'Lab1_Report.pdf'"
echo "5. Press Enter when done..."

# Open the HTML file in the default browser
open Lab1_Report.html

# Wait for user input
read -p "Press Enter when you have saved the PDF file..."

echo "PDF conversion complete!"
echo "The lab report should now be saved as Lab1_Report.pdf"
