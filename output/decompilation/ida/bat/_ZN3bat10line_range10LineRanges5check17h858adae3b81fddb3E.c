char __fastcall bat::line_range::LineRanges::check(_QWORD *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v5; // r12
  __int64 v6; // rcx
  char result; // al
  unsigned __int64 v8; // rcx
  bool v9; // cf
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v13[6]; // [rsp+18h] [rbp-30h] BYREF

  v5 = a3;
  v11 = a2;
  v12[0] = a3;
  v12[1] = a4;
  v6 = a1[1] + 32LL * a1[2];
  v13[0] = a1[1];
  v13[1] = v6;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD *, unsigned __int64 *, _QWORD *))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any)(
                          v13,
                          &v11,
                          v12) )
    return 0;
  if ( (v5 & 1) == 0 )
    return 2 - (a2 < a1[3]);
  v8 = 0LL;
  v9 = a4 < a1[4];
  v10 = a4 - a1[4];
  if ( !v9 )
    v8 = v10;
  result = 2;
  if ( a2 <= v8 )
    return 2 - (a2 < a1[3]);
  return result;
}