__int64 __fastcall fd::dir_entry::DirEntry::path(__int64 a1)
{
  if ( *(_DWORD *)a1 == 3 )
    return *(_QWORD *)(a1 + 16);
  else
    return ignore::walk::DirEntry::path();
}