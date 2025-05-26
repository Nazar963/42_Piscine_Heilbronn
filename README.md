# 42 Heilbronn Piscine 🏊♂️

[![42 Heilbronn](https://img.shields.io/badge/42-Heilbronn-blue)](https://www.42heilbronn.de/)
[![Piscine Progress](https://img.shields.io/badge/Progress-56%25-brightgreen)](https://github.com/Nazar963/42_Piscine_Heilbronn)
[![C Language](https://img.shields.io/badge/Language-C-00599C)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Shell Script](https://img.shields.io/badge/Shell-Bash-4EAA25)](https://www.gnu.org/software/bash/)

Repository documenting my intensive coding journey at **42 Heilbronn Piscine** (February 2022).  
_"Vom Anfänger zum Programmierer - eine Übung nach der anderen"_ 💻⚙️

## Table of Contents 📖
- [About the Piscine](#about-the-piscine-)
- [Curriculum Structure](#curriculum-structure-)
- [Weekly Progress](#weekly-progress-)
- [Project Highlights](#project-highlights-)
- [Installation & Usage](#installation--usage-)
- [Piscine Survival Guide](#piscine-survival-guide-)
- [FAQ](#faq-)
- [License](#license-)

## About the Piscine 🏫
The 42 Heilbronn Piscine is a **26-day immersive programming experience** focusing on:
- Core C programming concepts
- UNIX system fundamentals
- Shell scripting essentials
- Problem-solving strategies
- Collaborative learning approach

**Key Metrics**:
```text
Total Projects    │ 45+
Code Lines        │ 12,000+ 
Cluster Hours     │ 08:00 - 23:59 🕗
Peer Evaluations  │ 150+
Coffee Consumed   │ ∞ ☕
```

## Curriculum Structure 📚

### Shell Programming 🐚
| Project   | Description                  | Difficulty |
|-----------|------------------------------|------------|
| Shell00   | Basic UNIX Operations        | ★☆☆☆☆     |
| Shell01   | Advanced Scripting           | ★★☆☆☆     |

### C Programming 🖥️
| Project   | Description                  | Difficulty |
|-----------|------------------------------|------------|
| C00       | Variables & Loops            | ★☆☆☆☆     |
| C01       | Pointers & Arrays            | ★★☆☆☆     |
| C02       | String Manipulation          | ★★★☆☆     |
| ...       | ...                          | ...       |
| Exam02    | Final Challenge              | ★★★★★     |

### Special Projects 🏆
| Project   | Description                  | Team Size |
|-----------|------------------------------|-----------|
| BSQ       | Biggest Square Finder        | Solo      |
| Rush01    | Sudoku Validator             | Pair      |

## Weekly Progress 📈
**Week 1** - Shell Mastery & C Basics  
**Week 2** - Memory Management & Algorithms  
**Week 3** - Advanced Concepts & Rush Projects  
**Week 4** - Final Challenges & Peer Learning  

[Detailed Progress Timeline](progress.md)

## Project Highlights ✨
```c
// BSQ Project Example
int	main(void)
{
    t_map	*map;
    
    map = parse_map("map.txt");
    find_bsq(map);
    print_solution(map);
    return (0);
}
```

## Installation & Usage ⚙️
1. Clone repository:
   ```bash
   git clone https://github.com/<your_username>/42heilbronn-piscine.git
   ```
2. Navigate to project:
   ```bash
   cd C03/ex04
   ```
3. Compile & Run:
   ```bash
   gcc -Wall -Wextra -Werror *.c && ./a.out
   ```

## Piscine Survival Guide 🧭
1. **Time Optimization** ⏳
   ```bash
   # Batch test all solutions
   for proj in */; do (cd "$proj" && make && ./a.out); done
   ```

2. **Collaboration Tools** 👥
   - Use Mattermost channels
   - Pair programming stations

3. **Debugging Pro Tips** 🐞
   ```bash
   gdb -ex run --args ./a.out <input>
   valgrind --leak-check=full ./a.out
   ```

## FAQ ❓
**Q: How to handle multiple file descriptors?**  
A: Use `dup2` and maintain fd table

**Q: Best Vim setup?**  
A: Use `.vimrc` with C syntax plugins

**Q: Norm errors on comments?**  
A: Use `/* */` format, no `//`

## License 📄
This repository contains educational material from [42 Heilbronn](https://www.42heilbronn.de/).  
All original code is licensed under [MIT](LICENSE).

---

🇩🇪 **Programmieren macht Spaß!** 🇩🇪  
[![42 Intra](https://img.shields.io/badge/Intra-<your_42_login>-blue)](https://profile.intra.42.fr/users/<your_42_login>)  
[![GitHub](https://img.shields.io/github/followers/<your_username>?style=social)](https://github.com/<your_username>)
```

**Customization Tips**:
1. Replace all `<your_username>` with GitHub handle
2. Update `<your_42_login>` with intra ID
3. Add actual project statistics
4. Include personal achievements
5. Modify difficulty ratings based on experience
6. Add screenshots of notable projects

**Recommended Enhancements**:
- Add "Most Challenging Project" section
- Include peer evaluation results
- Link to your best Rush project
- Add personal motivation quotes in German
- Include cluster photos (if permitted)

This template combines professional documentation with personal journey elements. Let me know if you need adjustments for specific technical details or want to highlight particular aspects of your Heilbronn experience! 🚀
