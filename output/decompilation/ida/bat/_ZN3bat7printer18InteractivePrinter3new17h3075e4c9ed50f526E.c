__int64 __fastcall bat::printer::InteractivePrinter::new(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 theme; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  bool v16; // zf
  char v17; // r12
  unsigned __int64 v18; // r13
  __int64 v19; // rbp
  __int64 v20; // r14
  char v21; // r12
  char v22; // al
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  int v26; // ecx
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm0
  char v30; // cl
  char v31; // r12
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  char v35; // r14
  char v37; // [rsp+Fh] [rbp-489h]
  int v38; // [rsp+10h] [rbp-488h]
  char v39; // [rsp+14h] [rbp-484h]
  __int128 v40; // [rsp+18h] [rbp-480h] BYREF
  __int64 v41; // [rsp+28h] [rbp-470h]
  __int64 v42; // [rsp+30h] [rbp-468h]
  _QWORD *v43; // [rsp+38h] [rbp-460h]
  __int64 v44; // [rsp+40h] [rbp-458h]
  __int64 v45; // [rsp+48h] [rbp-450h]
  _QWORD *v46; // [rsp+50h] [rbp-448h]
  _BYTE v47[119]; // [rsp+58h] [rbp-440h] BYREF
  __int128 v48; // [rsp+D0h] [rbp-3C8h] BYREF
  __int128 v49; // [rsp+E0h] [rbp-3B8h]
  __int128 v50; // [rsp+F0h] [rbp-3A8h]
  __int128 v51; // [rsp+100h] [rbp-398h]
  __int128 v52; // [rsp+110h] [rbp-388h]
  unsigned __int64 v53; // [rsp+120h] [rbp-378h] BYREF
  _OWORD src[13]; // [rsp+128h] [rbp-370h] BYREF
  _BYTE dest[208]; // [rsp+1F8h] [rbp-2A0h] BYREF
  _BYTE v56[208]; // [rsp+2C8h] [rbp-1D0h] BYREF
  _BYTE v57[208]; // [rsp+398h] [rbp-100h] BYREF

  v43 = a5;
  v44 = a4;
  v7 = *(_QWORD *)(a2 + 24);
  v8 = *(_QWORD *)(a2 + 32);
  v46 = a3;
  theme = bat::assets::HighlightingAssets::get_theme(a3, v7, v8);
  v38 = *(_DWORD *)(theme + 135);
  v39 = *(_BYTE *)(theme + 139);
  v37 = *(_BYTE *)(a2 + 292);
  v45 = theme;
  if ( v37 )
  {
    v7 = *(unsigned __int8 *)(theme + 195);
    bat::printer::Colors::colored(v47, v7, *(unsigned int *)(theme + 196), *(unsigned __int8 *)(a2 + 293));
  }
  else
  {
    v47[8] = 0;
    *(_QWORD *)v47 = 0LL;
    *(_QWORD *)&v47[9] = 0x1500000015LL;
    *(_QWORD *)&v47[17] = 0LL;
    v47[25] = 0;
    *(_DWORD *)&v47[26] = 21;
    *(_DWORD *)&v47[30] = 21;
    *(_QWORD *)&v47[34] = 0LL;
    v47[42] = 0;
    *(_DWORD *)&v47[43] = 21;
    *(_DWORD *)&v47[47] = 21;
    *(_QWORD *)&v47[51] = 0LL;
    v47[59] = 0;
    *(_QWORD *)&v47[60] = 0x1500000015LL;
    v47[76] = 0;
    *(_QWORD *)&v47[68] = 0LL;
    *(_OWORD *)&v47[77] = 0x1500000015uLL;
    v47[93] = 0;
    *(_OWORD *)&v47[94] = 0x1500000015uLL;
    v47[110] = 0;
    *(_QWORD *)&v47[111] = 0x1500000015LL;
  }
  *(_QWORD *)&v40 = 0LL;
  *((_QWORD *)&v40 + 1) = 8LL;
  v41 = 0LL;
  if ( (unsigned __int8)bat::style::StyleComponents::numbers(a2 + 192) )
  {
    bat::decorations::LineNumberDecoration::new((__int64)&v53, (__int64)v47);
    v7 = alloc::boxed::Box<T>::new(&v53);
    alloc::vec::Vec<T,A>::push(&v40, v7, &off_6CE9A8, &off_6CE9D0);
  }
  if ( (unsigned __int8)bat::style::StyleComponents::changes(a2 + 192, v7) && *v43 && v43[3] )
  {
    bat::decorations::LineChangesDecoration::new(&v53, (__int64)v47);
    v10 = alloc::boxed::Box<T>::new(&v53);
    alloc::vec::Vec<T,A>::push(&v40, v10, &off_6CE9E8, &off_6CEA10);
  }
  v11 = *((_QWORD *)&v40 + 1);
  v12 = v41;
  v42 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
          *((_QWORD *)&v40 + 1),
          *((_QWORD *)&v40 + 1) + 16 * v41);
  v13 = v12;
  if ( ((unsigned __int8)bat::style::StyleComponents::grid(a2 + 192) & (v12 != 0)) != 0 )
  {
    bat::decorations::GridBorderDecoration::new((__int64)&v53, (__int128 *)v47);
    v14 = alloc::boxed::Box<T>::new(&v53);
    alloc::vec::Vec<T,A>::push(&v40, v14, &off_6CEA28, &off_6CEA50);
    v11 = *((_QWORD *)&v40 + 1);
    v13 = v41;
  }
  v15 = *(_QWORD *)(a2 + 256);
  if ( v15 >= v13
            + <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v11, v11 + 16 * v13)
            + 5 )
  {
    v16 = *(_BYTE *)(v44 + 80) == 0;
    v42 += v12;
    if ( !v16 )
      goto LABEL_18;
  }
  else
  {
    v41 = 0LL;
    core::ptr::drop_in_place<[alloc::boxed::Box<dyn core::ops::function::FnOnce<()>+Output = ()+core::marker::Send>]>(
      v11,
      v13);
    v16 = *(_BYTE *)(v44 + 80) == 0;
    v42 = 0LL;
    if ( !v16 )
      goto LABEL_18;
  }
  if ( !*(_BYTE *)(a2 + 288) && !*(_BYTE *)(a2 + 290) )
  {
    v17 = 1;
    v18 = 0x8000000000000000LL;
    goto LABEL_31;
  }
