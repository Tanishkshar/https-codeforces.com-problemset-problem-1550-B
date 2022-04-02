// You are given a string s of length n consisting only of the characters 0 and 1.

// You perform the following operation until the string becomes empty: choose some consecutive substring of equal characters, erase it from
// the string and glue the remaining two parts together (any of them can be empty) in the same order. For example, if you erase the substring
// 111 from the string 111110, you will get the string 110. When you delete a substring of length l, you get a⋅l+b points.

// Your task is to calculate the maximum number of points that you can score in total, if you have to make the given string empty.

// Input
// The first line contains a single integer t (1≤t≤2000) — the number of testcases.

// The first line of each testcase contains three integers n, a and b (1≤n≤100;−100≤a,b≤100) — the length of the string s and the parameters
// a and b.

// The second line contains the string s. The string s consists only of the characters 0 and 1.

// Output
// For each testcase, print a single integer — the maximum number of points that you can score.

// Example
// inputCopy
// 3
// 3 2 0
// 000
// 5 -2 5
// 11001
// 6 1 -4
// 100111
// outputCopy
// 6
// 15
// -2

/*
2i2r2X0S@aZB87Ma7XWaB8a2WaBaBZ0BBi80SaWWM@B;S7@;ZZ7i8B@7B8WZB0MWMWMWM8@ZWZWZWZWaSXWBMWMWMWM8WWMBM8@ZBZW8WX0080@8W8MWM8B8@8W0aZM0WBMZWWMWMWM8@0WWX r,7,
2XrS;S702Z8Z:WaX;B202Z;B2020202WarXW;ZZMWM8Si7S2iMaX,X2B722B2BZW8MWMWMWM0MaB202BaZX8Z@BM@MWMBM0MWM@MZ0aBZBXZaWZBZW8@BMZBZ@ZBaZZWZB0MZBBM@MWM8WZ@W; : ,
WXSiSiZW0a@;BZS;WZBZ0i08BaBa0aB8W;B08XW@MWMZXrS2XZM00rXr0XSXBZB2B0@BM@MWMWM0WZWZW8WaWZBBMWMWMWM0@0M@MBMZBZ@ZB8WZWZW8@WMZW8M0@Z08WZW0M8MSrBM@MWMBM@a i.
02ir.,S@Z0X8BaiBaBZW;2ZB28ZWZWZ08SZWZZaWBMB@727S;2@M8WaZ;SrX;aa0X8Z@Z@BMWMWMWM@MBM8BZWZBZW8M@MWMWMZMWM@MWM8@8WZWZWZW8@WM8WZMB@8@8W0M0MWMr,.WWM@MWMWB .
Z:;.:.BBX;808iBZ8aW77Z@ZZZBZBZ8XMr0ZWXBZM0M0Bi0rXi@WMa@B@Sa;7i2SZX2XW0@0MBM@M@MWMWM8WZBaBa08MWMWMWMBM0MWMWMW@aBZW8W8@0M@M8W8MW@ZWZMB@0MWMS. ir@@MWM@@
Xr.i ZWBiZWB:08BaWX7XW82S@Z00@;BBaS@80SW0@8M8Z7B;X7MWMZB0MZWS2i2a0XX:Z0M0B8MBM@MWMWMWMBMZBZW0@BM@MWMWMBMWMWMWM8W8W8@8@BM@MZWZM@M0W8@0@0M@MB, . iXMWMWM
Zir,XW0iZZM;ZZBZWZXi08ZrWZWaMaS8MSZ8WZaZWBMB@ZSa0i72MWMZB0M0@0BXSXWZai7X@0WaBZMWMWMWM@MWMWM0M8WZMWMWM@M@MWMWMWMWM8W8@8WZ@W@8W0MWM@Wa@8MBMWMWr i , rXMW
rXX20W:XaMSX8W2W02i28ZiW8Wa@0S7M8BXMBWX8ZMWMB@aS88:S0MW@ZB0MB@8MZ8780@2Xi80@ZBZMWMWMWMWMWMWMBWaBZ@WMWMWMWMWM@MWM@MBW8WZW8MBW0@WMWMWM8W0MBMWMW2 :.; , i
Z;SSMXai0B2ZBaB02iXZ0:Z0BZ00W:BB@Z08WZWS@0MWMBMSaBZ,Z@M@M8BBMWM8@0@28aM00;Sa@8WZBZM@MWMWM@M@MWMWWZWBMWMWM@MWMWM@MWM@M8W8M0M0@0MWMWMWMBMWMWMWMWM,,.;,;
Za:ZSS;S80S@ZBW8;8r0;S8WZWZM2X0@ZW8WZW8W8WBMWMBM70BZ:@WM@M0BBMWMBM8WZ08@0@a2XWBMBWZ@BM@MWMWMWMWMWM8WWMWMWMWMWMWMWMWMWMZW8M8M8@WM@MWMWMWMBMBMWMBMZ: ;,i
MX7XrrSS@SBaBB@iWXSrX2@8BZ@027M8WZ@ZW8WW@8WWMWM0WZ@08:MWMWMBW0MBMBMWM0WZW0M8BS0Z@BMB@0M@M@MWMWMWM@MBM0M@MWMWM@MBMWMWM@M0@BM0MZMWMWMWMWM@MWMWMWWrBW8 i
SXr8:XXMa8ZBBMr80X;SrWZ@XB0@i80@B@@@ZWZM0Ba@WMWMZWB@88;MWMWMW@BM@M@MWM@M0@ZW0@ZWZW0MWMBMWMWMWMWM@M@MWMBM@MWMWMWMBMWMWMWMWMB@8WWMWM@MWM@MWM@MBMWM7r2MX:
Sia7S:08BaBBM22BWia;8Z@Z28MZXZ@8W0MWBZBZMZBZMWM@Wa@@W80XM@MWMWMBMWMWMWMWM@MZWZWZW8W8M@MWMWM@M@M@MWMWMWMBMWMWM@M@MWMWMBMWMW@W@ZM0M@MWM@M@M@M@MWM0MBX ZS
7XX2;XaWZWWM02ZMrZXX0@80S@0Bi@8WZ@WMBMBWBMZBZMWMWWZMWW88ZMWMWMWMWM@M@M@M@MWMWM0W8@8WZ@0MWM@MWMWMWMWMWM@MBMWMWMBMBM@MWMWMWMWM@MWMBM@MWM@MWMWM@M@MWMWM ,
2iarX7@@WWMW0XM8S8X2M8MX00M2S0@8B0M@MB@ZWW@aW8MWM0W8MB@ZW0MWMWMWM@M@M@MWM@MWM@MWMWMZW8W0MWMWM@MWM@MWMWM@MWMWMWMWM@MWMWM@MWM@MWMBMWMWMWM@MWMWMWM@MWMWMX
7X7S;00MWMWWXWBZZ0;M8W0aZ@BZ7M0WZMBM@M0B8M@@ZW8MBM8WBMWMZWWMWMWM@MWMWM@MWMWMWMWM@MWM0@0MBMWM@MWMWM@MWMWM@MWMWM@MWMWM@MWM@MWMWMWMWMWM@MWM@MWM2aWM@MWM@M
a;2i2000MWWa0BBSMrZ0BZB7@0MXZ0MZWB@WM@M0WBM@WZW0M@M8@WM@M8BBMWMWMWMWM@MWMWMWMWMWMWM@MWMWMB@WMWMWMWM@MWM@M@MWMWMWMWM@MWM@M@MWMWMWMWMWMWMWMWMWMX.;MWM@MW
22rXSBZMWMZW8M2@ZXZ@8MSZ0@BZSMBB8@8M@MWM0@@MB@ZBWMWMZMWMWM0WBMWM@M@MWM8MWM@M@MWMWMWM@MWMWMBMWMWMWMWMWM@M@MWM@MWMWMWMWM@MWMWM@MWMWMWMWM@M@M@MWMZ. ;7@WM
07X,MaMWM8WZM0W087M8WWaSM0MSB0MZMWMBMZMWM0MWM0@8@BMWMZM@MWMBMWMWM@MWMWMXW@MWM@MWMBMBMWMWMWMBMBMWMWMWM@MWMWMWMWMWM@M@M@MWMWMWM@M@MBMWMWMWMWMWMWM8, : ii
:r:Z@@WMaWZWW@ZM7WBWZM;80MB8aMWWWMWMBXWM28WM@M8@8WBMW@0M@MWM@MWMWM@MWMWMX2WMWM@MBMWMWMWMWMWMWMBMWMWMWMWMWM@MWMWM@M@MWM@MWM@MWMWMWMWM@MWMWM@MWMWMZ,.r,:
7 i2MWMX0BB0MZWZZ@@ZMWX2M0Ma00M0MWMWB M@@ BWMWBZM8@BMW@BMWMWMWMWMWMWM@MWMXiXMWMWMWM@M@MWM@MWMWMWMWM@MWMWMWM@MWM@M@M@MWM@MWMWMWMWMWM@M@MWMWMWMWM@MS::7,
::i8WMXXW@8MBW808M8WWM;00W8WZ@WMWMWMX.8MW,.W@MW0ZM8W0MWWWMWM@MWMWM@M@MWMWM0i ZWMWMWMWMWM@MWM@MWMWM@M@MWM@MWMWMWM@MWMWMWM@M@MWMWMWM@MWMWMWM@M@M@MWM;iir
i M@MX7XMZMBMZWZMBW0M@XZ@BM8W8M0M@MWZ 2WM.;.Z@MW2aM0M0MWMWMWMBMBMWMWMW@WM@M@a i7MWMWMBM@M@MWMWMWMWMWM@MWMWM@MWM@MWMWM@M@MWMWMWM@MWMWMWMWMWM@M@MWMWM.r,
 aWM;r;ZWWBM0MBMWMZMWM;W0MBW8@WM@M@Mri.MW7,7 2WM@7SMW@8MBMWMWMWMWM@MWMBZZMWMWM;: X2M@MZ@WM@MWMWMWMWMWMWMWM@MWMWMWMWMWMWMWMWMWM@MWMWMWMWMWMWMWM@MZ@WM:;
ZWMXrrXrM8M0@8MWMWMWM@Sa@0M8@8M@MWMWX.iSMXii7.7@MWrXMW@8MWMWM@M@MWM@MWMWX;MWM@M87 i,ZWM082M@MWMWM@MWM@MWM@M@MWMWMWM@M@MWMWM@MWMWM@MWMWM@MWM@MWM@M MW8i
WM7;;Si2@@WZW@WMWM8M@Mr0B@WM8WWMWMWMi;:iWM r:7.i8MW7:M@@ZMBMWMWM@MWMWMWMW7 SSMWMWB:;,rrB@@X2SM@MWM@MWM@M@MWMWM@M@MWMWM@MWM@MWMWMWMWMWMWMWMWMWM@MWZ MW.
M7;iX;S7MW@:M0M@MBM@MW22MBMWMBMWMWMW7.r XWr ;.i .rM@X W@M0W8M@M@M@MWM@MWMWS ;ia2MWM8S:r,r7BZZ,;rWWMWMWMWMWM@MWMWMWMWM@MWM@M@MWM@M@MWMWMWM@MWMWMWMW.iM7
0aiX;2;2@MZ7@MWMWMWMWM70B@WMBMWM@MWMiXS80MWW0MZZi, W@a aWM0@0MWM@M@MBM@MWM@Z.7:7iXX@WWr;.i.XaMaZS@8M@M@MWMWM@M@MWMWMWMWM@M@MWMWM@M@MWM@M@MWM@MWMWM:,8M
M2XiSr2;MWZ;MWMWMWMWMW0SM8M@MBMWMWM@2,r@MiMiZWM@MW@XB@M .BMBWWMWM@MW82MWM@MW8 X;Xi; rS@ZMWMWMWM0M8MWMZMWMWMWM@MWM@M@M@MWMWMWM@MWMWMWMWMWMWMWMWMWMWa :W
8Z;X;SrXBM2X2MWM@MWM@M8ZB@WMWMBMWMWMX.,M;.:a7ZZMWMWM@MWM..XMWM@MWMWMW@X0@MWMW0.7:X7MWWWM@M@MWMW0ar S@B.a8MWM@MWMWM@MWMWMWM@MWMWMWM@M@MWM@MWM2@WMWM8: 2
@XSiX;2XMW. :WM@MWM@M0MSM0MWMWMWMWMWW X@, . B2@WMWM@MWMS8X. WWMWMWM@MWMZ2aM@MWB.ZaMW7 82MWM@M@M8BX: i@B.i7MWMWMWM@MWM@MWMWM@M@M@MWMWMWM@MWMW0.MWMWM,;,
0Z;X78X:XM . M@MWMWMWXBB0@WMWMWMWMWM@:,M , . @ZMWM@M@ZBMX::: rWM@MWMWMWMWZ70WMWMiaZ,.,;WSMWMWMW0Bi i.iWZ,XWMWMWMWMWM@MWMWMWM@MWMWMWMWMWMWMWMB.7M@MWZ.:
M2ZSZ.. r@. ,XMWMWM@M B0W0MWM@MWMWM@M;:@S , . W0MWMWW8X Mi,.: ,XMWMWMWMWMZ872SM@M0i:i .2@0M@MB@B2 . , M0r:M@MWMWMWM@MWMWMWMWMWMWM@MWMWMWMWMWM :ZM@MB.
B0r: . , M . ,@MWMWMW.iMZMWMWMWMWM@M@W,WW. , . r;Z2a;. ;;S : : . S8MWM@M@M88rX;2ZM;: . .:aX8S8r: , . iWMX;8M@MWMWMWM@M@MWM@MWMWMWMWMWMWMWMWMWi.:BM@M ,
; . : : .Z: , ZWMWMWM .@WWMWMWM@MWMWM@iXMW; , . . . . .i; : i : . ,;B0M@M@M8BSS:;,i . , . . , . . . ,@M8S,BWM@MWMWMWMWM@MWMWM@MWM@MWM@MWMWMWM.;,iWMWZ
 . : : , S,. , MWM@MW: MWMBM@MWMWMWM@MS.rMWW.. . . . iir : i i i : . XXZZM@M0ZXZXa:7 , . . . . . .,WWMr::XXM@MWMWMWM@MWMWMWMWM@M@MWM@M@MWM@MW7,7.i@MW.
i : : : ,,X , .iM@MWM..rMWMWMWM@MWM@MWM.. S8M@@a02B2a;i i.i.i i i i , . ;,XaMWMX7iXXBZ0SSiXiX;aS@WMW2 , ria@MWMWMWMWM@M@MWMWMWMWMWM@M@MWW8MWMSiiX 8WMX
 , : : : ,r, : .BMWM@X :WMWM@M@MWM0MWMW@ . . XX0ZBZa,: i i i i i i : : , : . raMaS:ii80M@MWMWMWMB8:: i.i:X7MWMWM@MWMWMWMWM@MWMWMWMWM@MWMa2WMWW.7:77S8M
i : : : : X,, : ,WMWMX. @WMWMWMWMW@rM@MW2 , , . . . : : i i i i i i i i i : , . i:X,, , : i.i : , , i.r.;ia@MWMWMWMWMWM@M@M@M@MWMWMWMWMWW.MWMa7i: Sa,0
 . : : : , X : . Z@M@Z .,MWMWMWM@MWS.MWMaX : : : : : i i i i i i i i i i.i i : : : : : , , : : : i.i.;,i,X7MWMWM@MWMWMWMWM@MWMWM@M@MWM@M8iaMWB7ri. 0.i
i i : : : : : : . MWMZ. .BM@MWMWMWM@..MWW;r i i i i i i i i i i i i i i i i.i i i : i i i i.i.i.i.i.i,; riaWM@M@M@MWMWMWMWM@MWMWM@MWMWMW8.rWMZ0:X,.X:
 . : : : : , : : .XM@M , :WM@MWMWM@M7. MWZ.r i i i : i i i i i i i i i i i i i.i.i i i i i :.i.i.i.;.;.i:72MWM@MWM@M@M@MWMBMWMWMWM@MWMWMXr:2WMXZ,X 2..
i : : : : : : : , .WMW. , 0WMWMWMZMWM . B@Z : i i i i i i i i i i i i i i i i i i.i i i i i i i i.i.i.i X:MBMWMWMWM@M@MWMWWWMWMWMWM@MWMWa:S.B@2ari7ar
 . : : : : : : : , rWMi. . MWMWM@Z0MW8 . X@8 : i i i i i i i i i i i i i i i i i i.i i.i i i.i i i i.i i;2@X@MWMWM@M@MWMWMrMWMWMWMWMWMWMX7;X,MBZ7r:ZX.
i : : : : : : : : . WWM . ,,M@MWMSX@M@, , .Xa : i i i i i i , : i i i i i i i i i i i.i i.i i i.i i i.:.7ZW,MWMWM@MWMBMWMZi@MWMWM@MWMWMWZ:SrX:@SB,7:@
 . : : : : : : : : , MW, , ,2M@M@M MWMB. : ..; i i i i i i :i: i : i : : i i i i i i i i.i.i : i i.i.i 7r@.a@MWMWM@M@0WMW8 MWMWMSMWMWMWMar;S;X;22S:7;0
i : : : : : : : : ,.. M0, , .@M@MW.XMWM7. : : i i i i i i i a2. , : , , : i i i i i i i i i i.i i i i i;Zi:ZM@M@MWMWMrMWMS:BMWM8i@MWMWMWW,SrSrX,0XrirS
 , : : : : : : : : r .:M,. . ;WMWM,,WMWM . : i i i i i i i : M0r.r:7iXir , i i i i i i : i i.i.i i i :i2i:,MWMWM@MWMaSBMW8 @WMWa B@MWMWM8;rS;S;72a:Xi7
i : : : : : : : : ,,r .7M , , 2WM@a @WMWM , i i i i i i i i . @W8iSrS;8aBXr i i i i i i i i i i i i :.X .,7@M@MWMWM@2.0WMS,aM@M:riMWMWMWM,X;S;X;W:7iX,
 . : : : : : : : : ri, .;Z : ; 0WM2.XMW8@M . i i i i i i i i , ;0S;XrSrSrS,: i i i i i i i i i i i i ; . 77MWMWMWMWZ,irM@Z @WM8;irXM@MWMWriX;X:W7riXir
i : : : : : : : : ,,X , .,i ,,r M@W 7WM:M@M . i i i i i i i i : ,,Xr2rSi; : i : : i i i i i i i i i.i : 7,WWMWM@MWW.7:;WMS,BMWX:X;;ZM@MWMi7;S:Ba;iXiX,
 . : : : : : : : : r;; , , : iii,MW..M@.WM@M . : i i i i i i.i.: , i,; , : i i i i i i i i i i i i i : i;;WMWMWMWM.7iX.M@8 MWM.X;S:iBMWM@Z.XiZ8ri7i7:Z
i : : : : : : : : ,.X:, : : : 7:,aM ,WM 0WM@M,. : i i i i i i i : : : : : i : i i i i i i i i i i i i ,iriM@MWMWM;;iXirrM2,WM7;;X;X:r@M@MW;,ZZr:7:77Z
 . : : : : : : : : :iX , : : .:X,;@r Ma,:MWM@MX. :.i.i i i i : : , , , . . , , , : : i i i i i i i : ,:X 8WMWMWMaiiXiXi;@B MWriX;S;X:7WM@M77ar:X:7aZ .
i : ; : : : : : : , r;7 : : : ii7.2iiWa ,WMWSBM0. , i.i.i.i.i.ZXZXa7arX7aXaXZSZXa7a:: i.i.i i i i : :iXiZWMZMWM@;:XiX;X,00;@a.X;X;X;X,rWM@MX;:XirZ7 .
 . ,ir , : : : : : , X;: : : : riX,r:M:r Z@M;:WMWX , : i i i i.i.;,riX,Xi7:;,;,i.ri; i i.i.i.i.i : iiXS0aMX@WM@X:X;X;S;7:0ZM.7;X;X;X;X,;ZMWW 7ir2S , ,
: : 2X. : : : : : : , X:, : , : ::X,aa;:;,M@M BW0Za,. : i i i : : , , : , , . , : , : i i i.i i , 7i2ZB;MW:WMWZ.XiXiXiXir;MrriXi7iX;XiX:;ZMW0.;rS , :
 . :XZ : : : : : : : ,.S , ; : : ..7XX:7::0MS7 Mia727; , i i i i :.i , . . , r.: i i i i i i : :,7r8Z8ra@i;MWB 7;XiXiXiX,Sai:7i2X8XSiXi7Z7 8Wa a , i .
i , aS. : : : : : : : ,:X ,,r , : , r:7i7.a@Xr;@2,B:S2S , i i i i irWZ020aW8M8X i i.i i i : , ;:SSWaZr;Ba MWM riXi7i7:7:r8a7828SZ;XiX;7aZ.r r7r , : :
 , i78 , : : : : : : : ,:r :ir , : , iiX:;:M7;S8ri2Z,77B;, i i i.i :,Xr272;7.: i i.i i i i , 7;Z8BXa;rX0 SWM.r:r:XraXZ208@XarX:r:X;Xir28.7i; . . , , .
: ,.2Si : : : : : : : : :ii :;a,. : : ::X:i@8 Z7;:r0Z7XiZS; , i i i , , , , , i i.i.i.i : :.XSW2a7X,r:X,i@M,rrZS820XarX:X:r:7iX;Si7:XZB.7;: a : , : i
 , ;7Z,: : : : : : : : : ::, ;;0i. : , ,,X,Bai:W,7.88Z20S080 . i i i i : i i i i i i i , ii8Z0XZ20XZXa7SZMaaS8X2ir:r:7:7:X;SrS;7..,Za2.7i, M2ZSZXaXa::
i :.22r:, : : : : , . , : :., 7:ZX, , : , ;X0,rSZ,r:B,riS7ZZW;, : i i i i i i i i i : : 72Wa8a0XZXZX8XX7Mr;ir:X7ZXZS8Xa;7iX:; . iXBXr,X,. 2 , i.rir :
 . ;rB.X:: , , . :.ri7:i . , , X:a2; , : , ;rXi7Z7:;XZ:X;Xi7iZ27 : i i.i i.i i i i : ii08WZW22i7:7:7:7,MSiiSX0S2;r.7iX7BXX., .:ZZa:riX .;X . 77ZXS., ,
; ..XZ;:Xir :.riSrS;Xi27a;; . . X:r22 , : , :,X,8SriraZ:X;X;SiS2Z., i i.i.i.;.i : :.2ZM8BZ8;r:X;X;X;X,M2XXBSS.. . , , . ii27800;i.7:: ;22:a20XX . , :
7i ,:W,;,XX8aZi; : , : : 7;272ii.7,;XB,, : : , ri@iX:r20;7;X;X;X70X; , i i i : : rXWaZ;Xr7:XiX;S;XiX;MBZXX.. ,.: i i : : . :,7;Z2Z:, Sa8XZ;i . , , : .
BXr.iZZX0Sa:: , i i i.i : , i:X72S8XXi07, : i : ,7B:XirXWSXiX;X;S;ZaZ;; , , ,.77B807XiXiX;X;XiX;2S8a8X7 . .:X i.i i : i i : , . ;iXXMWa.. , , , : : :
.S8ZX877 . , : : : i i i :.i : , iiSXZ70Z7 . : i .7X,S;7iZZ0rXi;.7;SSBZ0XaX8aBa8XXiXrS;X;X;S7820XS,i . : ,rZ.i.i.: i.r,;.: , : : , :.aXSi7.: . : : : ,
8rSii . : : , i.;.i , i i a8i i.i : , ri20Mi, , : ,r; ;:7:XXWZZi; :.riXXZSZXa;XiX;SrSrSiS2Baa;; . : : : iSS i.;.i;2;XiSr27a;7.: : : , ,.riS7arX,: , :
,. . , , :,XraX27ZXZrr.i i.WWi i.i.i : , :r8XarS:i :7X . : i.2Z@2X.: i.riX;Sr2rSrSr2r2rZZX,: : i : i.;,2BZri.;.i,X.;.;.i.;,Xra72ir,; : i : :.riXr2;X:,
: :.riX7arS:; , , :.X;S:i.: ZZX.: i i.i.i , i,ri2X2 ,i2;; . , :i080:, ;.i.;:Xr2727272iSai i i : i,7;aSB0a,i i.;.i riXr27a7Si;.;:7iXrSii.i.i.i : :.;iSi
 ,7a7Sir , ;iXrSi7,i : ;.; i ir8XX.: : i.i.i.i.i :XZ , rraii : . iXWSr i.;.i.i,r:7i7.;S; i i,7iX;aa@aai: :.;.;.;.;.i i.;,r:7:r:; : i.;.i.;.;.i.i.i i ,
i i , , r;aX2;7,i i i i ;.i.;.: 7X0SS:r,;.;.i.;.;.:2X i :.SXS,: : . 2ZZ:i i.;.i.i i ;a7 :.X;XrZ2Baa:i i.;.;.;.;.;.;.;.i.i i i i.i.i.i.i.;.;.i.i.i.;.;
.. i,r;SrX:; i : i i i : :.;.;.; :.S2W2arSrSir.i.;.iZ; i i i:2XS.:.i :iZ2ai; i.i.i Xar i:2X0ZWaa:: i.;.;,r.;.;.i i i.;.;.;.;.;.;.;.;.;.;.;.;.;.;,;.;,i
; r:r:;.: i i.;.i XSS;r:r,i i.;.;.; :,ZaB2Z7272:i.;.7Br :.;.i irZr; :.: ;;ZS8XS;r:8Si i;BZ8XX,: i.;,;.;.i i i.i ;:7:;.r,;.;,i i.i i : i.i.;.;.;.;.;,;
.,.i : : i.i.;.i.i,08WZ2i7;X:i i.;.;.i i:SXB2Sra:i,r S0X,i ;.;.: XXZ:i i : i,7iX2W;: ;r@Sr : ;.;,;.i i.r:7:7:XXWZ0X2Si,;,r,;iS;aXZr2rX:r.i.;,;.;.;.;:i
i i i,r,i i.;.;,;.i 2@M@MaSiXi7:; i.;.;.i :.SZara:i,; Z0Si; ;.i.; :iaXai; : , 7S2 i r7M;:.;,r,;.i.;:X;S;X;aaM@MWM8aZS.;,r,;,7ir,r:ri7;Sr277.;,r,;,;,r.
7Xr27Sr2Xa,;.;,;.;,i 2@MWMWM2SiX;Si;.i.;.;,; ;8Zra:;,r aZ2;X,i.i.;.i iiaXZ7XrZXr i.7XMi:.r,r.i,7;S;S;XrZZMWMWMWMWMS; ;,;,;.;.i,7iX;S;X:r,;,;,;,r,r,r:i
; i i.i :i7.;.;.;,;.i ;8MWMWMWMSXiXrS;7,;,r:;.;Z0r2.;:r 7ZZ;2ir.i.;.;.i i,rXM,i.;,Sa@ii,r,;.r;arXi22@WM@MWMWMWMX7 ,.r,;,;,;,;,;,;.;,r:r,;,r,r,;,r,r,r
:;;SrXir.i.;,;,r,r,;.i .;@@MWMWMWMSSiS72;;.r,r.i2@7S,r,r.;88iSrX:;.;.;,;,; 0,;,;:Z0B,i:r:r.77a;2aMWM@MWM@MaS,: . i.;,;.;.;,r,;,r,;,;,;,;,r,;,r,r,;,r,i
7.r,i.;.;,;,;,;,;,;,;,;., :;@WM@M@MWW;7rZr;.r,r,:r@2X,r:7.iZZiXr2rXir.i.; X2i:;,0Ba ;:7ir.XXSiB@MWMWMZ2,: , :.;.;.i.i.;.i i.;,r:r,r,r,r,;,;,r,;,r,r,r.
 ,.i.;,;,;,;.;.i.;,r,r,r,; , ;X@WM@MWMZSrZ77.r:7:i:WaS,r:r.;@07X;Sr272;7,iX8.;:@87.r:7:;,SXSXMWMWMWB . i.;,;,;.;,r:XiXiX7Z;Sr;,r:r,r:r,r:r:r,r,r:r:r:;
; ;,;,r,;.i.;.i i.i ;,r:r:r,; , X8MWMWMWai2XX,r:7:;.082,r:r,WX@8aiX;S7272iW2::@2i,7:r:;:arSZM@MBMWX i,r:r,;.riSrS;X;aSBZ@a8X7,r:r:r,r,r,r:r:r:r:r:r:7.|
:i,;,;,;,;72XWZ077:7.; ;,r,r,;,; ,:MWMWMWWr2XX.r:7:r.Z0S,7:;0S;88BXXiS;SrXaZ,W;;:7i7,r;a70WM@M@MWi r:7:r,riS72r22BBMWM@MrBS;:7,r,r:r:r:r:r:r,r,7,r:r:;|
7 r,;,r,r.S72rXXMWZ;X;7:;.;.r:r:r,: 8WM@MWMSSXS,r:7i7 007:7.07S;XXW807X;2;Z00i;:7ir:XXZ2MWM@M@M0: 7ir:;,7rZ722M@MWM@MWMW0;i,7:7:r:r:r,;,;,r,;,;,r:7:7.|
:i,;,r,r,;:WaSiMWMWMZarS;S;Xir,r:7:r 7WMWMWM0a72:ri7ir:M7riiZ2i2rSraa@80XXXM:r;XiriaX8WM@MWMWMS:,7i7,r;ZX2r0WMWMWMWMWB7i ;:7i7:7i7:r,r:X;Sr27S;X:r,r:;|
 */

