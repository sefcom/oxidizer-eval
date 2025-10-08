__int64 __fastcall uu_df::blocks::to_magnitude_and_suffix(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4)
{
  char v4; // al
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  char *v7; // r15
  char *v8; // r14
  char *v9; // rcx
  char *v10; // rdi
  char *v11; // r11
  char *v12; // rbp
  char *v13; // r9
  __int64 v14; // rbx
  char *v15; // r8
  __int64 v16; // rax
  const char *v17; // r10
  bool v18; // zf
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rcx
  void *v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  __int64 v30; // rdi
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r14
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  unsigned __int128 v35; // rax
  unsigned __int128 v36; // kr10_16
  unsigned __int128 v37; // kr20_16
  __int128 v38; // rt0
  unsigned __int128 v39; // kr30_16
  unsigned __int128 v40; // rax
  unsigned __int64 v41; // r12
  __int128 v42; // rax
  __int128 *v43; // rax
  void **v44; // rsi
  void **v45; // rcx
  __int64 v47; // [rsp+0h] [rbp-1C8h]
  _QWORD *v48; // [rsp+0h] [rbp-1C8h]
  const char *v50; // [rsp+10h] [rbp-1B8h] BYREF
  __int64 (__fastcall *v51)(); // [rsp+18h] [rbp-1B0h]
  void **v52; // [rsp+20h] [rbp-1A8h]
  __int64 (__fastcall *v53)(); // [rsp+28h] [rbp-1A0h]
  __int128 *v54; // [rsp+30h] [rbp-198h]
  __int64 (__fastcall *v55)(); // [rsp+38h] [rbp-190h]
  unsigned __int64 v56; // [rsp+40h] [rbp-188h]
  __int128 v57; // [rsp+48h] [rbp-180h]
  __int128 v58; // [rsp+58h] [rbp-170h]
  __int64 v59; // [rsp+68h] [rbp-160h]
  __int64 v60; // [rsp+70h] [rbp-158h]
  __int64 v61; // [rsp+78h] [rbp-150h]
  __int64 v62; // [rsp+80h] [rbp-148h]
  __int64 v63; // [rsp+88h] [rbp-140h]
  __int128 *v64; // [rsp+90h] [rbp-138h] BYREF
  __int64 (__fastcall *v65)(); // [rsp+98h] [rbp-130h]
  const char **v66; // [rsp+A0h] [rbp-128h]
  __int64 (__fastcall *v67)(); // [rsp+A8h] [rbp-120h]
  __int64 v68; // [rsp+B0h] [rbp-118h]
  unsigned __int128 v69; // [rsp+C0h] [rbp-108h] BYREF
  unsigned __int128 v70; // [rsp+D0h] [rbp-F8h] BYREF
  __int128 v71; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v72; // [rsp+F0h] [rbp-D8h] BYREF
  _QWORD v73[2]; // [rsp+108h] [rbp-C0h] BYREF
  _QWORD v74[2]; // [rsp+118h] [rbp-B0h] BYREF
  _QWORD v75[2]; // [rsp+128h] [rbp-A0h] BYREF
  _QWORD v76[2]; // [rsp+138h] [rbp-90h] BYREF
  _QWORD v77[2]; // [rsp+148h] [rbp-80h] BYREF
  _QWORD v78[2]; // [rsp+158h] [rbp-70h] BYREF
  _QWORD v79[2]; // [rsp+168h] [rbp-60h] BYREF
  _QWORD v80[2]; // [rsp+178h] [rbp-50h] BYREF
  _QWORD v81[8]; // [rsp+188h] [rbp-40h] BYREF

  v4 = 2;
  if ( (unsigned __int8)(a4 - 2) < 2u )
    v4 = a4 - 2;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v47 = 54210108LL;
      v56 = 0x9FD0803CE8000000LL;
      *((_QWORD *)&v57 + 1) = 54210LL;
      *(_QWORD *)&v57 = 0x1BCECCEDA1000000LL;
      *((_QWORD *)&v58 + 1) = 54LL;
      *(_QWORD *)&v58 = 0x35C9ADC5DEA00000LL;
      v59 = 1000000000000000000LL;
      v5 = 0LL;
      v60 = 1000000000000000LL;
      v61 = 1000000000000LL;
      v62 = 1000000000LL;
      v63 = 1000000LL;
      v6 = 1000LL;
      v7 = "YBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v8 = "ZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v9 = "EBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v10 = "PBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v11 = "TBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v12 = "GBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v13 = "MBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v14 = 2LL;
      v15 = "kBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v16 = 1LL;
      v17 = "BKMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/sr"
            "c/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
    }
    else
    {
      v16 = 0LL;
      v18 = (a4 & 1) == 0;
      v6 = 1000LL;
      if ( (a4 & 1) != 0 )
        v6 = 1024LL;
      v19 = 1000000LL;
      if ( (a4 & 1) != 0 )
        v19 = 0x100000LL;
      v63 = v19;
      v20 = 1000000000LL;
      if ( (a4 & 1) != 0 )
        v20 = 0x40000000LL;
      v62 = v20;
      v21 = 1000000000000LL;
      if ( (a4 & 1) != 0 )
        v21 = 0x10000000000LL;
      v61 = v21;
      v22 = 1000000000000000LL;
      if ( (a4 & 1) != 0 )
        v22 = 0x4000000000000LL;
      v60 = v22;
      v23 = 1000000000000000000LL;
      if ( (a4 & 1) != 0 )
        v23 = 0x1000000000000000LL;
      v59 = v23;
      v24 = 54LL;
      if ( (a4 & 1) != 0 )
        v24 = 64LL;
      *((_QWORD *)&v58 + 1) = v24;
      v25 = 0x35C9ADC5DEA00000LL;
      if ( !v18 )
        v25 = 0LL;
      *(_QWORD *)&v58 = v25;
      v26 = &stru_D3B8 + 10;
      if ( !v18 )
        v26 = &unk_10000;
      *((_QWORD *)&v57 + 1) = v26;
      v27 = 0x1BCECCEDA1000000LL;
      if ( !v18 )
        v27 = 0LL;
      *(_QWORD *)&v57 = v27;
      v28 = 54210108LL;
      if ( !v18 )
        v28 = 0x4000000LL;
      v47 = v28;
      v29 = 0x9FD0803CE8000000LL;
      if ( !v18 )
        v29 = 0LL;
      v56 = v29;
      v15 = "ksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      if ( !v18 )
        v15 = "KMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v7 = "YkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v8 = "ZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v9 = "EZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v10 = "PEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v11 = "TPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v12 = "GTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v13 = "MGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
      v17 = (_BYTE *)(&dword_0 + 1);
      v14 = 1LL;
      v5 = 0LL;
    }
  }
  else
  {
    v59 = 0x1000000000000000LL;
    v5 = 0LL;
    v60 = 0x4000000000000LL;
    v61 = 0x10000000000LL;
    v47 = 0x4000000LL;
    *((_QWORD *)&v57 + 1) = &unk_10000;
    *((_QWORD *)&v58 + 1) = 64LL;
    v62 = 0x40000000LL;
    v63 = 0x100000LL;
    v6 = 1024LL;
    v7 = "YkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
    v8 = "ZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
    v9 = "EZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
    v10 = "PEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
    v11 = "TPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
    v12 = "GTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
    v13 = "MGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
    v15 = "KMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
    v16 = 1LL;
    v17 = "BKMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rsPOSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/"
          "columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
    v14 = 1LL;
    *(_QWORD *)&v58 = 0LL;
    *(_QWORD *)&v57 = 0LL;
    v56 = 0LL;
  }
  v73[0] = v17;
  v73[1] = v16;
  v74[0] = v15;
  v74[1] = v14;
  v75[0] = v13;
  v75[1] = v14;
  v76[0] = v12;
  v76[1] = v14;
  v77[0] = v11;
  v77[1] = v14;
  v78[0] = v10;
  v78[1] = v14;
  v79[0] = v9;
  v79[1] = v14;
  v80[0] = v8;
  v80[1] = v14;
  v81[0] = v7;
  v81[1] = v14;
  if ( __PAIR128__((unsigned __int64)(v6 != 0) - 1, v6 - 1) >= __PAIR128__(a3, a2) )
  {
    v32 = a3;
    v31 = a2;
    v6 = 1LL;
    v48 = v73;
    v5 = 0LL;
    goto LABEL_50;
  }
  if ( (unsigned __int64)v63 - (unsigned __int128)(unsigned __int64)v6 >= __PAIR128__(a3, a2) )
  {
    v32 = a3;
    v31 = a2;
    v33 = v74;
LABEL_46:
    v48 = v33;
    goto LABEL_50;
  }
  v30 = v62;
  if ( (unsigned __int64)v62 - (unsigned __int128)(unsigned __int64)v63 >= __PAIR128__(a3, a2) )
  {
    v32 = a3;
    v31 = a2;
    v48 = v75;
    v6 = v63;
    goto LABEL_50;
  }
  v6 = v61;
  if ( (unsigned __int64)v61 - (unsigned __int128)(unsigned __int64)v62 >= __PAIR128__(a3, a2) )
  {
    v32 = a3;
    v31 = a2;
    v34 = v76;
LABEL_49:
    v48 = v34;
    v6 = v30;
    goto LABEL_50;
  }
  v30 = v60;
  if ( (unsigned __int64)v60 - (unsigned __int128)(unsigned __int64)v61 >= __PAIR128__(a3, a2) )
  {
    v32 = a3;
    v31 = a2;
    v33 = v77;
    goto LABEL_46;
  }
  v6 = v59;
  if ( (unsigned __int64)v59 - (unsigned __int128)(unsigned __int64)v60 >= __PAIR128__(a3, a2) )
  {
    v32 = a3;
    v31 = a2;
    v34 = v78;
    goto LABEL_49;
  }
  if ( v58 - (unsigned __int128)(unsigned __int64)v59 >= __PAIR128__(a3, a2) )
  {
    v32 = a3;
    v31 = a2;
    v33 = v79;
    goto LABEL_46;
  }
  v5 = *((_QWORD *)&v57 + 1);
  v6 = v57;
  if ( v57 - v58 < __PAIR128__(a3, a2) )
  {
    if ( __PAIR128__(v47, v56) - v57 < __PAIR128__(a3, a2) )
      core::panicking::panic_bounds_check(10LL, 10LL, &off_102DD8);
    v31 = a2;
    v32 = a3;
    v33 = v81;
    goto LABEL_46;
  }
  v32 = a3;
  v31 = a2;
  v48 = v80;
  v5 = *((_QWORD *)&v58 + 1);
  v6 = v58;