LABEL_18:
  if ( !v37 )
  {
    v17 = 1;
    v18 = 0x8000000000000000LL;
    if ( *(_BYTE *)(a2 + 299) != 2 )
      goto LABEL_31;
  }
  bat::assets::HighlightingAssets::get_syntax(
    (__int64)&v48,
    (__int64)v46,
    *(_QWORD *)(a2 + 240),
    *(_QWORD *)(a2 + 248),
    v44,
    a2 + 40);
  if ( (unsigned __int8)v48 == 7 )
  {
    bat::assets::HighlightingAssets::find_syntax_by_name((__int64)&v53, (__int64)v46);
    v22 = v53;
    if ( (_BYTE)v53 == 13 )
    {
      if ( !*(_QWORD *)&src[0]
        || (bat::printer::HighlighterFromSet::new((__int64)&v53, *(__int64 *)&src[0], *((__int64 *)&src[0] + 1), v45),
            v18 = v53,
            memcpy(v57, src, sizeof(v57)),
            v53 == 0x8000000000000000LL) )
      {
        core::option::expect_failed(aAPlainTextSynt, 32LL, &off_6CEA68);
      }
      memcpy(dest, v57, sizeof(dest));
      core::ptr::drop_in_place<bat::error::Error>(&v48);
      v17 = 0;
      goto LABEL_31;
    }
    v26 = *(_DWORD *)((char *)&v53 + 1);
    *(_DWORD *)(a1 + 12) = HIDWORD(v53);
    *(_DWORD *)(a1 + 9) = v26;
    v27 = src[2];
    v28 = src[3];
    *(_OWORD *)(a1 + 32) = src[1];
    *(_OWORD *)(a1 + 48) = v27;
    *(_OWORD *)(a1 + 64) = v28;
    *(_QWORD *)(a1 + 80) = *(_QWORD *)&src[4];
    v29 = src[0];
    *(_BYTE *)(a1 + 8) = v22;
    *(_OWORD *)(a1 + 16) = v29;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<bat::error::Error>(&v48);
LABEL_29:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::boxed::Box<dyn bat::decorations::Decoration>>>(&v40);
    return a1;
  }
  if ( (unsigned __int8)v48 != 13 )
  {
    *(_OWORD *)(a1 + 72) = v52;
    v23 = v48;
    v24 = v49;
    v25 = v50;
    *(_OWORD *)(a1 + 56) = v51;
    *(_OWORD *)(a1 + 40) = v25;
    *(_OWORD *)(a1 + 24) = v24;
    *(_OWORD *)(a1 + 8) = v23;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    goto LABEL_29;
  }
  v19 = *((_QWORD *)&v48 + 1);
  v20 = v49;
  v21 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
          *(_QWORD *)(*((_QWORD *)&v48 + 1) + 8LL),
          *(_QWORD *)(*((_QWORD *)&v48 + 1) + 16LL),
          aPlainText,
          10LL);
  bat::printer::HighlighterFromSet::new((__int64)&v53, v19, v20, v45);
  v18 = v53;
  memcpy(dest, src, sizeof(dest));
  v17 = v21 ^ 1;
LABEL_31:
  memcpy(v56, dest, sizeof(v56));
  v30 = v17;
  if ( *(_BYTE *)(a2 + 299) < 2u )
    v30 = *(_BYTE *)(a2 + 299);
  v31 = 0;
  if ( !*(_BYTE *)(a2 + 288) )
    v31 = v30;
  *(_QWORD *)(a1 + 655) = *(_QWORD *)&v47[111];
  *(_OWORD *)(a1 + 640) = *(_OWORD *)&v47[96];
  *(_OWORD *)(a1 + 624) = *(_OWORD *)&v47[80];
  *(_OWORD *)(a1 + 608) = *(_OWORD *)&v47[64];
  v32 = *(_OWORD *)v47;
  v33 = *(_OWORD *)&v47[16];
  v34 = *(_OWORD *)&v47[32];
  *(_OWORD *)(a1 + 592) = *(_OWORD *)&v47[48];
  *(_OWORD *)(a1 + 576) = v34;
  *(_OWORD *)(a1 + 560) = v33;
  *(_OWORD *)(a1 + 544) = v32;
  *(_OWORD *)a1 = v40;
  *(_QWORD *)(a1 + 16) = v41;
  v35 = *(_BYTE *)(v44 + 80);
  memcpy((void *)(a1 + 304), v56, 0xD0uLL);
  *(_DWORD *)(a1 + 663) = v38;
  *(_BYTE *)(a1 + 667) = v39;
  *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  *(_QWORD *)(a1 + 296) = v18;
  *(_QWORD *)(a1 + 512) = a2;
  *(_QWORD *)(a1 + 520) = v43;
  *(_QWORD *)(a1 + 528) = v42;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_BYTE *)(a1 + 668) = v31;
  *(_BYTE *)(a1 + 669) = v35;
  return a1;
}