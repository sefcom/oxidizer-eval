__int64 __fastcall just::recipe::Recipe<D>::groups(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD v6[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a2[27];
  v3 = a2[28];
  v4 = v2;
  if ( v2 )
    v4 = a2[29];
  v6[0] = v2 != 0;
  v6[1] = 0LL;
  v6[2] = v2;
  v6[3] = v3;
  v6[4] = v6[0];
  v6[5] = 0LL;
  v6[6] = v2;
  v6[7] = v3;
  v6[8] = v4;
  return ((__int64 (__fastcall *)(__int64, _QWORD *))core::iter::traits::iterator::Iterator::collect)(a1, v6);
}