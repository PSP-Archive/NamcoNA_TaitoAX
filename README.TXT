
================================================
  ＰＳＰ開発幼稚園  http://ameblo.jp/pspdevblog/  （本館）（ブログ）
  ＰＳＰ開発幼稚園  http://psp.nukenin.jp/        （別館）（ＨＰ）
================================================

namco 'system NA1'
namco 'system NA2'
taito Asuka
taito 'X system'

... emulator from MAME.

■これは実験です。「namcoNA_A09_taitoAX_A04.zip」(2006-10/24､07:30版)
実験用です。これはＧＰＬ２です。原作者と私は無関係です。

原作者に問い合わせる事はやめて下さい。
================================================
実行：
■バイナリはpbp以下にあります。
■ゲームの終了はL+R+STARTです。
その場合、次のＲＯＭは読めません。ＸＭＢ（ＰＳＰ自体のメニュー）まで、
戻って下さい。
■menu.bmpという名前で480x272x24bppのファイル（無圧縮ＢＭＰ形式．383kBytes）
を、EBOOT.PBPと同じ場所に置くと壁紙になります。
================================================
説明書：
■説明書はpbp以下にあります。
■namcoNA_A09.txt
■taitoAX_A04.txt
■readme_pmame04.txt（元の説明書。参考）
================================================
開発：
■そのままコンパイルすれば、namcoNA_A09が出来ます。

makefileを

#TARGET = namcoNA
 TARGET = taitoAX

へ変えてコンパイルすれば、taitoAX_A04が出来ます。

環境：
■GCC4.0.2(xorloser)です。Unofficial developmenting tools 
http://www.xorloser.com/  GCC4.0.2(xorloser)[PSPDev for Win32 / 2nd June 2006] for PSP.
================================================

