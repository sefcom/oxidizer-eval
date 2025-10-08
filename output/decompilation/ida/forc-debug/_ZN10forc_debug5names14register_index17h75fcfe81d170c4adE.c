__int64 __fastcall forc_debug::names::register_index(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v4[2]; // [rsp+18h] [rbp-10h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  v4[0] = &off_1F8CA70;
  v4[1] = &off_1F8CB70;
  return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(v4, v3);
}