__int64 __fastcall uu_dircolors::generate_type_output(__int64 a1, _BYTE *a2)
{
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+8h] [rbp-30h]
  __int64 v5; // [rsp+10h] [rbp-28h]
  __int128 v6; // [rsp+18h] [rbp-20h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  if ( *a2 == 2 )
  {
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(
      &v3,
      &anon_82c3ed8cdb07ba982e54791b0c97d0cf_114_llvm_541762227079851447,
      &anon_82c3ed8cdb07ba982e54791b0c97d0cf_248_llvm_541762227079851447);
    alloc::str::join_generic_copy(&v6, v4, v5, asc_23433, 1LL);
  }
  else
  {
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(
      &v3,
      &anon_82c3ed8cdb07ba982e54791b0c97d0cf_114_llvm_541762227079851447,
      &anon_82c3ed8cdb07ba982e54791b0c97d0cf_248_llvm_541762227079851447);
    alloc::str::join_generic_copy(&v6, v4, v5, asc_23434, 1LL);
  }
  *(_QWORD *)(a1 + 16) = v7;
  *(_OWORD *)a1 = v6;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
  return a1;
}
