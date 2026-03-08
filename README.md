# 🔐 Password Generator (Python & C++)

![Python](https://img.shields.io/badge/Python-3.x-blue)
![C++](https://img.shields.io/badge/C++-17-blue)
![Status](https://img.shields.io/badge/Project-Completed-success)

A simple program that generates **random passwords** based on user input.  
The project is implemented in **Python** and **C++**, giving flexibility and practice in both languages.

This project helps understand:

- Randomization
- User input validation
- Loops and conditionals
- Modular program structure

---

# 🛠 Features

- Choose **complexity**:
  - Letters only
  - Letters + digits
  - Complex (letters + digits + symbols)
- Set **password length**
- Set **amount of passwords**
- Simple and **user-friendly interface**
- Input validation ensures **valid numbers** only

---

# 🐍 Python Implementation

The Python program:

- Asks the user for password complexity
- Requests **length** and **amount**
- Generates random passwords using `string` and `random` modules
- Displays the passwords in the terminal

### Example Output

```
Select 
1 for characters only 
2 for a combination of characters and digits
3 for a complex passwords including everything: 3

Enter the desired amount of passwords: 2
Enter the desired password length: 12

password #1 => aB3$kL9!pQz
password #2 => Xy7@rN2%lM1
```

---

# ⚙️ C++ Implementation

The C++ version:

- Uses arrays of letters, numbers, and symbols
- Checks **length**: if less than 6 → numbers only
- Validates **user input** using `cin` and `numeric_limits`
- Generates passwords based on chosen length and randomness

### Example Output

```
*********Let's generate a password*********
How long should your password be? If less then 6 password will be numbers only! 8
How many passwords do you need? (1 is the minimum) 3
Password #1: Lp4$7b2G
Password #2: Aq8*2r1J
Password #3: Hm3@6k5F
*********Thank you and enjoy your password/s*********
```

---

# 🧠 How It Works

Both implementations follow the same general logic:

1. Ask the user for **complexity**, **length**, and **amount**
2. Validate all inputs
3. Use **random selection** to pick characters for the password:
   - Letters
   - Digits
   - Symbols (for complex passwords)
4. Display all generated passwords in the terminal

---

# 📂 Project Structure

```
password-generator
│
├── password_generator.py
├── password_generator.cpp
│
└── README.md
```

---

# ▶️ Running the Programs

## Python Version

```
python password_generator.py
```

---

## C++ Version

Compile:

```
g++ password_generator.cpp -o password_generator
```

Run:

```
./password_generator
```

---

# 🎯 Learning Goals

This project helped practice:

- Using **randomization** in Python and C++
- Handling **user input validation**
- Looping and conditional logic
- Implementing the **same functionality in multiple languages**

---

# 🔮 Possible Improvements

Future upgrades could include:

- GUI version for password generation
- Saving passwords to a **file**
- Adding **strength check / entropy**
- Allowing **custom character sets**
- Option for **copy to clipboard**

---

# 👨‍💻 Author

Student programming project aimed at learning **Python and C++ fundamentals** and **modular programming concepts**.
