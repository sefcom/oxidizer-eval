        unsigned __int64 a3)
{
  int char_from_native_int; // eax
  char v4; // al
  _QWORD v6[3]; // [rsp+8h] [rbp-60h] BYREF
  __int128 v7; // [rsp+20h] [rbp-48h]
  _BYTE v8[16]; // [rsp+38h] [rbp-30h] BYREF
  char *v9; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-18h]

  if ( a2[1] < a3 )
  {
    v6[0] = &off_1496C0;
    v6[1] = 1LL;
    v6[2] = 8LL;
    v7 = 0LL;
    core::panicking::panic_fmt(v6, &off_1496D0);
  }
  core::slice::<impl [T]>::split_at_unchecked(v8, *a2);
  if ( v10 )
  {
    char_from_native_int = uu_env::native_int_str::get_char_from_native_int(*v9);
    if ( char_from_native_int == 1114112 )
      *(_DWORD *)a1 = 65533;
    else
      *(_DWORD *)a1 = char_from_native_int;
    v4 = 2;
  }
  else
  {
    *(_QWORD *)a1 = a2[4];
    v4 = 0;
  }
  *(_BYTE *)(a1 + 8) = v4;
  return a1;
}
