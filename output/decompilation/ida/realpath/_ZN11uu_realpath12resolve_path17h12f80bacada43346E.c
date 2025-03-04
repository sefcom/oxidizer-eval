__int64 __fastcall uu_realpath::resolve_path(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 result; // rax
  char v12; // [rsp+7h] [rbp-61h] BYREF
  __int128 v13; // [rsp+8h] [rbp-60h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h]
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  _BYTE v17[48]; // [rsp+38h] [rbp-30h] BYREF

  uucore::features::fs::canonicalize(&v13);
  result = *((_QWORD *)&v13 + 1);
  if ( (_QWORD)v13 != 0x8000000000000000LL )
  {
    v15 = v13;
    v16 = v14;
    uu_realpath::process_relative((__int64)v17, &v15, a8, a9, a6, a7);
    result = uucore::mods::display::print_verbatim(v17);
    if ( !result )
    {
      *(_QWORD *)&v13 = std::io::stdio::stdout();
      v12 = a3;
      return <std::io::stdio::Stdout as std::io::Write>::write_all(&v13, &v12, 1LL);
    }
  }
  return result;
}
