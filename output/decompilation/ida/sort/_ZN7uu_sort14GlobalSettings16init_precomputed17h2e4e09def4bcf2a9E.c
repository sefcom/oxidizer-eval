__int64 __fastcall uu_sort::GlobalSettings::init_precomputed(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r14
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = v1 + 56LL * *(_QWORD *)(a1 + 16);
  v4[0] = v1;
  v4[1] = v2;
  *(_BYTE *)(a1 + 96) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v4);
  *(_QWORD *)(a1 + 88) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v1, v2);
  *(_QWORD *)(a1 + 72) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v1, v2);
  result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v1, v2);
  *(_QWORD *)(a1 + 80) = result;
  return result;
}
