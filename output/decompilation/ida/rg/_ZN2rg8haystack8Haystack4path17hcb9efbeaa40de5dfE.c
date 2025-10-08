__int64 __fastcall rg::haystack::Haystack::path(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx

  if ( !*(_BYTE *)(a1 + 112) )
    return ignore::walk::DirEntry::path(a1);
  v1 = ignore::walk::DirEntry::path(a1);
  if ( !(unsigned __int8)std::path::Path::starts_with(v1, v2) )
    return ignore::walk::DirEntry::path(a1);
  v3 = ignore::walk::DirEntry::path(a1);
  v5 = std::path::Path::strip_prefix(v3, v4);
  return core::result::Result<T,E>::unwrap(v5, v6);
}