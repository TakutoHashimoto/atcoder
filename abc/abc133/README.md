# [ABC133](https://atcoder.jp/contests/abc133)
## A
* 2通りの料金から小さい方を出力する。Pythonでは [`min`](https://docs.python.org/3/library/functions.html#min) が使える。

## B
* 全探索の問題（全ての座標の組み合わせについて、条件を満たすかチェックする問題）
* 実装は少々込み入っているが、問題の通りに実装していけば解ける。
* リストから2つの要素を選ぶのに [`itertools.combinations`](https://docs.python.org/ja/3/library/itertools.html#itertools.combinations) を使った。
* コードの可読性向上のために、距離を求める処理と、距離が整数か判定する処理はメソッドとして切り出した。
    * 距離が整数かを判定する処理は、問題通り平方根を求めようとすると少しややこしそうだったので、平方数か判定するようにした。
