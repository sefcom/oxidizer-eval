_DWORD *__fastcall uu_tail::follow::files::FileHandling::get_mut_metadata(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)uu_tail::follow::files::FileHandling::get_mut(a1, a2, a3);
  if ( *result == 2 )
    return 0LL;
  return result;
}
