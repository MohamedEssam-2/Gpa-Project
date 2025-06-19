# Gpa-Project
Gpa Project using c++

# 🎓 GPA Calculator Console App

A simple C++ console application that calculates the GPA of a student based on grades for 20 subjects.  
It allows the user to input personal data, calculates GPA using a standard 4.0 scale, evaluates letter grades, and stores the results in a text file.

---

## 📌 Features

- 📥 Takes student first name, last name, and ID  
- 🧮 Accepts 20 subject grades and calculates the average GPA  
- 🧾 Automatically determines letter grades based on score ranges  
- 💾 Saves the student's name, ID, and GPA into a `Gpa.txt` file  
- 📤 Reads the data back from the file and displays it for confirmation  

---

## 🛠️ Technologies

- **Language:** C++  
- **File I/O:** `fstream`  
- **Standard Libraries:** `<iostream>`, `<fstream>`, `<string>`

---

## 📂 How It Works

1. User enters:  
   - First name & last name  
   - Student ID  
   - Grades for 20 subjects  

2. The app:  
   - Calculates letter grades for each subject  
   - Computes GPA using:  
     `GPA = (sum of grades / 2000) * 4`  

3. The result is:  
   - Written to `Gpa.txt`  
   - Read back and displayed on screen  

---

## 📄 Sample Output  
Enter your name: Ali Ahmed  
Enter your id: 20230123  
Enter grade for subject 1: 98  
Your grade is { A+ }  
...  
Your GPA = 3.72  
your name is: Ali Ahmed  
your id = 20230123  
the gpa from the file = 3.72

## 🙌 Author  
Mohamed Essam  
GitHub: https://github.com/MohamedEssam-2  
