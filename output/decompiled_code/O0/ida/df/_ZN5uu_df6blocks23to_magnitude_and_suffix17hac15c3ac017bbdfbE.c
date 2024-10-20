        char a4)
{
  char v4; // al
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // r11
  unsigned __int64 v8; // r14
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // r13
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  int v21; // r15d
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int128 v27; // kr10_16
  unsigned __int64 v28; // r15
  __int128 v29; // rt0
  unsigned __int128 v30; // kr20_16
  unsigned __int128 v31; // rax
  unsigned __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rsi
  unsigned __int128 v38; // rax
  __int64 v39; // r14
  _QWORD *v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // kr30_8
  char *v43; // rbx
  __int128 v45; // [rsp+8h] [rbp-280h]
  __int64 v46; // [rsp+18h] [rbp-270h]
  __int64 v47; // [rsp+20h] [rbp-268h]
  __int128 v48; // [rsp+28h] [rbp-260h]
  const char *v49; // [rsp+38h] [rbp-250h] BYREF
  __int64 v50; // [rsp+40h] [rbp-248h]
  _QWORD *v51; // [rsp+48h] [rbp-240h]
  __int64 v52; // [rsp+50h] [rbp-238h]
  __int64 v53; // [rsp+58h] [rbp-230h]
  __int128 v54; // [rsp+68h] [rbp-220h]
  const char *v55; // [rsp+78h] [rbp-210h]
  __int64 v56; // [rsp+80h] [rbp-208h]
  const char *v57; // [rsp+88h] [rbp-200h]
  __int64 v58; // [rsp+90h] [rbp-1F8h]
  const char *v59; // [rsp+98h] [rbp-1F0h]
  __int64 v60; // [rsp+A0h] [rbp-1E8h]
  const char *v61; // [rsp+A8h] [rbp-1E0h]
  __int64 v62; // [rsp+B0h] [rbp-1D8h]
  const char *v63; // [rsp+B8h] [rbp-1D0h]
  __int64 v64; // [rsp+C0h] [rbp-1C8h]
  const char *v65; // [rsp+C8h] [rbp-1C0h]
  __int64 v66; // [rsp+D0h] [rbp-1B8h]
  const char *v67; // [rsp+D8h] [rbp-1B0h]
  __int64 v68; // [rsp+E0h] [rbp-1A8h]
  const char *v69; // [rsp+E8h] [rbp-1A0h]
  __int64 v70; // [rsp+F0h] [rbp-198h]
  __int64 v71; // [rsp+F8h] [rbp-190h]
  _QWORD v72[2]; // [rsp+100h] [rbp-188h] BYREF
  __int128 v73; // [rsp+110h] [rbp-178h] BYREF
  _QWORD v74[2]; // [rsp+120h] [rbp-168h] BYREF
  _QWORD v75[2]; // [rsp+130h] [rbp-158h] BYREF
  _QWORD v76[3]; // [rsp+140h] [rbp-148h] BYREF
  _QWORD v77[4]; // [rsp+158h] [rbp-130h] BYREF
  _QWORD v78[4]; // [rsp+178h] [rbp-110h] BYREF
  _QWORD v79[6]; // [rsp+198h] [rbp-F0h] BYREF
  _QWORD v80[6]; // [rsp+1C8h] [rbp-C0h] BYREF
  _BYTE v81[24]; // [rsp+1F8h] [rbp-90h] BYREF
  char v82; // [rsp+210h] [rbp-78h] BYREF
  char v83; // [rsp+228h] [rbp-60h] BYREF
  char v84; // [rsp+240h] [rbp-48h] BYREF

  v4 = 2;
  if ( (unsigned __int8)(a4 - 2) < 2u )
    v4 = a4 - 2;
  v71 = a1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v5 = a2;
      v6 = a3;
      *((_QWORD *)&v48 + 1) = 54210108LL;
      *(_QWORD *)&v48 = 0x9FD0803CE8000000LL;
      *((_QWORD *)&v45 + 1) = 54210LL;
      *(_QWORD *)&v45 = 0x1BCECCEDA1000000LL;
      v46 = 54LL;
      v7 = 0x35C9ADC5DEA00000LL;
      v47 = 1000000000000000000LL;
      v8 = 0LL;
      v9 = 1000000000000000LL;
      v10 = 1000000000000LL;
      *(_QWORD *)&v54 = aB;
      *((_QWORD *)&v54 + 1) = 1LL;
      v55 = aKb;
      v56 = 2LL;
      v57 = aMb;
      v58 = 2LL;
      v59 = aGb;
      v60 = 2LL;
      v61 = aTb;
      v62 = 2LL;
      v63 = aPb;
      v64 = 2LL;
      v65 = aEb;
      v66 = 2LL;
      v67 = aZb;
      v68 = 2LL;
      v69 = aYb;
      v70 = 2LL;
      v11 = 1000000000LL;
      v12 = 1000000LL;
      v13 = 1000LL;
    }
    else
    {
      v8 = 0LL;
      v13 = 1024LL;
      v54 = 1uLL;
      v14 = (a4 & 1) == 0;
      if ( (a4 & 1) == 0 )
        v13 = 1000LL;
      v12 = 0x100000LL;
      if ( (a4 & 1) == 0 )
        v12 = 1000000LL;
      v11 = 0x40000000LL;
      if ( (a4 & 1) == 0 )
        v11 = 1000000000LL;
      v10 = 0x10000000000LL;
      if ( (a4 & 1) == 0 )
        v10 = 1000000000000LL;
      v9 = 0x4000000000000LL;
      if ( (a4 & 1) == 0 )
        v9 = 1000000000000000LL;
      v15 = 0x1000000000000000LL;
      if ( v14 )
        v15 = 1000000000000000000LL;
      v47 = v15;
      v16 = 64LL;
      if ( v14 )
        v16 = 54LL;
      v46 = v16;
      v7 = 0x35C9ADC5DEA00000LL;
      if ( !v14 )
        v7 = 0LL;
      v17 = &unk_10000;
      if ( v14 )
        v17 = &stru_D3B0 + 18;
      *((_QWORD *)&v45 + 1) = v17;
      v18 = 0x1BCECCEDA1000000LL;
      if ( !v14 )
        v18 = 0LL;
      *(_QWORD *)&v45 = v18;
      v19 = 0x4000000LL;
      if ( v14 )
        v19 = 54210108LL;
      *((_QWORD *)&v48 + 1) = v19;
      v20 = 0x9FD0803CE8000000LL;
      if ( !v14 )
        v20 = 0LL;
      *(_QWORD *)&v48 = v20;
      v5 = a2;
      v6 = a3;
      if ( v14 )
      {
        v55 = aK_0;
        v56 = 1LL;
        v57 = aM;
        v58 = 1LL;
        v59 = aG;
        v60 = 1LL;
        v61 = aT;
        v62 = 1LL;
        v63 = aP;
        v64 = 1LL;
        v65 = aE;
        v66 = 1LL;
        v67 = aZ;
        v68 = 1LL;
        v69 = aY;
        v70 = 1LL;
      }
      else
      {
        v55 = aK;
        v56 = 1LL;
        v57 = aM;
        v58 = 1LL;
        v59 = aG;
        v60 = 1LL;
        v61 = aT;
        v62 = 1LL;
        v63 = aP;
        v64 = 1LL;
        v65 = aE;
        v66 = 1LL;
        v67 = aZ;
        v68 = 1LL;
        v69 = aY;
        v70 = 1LL;
      }
    }
  }
  else
  {
    v5 = a2;
    v6 = a3;
    v47 = 0x1000000000000000LL;
    v8 = 0LL;
    v9 = 0x4000000000000LL;
    v10 = 0x10000000000LL;
    *(_QWORD *)&v54 = aB;
    *((_QWORD *)&v54 + 1) = 1LL;
    v55 = aK;
    v56 = 1LL;
    v57 = aM;
    v58 = 1LL;
    v59 = aG;
    v60 = 1LL;
    v61 = aT;
    v62 = 1LL;
    v63 = aP;
    v64 = 1LL;
    v65 = aE;
    v66 = 1LL;
    v67 = aZ;
    v68 = 1LL;
    v69 = aY;
    v70 = 1LL;
    *((_QWORD *)&v48 + 1) = 0x4000000LL;
    *((_QWORD *)&v45 + 1) = &unk_10000;
    v46 = 64LL;
    v11 = 0x40000000LL;
    v12 = 0x100000LL;
    v13 = 1024LL;
    v7 = 0LL;
    *(_QWORD *)&v45 = 0LL;
    *(_QWORD *)&v48 = 0LL;
  }
  if ( __PAIR128__((unsigned __int64)(v13 != 0) - 1, v13 - 1) >= __PAIR128__(v6, v5) )
  {
    v13 = 1LL;
    v8 = 0LL;
    v21 = 0;
    v22 = v6;
  }
  else
  {
    v21 = 1;
    v22 = v6;
    if ( (unsigned __int64)v12 - (unsigned __int128)(unsigned __int64)v13 < __PAIR128__(v6, v5) )
    {
      v21 = 2;
      v13 = v12;
      v8 = 0LL;
      if ( (unsigned __int64)v11 - (unsigned __int128)(unsigned __int64)v12 < __PAIR128__(v6, v5) )
      {
        v21 = 3;
        v13 = v11;
        v8 = 0LL;
        if ( (unsigned __int64)v10 - (unsigned __int128)(unsigned __int64)v11 < __PAIR128__(v6, v5) )
        {
          v21 = 4;
          v13 = v10;
          v8 = 0LL;
          if ( (unsigned __int64)v9 - (unsigned __int128)(unsigned __int64)v10 < __PAIR128__(v6, v5) )
          {
            v21 = 5;
            v13 = v9;
            v8 = 0LL;
            if ( (unsigned __int64)v47 - (unsigned __int128)(unsigned __int64)v9 < __PAIR128__(v6, v5) )
            {
              v13 = v47;
              v21 = 6;
              v8 = 0LL;
              if ( __PAIR128__(v46, v7) - (unsigned __int64)v47 < __PAIR128__(v6, v5) )
              {
                v8 = v46;
                v21 = 7;
                v13 = v7;
                if ( v45 - __PAIR128__(v46, v7) < __PAIR128__(v6, v5) )
                {
                  v8 = *((_QWORD *)&v45 + 1);
                  v13 = v45;
                  v21 = 8;
                  if ( v48 - v45 < __PAIR128__(v6, v5) )
                    core::panicking::panic_bounds_check(10LL, 10LL, &off_12BCD8);
                }
              }
            }
          }
        }
      }
    }
  }
  v24 = _udivti3(v5, v22, v13, v8, v11, v10);
  v72[1] = v23;
  v72[0] = v24;
  v27 = __PAIR128__(v22, v5) - __PAIR128__(v23, v24) * __PAIR128__(v8, v13);
  v73 = *(__int128 *)((char *)&v54 + (unsigned int)(16 * v21));
  if ( v27 == 0 )
  {
    v77[0] = v72;
    v77[1] = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
    v77[2] = &v73;
    v77[3] = <&T as core::fmt::Display>::fmt;
    v49 = "\x01";
    v50 = 2LL;
    v51 = v77;
    v52 = 2LL;
    v53 = 0LL;
    v43 = v81;
    alloc::fmt::format::format_inner(
      v81,
      &v49,
      (__PAIR128__(v8, v13) * (unsigned __int64)v24) >> 64,
      (__PAIR128__(v23, v24) * __PAIR128__(v8, v13)) >> 64,
      v25,
      v26);
    v39 = v71;
  }
  else
  {
    if ( 9 >= __PAIR128__(v8, v13) )
      core::panicking::panic_const::panic_const_div_by_zero(&off_12BCF0);
    v28 = v23;
    *(_QWORD *)&v29 = v13;
    *((_QWORD *)&v29 + 1) = v8;
    v30 = ((unsigned __int128)v29 >> 1)
        - (__CFADD__(v8 >> 1, (unsigned __int64)(v29 >> 1)) + (v8 >> 1) + (unsigned __int64)(v29 >> 1)) % 5;
    v31 = 0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)(unsigned __int64)v30;
    v32 = 0xCCCCCCCCCCCCCCCCLL * v30 + *((_QWORD *)&v31 + 1) - 0x3333333333333333LL * *((_QWORD *)&v30 + 1);
    v33 = _udivti3(v27, *((_QWORD *)&v27 + 1), v31, v32, v25, v26);
    v37 = v36;
    v74[1] = v36;
    v74[0] = v33;
    v38 = __PAIR128__(v32, 0xCCCCCCCCCCCCCCCDLL * (unsigned __int64)v30) * (unsigned __int64)v33;
    v39 = v71;
    if ( v27 - __PAIR128__(*((_QWORD *)&v38 + 1) + v37 * 0xCCCCCCCCCCCCCCCDLL * v30, v38) == 0 )
    {
      v79[0] = v72;
      v79[1] = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
      v40 = v74;
      v79[2] = v74;
      v79[3] = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
      v79[4] = &v73;
      v79[5] = <&T as core::fmt::Display>::fmt;
      v49 = (const char *)&unk_12BD08;
      v50 = 3LL;
      v51 = v79;
      v52 = 3LL;
      v53 = 0LL;
      v43 = &v82;
    }
    else
    {
      v42 = v33 + 1;
      v41 = (__PAIR128__(v37, v33) + 1) >> 64;
      v40 = (_QWORD *)v42;
      if ( v41 | v42 ^ 0xA && (*((_QWORD *)&v38 + 1) = 9LL, 9 >= __PAIR128__(v28, v24)) )
      {
        v76[0] = v42;
        v76[1] = v41;
        v80[0] = v72;
        v80[1] = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v40 = v76;
        v80[2] = v76;
        v80[3] = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v80[4] = &v73;
        v80[5] = <&T as core::fmt::Display>::fmt;
        v49 = (const char *)&unk_12BD08;
        v50 = 3LL;
        v51 = v80;
        v52 = 3LL;
        v53 = 0LL;
        v43 = &v84;
      }
      else
      {
        v75[0] = v24 + 1;
        v75[1] = __CFADD__(v24, 1LL) + v28;
        v78[0] = v75;
        v78[1] = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v78[2] = &v73;
        v78[3] = <&T as core::fmt::Display>::fmt;
        v49 = "\x01";
        v50 = 2LL;
        v51 = v78;
        v52 = 2LL;
        v53 = 0LL;
        v43 = &v83;
      }
    }
    alloc::fmt::format::format_inner(v43, &v49, *((_QWORD *)&v38 + 1), v40, v34, v35);
  }
  *(_QWORD *)(v39 + 16) = *((_QWORD *)v43 + 2);
  *(_OWORD *)v39 = *(_OWORD *)v43;
  return v39;
}
