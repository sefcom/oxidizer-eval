__int64 __fastcall uu_dd::Dest::truncate(_BYTE *a1)
{
  _BYTE *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *a1 != 1 )
    return 0LL;
  v1 = a1 + 4;
  v3 = <std::fs::File as std::io::Seek>::seek(v1, 2LL, 0LL);
  result = v2;
  if ( !v3 )
    return std::fs::File::set_len(v1, v2);
  return result;
}
