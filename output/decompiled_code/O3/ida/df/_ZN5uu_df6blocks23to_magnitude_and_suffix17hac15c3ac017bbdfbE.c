        char a4)
{
  char v5; // al
  unsigned __int64 v6; // r15
  __int64 v7; // r12
  char *v8; // rcx
  char *v9; // rdx
  char *v10; // rsi
  char *v11; // r8
  char *v12; // r10
  char *v13; // r9
  char *v14; // rdi
  __int64 v15; // r11
  char *v16; // rbp
  __int64 v17; // r13
  bool v18; // zf
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // r15d
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rax
  unsigned __int128 v32; // rax
  __int64 v33; // r8
  unsigned __int128 v34; // kr20_16
  unsigned __int128 v35; // kr30_16
  __int128 v36; // rt0
  unsigned __int128 v37; // kr40_16
  unsigned __int128 v38; // rax
  unsigned __int64 v39; // r13
  __int128 v40; // rax
  void **v41; // rcx
  __int128 *v42; // rax
  void **v43; // rsi
  __int64 v45; // [rsp+8h] [rbp-1D0h]
  __int128 v46; // [rsp+10h] [rbp-1C8h]
  __int64 v47; // [rsp+20h] [rbp-1B8h]
  __int64 v48; // [rsp+28h] [rbp-1B0h]
  __int64 v49; // [rsp+30h] [rbp-1A8h]
  __int64 v50; // [rsp+40h] [rbp-198h]
  __int128 *v52; // [rsp+50h] [rbp-188h] BYREF
  __int64 (__fastcall *v53)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+58h] [rbp-180h]
  void **v54; // [rsp+60h] [rbp-178h]
  __int64 (__fastcall *v55)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+68h] [rbp-170h]
  __int128 *v56; // [rsp+70h] [rbp-168h]
  __int64 (__fastcall *v57)(); // [rsp+78h] [rbp-160h]
  __int64 v58; // [rsp+80h] [rbp-158h]
  char *v59; // [rsp+88h] [rbp-150h]
  void *v60; // [rsp+90h] [rbp-148h]
  unsigned __int64 v61; // [rsp+98h] [rbp-140h]
  __int128 *v62; // [rsp+A0h] [rbp-138h] BYREF
  __int64 (__fastcall *v63)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+A8h] [rbp-130h]
  __int128 *v64; // [rsp+B0h] [rbp-128h]
  __int64 (__fastcall *v65)(); // [rsp+B8h] [rbp-120h]
  __int64 v66; // [rsp+C0h] [rbp-118h]
  unsigned __int128 v67; // [rsp+D0h] [rbp-108h] BYREF
  unsigned __int128 v68; // [rsp+E0h] [rbp-F8h] BYREF
  __int128 v69; // [rsp+F0h] [rbp-E8h] BYREF
  __int128 v70; // [rsp+100h] [rbp-D8h] BYREF
  _QWORD v71[24]; // [rsp+118h] [rbp-C0h]

  v61 = a2;
  v5 = 2;
  if ( (unsigned __int8)(a4 - 2) < 2u )
    v5 = a4 - 2;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v58 = 54210108LL;
      v6 = 0x9FD0803CE8000000LL;
      v60 = aLibraryStdSrcI + 6;
      v45 = 0x1BCECCEDA1000000LL;
      *((_QWORD *)&v46 + 1) = 54LL;
      *(_QWORD *)&v46 = 0x35C9ADC5DEA00000LL;
      v47 = 1000000000000000000LL;
      v48 = 1000000000000000LL;
      v49 = 1000000000000LL;
      v71[0] = aBkmgtpezykbmbg;
      v50 = 1000000000LL;
      v59 = (_BYTE *)(&loc_F423E + 2);
      v7 = 1000LL;
      v8 = &aBkmgtpezykbmbg[23];
      v9 = &aBkmgtpezykbmbg[21];
      v10 = &aBkmgtpezykbmbg[19];
      v11 = &aBkmgtpezykbmbg[17];
      v12 = &aBkmgtpezykbmbg[15];
      v13 = &aBkmgtpezykbmbg[13];
      v14 = &aBkmgtpezykbmbg[11];
      v15 = 2LL;
      v16 = &aBkmgtpezykbmbg[9];
      v17 = 1LL;
    }
    else
    {
      v17 = 0LL;
      v18 = (a4 & 1) == 0;
      v7 = 1024LL;
      if ( (a4 & 1) == 0 )
        v7 = 1000LL;
      v19 = (char *)&unk_100000;
      if ( (a4 & 1) == 0 )
        v19 = (_BYTE *)(&loc_F423E + 2);
      v59 = v19;
      v20 = 0x40000000LL;
      if ( (a4 & 1) == 0 )
        v20 = 1000000000LL;
      v50 = v20;
      v21 = 0x10000000000LL;
      if ( (a4 & 1) == 0 )
        v21 = 1000000000000LL;
      v49 = v21;
      v22 = 0x4000000000000LL;
      if ( (a4 & 1) == 0 )
        v22 = 1000000000000000LL;
      v48 = v22;
      v23 = 0x1000000000000000LL;
      if ( (a4 & 1) == 0 )
        v23 = 1000000000000000000LL;
      v47 = v23;
      v24 = 64LL;
      if ( (a4 & 1) == 0 )
        v24 = 54LL;
      *((_QWORD *)&v46 + 1) = v24;
      v25 = 0x35C9ADC5DEA00000LL;
      if ( !v18 )
        v25 = 0LL;
      *(_QWORD *)&v46 = v25;
      v26 = &unk_10000;
      if ( v18 )
        v26 = aLibraryStdSrcI + 6;
      v60 = v26;
      v27 = 0x1BCECCEDA1000000LL;
      if ( !v18 )
        v27 = 0LL;
      v45 = v27;
      v28 = 0x4000000LL;
      if ( v18 )
        v28 = 54210108LL;
      v58 = v28;
      v6 = 0x9FD0803CE8000000LL;
      if ( !v18 )
        v6 = 0LL;
      v71[0] = 1LL;
      v16 = &aBkmgtpezykbmbg[1];
      if ( v18 )
        v16 = &aBkmgtpezykbmbg[25];
      v8 = &aBkmgtpezykbmbg[8];
      v9 = &aBkmgtpezykbmbg[7];
      v10 = &aBkmgtpezykbmbg[6];
      v11 = &aBkmgtpezykbmbg[5];
      v12 = &aBkmgtpezykbmbg[4];
      v13 = &aBkmgtpezykbmbg[3];
      v14 = &aBkmgtpezykbmbg[2];
      v15 = 1LL;
    }
  }
  else
  {
    v47 = 0x1000000000000000LL;
    v48 = 0x4000000000000LL;
    v49 = 0x10000000000LL;
    v71[0] = aBkmgtpezykbmbg;
    v58 = 0x4000000LL;
    v60 = &unk_10000;
    *((_QWORD *)&v46 + 1) = 64LL;
    v50 = 0x40000000LL;
    v59 = (char *)&unk_100000;
    v7 = 1024LL;
    v8 = &aBkmgtpezykbmbg[8];
    v9 = &aBkmgtpezykbmbg[7];
    v10 = &aBkmgtpezykbmbg[6];
    v11 = &aBkmgtpezykbmbg[5];
    v12 = &aBkmgtpezykbmbg[4];
    v13 = &aBkmgtpezykbmbg[3];
    v14 = &aBkmgtpezykbmbg[2];
    v16 = &aBkmgtpezykbmbg[1];
    v17 = 1LL;
    v15 = 1LL;
    *(_QWORD *)&v46 = 0LL;
    v45 = 0LL;
    v6 = 0LL;
  }
  v71[1] = v17;
  v71[2] = v16;
  v71[3] = v15;
  v71[4] = v14;
  v71[5] = v15;
  v71[6] = v13;
  v71[7] = v15;
  v71[8] = v12;
  v71[9] = v15;
  v71[10] = v11;
  v71[11] = v15;
  v71[12] = v10;
  v71[13] = v15;
  v71[14] = v9;
  v71[15] = v15;
  v71[16] = v8;
  v71[17] = v15;
  if ( __PAIR128__((((unsigned __int64)v7 + (unsigned __int128)0xFFFFFFFFFFFFFFFFLL) >> 64) - 1, v7 - 1) >= __PAIR128__(a3, v61) )
  {
    v7 = 1LL;
    v30 = 0LL;
    v29 = 0;
  }
  else
  {
    v11 = (char *)v6;
    v29 = 1;
    v30 = 0LL;
    if ( &v59[-(unsigned __int128)(unsigned __int64)v7] < (char *)__PAIR128__(a3, v61) )
    {
      v29 = 2;
      v7 = (__int64)v59;
      v30 = 0LL;
      if ( (unsigned __int64)v50 - (unsigned __int128)(unsigned __int64)v59 < __PAIR128__(a3, v61) )
      {
        v7 = v50;
        v30 = 0LL;
        v29 = 3;
        if ( (unsigned __int64)v49 - (unsigned __int128)(unsigned __int64)v50 < __PAIR128__(a3, v61) )
        {
          v7 = v49;
          v29 = 4;
          v30 = 0LL;
          if ( (unsigned __int64)v48 - (unsigned __int128)(unsigned __int64)v49 < __PAIR128__(a3, v61) )
          {
            v7 = v48;
            v29 = 5;
            v30 = 0LL;
            if ( (unsigned __int64)v47 - (unsigned __int128)(unsigned __int64)v48 < __PAIR128__(a3, v61) )
            {
              v7 = v47;
              v29 = 6;
              v30 = 0LL;
              if ( v46 - (unsigned __int128)(unsigned __int64)v47 < __PAIR128__(a3, v61) )
              {
                v30 = *((_QWORD *)&v46 + 1);
                v7 = v46;
                v29 = 7;
                if ( __PAIR128__((unsigned __int64)v60, v45) - v46 < __PAIR128__(a3, v61) )
                {
                  v7 = v45;
                  v30 = (unsigned __int64)v60;
                  v31 = (__PAIR128__(v58, (unsigned __int64)v11) - __PAIR128__((unsigned __int64)v60, v45)) >> 64;
                  v11 -= v45;
                  v29 = 8;
                  if ( __PAIR128__(v31, (unsigned __int64)v11) < __PAIR128__(a3, v61) )
                    core::panicking::panic_bounds_check(
                      10LL,
                      10LL,
                      &off_1003A0,
                      (__PAIR128__((unsigned __int64)v60, v45) - v46 - __PAIR128__(a3, v61)) >> 64,
                      v11);
                }
              }
            }
          }
        }
      }
    }
  }
  *(_QWORD *)&v32 = _udivti3(v61, a3, v7, v30, v11);
  v34 = v32;
  v68 = v32;
  v35 = __PAIR128__(a3, v61) - __PAIR128__(v30, v7) * v32;
  v69 = *(_OWORD *)((char *)v71 + (unsigned int)(16 * v29));
  if ( v35 == 0 )
  {
    v42 = (__int128 *)&v68;
LABEL_55:
    v62 = v42;
    v63 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
    v64 = &v69;
    v65 = <&T as core::fmt::Display>::fmt;
    v52 = (__int128 *)&unk_F058;
    v53 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(&dword_0 + 2);
    v56 = 0LL;
    v54 = (void **)&v62;
    v55 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(&dword_0 + 2);
    v43 = (void **)&v52;
    goto LABEL_56;
  }
  if ( __PAIR128__(v30, v7) < 0xA )
    core::panicking::panic_const::panic_const_div_by_zero(&off_1003B8);
  *(_QWORD *)&v36 = v7;
  *((_QWORD *)&v36 + 1) = v30;
  v37 = ((unsigned __int128)v36 >> 1)
      - (__CFADD__(v30 >> 1, (unsigned __int64)(v36 >> 1)) + (v30 >> 1) + (unsigned __int64)(v36 >> 1)) % 5;
  v38 = 0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)(unsigned __int64)v37;
  v39 = 0xCCCCCCCCCCCCCCCCLL * v37 + *((_QWORD *)&v38 + 1) - 0x3333333333333333LL * *((_QWORD *)&v37 + 1);
  *(_QWORD *)&v40 = _udivti3(v35, *((_QWORD *)&v35 + 1), v38, v39, v33);
  v70 = v40;
  if ( v35 - __PAIR128__(v39, 0xCCCCCCCCCCCCCCCDLL * (unsigned __int64)v37) * v40 == 0 )
  {
    v52 = (__int128 *)&v68;
    v53 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
    v41 = (void **)&v70;
    goto LABEL_53;
  }
  if ( 9 < v34 || !(*((_QWORD *)&v40 + 1) | (unsigned __int64)v40 ^ 9) )
  {
    v67 = v34 + 1;
    v42 = (__int128 *)&v67;
    goto LABEL_55;
  }
  v67 = v40 + 1;
  v52 = (__int128 *)&v68;
  v53 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
  v41 = (void **)&v67;
LABEL_53:
  v54 = v41;
  v55 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
  v56 = &v69;
  v57 = <&T as core::fmt::Display>::fmt;
  v62 = (__int128 *)&unk_1003D0;
  v63 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(&dword_0 + 3);
  v66 = 0LL;
  v64 = (__int128 *)&v52;
  v65 = (__int64 (__fastcall *)())(&dword_0 + 3);
  v43 = (void **)&v62;
LABEL_56:
  alloc::fmt::format::format_inner(a1, v43);
  return a1;
}
