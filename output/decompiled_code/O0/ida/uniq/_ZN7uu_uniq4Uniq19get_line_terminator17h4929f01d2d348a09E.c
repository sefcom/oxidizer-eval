__int64 __fastcall uu_uniq::Uniq::get_line_terminator(__int64 a1)
{
  __int64 result; // rax

  result = 10LL;
  if ( (*(_BYTE *)(a1 + 53) & 1) != 0 )
    return 0LL;
  return result;
}
