__int64 __fastcall uu_ls::PathData::get_metadata(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  core::cell::once::OnceCell<T>::get_or_try_init(a1 + 72, a1, a2);
  result = 0LL;
  if ( *(_DWORD *)(a1 + 72) != 2 )
    return a1 + 72;
  return result;
}