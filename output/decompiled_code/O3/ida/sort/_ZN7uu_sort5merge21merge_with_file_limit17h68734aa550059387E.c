__int64 __fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r13
  bool v10; // cf
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  bool v17; // cc
  __int64 v18; // rax
  __int64 v20; // [rsp+8h] [rbp-260h] BYREF
  __int64 v21; // [rsp+10h] [rbp-258h]
  __int64 v22; // [rsp+18h] [rbp-250h]
  __int128 v23; // [rsp+20h] [rbp-248h] BYREF
  __int128 v24; // [rsp+30h] [rbp-238h]
  __int64 v25; // [rsp+40h] [rbp-228h]
  __int128 v26; // [rsp+50h] [rbp-218h] BYREF
  _BYTE v27[80]; // [rsp+60h] [rbp-208h]
  _QWORD v28[3]; // [rsp+B0h] [rbp-1B8h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-1A0h] BYREF
  _BYTE v30[40]; // [rsp+D8h] [rbp-190h]
  __int128 v31; // [rsp+100h] [rbp-168h] BYREF
  _BYTE v32[80]; // [rsp+110h] [rbp-158h]
  __int128 v33; // [rsp+160h] [rbp-108h] BYREF
  __int64 v34; // [rsp+170h] [rbp-F8h]
  _OWORD v35[2]; // [rsp+178h] [rbp-F0h] BYREF
  _BYTE v36[208]; // [rsp+198h] [rbp-D0h] BYREF

  v22 = a5;
  v20 = a2;
  v21 = a3;
  v6 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v20);
  v7 = *(_QWORD *)(a4 + 112);
  if ( v6 <= v7 )
    return uu_sort::merge::merge_without_limit(a1, v20, v21, a4);
  v8 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v20);
  itertools::Itertools::chunks(v36, v20, v21, v7);
  v28[0] = 0LL;
  v28[1] = 8LL;
  v28[2] = 0LL;
  if ( !v8 )
  {
LABEL_13:
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v26, v36);
    if ( (_DWORD)v26 != 3 )
    {
      core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::merge::merge::{{closure}}>>>>(&v26);
      core::panicking::panic(aAssertionFaile_15, 42LL, &off_2002A0);
    }
    core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::merge::merge::{{closure}}>>>>(&v26);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v31, v28);
    v18 = alloc::boxed::Box<T>::new();
    *(_OWORD *)v27 = *(_OWORD *)v32;
    v26 = v31;
    *(_QWORD *)&v27[16] = v18;
    *(_QWORD *)&v27[24] = &unk_2002B8;
    uu_sort::merge::merge_with_file_limit(a1, &v26, a4, v22);
    return core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::merge::merge::{{closure}}>>>(v36);
  }
  v9 = v8;
  while ( 1 )
  {
    v10 = v9 < v7;
    v9 -= v7;
    if ( v10 )
      v9 = 0LL;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v29, v36);
    if ( (_DWORD)v29 == 3 )
      core::option::unwrap_failed(&off_2002E0);
    v25 = *(_QWORD *)&v30[16];
    v24 = *(_OWORD *)v30;
    v23 = v29;
    uu_sort::merge::merge_without_limit(&v26, &v23, a4);
    v11 = *((_QWORD *)&v26 + 1);
    v12 = *(_QWORD *)v27;
    if ( (_QWORD)v26 == 3LL )
    {
LABEL_16:
      a1[1] = v11;
      a1[2] = v12;
      *a1 = 3LL;
      goto LABEL_21;
    }
    *(_QWORD *)&v32[72] = *(_QWORD *)&v27[72];
    *(_OWORD *)&v32[56] = *(_OWORD *)&v27[56];
    *(_OWORD *)&v32[40] = *(_OWORD *)&v27[40];
    *(_OWORD *)&v32[24] = *(_OWORD *)&v27[24];
    *(_OWORD *)&v32[8] = *(_OWORD *)&v27[8];
    v31 = v26;
    *(_QWORD *)v32 = *(_QWORD *)v27;
    uu_sort::tmp_dir::TmpDirWrapper::next_file(&v23, v22);
    if ( *((_QWORD *)&v23 + 1) == 0x8000000000000000LL )
    {
      *(_OWORD *)(a1 + 1) = v24;
      *a1 = 3LL;
LABEL_19:
      core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v31);
      goto LABEL_21;
    }
    v35[0] = v23;
    v35[1] = v24;
    <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v26, v35);
    v13 = *(_QWORD *)v27;
    if ( (_QWORD)v26 == 0x8000000000000000LL )
    {
      a1[1] = *((_QWORD *)&v26 + 1);
      a1[2] = v13;
      *a1 = 3LL;
      goto LABEL_19;
    }
    *(_OWORD *)&v30[24] = *(_OWORD *)&v27[24];
    *(_OWORD *)&v30[8] = *(_OWORD *)&v27[8];
    v29 = v26;
    *(_QWORD *)v30 = *(_QWORD *)v27;
    *(_OWORD *)&v27[64] = *(_OWORD *)&v32[64];
    *(_OWORD *)&v27[48] = *(_OWORD *)&v32[48];
    *(_OWORD *)&v27[32] = *(_OWORD *)&v32[32];
    *(_OWORD *)&v27[16] = *(_OWORD *)&v32[16];
    *(_OWORD *)v27 = *(_OWORD *)v32;
    v26 = v31;
    v14 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v29);
    v15 = uu_sort::merge::FileMerger::write_all_to(&v26, a4, v14);
    if ( v15 )
      break;
    *(_QWORD *)&v27[32] = *(_QWORD *)&v30[32];
    *(_OWORD *)&v27[16] = *(_OWORD *)&v30[16];
    *(_OWORD *)v27 = *(_OWORD *)v30;
    v26 = v29;
    <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v23, &v26);
    v11 = *((_QWORD *)&v23 + 1);
    v12 = v24;
    if ( (_QWORD)v23 == 0x8000000000000000LL )
      goto LABEL_16;
    v33 = v23;
    v34 = v24;
    alloc::vec::Vec<T,A>::push(v28, &v33);
    v17 = v8 <= v7;
    v8 = v9;
    if ( v17 )
      goto LABEL_13;
  }
  a1[1] = v15;
  a1[2] = v16;
  *a1 = 3LL;
  core::ptr::drop_in_place<uu_sort::merge::WriteablePlainTmpFile>(&v29);
LABEL_21:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(v28);
  return core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::merge::merge::{{closure}}>>>(v36);
}
