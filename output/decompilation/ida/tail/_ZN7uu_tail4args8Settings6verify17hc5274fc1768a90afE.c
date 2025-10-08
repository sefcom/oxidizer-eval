char __fastcall uu_tail::args::Settings::verify(__int64 *a1)
{
  __int64 v1; // rcx
  char v2; // cl
  char v3; // al
  __int64 v5; // rax
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = a1[4] + 48 * a1[5];
  v6[0] = a1[4];
  v6[1] = v1;
  v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v6);
  v3 = *((_BYTE *)a1 + 76);
  if ( v2 )
  {
    if ( v3 != 2 )
      return v3 & 1;
  }
  else if ( v3 != 2 )
  {
    return 0;
  }
  v5 = *a1;
  if ( *a1 == 4 )
    v5 = a1[1];
  return 2 * (v5 == 3);
}