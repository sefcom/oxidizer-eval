char __fastcall uu_tail::args::Settings::verify(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  bool v3; // zf
  char v4; // cl
  char result; // al
  __int64 v6; // rax

  v1 = a1[4];
  v2 = 48 * a1[5];
  while ( v2 )
  {
    v2 -= 48LL;
    v3 = *(_QWORD *)(v1 + 24) == 0x8000000000000000LL;
    v1 += 48LL;
    if ( v3 )
    {
      v4 = *((_BYTE *)a1 + 76);
      result = 1;
      if ( (v4 & 1) != 0 )
        return result;
      if ( v4 == 2 )
        goto LABEL_6;
      return 0;
    }
  }
  if ( *((_BYTE *)a1 + 76) != 2 )
    return 0;
LABEL_6:
  v6 = *a1;
  if ( *a1 == 4 )
    v6 = a1[1];
  return 2 * (v6 == 3);
}
