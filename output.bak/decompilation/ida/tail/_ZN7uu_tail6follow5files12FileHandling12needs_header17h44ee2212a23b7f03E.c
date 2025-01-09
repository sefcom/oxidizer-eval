char __fastcall uu_tail::follow::files::FileHandling::needs_header(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al

  if ( !a4 )
    return 0;
  result = 1;
  if ( *a1 != 0x8000000000000000LL )
    return <std::path::PathBuf as core::cmp::PartialEq<&std::path::Path>>::eq(a1[1], a1[2], a2, a3) ^ 1;
  return result;
}
