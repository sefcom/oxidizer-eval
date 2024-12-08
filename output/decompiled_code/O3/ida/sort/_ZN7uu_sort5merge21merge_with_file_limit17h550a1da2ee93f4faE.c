_QWORD *__fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  __int128 v9; // xmm0
  unsigned __int64 v10; // r13
  bool v11; // cf
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  bool v18; // cc
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v23; // [rsp+20h] [rbp-268h] BYREF
  _BYTE v24[80]; // [rsp+30h] [rbp-258h]
  _QWORD v25[3]; // [rsp+80h] [rbp-208h] BYREF
  __int128 v26; // [rsp+98h] [rbp-1F0h] BYREF
  _BYTE v27[40]; // [rsp+A8h] [rbp-1E0h]
  __int128 v28; // [rsp+D0h] [rbp-1B8h] BYREF
  __int128 v29; // [rsp+E0h] [rbp-1A8h]
  __int128 v30; // [rsp+F0h] [rbp-198h]
  unsigned __int64 v31; // [rsp+100h] [rbp-188h]
  __int128 v32; // [rsp+108h] [rbp-180h] BYREF
  _BYTE v33[80]; // [rsp+118h] [rbp-170h]
  __int128 v34; // [rsp+168h] [rbp-120h] BYREF
  __int64 v35; // [rsp+178h] [rbp-110h]
  _OWORD v36[2]; // [rsp+180h] [rbp-108h] BYREF
  _OWORD v37[14]; // [rsp+1A0h] [rbp-E8h] BYREF

  v5 = a1;
  v6 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a2);
  v7 = *(_QWORD *)(a3 + 112);
  if ( v6 <= v7 )
  {
    v20 = *a2;
    v37[1] = a2[1];
    v37[0] = v20;
    uu_sort::merge::merge_without_limit(a1, v37, a3);
    return v5;
  }
  v8 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a2);
  v9 = *a2;
  *(_OWORD *)v24 = a2[1];
  v23 = v9;
  itertools::Itertools::chunks(v37, &v23, v7);
  v25[0] = 0LL;
  v25[1] = 8LL;
  v25[2] = 0LL;
  if ( !v8 )
  {
LABEL_13:
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v23, v37);
    v5 = a1;
    if ( (_QWORD)v23 != 0x8000000000000002LL )
    {
      core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>>(&v23);
      core::panicking::panic(aAssertionFaile_15, 42LL, &off_1FF778);
    }
    core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>>(&v23);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v32, v25);
    v19 = alloc::boxed::Box<T>::new();
    *(_OWORD *)v24 = *(_OWORD *)v33;
    v23 = v32;
    *(_QWORD *)&v24[16] = v19;
    *(_QWORD *)&v24[24] = &unk_1FF790;
    uu_sort::merge::merge_with_file_limit(a1, &v23, a3, a4);
    goto LABEL_22;
  }
  v31 = 0x8000000000000002LL;
  v10 = v8;
  while ( 1 )
  {
    v11 = v10 < v7;
    v10 -= v7;
    if ( v11 )
      v10 = 0LL;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v26, v37);
    if ( (_QWORD)v26 == v31 )
      core::option::unwrap_failed(&off_1FF7B8);
    v30 = *(_OWORD *)&v27[16];
    v29 = *(_OWORD *)v27;
    v28 = v26;
    uu_sort::merge::merge_without_limit(&v23, &v28, a3);
    v12 = *((_QWORD *)&v23 + 1);
    v13 = *(_QWORD *)v24;
    if ( (_QWORD)v23 == 3LL )
    {
LABEL_16:
      v5 = a1;
      a1[1] = v12;
      a1[2] = v13;
      *a1 = 3LL;
      goto LABEL_21;
    }
    *(_QWORD *)&v33[72] = *(_QWORD *)&v24[72];
    *(_OWORD *)&v33[56] = *(_OWORD *)&v24[56];
    *(_OWORD *)&v33[40] = *(_OWORD *)&v24[40];
    *(_OWORD *)&v33[24] = *(_OWORD *)&v24[24];
    *(_OWORD *)&v33[8] = *(_OWORD *)&v24[8];
    v32 = v23;
    *(_QWORD *)v33 = *(_QWORD *)v24;
    uu_sort::tmp_dir::TmpDirWrapper::next_file(&v28, a4);
    if ( *((_QWORD *)&v28 + 1) == 0x8000000000000000LL )
    {
      v5 = a1;
      *(_OWORD *)(a1 + 1) = v29;
LABEL_19:
      *v5 = 3LL;
      core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v32);
      goto LABEL_21;
    }
    v36[0] = v28;
    v36[1] = v29;
    <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v23, v36);
    v14 = *(_QWORD *)v24;
    if ( (_QWORD)v23 == 0x8000000000000000LL )
    {
      v5 = a1;
      a1[1] = *((_QWORD *)&v23 + 1);
      a1[2] = v14;
      goto LABEL_19;
    }
    *(_OWORD *)&v27[24] = *(_OWORD *)&v24[24];
    *(_OWORD *)&v27[8] = *(_OWORD *)&v24[8];
    v26 = v23;
    *(_QWORD *)v27 = *(_QWORD *)v24;
    *(_OWORD *)&v24[64] = *(_OWORD *)&v33[64];
    *(_OWORD *)&v24[48] = *(_OWORD *)&v33[48];
    *(_OWORD *)&v24[32] = *(_OWORD *)&v33[32];
    *(_OWORD *)&v24[16] = *(_OWORD *)&v33[16];
    *(_OWORD *)v24 = *(_OWORD *)v33;
    v23 = v32;
    v15 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v26);
    v16 = uu_sort::merge::FileMerger::write_all_to(&v23, a3, v15);
    if ( v16 )
      break;
    *(_QWORD *)&v24[32] = *(_QWORD *)&v27[32];
    *(_OWORD *)&v24[16] = *(_OWORD *)&v27[16];
    *(_OWORD *)v24 = *(_OWORD *)v27;
    v23 = v26;
    <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v28, &v23);
    v12 = *((_QWORD *)&v28 + 1);
    v13 = v29;
    if ( (_QWORD)v28 == 0x8000000000000000LL )
      goto LABEL_16;
    v34 = v28;
    v35 = v29;
    alloc::vec::Vec<T,A>::push(v25, &v34);
    v18 = v8 <= v7;
    v8 = v10;
    if ( v18 )
      goto LABEL_13;
  }
  v5 = a1;
  a1[1] = v16;
  a1[2] = v17;
  *a1 = 3LL;
  core::ptr::drop_in_place<uu_sort::merge::WriteablePlainTmpFile>(&v26);
LABEL_21:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(v25);
LABEL_22:
  core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>(v37);
  return v5;
}
