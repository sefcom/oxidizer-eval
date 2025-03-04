__int64 __fastcall uu_cat::write_nonprint_to_end(__int64 a1, __int64 a2, __int64 a3, const char *a4, __int64 a5)
{
  unsigned __int8 *v7; // rax
  __int64 i; // r12
  __int64 v9; // rdx
  __int64 v10; // rdi
  const char *v11; // rsi
  __int64 v12; // rax
  int v13; // eax
  _BYTE v15[3]; // [rsp+Ch] [rbp-4Ch] BYREF
  char v16; // [rsp+Fh] [rbp-49h]
  __int64 v17; // [rsp+10h] [rbp-48h]
  _QWORD v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v17 = a5;
  v18[0] = a1;
  v18[1] = a1 + a2;
  v7 = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v18);
  for ( i = 0LL;
        v7;
        v7 = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v18) )
  {
    v13 = *v7;
    switch ( v13 )
    {
      case 9:
        v10 = a3;
        v11 = a4;
        v9 = v17;
        break;
      case 127:
        v9 = 2LL;
        v10 = a3;
        v11 = asc_1CE2A;
        break;
      case 10:
        return i;
      default:
        if ( (unsigned __int8)v13 >= 0x20u )
        {
          if ( (unsigned __int8)(v13 - 32) >= 0x5Fu )
          {
            if ( (char)v13 >= -96 )
            {
              if ( (unsigned __int8)(v13 + 96) >= 0x5Fu )
              {
                v9 = 4LL;
                v10 = a3;
                v11 = aM;
                break;
              }
              *(_WORD *)v15 = 11597;
              v15[2] = v13 & 0x7F;
              v9 = 3LL;
            }
            else
            {
              qmemcpy(v15, "M-^", sizeof(v15));
              v16 = v13 - 64;
              v9 = 4LL;
            }
          }
          else
          {
            v15[0] = v13;
            v9 = 1LL;
          }
        }
        else
        {
          v15[0] = 94;
          v15[1] = v13 | 0x40;
          v9 = 2LL;
        }
        v10 = a3;
        v11 = v15;
        break;
    }
    v12 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(v10, v11, v9);
    core::result::Result<T,E>::unwrap(v12, &off_118838);
    ++i;
  }
  return i;
}
