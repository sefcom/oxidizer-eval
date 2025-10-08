__int64 __fastcall fd::dir_entry::DirEntry::style(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  core::cell::once::OnceCell<T>::get_or_try_init(a1 + 288, a2, a1);
  result = 0LL;
  if ( *(_BYTE *)(a1 + 288) != 2 )
    return a1 + 288;
  return result;
}