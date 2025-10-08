__int64 __fastcall fd::dir_entry::DirEntry::into_stripped_path(__int64 a1, __int128 *a2, char a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( (a3 & 1) == 0 )
    return fd::dir_entry::DirEntry::into_path(a1, a2);
  v4 = fd::dir_entry::DirEntry::stripped_path((__int64)a2, a3);
  std::path::Path::to_path_buf(a1, v4, v5);
  return core::ptr::drop_in_place<fd::dir_entry::DirEntry>(a2);
}