//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMHBYYYWMMMM#BYYTTTYWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMB9O1==?????zzCC111>>;;;;;;;;;;;<?TMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM9Olll=l======??????????>>>>>>;;;;;;;;;:;?TMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMM9ttlllllllll=l=======?????????>>>>>>;;;;;;;;;;?TMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMBOttOtttttltlllllllll=======??????????>>>>>>>;;;;;;?TMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMBttwOtttttttttttttlllllllll========?????????>>>>>>;;;;;<TMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMBrwZrttttttttttttttttttlllllllllll======???????????>>>>>>;;?HMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMSw0trtrrtrtrttrtttttttttttttlllOllllll========????<<zz??>>>>>>ZMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMX0ttrtrOOttrttrttOOttttttttttttltwllllllllll========??wy?????>>>vZMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMM0ttrI+wV1rtttttttwZtttttttltttOwylOXOllllllllllll=l====1dkz???????vZdMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMSrrwrtwZCjttttttttwSttOlllltllllwtXOlZkOlllllllllllllll==z+dk===?????X2JMMMMMMMMMMMMM
//  MMMMMMMMMMMMMBrtwwtrw0<jttttttttOXllOttltllttllOZwHOtXkyltlllllllllllllll<+XZ======?dk?JMMMMMMMMMMMM
//  MMMMMMMMMMMMStwdZtwXC<+ttttttOOOd6ltZlltllllttllStWWOOHWytttttltltOllltllz:zHllll===zX=?dMMMMMMMMMMM
//  MMMMMMMMMMBrwdKOtwW3;;zrttttwZwXRlldOllltltlltttwlXvktdXWytltttttttOttlttl<<dklllllllZ===dMMMMMMMMMM
//  MMMMMMMMM8tQM#ttwW3;;;1trttwSwfUOlORltllltlllllldtX>dktDOWOtlttltttOOttltO<;+WOllllllXlllzMMMMMMMMMM
//  MMMMMMMM9OdM#Ottd$;;;;;<?1z0OKjRltd0llltOllllllldZX>?WOw_WWOtttttttttOttI<;;<dkttttllllllldMMMMMMMMM
//  MMMMMMM9wMMMSttwS<;;;;>;;;J<j>(I<?U111zltllllllld0X>~dkwl(WkttlttlOOwWk<;;:;;zHttttttwOllllMMMMMMMMM
//  MMMMMMBdMMM8tttdI+zttttttdSXt~dlzXwlllzzOzzzzzlldkW<~?kOk~?sx++++jdHmH6+++<;;jdZtttttdkOtlldMMMMMMMM
//  MMMMM#dMMM#tttw0+tttttttdKdf((RsdfRllllldZllltlldWK~~_W0w_~OWOlOdgg9ZtOWOtttz+wktttttdpktttwMMMMMMMM
//  MMMMMWMMMMSlttdIttttttOdWHH>~(IzWDRll=llzRlllzlldk$>++dkd<~_XkdgH9tttttdktttt+OkrttrtdfpkttOMMMMMMMM
//  MMMMNWMMM#Zttlk=tttttOXWWd$_.(IdW1R=llll=SlllzOldK<_._(kd6+-(MM9lltttttrWktttztWZttrwXppWttrMMMMMMMM
//  MMMMNMMMM#lltwDzttllOXyW0X:..(OXk<Rl=ll=lwOlllOld3<``.(Rd>~?CdklllltttttXdXttzOWktrwwWpfpkrtMMMMMMMM
//  MMMMMMMMM@ltldIzlttOXyW$w$```(OyD(Rl==llldZ=llIlw;~```-Xd:~~~~UkylltttAyHdgSrzObRtOXwpfppWrrMMMMMMMM
//  MMMMMMMMM@llldtlllldVyW+d>```.wZ$ wl==lI=wRl=ll=w<```` dd_..~~(RZXOQdggHH9ZwrzwHWrdXXppfppkrMMMMMMMM
//  MMMMMMMMM#llldlltlwyyyD(S-...,Wk] zI=l=llzWzl=l=P~```` jZ``...~zQkH@MBUtrZtrtldHRdSdpfpffpkwMMMMMMMM
//  MMMMNMMMMNZllXtllldVyW3(Mf=<ONMHP~(k===l=zdk=lld3```...(C````..(M96lttttrrtrrtdHWHXpfpppfpRwMMMMMMMM
//  MMMMMMMMMMNzzWZllzyyyy(W@`  =~MWK6 jz=lzlzvRz=lZ`.I+JgkWm&-. `..(ZltlttttrtttrWWHppfppfpppSdMMMMMMMM
//  MMMMMMMMMMMkAWRllzVyyS_(b    .MNHU-(Uz=lI={XkzO>.dVT7<TMHMNHHx-.(kwZyltttrtrrdHHpfppfpffpp0dMMMMMMMM
//  MMMMMMMMMMMMKyWzOzyyyk.`<!  hdWMH]``(S==t=l(kX2 ?_`    WMMHH#HH+.XwkwOttttrwrZ~(HfpfpppfpWwXMMMMMMMM
//  MMMMMMMMMMMMMHWROOyyyW;` `. (WVM#b```(0=zzz wX!```  a.dM#NM@N(4WhXkXkWtttttwd3O_(HpffpfpfWwSMMMMMMMM
//  MMMMMMMMMMMMNZvWzXXyyXP```-_ ?o+?!````.4=Z=`(:````  HpbNNMHHH (C=XXyWZWttrdwf:(>.dfppffppSXSMMMMMMMM
//  MMMMMMMMMMMMMRzuHzXyZXH.``````````````` ?zz ``````` ZKvTHHbWt `` XZyyHZWOdSZ<::~`(fpfpfffXp0WMMMMMMM
//  MMMMMMMMMMMMMKzyyHvyZZW____.`````````````.I_```````` ?nJzX7^````.WXWyyHyWKZ<:::_`Jffpfpfpfp0WMMMMMMM
//  MMMMMMMMMMMMM@zZyZWwWyXo-_~(~ ```````````` `````````````` _`````.WXkyyVWmWc::<~ .HffppfffffkXMMMMMMM
//  MMMMMMMMMMMMMKzZZZZXkUXr~....```````....```````````` ...  ````..JXWWyyW83vXx~..WfffVfWVffffkdMMMMMMM
//  MMMMMMMMMMMMMRzZZZZZZZZb````````````<````````````./<~._<_.____`(WfdyW3<:~~(XWkVVVVVVVHVVVVV0dMMMMMMM
//  MMMMMMMMMMMMMSzZZZZZZZWX-```````````````````````````.......~~._j9jX=_~~_(XZyVHHkyyyyWHyyykykOMMMMMMM
//  MMMMMMMMMMMMMSzuuuuuZXWZW,```````````````````````````````.``..(3<! ...JWyyXWyyyWHkyyWHyyyHyklMMMMMMM
//  MMMMMMMMMMMMNXzuuuXXuXSuuXh,```````` .... ```````````````````_~ .JWyyyyZyy0HyyZyyZyZXWZZZWHZIdMMMMMM
//  MMMMMMMMMMMMNwtuuuXkuXXuuuuXh,``````(:::~<?71(,``````````````.(UMNUkZZZZZZZHZZ0ZZZZZWWZZZWNXIdMMMMMM
//  MMMMMMMMMMMMNKOzuzXkuXuuuuuXuXW, ```` _~~~:~~(}```````````.(YC;::<kCfZZZZXO#ZZVZZZZZMZZuuMMNXzMMMMMM
//  MMMMMMMMMMMMHKOzzuXkzdzzzzuXXzuuU&.``````````````````` .JY>::::;;J=:dZuZuZd#uuruuuud#uuuXMMMNXdMMMMM
//  MMMMMMMMMMMMMNOvzzXkvMRzzzzXKzuzzzXh, `````````````..JC<;:;;:;;+7<:~(HHuXIdNuuzuuuXMSuuuWMMMMROMMMMM
//  MMMMMMMMMMMMMNvvvrdkvM#vzzzzHzzzzzuzzUG. ``` ...JdY<:;:;:::;;+v<~~~:(HpHmzMNXZzuzzd#zzzdMMMMMMRdMMMM
//  MMMMMMMMMMMMMNwrrvdRrMNwvvvvdRvvvzwkzzzzXWWHY=~~O+::::::::<+<~~~~~~~dppppWMMkZzzzwM#zzdMMMMMMMMNMMMM
//  MMMMMMMMMMMMMM#rrrwRrMMbOrrOZNkrvvvXwvvvvvwX;.~._W_:::::(?!~~~~~~~~(HpppppppHWdvwM#XwdMMMMMMMMMMNMMM
//  MMMMMMMMMMMMMMNyrrrRrWMMmzOrzdNyrrrZNvrwQWWfb....(r~~_J>_.....~.~~-dpfpffpfpppWHHMNdMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMNrtrStdMMMNxzrzMNmrrrdNWfVfffP._-.(~_J!............JpfpffpfpfffpppWNppppHMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMNOtXtdMMMMMNxzZMMNmgHyVVVVVW%..?/(.,(x-..........(HfffpffpffpffWHHffpffppfVyyWMMMMMM*/

