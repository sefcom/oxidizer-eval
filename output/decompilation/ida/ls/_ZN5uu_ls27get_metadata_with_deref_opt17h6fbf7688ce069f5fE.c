__int64 __fastcall uu_ls::get_metadata_with_deref_opt(void *a1, __int64 a2, __int64 a3, int a4)
{
  if ( a4 )
    return std::fs::metadata(a1);
  else
    return std::fs::symlink_metadata(a1);
}