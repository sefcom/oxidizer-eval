__int64 __fastcall uu_env::string_parser::StringParser::peek_char_at_pointer(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned int char_from_native_int; // eax
  _QWORD v5[3]; // [rsp+8h] [rbp-60h] BYREF
  __int128 v6; // [rsp+20h] [rbp-48h]
  _BYTE v7[16]; // [rsp+38h] [rbp-30h] BYREF
  char *v8; // [rsp+48h] [rbp-20h]
  __int64 v9; // [rsp+50h] [rbp-18h]

  if ( a3 > a2[1] )
  {
    v5[0] = &off_1104E8;
    v5[1] = 1LL;
    v5[2] = 8LL;
    v6 = 0LL;
    core::panicking::panic_fmt(v5, &off_1106A8);
  }
  core::slice::<impl [T]>::split_at_unchecked(v7, *a2);
  if ( v9 )
  {
    char_from_native_int = (unsigned int)uu_env::native_int_str::get_char_from_native_int(*v8);
    if ( char_from_native_int == (_DWORD)&off_110000 )
      *(_DWORD *)a1 = 65533;
    else
      *(_DWORD *)a1 = char_from_native_int;
    *(_BYTE *)(a1 + 8) = 2;
  }
  else
  {
    *(_QWORD *)a1 = a2[4];
    *(_BYTE *)(a1 + 8) = 0;
  }
  return a1;
}