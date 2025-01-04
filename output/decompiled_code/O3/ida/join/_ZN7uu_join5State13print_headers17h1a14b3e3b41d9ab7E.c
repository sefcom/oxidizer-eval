__int64 __fastcall uu_join::State::print_headers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(a3 + 16);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( v4 )
    {
      result = uu_join::State::combine(a1, a2, a3, a4);
      if ( result )
        return result;
      return 0LL;
    }
  }
  else
  {
    if ( !v4 )
      return 0LL;
    a1 = a3;
  }
  result = uu_join::State::print_first_line(a1, a2, a4);
  if ( !result )
    return 0LL;
  return result;
}
