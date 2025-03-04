__int64 __fastcall uu_dd::Output::sync(_BYTE *a1)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)a1 + 2);
  if ( *(_BYTE *)(v1 + 149) )
    return uu_dd::Dest::fsync(a1);
  if ( *(_BYTE *)(v1 + 148) )
    return uu_dd::Dest::fdatasync(a1);
  return 0LL;
}
