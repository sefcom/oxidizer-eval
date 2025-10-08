__int64 __fastcall uu_ls::PathData::file_type(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  core::cell::once::OnceCell<T>::get_or_try_init(a1 + 248, a1, a2);
  result = 0LL;
  if ( *(_BYTE *)(a1 + 248) )
    return a1 + 252;
  return result;
}