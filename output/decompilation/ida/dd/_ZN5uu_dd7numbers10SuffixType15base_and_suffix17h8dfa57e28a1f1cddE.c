char *__fastcall uu_dd::numbers::SuffixType::base_and_suffix(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r13
  __int64 v13; // rbp
  char *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  bool v18; // cf
  char *result; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  _BYTE *v22; // rdx
  __int128 v23; // xmm0
  __int64 v24; // [rsp+0h] [rbp-D8h]
  Elf64_Rela *v25; // [rsp+8h] [rbp-D0h]
  __int64 v26; // [rsp+10h] [rbp-C8h]
  _BYTE dest[192]; // [rsp+18h] [rbp-C0h] BYREF

  if ( (a2 & 1) != 0 )
  {
    memcpy(dest, &off_13D830, 0x90uLL);
    v24 = 54210108LL;
    v7 = 0x9FD0803CE8000000LL;
    v25 = &stru_D3C0 + 2;
    v8 = 0x1BCECCEDA1000000LL;
    v26 = 54LL;
    v9 = 0x35C9ADC5DEA00000LL;
    v10 = 1000000000000000000LL;
    v11 = 1000000000000000LL;
    v12 = 1000000000000LL;
    v13 = 1000000000LL;
    v14 = (_BYTE *)(&loc_F423E + 2);
    v15 = 1000LL;
    v16 = 0LL;
  }
  else
  {
    memcpy(dest, &off_13D7A0, 0x90uLL);
    v24 = 0x4000000LL;
    v25 = &stru_10000;
    v26 = 64LL;
    v10 = 0x1000000000000000LL;
    v11 = 0x4000000000000LL;
    v12 = 0x10000000000LL;
    v13 = 0x40000000LL;
    v14 = (char *)&loc_100000;
    v15 = 1024LL;
    v16 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
    v7 = 0LL;
  }
  v17 = (v15 != 0) - 1LL;
  v18 = __PAIR128__(v17, v15 - 1) < __PAIR128__(a4, a3);
  result = (char *)((__PAIR128__(v17, v15 - 1) - __PAIR128__(a4, a3)) >> 64);
  if ( v18 )
  {
    result = &v14[-v15];
    if ( &v14[-(unsigned __int128)(unsigned __int64)v15] >= (char *)__PAIR128__(a4, a3) )
    {
      v22 = &dest[16];
    }
    else
    {
      result = (char *)(v13 - (_QWORD)v14);
      if ( (unsigned __int64)v13 - (unsigned __int128)(unsigned __int64)v14 >= __PAIR128__(a4, a3) )
      {
        v22 = &dest[32];
        v15 = (__int64)v14;
      }
      else
      {
        result = (char *)(v12 - v13);
        if ( (unsigned __int64)v12 - (unsigned __int128)(unsigned __int64)v13 >= __PAIR128__(a4, a3) )
        {
          v22 = &dest[48];
          v15 = v13;
        }
        else
        {
          result = (char *)(v11 - v12);
          if ( (unsigned __int64)v11 - (unsigned __int128)(unsigned __int64)v12 >= __PAIR128__(a4, a3) )
          {
            v22 = &dest[64];
            v15 = v12;
          }
          else
          {
            result = (char *)(v10 - v11);
            if ( (unsigned __int64)v10 - (unsigned __int128)(unsigned __int64)v11 >= __PAIR128__(a4, a3) )
            {
              v22 = &dest[80];
              v15 = v11;
            }
            else
            {
              result = (char *)(v9 - v10);
              if ( __PAIR128__(v26, v9) - (unsigned __int64)v10 >= __PAIR128__(a4, a3) )
              {
                v22 = &dest[96];
                v15 = v10;
              }
              else
              {
                v16 = (__int64)v25;
                result = (char *)(v8 - v9);
                if ( __PAIR128__((unsigned __int64)v25, v8) - __PAIR128__(v26, v9) >= __PAIR128__(a4, a3) )
                {
                  v22 = &dest[112];
                  v15 = v9;
                  v16 = v26;
                }
                else
                {
                  v20 = (__PAIR128__(v24, v7) - __PAIR128__((unsigned __int64)v25, v8)) >> 64;
                  v21 = v7 - v8;
                  v18 = __PAIR128__(v20, v21) < __PAIR128__(a4, a3);
                  result = (char *)((__PAIR128__(v20, v21) - __PAIR128__(a4, a3)) >> 64);
                  if ( v18 )
                    core::panicking::panic_bounds_check(
                      10LL,
                      10LL,
                      &off_13D8C0,
                      (__PAIR128__((unsigned __int64)v25, v8) - __PAIR128__(v26, v9) - __PAIR128__(a4, a3)) >> 64);
                  v22 = &dest[128];
                  v15 = v8;
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v15 = 1LL;
    v22 = dest;
    v16 = 0LL;
  }
  v23 = *(_OWORD *)v22;
  *(_QWORD *)(a1 + 8) = v16;
  *(_QWORD *)a1 = v15;
  *(_OWORD *)(a1 + 16) = v23;
  return result;
}