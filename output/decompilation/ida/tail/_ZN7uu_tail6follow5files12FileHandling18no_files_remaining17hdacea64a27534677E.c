__int64 __fastcall uu_tail::follow::files::FileHandling::no_files_remaining(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // ebx

  if ( *(_QWORD *)(a1 + 48) )
  {
    v3 = a2;
    if ( uu_tail::follow::files::FileHandling::files_remaining(a1) )
    {
      return 0LL;
    }
    else
    {
      LOBYTE(v3) = (a2 ^ 1) & 1;
      return v3;
    }
  }
  else
  {
    LOBYTE(v2) = 1;
    return v2;
  }
}