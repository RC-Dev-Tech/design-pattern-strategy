# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Strategy 策略模式
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---
<br>

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---
<br>

## 目的
將算法的定義、實現和使用分離開來，以便在運行時可以根據需要選擇不同的算法。

---
<br>

## 使用時機
當需要在運行時根據不同情況選擇不同的算法時，可以使用策略模式。<br>
此外，當有多個類型的相似算法時，可以使用策略模式來避免代碼重複。

---
<br>

## URL結構圖
![](https://drive.google.com/uc?id=1M35A2t48dZoBhUQzyVW4BnfidpES3vbK)
> 圖片來源：[Refactoring.Guru - Strategy](https://refactoring.guru/design-patterns/strategy)

---
<br>

## 實作成員
* Context
  * 環境類，維護一個對策略對象的引用，並將具體操作委託給策略對象。
* Strategy
  * 策略接口，定義了所有具體策略所需要實現的方法。
* ConcreteStrategy
  * 具體的策略實現類，實現了Strategy定義的方法。根據需要可以有多個不同的ConcreteStrategy類。

---
<br>

## 實作範例:
- [待補...]() 

---
<br>

## 參考資料
* [Wiki - Strategy Pattern](https://en.wikipedia.org/wiki/Strategy_pattern) <br>
* [Refactoring.Guru - Strategy](https://refactoring.guru/design-patterns/strategy) <br>

---
<br>

---
<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
