# 第二章
## 1. ループの書き方と範囲for文
```cpp
// 範囲for文
for (配列の要素の型 変数名: 配列変数) {
    各要素に対する処理
}
```

## 2. 多重ループ
省略

## 3. 多次元配列
* 2次元配列は2次元の表を扱うときに便利。
* `vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))` で宣言できる。
* `変数名.at(i).at(j)` で $i$ 行 $j$ 列目へアクセスできる。
* `変数名.size()` で縦の大きさを取得できる。
* `変数名.at(0).size()` で横の大きさを取得できる。 