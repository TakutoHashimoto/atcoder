# [ABC135](https://atcoder.jp/contests/abc135)
## A
* 問題文の条件を言い換えれば解ける。
* $\left| A-K \right| = \left| B-K \right|$ を満たす $K$ が存在するということは、 $A, B$ それぞれと数直線上の距離が等しい $K$ が存在すると言い換えることができる。
* $A+B$ が偶数であれば、そのような $K$ は存在する。奇数のときは存在しない。 

## B
* 全探索をする問題
* リストの2つの異なる要素を入れ替えて昇順になっているかをチェックする。すでにソートされている場合もあるので注意。
  * リスト `P` に対してソートを行なってしまうと上書きされてしまうので、別の変数 `Q` にコピーする。[`list.copy()`](https://docs.python.org/ja/3/library/copy.html#copy.copy) を使った。内側のループが繰り返されるたびにコピーするので効率はよくないかもしれない。
  * Python では変数のスワップは一行で実装できる。
    ```python
    Q[i], Q[j] = Q[j], Q[i]
    ```
  * スワップ後のリストが昇順になっているかは、`P` をソートしたものと比較する。[`list.sort()`](https://docs.python.org/ja/3/library/stdtypes.html#list.sort) は破壊的なメソッドなのでこれを使うと `P` が上書きされてしまう。これを回避するために [`sorted(list)`](https://docs.python.org/ja/3/library/functions.html#sorted) を使った。
* 別解として、与えられたリストと、ソートしたリストを比較して、異なる要素の個数をカウントする方法がある。問題の条件を満たすのはカウントの結果が0か2の場合のみなので、それを用いて解くこともできる。
    ```python
    N = int(input())
    p = list(map(int, input().split()))

    cnt = 0
    for a, b in zip(p, sorted(p)):
        if a != b:
            cnt += 1

    if cnt in [0, 2]:
        print('YES')
    else:
        print('NO')
    ```
