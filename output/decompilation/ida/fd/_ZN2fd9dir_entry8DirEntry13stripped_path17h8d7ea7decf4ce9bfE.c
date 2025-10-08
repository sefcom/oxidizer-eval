__int64 __fastcall fd::dir_entry::DirEntry::stripped_path(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = fd::dir_entry::DirEntry::path(a1);
  if ( (a2 & 1) != 0 )
    return fd::filesystem::strip_current_dir(result, v3);
  return result;
}