LABEL_50:
  *(_QWORD *)&v35 = _udivti3(v31, v32, v6, v5);
  v36 = v35;
  v70 = v35;
  v37 = __PAIR128__(v32, v31) - __PAIR128__(v5, v6) * v35;
  v71 = *(_OWORD *)v48;
  if ( v37 == 0 )
  {
    v43 = (__int128 *)&v70;
    goto LABEL_56;
  }
  if ( __PAIR128__(v5, v6) < 0xA )
    core::panicking::panic_const::panic_const_div_by_zero(&off_102DF0);
  *(_QWORD *)&v38 = v6;
  *((_QWORD *)&v38 + 1) = v5;
  v39 = ((unsigned __int128)v38 >> 1)
      - (__CFADD__(v5 >> 1, (unsigned __int64)(v38 >> 1)) + (v5 >> 1) + (unsigned __int64)(v38 >> 1)) % 5;
  v40 = 0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)(unsigned __int64)v39;
  v41 = 0xCCCCCCCCCCCCCCCCLL * v39 + *((_QWORD *)&v40 + 1) - 0x3333333333333333LL * *((_QWORD *)&v39 + 1);
  *(_QWORD *)&v42 = _udivti3(v37, *((_QWORD *)&v37 + 1), v40, v41);
  v72 = v42;
  if ( v37 - __PAIR128__(v41, 0xCCCCCCCCCCCCCCCDLL * (unsigned __int64)v39) * v42 == 0 )
  {
    v50 = (const char *)&v70;
    v51 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
    v45 = (void **)&v72;
LABEL_59:
    v52 = v45;
    v53 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
    v54 = &v71;
    v55 = <&T as core::fmt::Display>::fmt;
    v64 = (__int128 *)&unk_102DA8;
    v65 = (__int64 (__fastcall *)())(&dword_0 + 3);
    v68 = 0LL;
    v66 = &v50;
    v67 = (__int64 (__fastcall *)())(&dword_0 + 3);
    v44 = (void **)&v64;
    return core::option::Option<T>::map_or_else(a1, v44);
  }
  if ( (*((_QWORD *)&v42 + 1) | (unsigned __int64)v42 ^ 9) != 0 && 9 >= v36 )
  {
    v69 = v42 + 1;
    v50 = (const char *)&v70;
    v51 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
    v45 = (void **)&v69;
    goto LABEL_59;
  }
  v69 = v36 + 1;
  v43 = (__int128 *)&v69;
LABEL_56:
  v64 = v43;
  v65 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
  v66 = (const char **)&v71;
  v67 = <&T as core::fmt::Display>::fmt;
  v50 = "\x01";
  v51 = (__int64 (__fastcall *)())(&dword_0 + 2);
  v54 = 0LL;
  v52 = (void **)&v64;
  v53 = (__int64 (__fastcall *)())(&dword_0 + 2);
  v44 = (void **)&v50;
  return core::option::Option<T>::map_or_else(a1, v44);
}