__int64 __fastcall just::recipe::Recipe<D>::doc(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  _QWORD *v4; // rax
  _QWORD v6[12]; // [rsp+8h] [rbp-60h] BYREF

  v1 = a1[27];
  v2 = a1[28];
  v3 = v1;
  if ( v1 )
    v3 = a1[29];
  v6[0] = v1 != 0;
  v6[1] = 0LL;
  v6[2] = v1;
  v6[3] = v2;
  v6[4] = v6[0];
  v6[5] = 0LL;
  v6[6] = v1;
  v6[7] = v2;
  v6[8] = v3;
  while ( 1 )
  {
    v4 = (_QWORD *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v6);
    if ( !v4 )
      break;
    if ( *v4 == 0x8000000000000003LL )
    {
      if ( v4[1] == 0x8000000000000000LL )
        return 0LL;
      else
        return v4[2];
    }
  }
  if ( a1[12] == 0x8000000000000000LL )
    return 0LL;
  else
    return a1[13];
}