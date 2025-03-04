__int64 __fastcall uu_ls::get_metadata_with_deref_opt(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( a4 )
    std::fs::metadata(a1, a2, a3);
  else
    std::fs::symlink_metadata(a1, a2, a3);
  return a1;
}
