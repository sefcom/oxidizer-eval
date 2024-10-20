        int a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rdx
  __int64 v14; // rax
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
  char *v31; // r14
  __int64 result; // rax
  __int64 v33; // [rsp+0h] [rbp-1E8h]
  double v34; // [rsp+0h] [rbp-1E8h]
  __int64 v35; // [rsp+8h] [rbp-1E0h]
  double v37; // [rsp+20h] [rbp-1C8h] BYREF
  double v38; // [rsp+28h] [rbp-1C0h] BYREF
  __int128 v39; // [rsp+30h] [rbp-1B8h] BYREF
  _QWORD v40[4]; // [rsp+40h] [rbp-1A8h] BYREF
  _QWORD v41[4]; // [rsp+60h] [rbp-188h] BYREF
  _OWORD dest[9]; // [rsp+80h] [rbp-168h] BYREF
  _QWORD v43[6]; // [rsp+118h] [rbp-D0h] BYREF
  char v44; // [rsp+148h] [rbp-A0h]
  __int64 v45; // [rsp+150h] [rbp-98h]
  __int64 v46; // [rsp+160h] [rbp-88h]
  __int64 v47; // [rsp+170h] [rbp-78h]
  __int64 v48; // [rsp+178h] [rbp-70h]
  char v49; // [rsp+180h] [rbp-68h]
  char v50; // [rsp+188h] [rbp-60h] BYREF
  char v51; // [rsp+1A0h] [rbp-48h] BYREF

  if ( a4 )
  {
    memcpy(dest, &off_144D90, sizeof(dest));
    v6 = 54210108LL;
    v7 = 0x9FD0803CE8000000LL;
    v35 = 54210LL;
    v8 = 0x1BCECCEDA1000000LL;
    v33 = 54LL;
    v9 = 0x35C9ADC5DEA00000LL;
    v10 = 1000000000000000000LL;
    v11 = 1000000000000000LL;
    v12 = 1000000000000LL;
    v13 = 1000000000LL;
    v14 = 1000000LL;
    v15 = 1000LL;
    v16 = 0LL;
  }
  else
  {
    memcpy(dest, &off_144D00, sizeof(dest));
    v6 = 0x4000000LL;
    v35 = 0x10000LL;
    v33 = 64LL;
    v10 = 0x1000000000000000LL;
    v11 = 0x4000000000000LL;
    v12 = 0x10000000000LL;
    v13 = 0x40000000LL;
    v14 = 0x100000LL;
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
    if ( (unsigned __int64)v14 - (unsigned __int128)(unsigned __int64)v15 < __PAIR128__(a3, a2) )
    {
      v17 = 2;
      v15 = v14;
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
                  v16 = v35;
                  v17 = 8;
                  v15 = v8;
                  if ( __PAIR128__(v6, v7) - __PAIR128__(v35, v8) < __PAIR128__(a3, a2) )
                    core::panicking::panic_bounds_check(10LL, 10LL, &off_144E20);
                }
              }
            }
          }
        }
      }
    }
  }
  v25 = (unsigned int)(16 * v17);
  v39 = *(_OWORD *)((char *)dest + (unsigned int)v25);
  v34 = _floatuntidf(a2, a3, v13, v25, v10, v9);
  v30 = v34 / _floatuntidf(v15, v16, v26, v27, v28, v29);
  v37 = v30;
  if ( v30 >= 10.0 )
  {
    v38 = round(v30);
    v41[0] = &v38;
    v41[1] = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v41[2] = &v39;
    v41[3] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&dest[0] = &unk_144E38;
    *((_QWORD *)&dest[0] + 1) = 2LL;
    *(_QWORD *)&dest[1] = v41;
    *((_QWORD *)&dest[1] + 1) = 2LL;
    *(_QWORD *)&dest[2] = 0LL;
    v31 = &v51;
  }
  else
  {
    v40[0] = &v37;
    v40[1] = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v40[2] = &v39;
    v40[3] = <&T as core::fmt::Display>::fmt;
    v43[0] = 0LL;
    v43[1] = 1LL;
    v43[2] = 2LL;
    v43[4] = 0LL;
    v43[5] = 32LL;
    v44 = 3;
    v45 = 2LL;
    v46 = 2LL;
    v47 = 1LL;
    v48 = 32LL;
    v49 = 3;
    *(_QWORD *)&dest[0] = &unk_144E38;
    *((_QWORD *)&dest[0] + 1) = 2LL;
    *(_QWORD *)&dest[1] = v40;
    *((_QWORD *)&dest[1] + 1) = 2LL;
    *(_QWORD *)&dest[2] = v43;
    *((_QWORD *)&dest[2] + 1) = 2LL;
    v31 = &v50;
  }
  alloc::fmt::format::format_inner(v31, dest);
  result = a1;
  *(_QWORD *)(a1 + 16) = *((_QWORD *)v31 + 2);
  *(_OWORD *)a1 = *(_OWORD *)v31;
  return result;
}