#pragma comment(linker, "/stack:20000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <cstdint>
#include <cstring>
#include <string>
#include <cstdlib>
#include <vector>
#include <bitset>
#include <map>
#include <queue>
#include <ctime>
#include <stack>
#include <set>
#include <list>
#include <random>
#include <deque>
#include <functional>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <complex>
#include <numeric>
#include <immintrin.h>
#include <cassert>
#include <array>

using namespace std;

#ifdef LOCAL
#define CURTIME() cerr << clock() * 1.0 / CLOCKS_PER_SEC << endl
#else
#define CURTIME() ;
#endif
double __begin;
#define DTIME(ccc)     \
    __begin = clock(); \
    ccc;               \
    cerr << "Time of work = " << (clock() - __begin) / CLOCKS_PER_SEC << endl;

#define mp make_pair
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef int itn;

template <class T1, class T2, class T3>
struct triple
{
    T1 a;
    T2 b;
    T3 c;
    triple() : a(T1()), b(T2()), c(T3()){};
    triple(T1 _a, T2 _b, T3 _c) : a(_a), b(_b), c(_c) {}
};
template <class T1, class T2, class T3>
bool operator<(const triple<T1, T2, T3> &t1, const triple<T1, T2, T3> &t2)
{
    if (t1.a != t2.a)
        return t1.a < t2.a;
    else if (t1.b != t2.b)
        return t1.b < t2.b;
    else
        return t1.c < t2.c;
}
template <class T1, class T2, class T3>
bool operator>(const triple<T1, T2, T3> &t1, const triple<T1, T2, T3> &t2)
{
    if (t1.a != t2.a)
        return t1.a > t2.a;
    else if (t1.b != t2.b)
        return t1.b > t2.b;
    else
        return t1.c > t2.c;
}
#define tri triple<int, int, int>
#define trll triple<ll, ll, ll>

#define FI(n) for (int i = 0; i < (n); ++i)
#define FJ(n) for (int j = 0; j < (n); ++j)
#define FK(n) for (int k = 0; k < (n); ++k)
#define FL(n) for (int l = 0; l < (n); ++l)
#define FQ(n) for (int q = 0; q < (n); ++q)
#define FOR(i, a, b) for (int i = (a), __e = (int)(b); i < __e; ++i)
#define all(a) std::begin(a), std::end(a)
#define reunique(v) v.resize(unique(v.begin(), v.end()) - v.begin())

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        if (b >= 0)
            cout << (a + b) * n << "\n";
        else
        {
            int cnt = 0, cnt1 = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '1' && s[i + 1] == '0')
                {
                    cnt++;
                    i++;
                }
            }
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '0' && s[i + 1] == '1')
                {
                    cnt1++;
                    i++;
                }
            }

            cout << n * a + b * (max(cnt, cnt1) + 1) << "\n";
        }
    }
    return 0;
}