_DWORD *__fastcall uu_ls::PathData::get_metadata(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  result = (_DWORD *)core::cell::once::OnceCell<T>::get_or_try_init(a1 + 72, a1, a2);
  if ( *result == 2 )
    return 0LL;
  return result;
}
