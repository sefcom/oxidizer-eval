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
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h]
  __int64 v15; // [rsp+18h] [rbp-50h]
  _QWORD v16[3]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v17[48]; // [rsp+38h] [rbp-30h] BYREF

  uucore::features::fs::canonicalize(&v13);
  result = v14;
  if ( !__OFSUB__(-v13, 1LL) )
  {
    v16[0] = v13;
    v16[1] = v14;
    v16[2] = v15;
    uu_realpath::process_relative(v17, v16, a8, a9, a6, a7);
    result = uucore::mods::display::print_verbatim(v17);
    if ( !result )
    {
      v13 = std::io::stdio::stdout();
      v12 = a3;
      return <std::io::stdio::Stdout as std::io::Write>::write_all(&v13, &v12, 1LL);
    }
  }
  return result;
}