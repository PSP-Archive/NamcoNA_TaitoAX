
n68000（m68000単体版）

■この武蔵は本体がMAME0.97の奴(を改造した)で、自動生成がsegadriveA33の奴。

自動生成ファイル:\src\cpu\n68000\m68kopac.c
自動生成ファイル:\src\cpu\n68000\m68kopdm.c
自動生成ファイル:\src\cpu\n68000\m68kopnz.c
自動生成ファイル:\src\cpu\n68000\m68kops.c
自動生成ファイル:\src\cpu\n68000\m68kops.h

自動生成は\src\cpu\n68000\m68kmake\msdos_aaa.batを実行しよー。

自動生成は内容を書き換えないで、\src\cpu\n68000\m68kmake\m68k_in.cの該当部分を
書き換え自動生成させる。
---------------------------------------
■\src\cpu\n68000\m68kmake\m68kmake.cはpsp用のソースではなくてpc用のソース。
適当なC言語でPC用にコンパイルする。pc用のGCCでコンパイルしたのがm68kmake.exe。

