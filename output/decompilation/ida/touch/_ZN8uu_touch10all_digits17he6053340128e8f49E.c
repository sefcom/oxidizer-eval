__int64 __fastcall uu_touch::all_digits(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+8h] [rbp-10h] BYREF

  v3[0] = a1;
  v3[1] = a1 + a2;
  return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(v3);
}