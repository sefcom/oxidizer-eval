char __fastcall rg::haystack::Haystack::is_dir(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rdx

  if ( !*(_QWORD *)a1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 48) & 0xF000;
  if ( v1 != 0x4000 )
  {
    if ( v1 == 40960 || *(_BYTE *)(a1 + 52) )
    {
      v2 = ignore::walk::DirEntry::path(a1);
      return std::path::Path::is_dir(v2, v3);
    }
    return 0;
  }
  return 1;
}