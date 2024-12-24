bool __fastcall uu_cksum::had_reset(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  bool result; // al
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]

  v11 = a1;
  v12 = a1 + 24 * a2;
  v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v11);
  v4 = v3;
  v11 = a1;
  v12 = a1 + 24 * a2;
  v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v11);
  v7 = v6;
  v11 = a1;
  v12 = a1 + 24 * a2;
  v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v11);
  result = 0;
  if ( v2 == 1 && v5 == 1 && v9 == 1 && v4 < v7 )
    return v7 < v8;
  return result;
}
