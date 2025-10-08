__int64 __fastcall uu_chmod::extract_negative_modes(__int64 a1, __int128 *a2)
{
  __int64 v2; // rbp
  __int128 v3; // kr00_16
  __int64 v4; // r15
  __int64 v5; // r15
  __int128 v7; // [rsp+10h] [rbp-108h] BYREF
  __int64 v8; // [rsp+20h] [rbp-F8h]
  __int128 v9; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-E0h]
  __int128 v11; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-C8h]
  __int128 v13; // [rsp+58h] [rbp-C0h]
  __int64 v14; // [rsp+68h] [rbp-B0h]
  __int128 v15; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+80h] [rbp-98h]
  __int128 v17; // [rsp+90h] [rbp-88h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-78h]
  __int128 v19; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-58h]
  __int128 v21; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-38h]

  core::iter::traits::iterator::Iterator::partition(&v11);
  v2 = v12;
  v18 = v12;
  v17 = v11;
  v19 = v13;
  v20 = v14;
  *(_QWORD *)&v9 = 0LL;
  *((_QWORD *)&v9 + 1) = 8LL;
  v10 = 0LL;
  if ( v12 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, aW, 1LL);
    v8 = v12;
    v7 = v11;
    alloc::vec::Vec<T,A>::push(&v9, &v7, &off_EAD98);
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11, &v19);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
    &v9,
    &v11);
  <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::next(&v15, a2);
  v3 = v15;
  if ( __OFSUB__(-(__int64)v15, 1LL) )
  {
    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(
      0x8000000000000000LL,
      *((_QWORD *)&v15 + 1));
  }
  else
  {
    v4 = v16;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, asc_18CE4, 2LL);
    v8 = v12;
    v7 = v11;
    alloc::vec::Vec<T,A>::push(&v9, &v7, &off_EADB0);
    v11 = v3;
    v12 = v4;
    alloc::vec::Vec<T,A>::push(&v9, &v11, &off_EADC8);
  }
  v21 = *a2;
  v22 = *((_QWORD *)a2 + 2);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v9, &v21);
  core::iter::traits::iterator::Iterator::collect(&v7, *((_QWORD *)&v17 + 1), *((_QWORD *)&v17 + 1) + 24 * v2);
  v5 = *((_QWORD *)&v7 + 1);
  alloc::str::join_generic_copy(&v11, *((_QWORD *)&v7 + 1), v8);
  v16 = v12;
  v15 = v11;
  core::option::Option<T>::filter(a1, &v15);
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v7, v5);
  *(_QWORD *)(a1 + 40) = v10;
  *(_OWORD *)(a1 + 24) = v9;
  return core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v17);
}