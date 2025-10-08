__int64 __fastcall uu_cat::write_nonprint_to_end(__int64 a1, __int64 a2, __int64 a3, const char *a4, __int64 a5)
{
  __int64 i; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdi
  const char *v12; // rsi
  __int64 v13; // rax
  int v14; // eax
  char v16; // [rsp+6h] [rbp-42h] BYREF
  _BYTE v17[2]; // [rsp+7h] [rbp-41h] BYREF
  _BYTE v18[3]; // [rsp+9h] [rbp-3Fh] BYREF
  char v19; // [rsp+Ch] [rbp-3Ch]
  __int16 v20; // [rsp+Dh] [rbp-3Bh] BYREF
  char v21; // [rsp+Fh] [rbp-39h]
  __int64 v22; // [rsp+10h] [rbp-38h]

  v22 = a5;
  if ( !a2 )
    return 0LL;
  for ( i = 0LL; i != a2; ++i )
  {
    v14 = *(unsigned __int8 *)(a1 + i);
    switch ( v14 )
    {
      case 9:
        v11 = a3;
        v12 = a4;
        v10 = v22;
        break;
      case 127:
        v10 = 2LL;
        v11 = a3;
        v12 = asc_1AD9E;
        break;
      case 10:
        return i;
      default:
        if ( (unsigned __int8)v14 >= 0x20u )
        {
          if ( (unsigned __int8)(v14 - 32) >= 0x5Fu )
          {
            if ( (char)v14 >= -96 )
            {
              if ( (unsigned __int8)(v14 + 96) >= 0x5Fu )
              {
                v10 = 4LL;
                v11 = a3;
                v12 = aM;
              }
              else
              {
                v20 = 11597;
                v21 = v14 & 0x7F;
                v10 = 3LL;
                v11 = a3;
                v12 = (const char *)&v20;
              }
            }
            else
            {
              qmemcpy(v18, "M-^", sizeof(v18));
              v19 = v14 - 64;
              v10 = 4LL;
              v11 = a3;
              v12 = v18;
            }
          }
          else
          {
            v16 = *(_BYTE *)(a1 + i);
            v10 = 1LL;
            v11 = a3;
            v12 = &v16;
          }
        }
        else
        {
          v17[0] = 94;
          v17[1] = v14 | 0x40;
          v10 = 2LL;
          v11 = a3;
          v12 = v17;
        }
        break;
    }
    v13 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v11, v12, v10);
    core::result::Result<T,E>::unwrap(v13, &off_EAD50);
  }
  return a2;
}