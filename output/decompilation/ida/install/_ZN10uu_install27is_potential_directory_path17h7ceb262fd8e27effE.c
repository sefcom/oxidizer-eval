char __fastcall uu_install::is_potential_directory_path(__int64 a1, __int64 a2)
{
  if ( a2 == 0 || a1 + a2 == 1 || *(_BYTE *)(a1 + a2 - 1) != 47 )
    return std::path::Path::is_dir(a1, a2);
  else
    return 1;
}