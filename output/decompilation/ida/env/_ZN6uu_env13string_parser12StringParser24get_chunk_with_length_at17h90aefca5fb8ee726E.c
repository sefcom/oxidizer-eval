_UNKNOWN **__fastcall uu_env::string_parser::StringParser::get_chunk_with_length_at(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  char *v4; // r15
  _UNKNOWN **result; // rax
  char v6; // dl
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rdx
  _QWORD v10[3]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v11; // [rsp+18h] [rbp-60h]
  char v12[16]; // [rsp+30h] [rbp-48h] BYREF
  char *v13; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-30h]

  if ( a3 > a2[1] )
  {
    v10[0] = &off_1104E8;
    v10[1] = 1LL;
    v10[2] = 8LL;
    v11 = 0LL;
    core::panicking::panic_fmt(v10, &off_1106C0);
  }
  core::slice::<impl [T]>::split_at_unchecked(v12, *a2);
  v3 = v14;
  if ( v14 )
  {
    v4 = v13;
    result = uu_env::native_int_str::get_char_from_native_int(*v13);
    if ( (_DWORD)result == (_DWORD)&off_110000 )
    {
      v7 = 1LL;
      if ( v3 != 1 )
      {
        while ( (unsigned int)uu_env::native_int_str::get_char_from_native_int(v4[v7]) == (_DWORD)&off_110000 )
        {
          if ( v3 == ++v7 )
          {
            v7 = v3;
            break;
          }
        }
      }
      v8 = 0LL;
      result = (_UNKNOWN **)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                              0LL,
                              v7,
                              v4,
                              v3,
                              &off_1106D8);
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 24) = v9;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 16) = (_DWORD)result;
      *(_BYTE *)(a1 + 20) = v6;
      *(_QWORD *)(a1 + 24) = 1LL;
      v8 = 0LL;
    }
  }
  else
  {
    result = (_UNKNOWN **)a2[4];
    *(_QWORD *)(a1 + 8) = result;
    *(_BYTE *)(a1 + 16) = 0;
    v8 = 1LL;
  }
  *(_QWORD *)a1 = v8;
  return result;
}