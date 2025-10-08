char __fastcall zoxide::db::stream::Stream::filter_by_base_dir(__int64 a1, __int64 a2, __int64 a3)
{
  if ( __OFSUB__(0LL, *(_QWORD *)(a1 + 48)) )
    return 1;
  else
    return std::path::Path::starts_with(a2, a3, a1 + 48);
}