__int64 __fastcall uu_ln::exec(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-80h] BYREF
  __int128 v12; // [rsp+10h] [rbp-78h] BYREF
  __int64 v13; // [rsp+20h] [rbp-68h]
  __int128 v14; // [rsp+28h] [rbp-60h]
  __int64 v15; // [rsp+38h] [rbp-50h]
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]
  __int128 v18; // [rsp+58h] [rbp-30h] BYREF
  __int64 v19; // [rsp+68h] [rbp-20h]

  if ( !__OFSUB__(0LL, *(_QWORD *)(a3 + 24)) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40));
    v4 = uu_ln::link_files_in_dir(a1, a2, v12, *((_QWORD *)&v12 + 1), a3);
    goto LABEL_6;
  }
  if ( !*(_BYTE *)(a3 + 51) )
  {
    if ( a2 == 1 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, asc_1A50D, 1LL);
      v4 = uu_ln::link_files_in_dir(a1, 1LL, v12, *((_QWORD *)&v12 + 1), a3);
    }
    else
    {
      if ( !a2 || &a1[3 * a2] == &off_18 )
        core::option::unwrap_failed(&off_F5F68);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, a1[3 * a2 - 2], a1[3 * a2 - 1]);
      if ( a2 <= 2 && !(unsigned __int8)std::path::Path::is_dir(v12, *((_QWORD *)&v12 + 1)) )
      {
        core::ptr::drop_in_place<std::path::PathBuf>(&v11);
        return uu_ln::link(a1[1], a1[2], a1[4], a1[5], a3);
      }
      v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a2 - 1, a1, a2);
      v4 = uu_ln::link_files_in_dir(v9, v10, v12, *((_QWORD *)&v12 + 1), a3);
    }
LABEL_6:
    v5 = v4;
    core::ptr::drop_in_place<std::path::PathBuf>(&v11);
    return v5;
  }
  if ( a2 == 1 )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v12, a1[1], a1[2]);
    v11 = 3LL;
    return alloc::boxed::Box<T>::new(&v11);
  }
  if ( a2 > 2 )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v16, a1[7], a1[8]);
    v6 = uucore::execution_phrase();
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v18, v6, v7);
    v15 = v19;
    v14 = v18;
    v12 = v16;
    v13 = v17;
    v11 = 4LL;
    return alloc::boxed::Box<T>::new(&v11);
  }
  if ( !a2 )
    core::panicking::panic(aAssertionFaile, 35LL, &off_F6020);
  return uu_ln::link(a1[1], a1[2], a1[4], a1[5], a3);
}