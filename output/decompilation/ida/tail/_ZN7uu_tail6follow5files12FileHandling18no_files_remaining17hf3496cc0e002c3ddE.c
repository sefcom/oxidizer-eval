bool __fastcall uu_tail::follow::files::FileHandling::no_files_remaining(__int64 a1, __int64 a2)
{
  if ( !*(_QWORD *)(a1 + 48) )
    return 1;
  if ( uu_tail::follow::files::FileHandling::files_remaining(a1) )
    return 0;
  return *(_BYTE *)(a2 + 72) == 0;
}
