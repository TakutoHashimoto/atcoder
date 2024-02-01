# [ABC129](https://atcoder.jp/contests/abc129)
## A
* `P, Q, R` のうち2つを選んで足したものの中から最小の値を求めればよい。
  * 今回考えられるパターンは ${}_3C{}_2 = 3$ でせいぜい3通りなので、3つの和の中から最小を求める。
  * 数が多い場合は少し大変なので、[`itertool.permutations`](https://docs.python.org/ja/3/library/itertools.html#itertools.permutations) を使うなど工夫が必要になってくる。
* 解説を読むと、`P+Q+R-max(P, Q, R)` で答えを出していた。

## B
* 全探索をする問題。以下の$N-1$パターンについて条件を満たしているか確かめればよい。
  * $[W_1] / [W_2, \dots, W_N]$
  * $[W_1, W_2] / [W_3, \dots, W_N]$
  * ...
  * $[W_1, W_2, \dots, W_{N-1}] / [W_N]$
* ループ変数やリストのインデックスに注意して実装すればそれほど難しくない。
* 仮の最大値を無限大として `float("INF)` とおいている。