# 第二章：環境設置與基本操作

## 環境設置

關於環境建制的內容在網路上已經有許多教學文章，我接下來會列出幾個優質的文章讓各位在不同的作業系統平臺設置開發環境

### Windows

Windows 下 C/C++ 是一個不太方便的選擇，不過對於初學者來說這個部不是太大的問題，可以使用已經受人包裝好的 IDE 如 `Code::Block`, `Dev C++`, `Visual Studio`, `MinGW with GCC`等，我推薦使用 `Dev C++`給初學者，但是對於以 APCS 為初段目標的初學者建議使用 `Code::Block` 。若有能力自行設定環境，則推薦`Visual Studio Code`等。安裝教學如下

- Dev C++: [https://progressbar.tw/posts/7](https://progressbar.tw/posts/7)
- Visual Studio Code with MinGW: [https://hackmd.io/@liaojason2/vscodecppwindows](https://hackmd.io/@liaojason2/vscodecppwindows)
- Code::Blocks: [https://www.codeblocks.org/downloads/](https://www.codeblocks.org/downloads/)

### Mac

[https://opensourcedoc.com/cpp-programming/build-development-environment-on-macos/](https://opensourcedoc.com/cpp-programming/build-development-environment-on-macos/)

### Linux

使用 Linux 的人應該已經有系統操作與程式的基礎，因此我推薦使用 `GCC` 或是 `LLVM` 等編譯器來編譯程式碼，程式編輯器的話也就不在受到限制。(推薦使用 `VS Code` 最為編輯器)

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

接著我們一行一行解釋程式碼，首先我們看到了 `#include <iostream>` 這行程式碼意指把 `iostream` 這個標頭擋給包含進來，甚麼是標頭擋呢，可以先想像成一個把功能包裝好的檔案，而`iostream` 就是負責處理輸入與輸出(I/O)的，他並不是一個沒有意義的詞，而是一段字，可以分成兩個部分來看，首先是 `io` I/O 是輸入與輸出的簡稱 (Input/Output)，接著是 `stream` 是指串流的意思，在 C++中不管輸入或輸出都是一個串流。這個程式包含兩個主要的元素: cout 和 return。cout 是 C++ 中的一個對象，它代表標準輸出。在這個程式中，cout 被用來打印 "Hello, World!" 字符串。endl 是 C++ 中的一個 I/O 操作符，它代表換行。return 是用來指示函數返回值的關鍵字。在這個程式中，main 函數的返回值被設置為 0，表示程式執行成功結束。main 函數則是代表程式的主程式，所有程式都會有 main 函式存在以執行。
