# Git 使用手册（新手版）

这份手册是照着你这台电脑的实际情况写的，可以直接照做。

---

## 一、先搞清楚三样东西

| 名称 | 是什么 | 在哪 |
| --- | --- | --- |
| **Git** | 装在你电脑上的工具，负责记录每次改动 | 开始菜单搜 `Git Bash`，或文件夹里右键打开终端 |
| **GitHub** | 网站，存放你 Git 推上去的内容 | 浏览器打开 github.com |
| **仓库（repository）** | 一个被 Git 管理的文件夹 | 你现在的 `C++作业` 文件夹就是 |

打个比方：**Git 是相机，commit 是拍照，GitHub 是云相册**。你在电脑上写代码，用 Git 拍照存档，再上传到 GitHub。

---

## 二、核心就三行命令

每次写完作业，在 `C++作业` 文件夹里打开终端，敲这三行：

```powershell
git add .
git commit -m "完成第3章 3.5：计算阶乘"
git push
```

记不住也没关系，含义是这样：

| 命令 | 干什么 | 类比 |
| --- | --- | --- |
| `git add .` | 把改动的文件放进"待提交清单" | 把要寄的东西放进箱子 |
| `git commit -m "说明"` | 拍一张存档照，附上说明 | 给箱子贴上标签、封箱 |
| `git push` | 上传到 GitHub | 把箱子寄出去 |

**只做 `add` 不做 `commit`，等于东西在箱子里没封箱；只做 `commit` 不做 `push`，等于封好箱子还在家里。**

---

## 三、怎么打开终端（这一步最容易卡住）

1. 打开文件夹 `C:\Users\lx513\OneDrive\文档\ChatGPT\C++作业`
2. 在**空白处右键**
3. 如果直接看到「**在终端中打开**」，点它
4. 如果没看到，先点「**显示更多选项**」，再点「**在终端中打开**」
5. 会弹出一个黑底或蓝底的窗口，光标在闪，就可以敲命令了

注意：终端打开时的位置必须是你这个作业文件夹。如果敲 `git status` 提示 "not a git repository"，说明位置不对，用 `cd` 切换：

```powershell
cd "C:\Users\lx513\OneDrive\文档\ChatGPT\C++作业"
```

---

## 四、完整走一遍：写第三章作业

假设老师布置了第三章第 5 题。

**第 1 步：建文件夹和源文件**

在作业文件夹里新建 `第03章` 文件夹，在里面新建 `03_05_factorial.cpp`，写好代码。

**第 2 步：编译运行，确认能跑**

```powershell
g++ .\第03章\03_05_factorial.cpp -o .\build\03_05.exe -std=c++17 -Wall -static
.\build\03_05.exe
```

**第 3 步：提交（三行命令）**

```powershell
git add .
git commit -m "完成第3章 3.5 阶乘计算"
git push
```

**第 4 步：去 GitHub 确认**

浏览器打开 https://github.com/six-07/cpp-homework ，刷新，能看到新文件就成功了。

---

## 五、怎么知道自己做到哪一步了

**看当前状态**（最常用的一个命令）：

```powershell
git status
```

它会把情况告诉你，常见的有三种：

| 提示 | 含义 | 该做什么 |
| --- | --- | --- |
| `nothing to commit, working tree clean` | 没有未保存的改动 | 不用管，或者继续写代码 |
| `Changes not staged for commit` / `Untracked files` | 有改动还没放进清单 | 执行 `git add .` |
| `Changes to be committed` | 已经放进清单，还没存档 | 执行 `git commit -m "说明"` |

**看提交历史**：

```powershell
git log --oneline
```

会列出你所有的存档记录，每条前面那串字母数字是编号。

**看本地和 GitHub 是否同步**：

```powershell
git status -sb
```

- 显示 `## main...origin/main` —— 本地和 GitHub 一样，同步好了
- 显示 `## main...origin/main [ahead 1]` —— 你本地有 1 个提交还没 push

---

## 六、常见问题和解决办法

**Q：敲 git 提示 "不是内部或外部命令"**
说明终端是旧窗口。关掉重新开一个终端就好（装 Git 时配好了环境变量，新窗口才生效）。

**Q：git commit 报错说不知道我是谁**
```powershell
git config --global user.name "six-07"
git config --global user.email "six-07@users.noreply.github.com"
```
这两行只需要跑一次，以后就记住了。

**Q：git push 报错，说 rejected / non-fast-forward**
说明 GitHub 上的内容比你本地新（比如你在网页上直接改了文件）。先执行：
```powershell
git pull --rebase
```
再 `git push`。

**Q：改错了文件，想撤销还没提交的改动**
```powershell
git checkout -- 文件名
```
注意：这样改动会**永久消失**，谨慎用。已经 commit 过的可以从历史里找回，没 commit 的找不回来。

**Q：提交说明写错了想改**
```powershell
git commit --amend -m "新的说明"
```

**Q：忘了 push，关了电脑**
没关系，改动都在本地存着，下次打开终端 `git push` 就行。

**Q：exe 文件会不会被传上去**
不会。`.gitignore` 里已经写了规则，`build` 文件夹和所有 `exe`、`o` 文件都会被自动忽略，只传源代码。

---

## 七、命令速查表

| 命令 | 作用 |
| --- | --- |
| `git status` | 看当前状态（最常用） |
| `git add .` | 把所有改动放进待提交清单 |
| `git add 文件名` | 只把指定文件放进清单 |
| `git commit -m "说明"` | 存档，附上说明 |
| `git push` | 上传到 GitHub |
| `git pull` | 把 GitHub 上的改动拉回本地 |
| `git log --oneline` | 看历史记录 |
| `git diff` | 看具体改了哪几行 |
| `git remote -v` | 看这个仓库对应哪个 GitHub 地址 |

---

## 八、写提交说明的建议

老师能看到你的提交记录，写得清楚会加分：

- 好：`完成第3章 3.5 阶乘计算`
- 好：`修正 2.28 拆位时个位取错的问题`
- 不好：`update`、`111`、`改了一下`

建议**一道题提交一次**，而不是攒一堆最后一起提交。这样老师能看出你的完成过程，你自己也能从历史里找到某道题是怎么写的。

---

## 九、你这台电脑上已经装好的东西

| 工具 | 版本 | 位置 |
| --- | --- | --- |
| Git | 2.55.0 | `C:\Program Files\Git` |
| g++ 编译器 | 16.2.0 | `C:\msys64\ucrt64\bin` |

编译命令模板：

```powershell
g++ .\第02章\02_19_arithmetic_smallest_largest.cpp -o .\build\02_19.exe -std=c++17 -Wall -static
```

- `-std=c++17` 使用 C++17 标准
- `-Wall` 打开所有常见警告，帮你发现代码问题
- `-static` 让生成的 exe 自带运行库，可以双击直接运行

如果以后要装新的 C++ 库，用 MSYS2 的包管理器（已经配好清华镜像，速度很快）：

```powershell
C:\msys64\usr\bin\bash.exe -lc "pacman -S mingw-w64-ucrt-x86_64-库名"
```