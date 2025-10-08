__int64 __fastcall bat::style::StyleComponentList::contains_override(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD v3[2]; // [rsp+8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 8) + 2LL * *(_QWORD *)(a1 + 16);
  v3[0] = *(_QWORD *)(a1 + 8);
  v3[1] = v1;
  return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v3);
}