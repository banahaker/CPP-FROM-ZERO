# 第二章：環境設置與基本操作

## 環境設置

關於環境建制的內容在網路上已經有許多教學文章，我接下來會列出幾個優質的文章讓各位在不同的作業系統平臺設置開發環境

### Windows

Windows 下 C/C++ 是一個不太方便的選擇，不過對於初學者來說這個部不是太大的問題，可以使用已經受人包裝好的 IDE 如 `Code::Block`, `Dev C++`, `Visual Studio`, `MinGW with GCC`等，我推薦使用 `Dev C++`給初學者，但是對於以 APCS 為初段目標的初學者建議使用 `Code::Block` 。若有能力自行設定環境，則推薦 `Visual Studio Code` 配合使用 `MinGW with GCC` 或是 `Clang` 作為編譯器。安裝教學如下

- Dev C++: [https://progressbar.tw/posts/7](https://progressbar.tw/posts/7)
- Visual Studio Code with MinGW: [https://hackmd.io/@liaojason2/vscodecppwindows](https://hackmd.io/@liaojason2/vscodecppwindows)
- Code::Blocks: [https://www.codeblocks.org/downloads/](https://www.codeblocks.org/downloads/)

### Mac

[https://opensourcedoc.com/cpp-programming/build-development-environment-on-macos/](https://opensourcedoc.com/cpp-programming/build-development-environment-on-macos/)

### Linux

使用 Linux 的人應該已經有系統操作與程式的基礎，因此我推薦使用 `GCC` 或是 `Clang` 等編譯器來編譯程式碼，程式編輯器的話也就不在受到限制。(推薦使用 `VS Code` 最為編輯器)

## 基本操作

在這節中我們將會介紹 C++ 中基本的程式碼。首先我們不免俗的來個 `Hello, World!`。

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello, World!" << endl;
  return 0;
}
```

這個範例程式將會輸出

```
Hello, World!
```