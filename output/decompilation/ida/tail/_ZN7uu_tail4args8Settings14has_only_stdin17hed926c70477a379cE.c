__int64 __fastcall uu_tail::args::Settings::has_only_stdin(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD v3[2]; // [rsp+8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 32) + 48LL * *(_QWORD *)(a1 + 40);
  v3[0] = *(_QWORD *)(a1 + 32);
  v3[1] = v1;
  return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(v3);
}