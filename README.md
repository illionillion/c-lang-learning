# Cの実行方法

## コンパイル

`gcc -o {コンパイル先ファイル名} {ファイル名}`

```
gcc -o dist/helloworld helloworld.c
```

あらかじめフォルダを作成しておく

```
mkdir dist
```

## 実行

コンパイルされたファイル名だけで実行できる

```
./dist/helloworld
```

以下でコンパイルと実行をまとめてできる

```
gcc -o dist/helloworld helloworld.c && ./dist/helloworld
```

## `#include <stdio.h>`ってなに？

`printf`などを読み込む、インポートするためのもの

環境が違っても安全に実行させるために必要