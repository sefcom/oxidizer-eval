__int64 __fastcall flealib::fleaserver::remove_newline_characters(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // rdx
  __int64 v5; // [rsp+0h] [rbp-58h] BYREF
  __int64 v6; // [rsp+8h] [rbp-50h]
  __int64 v7; // [rsp+10h] [rbp-48h]
  _BYTE v8[8]; // [rsp+18h] [rbp-40h] BYREF
  __int64 v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+28h] [rbp-30h]
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  <T as alloc::slice::hack::ConvertVec>::to_vec(&v5);
  alloc::str::<impl str>::replace(v8, v6, v7, 10LL);
  core::ptr::drop_in_place<alloc::string::String>(&v5);
  alloc::str::<impl str>::replace(&v5, v9, v10, 13LL);
  v1 = v6;
  v2 = v7;
  v11[0] = v6;
  v11[1] = v6 + v7;
  if ( !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(v11) )
    core::option::unwrap_failed(&off_70B1D0);
  <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v3, v1, v2, &off_70B1E8);
  <T as alloc::slice::hack::ConvertVec>::to_vec(a1);
  core::ptr::drop_in_place<alloc::string::String>(&v5);
  return core::ptr::drop_in_place<alloc::string::String>(v8);
}