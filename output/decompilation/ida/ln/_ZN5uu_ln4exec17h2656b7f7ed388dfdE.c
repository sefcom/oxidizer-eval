__int64 __fastcall uu_ln::exec(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  _BYTE v10[8]; // [rsp+8h] [rbp-50h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h]
  __int128 *v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+20h] [rbp-38h]

  if ( *(_QWORD *)(a3 + 24) != 0x8000000000000000LL )
  {
    std::sys::os_str::bytes::Slice::to_owned(v10, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40));
    v5 = uu_ln::link_files_in_dir((__int64)a1, a2, v11, v12, a3);
    goto LABEL_6;
  }
  if ( !*(_BYTE *)(a3 + 51) )
  {
    if ( a2 == 1 )
    {
      std::sys::os_str::bytes::Slice::to_owned(v10, asc_1EC68, 1LL);
      v5 = uu_ln::link_files_in_dir((__int64)a1, 1LL, v11, v12, a3);
    }
    else
    {
      if ( !a2 )
        core::option::unwrap_failed(&off_12CE78);
      std::sys::os_str::bytes::Slice::to_owned(v10, a1[3 * a2 - 2], a1[3 * a2 - 1]);
      if ( a2 <= 2 && !(unsigned __int8)std::path::Path::is_dir(v11, v12) )
      {
        core::ptr::drop_in_place<std::path::PathBuf>(v10);
        return uu_ln::link(*(_OWORD *)(a1 + 1), a1[4], a1[5], a3);
      }
      v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a2 - 1, a1, a2);
      v5 = uu_ln::link_files_in_dir(v8, v9, v11, v12, a3);
    }
LABEL_6:
    v6 = v5;
    core::ptr::drop_in_place<std::path::PathBuf>(v10);
    return v6;
  }
  if ( a2 == 1 )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v10, a1);
    v4 = 0x8000000000000003LL;
LABEL_11:
    v13 = v4;
    return alloc::boxed::Box<T>::new(v10);
  }
  if ( a2 > 2 )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v10, a1 + 6);
    v4 = 0x8000000000000004LL;
    goto LABEL_11;
  }
  if ( !a2 )
    core::panicking::panic(aAssertionFaile_3, 35LL, &off_12CF50);
  return uu_ln::link(*(_OWORD *)(a1 + 1), a1[4], a1[5], a3);
}
