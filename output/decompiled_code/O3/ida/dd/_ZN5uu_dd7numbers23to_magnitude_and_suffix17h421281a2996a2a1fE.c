        int a4)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rdx
  char *v14; // rax
  __int64 v15; // r13
  __int64 v16; // rbp
  int v17; // ecx
  unsigned __int128 v18; // rax
  bool v19; // cf
  unsigned __int128 v20; // rax
  __int128 v21; // rax
  unsigned __int128 v22; // rax
  __int128 v23; // rax
  unsigned __int128 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  double v30; // xmm1_8
  _QWORD **v31; // rsi
  __int64 v33; // [rsp+0h] [rbp-148h]
  double v34; // [rsp+0h] [rbp-148h]
  void *v35; // [rsp+8h] [rbp-140h]
  __int64 v36; // [rsp+10h] [rbp-138h]
  double v37; // [rsp+20h] [rbp-128h] BYREF
  _QWORD *v38; // [rsp+28h] [rbp-120h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+30h] [rbp-118h]
  __int128 *v40; // [rsp+38h] [rbp-110h]
  __int64 (__fastcall *v41)(); // [rsp+40h] [rbp-108h]
  _OWORD *v42; // [rsp+48h] [rbp-100h]
  __int64 v43; // [rsp+50h] [rbp-F8h]
  _QWORD v44[4]; // [rsp+58h] [rbp-F0h] BYREF
  __int128 v45; // [rsp+78h] [rbp-D0h] BYREF
  _OWORD dest[12]; // [rsp+88h] [rbp-C0h] BYREF

  if ( a4 )
  {
    memcpy(dest, &off_116518, 0x90uLL);
    v36 = 54210108LL;
    v7 = 0x9FD0803CE8000000LL;
    v35 = &unk_D3C2;
    v8 = 0x1BCECCEDA1000000LL;
    v33 = 54LL;
    v9 = 0x35C9ADC5DEA00000LL;
    v10 = 1000000000000000000LL;
    v11 = 1000000000000000LL;
    v12 = 1000000000000LL;
    v13 = 1000000000LL;
    v14 = (char *)&loc_F4240;
    v15 = 1000LL;
    v16 = 0LL;
  }
  else
  {
    memcpy(dest, &off_116488, 0x90uLL);
    v36 = 0x4000000LL;
    v35 = &unk_10000;
    v33 = 64LL;
    v10 = 0x1000000000000000LL;
    v11 = 0x4000000000000LL;
    v12 = 0x10000000000LL;
    v13 = 0x40000000LL;
    v14 = (_BYTE *)(&loc_FFFFF + 1);
    v15 = 1024LL;
    v16 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
    v7 = 0LL;
  }
  if ( __PAIR128__((unsigned __int64)(v15 != 0) - 1, v15 - 1) >= __PAIR128__(a3, a2) )
  {
    v15 = 1LL;
    v16 = 0LL;
    v17 = 0;
  }
  else
  {
    v17 = 1;
    if ( &v14[-(unsigned __int128)(unsigned __int64)v15] < (char *)__PAIR128__(a3, a2) )
    {
      v17 = 2;
      v15 = (__int64)v14;
      if ( (unsigned __int64)v13 - (unsigned __int128)(unsigned __int64)v14 < __PAIR128__(a3, a2) )
      {
        v17 = 3;
        v15 = v13;
        if ( (unsigned __int64)v12 - (unsigned __int128)(unsigned __int64)v13 < __PAIR128__(a3, a2) )
        {
          v18 = (unsigned __int64)v11 - (unsigned __int128)(unsigned __int64)v12;
          v17 = 4;
          v19 = v18 < __PAIR128__(a3, a2);
          v13 = (v18 - __PAIR128__(a3, a2)) >> 64;
          v15 = v12;
          if ( v19 )
          {
            v20 = (unsigned __int64)v10 - (unsigned __int128)(unsigned __int64)v11;
            v17 = 5;
            v19 = v20 < __PAIR128__(a3, a2);
            v13 = (v20 - __PAIR128__(a3, a2)) >> 64;
            v15 = v11;
            if ( v19 )
            {
              *(_QWORD *)&v21 = v9;
              *((_QWORD *)&v21 + 1) = v33;
              v22 = v21 - (unsigned __int64)v10;
              v17 = 6;
              v19 = v22 < __PAIR128__(a3, a2);
              v13 = (v22 - __PAIR128__(a3, a2)) >> 64;
              v15 = v10;
              if ( v19 )
              {
                *(_QWORD *)&v23 = v8;
                *((_QWORD *)&v23 + 1) = v35;
                v16 = v33;
                v24 = v23 - __PAIR128__(v33, v9);
                v17 = 7;
                v19 = v24 < __PAIR128__(a3, a2);
                v13 = (v24 - __PAIR128__(a3, a2)) >> 64;
                v15 = v9;
                if ( v19 )
                {
                  v16 = (__int64)v35;
                  v17 = 8;
                  v15 = v8;
                  if ( __PAIR128__(v36, v7) - __PAIR128__((unsigned __int64)v35, v8) < __PAIR128__(a3, a2) )
                    core::panicking::panic_bounds_check(10LL, 10LL, &off_1165A8, 8LL);
                }
              }
            }
          }
        }
      }
    }
  }
  v25 = (unsigned int)(16 * v17);
  v45 = *(_OWORD *)((char *)dest + (unsigned int)v25);
  v34 = _floatuntidf(a2, a3, v13, v25, v10, v9);
  v30 = v34 / _floatuntidf(v15, v16, v26, v27, v28, v29);
  v37 = v30;
  if ( v30 >= 10.0 )
  {
    v44[0] = round(v30);
    v38 = v44;
    v39 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v40 = &v45;
    v41 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&dest[0] = &unk_1165C0;
    *((_QWORD *)&dest[0] + 1) = 2LL;
    *(_QWORD *)&dest[2] = 0LL;
    *(_QWORD *)&dest[1] = &v38;
    *((_QWORD *)&dest[1] + 1) = 2LL;
    v31 = (_QWORD **)dest;
  }
  else
  {
    v44[0] = &v37;
    v44[1] = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v44[2] = &v45;
    v44[3] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&dest[0] = 0LL;
    *((_QWORD *)&dest[0] + 1) = 1LL;
    *(_QWORD *)&dest[1] = 2LL;
    *(_QWORD *)&dest[2] = 0LL;
    *((_QWORD *)&dest[2] + 1) = 32LL;
    LOBYTE(dest[3]) = 3;
    *((_QWORD *)&dest[3] + 1) = 2LL;
    *((_QWORD *)&dest[4] + 1) = 2LL;
    *((_QWORD *)&dest[5] + 1) = 1LL;
    *(_QWORD *)&dest[6] = 32LL;
    BYTE8(dest[6]) = 3;
    v38 = &unk_1165C0;
    v39 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v42 = dest;
    v43 = 2LL;
    v40 = (__int128 *)v44;
    v41 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v31 = &v38;
  }
  alloc::fmt::format::format_inner(a1, v31);
  return a1;
}
