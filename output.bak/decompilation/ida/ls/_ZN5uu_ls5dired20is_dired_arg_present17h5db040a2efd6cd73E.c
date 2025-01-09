__int64 uu_ls::dired::is_dired_arg_present()
{
  unsigned int v0; // ebx
  _BYTE v2[8]; // [rsp+8h] [rbp-50h] BYREF
  __int64 v3; // [rsp+10h] [rbp-48h]
  __int64 v4; // [rsp+18h] [rbp-40h]
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  std::env::args(v6);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v2, v6);
  v5[0] = v3;
  v5[1] = v3 + 24 * v4;
  v0 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v5);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v2);
  return v0;
}
