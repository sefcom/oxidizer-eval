__int64 __fastcall fd::dir_entry::DirEntry::metadata(__int64 a1)
{
  __int64 result; // rax

  core::cell::once::OnceCell<T>::get_or_try_init(a1 + 112, a1);
  result = 0LL;
  if ( *(_DWORD *)(a1 + 112) != 2 )
    return a1 + 112;
  return result;
}