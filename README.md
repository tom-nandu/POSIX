# POSIX Threads: Single Thread Example

## 📌 File: `singlethread.c`

### 👨‍💻 Author
**Logesan Nandakoumar**    
GitHub: https://github.com/tom-nandu/POSIX

---

### 🎯 Purpose
This file demonstrates the basic usage of POSIX threads in C.  
It includes:
- Thread creation using `pthread_create`
- Thread execution with a simple function
- Thread joining using `pthread_join`
- Error checking for thread creation

---

### 🧠 Learning Notes
- Practiced creating a single thread and verifying its successful creation.
- Observed thread behavior using system tools like `ps -L`, `pidstat`, and `top`.
- Learned how to use `pid_t` and `getpid()` to retrieve process ID.
- Added author notes and structured comments for clarity.

---

### ⚙️ How to Compile and Run


gcc -pthread -o singlethread singlethread.c
./singlethread
