        unsigned __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // r13
  __int64 v12; // rbp
  unsigned __int128 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdi
  int v16; // ecx
  __int128 v17; // rax
  __int128 v18; // rax
  __int128 v19; // xmm0
  void *v21; // [rsp+8h] [rbp-E0h]
  __int64 v22; // [rsp+10h] [rbp-D8h]
  __int128 v23; // [rsp+18h] [rbp-D0h]
  _OWORD dest[12]; // [rsp+28h] [rbp-C0h] BYREF

  if ( a2 )
  {
    memcpy(dest, &off_1619E0, 0x90uLL);
    *((_QWORD *)&v13 + 1) = 54210108LL;
    *(_QWORD *)&v23 = 0x9FD0803CE8000000LL;
    v21 = &stru_D3C0 + 2;
    v7 = 0x1BCECCEDA1000000LL;
    v22 = 54LL;
    v8 = 0x35C9ADC5DEA00000LL;
    v9 = 1000000000000000000LL;
    v10 = 1000000000000000LL;
    v11 = 1000000000000LL;
    v12 = 1000000000LL;
    *(_QWORD *)&v13 = 1000000LL;
    v14 = 1000LL;
    v15 = 0LL;
  }
  else
  {
    memcpy(dest, &off_161950, 0x90uLL);
    *((_QWORD *)&v13 + 1) = 0x4000000LL;
    v21 = &unk_10000;
    v22 = 64LL;
    v9 = 0x1000000000000000LL;
    v10 = 0x4000000000000LL;
    v11 = 0x10000000000LL;
    v12 = 0x40000000LL;
    *(_QWORD *)&v13 = 0x100000LL;
    v14 = 1024LL;
    v15 = 0LL;
    v8 = 0LL;
    v7 = 0LL;
    *(_QWORD *)&v23 = 0LL;
  }
  if ( __PAIR128__((unsigned __int64)(v14 != 0) - 1, v14 - 1) >= __PAIR128__(a4, a3) )
  {
    v14 = 1LL;
    v15 = 0LL;
    v16 = 0;
  }
  else
  {
    *((_QWORD *)&v23 + 1) = *((_QWORD *)&v13 + 1);
    v16 = 1;
    if ( (unsigned __int64)v13 - (unsigned __int128)(unsigned __int64)v14 < __PAIR128__(a4, a3) )
    {
      v16 = 2;
      v14 = v13;
      if ( (unsigned __int64)v12 - (unsigned __int128)(unsigned __int64)v13 < __PAIR128__(a4, a3) )
      {
        v13 = (unsigned __int64)v11 - (unsigned __int128)(unsigned __int64)v12;
        v16 = 3;
        v14 = v12;
        if ( v13 < __PAIR128__(a4, a3) )
        {
          v13 = (unsigned __int64)v10 - (unsigned __int128)(unsigned __int64)v11;
          v16 = 4;
          v14 = v11;
          if ( v13 < __PAIR128__(a4, a3) )
          {
            v13 = (unsigned __int64)v9 - (unsigned __int128)(unsigned __int64)v10;
            v16 = 5;
            v14 = v10;
            if ( v13 < __PAIR128__(a4, a3) )
            {
              *(_QWORD *)&v17 = v8;
              *((_QWORD *)&v17 + 1) = v22;
              v13 = v17 - (unsigned __int64)v9;
              v16 = 6;
              v14 = v9;
              if ( v13 < __PAIR128__(a4, a3) )
              {
                *(_QWORD *)&v18 = v7;
                *((_QWORD *)&v18 + 1) = v21;
                v15 = v22;
                v13 = v18 - __PAIR128__(v22, v8);
                v16 = 7;
                v14 = v8;
                if ( v13 < __PAIR128__(a4, a3) )
                {
                  v15 = (__int64)v21;
                  v16 = 8;
                  *(_QWORD *)&v13 = (v23 - __PAIR128__((unsigned __int64)v21, v7) - __PAIR128__(a4, a3)) >> 64;
                  v14 = v7;
                  if ( v23 - __PAIR128__((unsigned __int64)v21, v7) < __PAIR128__(a4, a3) )
                    core::panicking::panic_bounds_check(10LL, 10LL, &off_161A70, 8LL);
                }
              }
            }
          }
        }
      }
    }
  }
  v19 = *(_OWORD *)((char *)dest + (unsigned int)(16 * v16));
  *(_QWORD *)(a1 + 8) = v15;
  *(_QWORD *)a1 = v14;
  *(_OWORD *)(a1 + 16) = v19;
  return v13;
}
