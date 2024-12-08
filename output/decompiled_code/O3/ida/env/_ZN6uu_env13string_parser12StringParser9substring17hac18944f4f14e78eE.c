__int64 __fastcall uu_env::string_parser::StringParser::substring(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r14
  char **v4; // [rsp+8h] [rbp-80h] BYREF
  __int64 v5; // [rsp+10h] [rbp-78h]
  __int64 v6; // [rsp+18h] [rbp-70h]
  __int128 v7; // [rsp+20h] [rbp-68h]
  _BYTE v8[16]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v9; // [rsp+48h] [rbp-40h]
  unsigned __int64 v10; // [rsp+50h] [rbp-38h]
  __int64 v11; // [rsp+58h] [rbp-30h] BYREF

  v2 = *a2;
  if ( (unsigned __int64)*a2 > a1[1] )
  {
    v4 = &off_1496C0;
    v5 = 1LL;
    v6 = 8LL;
    v7 = 0LL;
    core::panicking::panic_fmt(&v4, &off_149730);
  }
  core::slice::<impl [T]>::split_at_unchecked(v8, *a1);
  if ( a2[1] - v2 > v10 )
  {
    v4 = &off_1496C0;
    v5 = 1LL;
    v6 = 8LL;
    v7 = 0LL;
    core::panicking::panic_fmt(&v4, &off_149748);
  }
  core::slice::<impl [T]>::split_at_unchecked(&v11, v9);
  return v11;
}
