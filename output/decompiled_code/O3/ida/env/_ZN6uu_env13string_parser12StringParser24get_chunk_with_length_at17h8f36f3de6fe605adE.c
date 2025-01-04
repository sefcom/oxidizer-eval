        unsigned __int64 a3)
{
  __int64 v3; // r14
  unsigned __int8 *v4; // r15
  int char_from_native_int; // eax
  char v6; // dl
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v11; // [rsp+18h] [rbp-60h]
  char v12[16]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 *v13; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-30h]

  if ( a2[1] < a3 )
  {
    v10[0] = &off_148E80;
    v10[1] = 1LL;
    v10[2] = 8LL;
    v11 = 0LL;
    core::panicking::panic_fmt(v10, &off_148EA8);
  }
  core::slice::<impl [T]>::split_at_unchecked(v12, *a2);
  v3 = v14;
  if ( v14 )
  {
    v4 = v13;
    char_from_native_int = uu_env::native_int_str::get_char_from_native_int(*v13);
    if ( char_from_native_int == 1114112 )
    {
      v7 = 1LL;
      if ( v3 != 1 )
      {
        while ( (unsigned int)uu_env::native_int_str::get_char_from_native_int(v4[v7]) == 1114112 )
        {
          if ( v3 == ++v7 )
          {
            v7 = v3;
            break;
          }
        }
      }
      *(_QWORD *)(a1 + 8) = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v7, v4, v3);
      *(_QWORD *)(a1 + 16) = v8;
      *(_QWORD *)(a1 + 24) = v8;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 16) = char_from_native_int;
      *(_BYTE *)(a1 + 20) = v6;
      *(_QWORD *)(a1 + 24) = 1LL;
    }
    result = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a2[4];
    *(_BYTE *)(a1 + 16) = 0;
    result = 1LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}
