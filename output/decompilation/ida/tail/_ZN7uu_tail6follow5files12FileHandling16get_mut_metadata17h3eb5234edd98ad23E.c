_DWORD *__fastcall uu_tail::follow::files::FileHandling::get_mut_metadata(__int64 a1)
{
  _DWORD *result; // rax

  result = (_DWORD *)uu_tail::follow::files::FileHandling::get_mut(a1);
  if ( *result == 2 )
    return 0LL;
  return result;
}