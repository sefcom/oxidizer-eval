__int64 __fastcall rg::flags::hiargs::Paths::is_only_stdin(__int64 a1, __int64 a2)
{
  if ( a2 == 1 )
    return <std::path::PathBuf as core::cmp::PartialEq<&std::path::Path>>::eq(
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             asc_69BA0,
             1LL);
  else
    return 0LL;
}