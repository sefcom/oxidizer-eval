__int64 __fastcall just::subcommand::Subcommand::variables(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r13
  __int64 v6; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+8h] [rbp-D0h]
  __int64 v8; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v9; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+20h] [rbp-B8h]
  __int64 v11; // [rsp+28h] [rbp-B0h]
  __int128 v12; // [rsp+30h] [rbp-A8h]
  __int64 v13; // [rsp+40h] [rbp-98h]
  __int64 v14; // [rsp+48h] [rbp-90h]
  __int64 v15; // [rsp+50h] [rbp-88h]
  __int64 v16; // [rsp+58h] [rbp-80h]
  __int64 v17; // [rsp+60h] [rbp-78h]
  const char *v18; // [rsp+68h] [rbp-70h] BYREF
  __int64 v19; // [rsp+70h] [rbp-68h]
  _QWORD *v20; // [rsp+78h] [rbp-60h]
  __int128 v21; // [rsp+80h] [rbp-58h]
  _QWORD v22[8]; // [rsp+98h] [rbp-40h] BYREF

  v1 = a1[80];
  v2 = a1[81];
  v3 = v1;
  if ( v1 )
    v3 = a1[82];
  v9 = v1 != 0;
  v10 = 0LL;
  v11 = v1;
  *(_QWORD *)&v12 = v2;
  *((_QWORD *)&v12 + 1) = v9;
  v13 = 0LL;
  v14 = v1;
  v15 = v2;
  v16 = v3;
  v17 = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v6, &v9);
  while ( v7 )
  {
    v4 = v8;
    if ( v6 )
    {
      v18 = (const char *)&off_42F150;
      v19 = 1LL;
      v20 = (_QWORD *)&byte_8;
      v21 = 0LL;
      std::io::stdio::_print(&v18);
    }
    v22[0] = v4 + 128;
    v22[1] = <just::name::Name as core::fmt::Display>::fmt;
    v18 = asc_65DB0;
    v19 = 1LL;
    v20 = v22;
    v21 = 1uLL;
    std::io::stdio::_print(&v18);
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v6, &v9);
  }
  v9 = (unsigned __int64)&off_42DBF8;
  v10 = 1LL;
  v11 = 8LL;
  v12 = 0LL;
  return std::io::stdio::_print(&v9);
}