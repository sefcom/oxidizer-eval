_QWORD *__fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  __int128 v8; // xmm0
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
  __int128 v19; // xmm0
  __int128 v22; // [rsp+20h] [rbp-268h] BYREF
  _BYTE v23[80]; // [rsp+30h] [rbp-258h]
  _QWORD v24[3]; // [rsp+80h] [rbp-208h] BYREF
  __int128 v25; // [rsp+98h] [rbp-1F0h] BYREF
  _BYTE v26[40]; // [rsp+A8h] [rbp-1E0h]
  __int128 v27; // [rsp+D0h] [rbp-1B8h] BYREF
  __int128 v28; // [rsp+E0h] [rbp-1A8h]
  __int128 v29; // [rsp+F0h] [rbp-198h]
  unsigned __int64 v30; // [rsp+100h] [rbp-188h]
  __int128 v31; // [rsp+108h] [rbp-180h] BYREF
  _BYTE v32[80]; // [rsp+118h] [rbp-170h]
  __int128 v33; // [rsp+168h] [rbp-120h] BYREF
  __int64 v34; // [rsp+178h] [rbp-110h]
  _OWORD v35[2]; // [rsp+180h] [rbp-108h] BYREF
  _OWORD v36[14]; // [rsp+1A0h] [rbp-E8h] BYREF

  v5 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a2);
  v6 = *(_QWORD *)(a3 + 112);
  if ( v5 <= v6 )
  {
    v19 = *a2;
    v36[1] = a2[1];
    v36[0] = v19;
    uu_sort::merge::merge_without_limit((__int64)a1, (__int64)v36, a3);
    return a1;
  }
  v7 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a2);
  v8 = *a2;
  *(_OWORD *)v23 = a2[1];
  v22 = v8;
  itertools::Itertools::chunks(v36, &v22, v6);
  v24[0] = 0LL;
  v24[1] = 8LL;
  v24[2] = 0LL;
  if ( !v7 )
  {
LABEL_13:
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v22, v36);
    if ( (_QWORD)v22 != 0x8000000000000002LL )
    {
      core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>>(&v22);
      core::panicking::panic(aAssertionFaile_15, 42LL, &off_1FF778);
    }
    core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>>(&v22);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v31, v24);
    v18 = alloc::boxed::Box<T>::new();
    *(_OWORD *)v23 = *(_OWORD *)v32;
    v22 = v31;
    *(_QWORD *)&v23[16] = v18;
    *(_QWORD *)&v23[24] = &unk_1FF790;
    uu_sort::merge::merge_with_file_limit(a1, &v22, a3, a4);
    goto LABEL_22;
  }
  v30 = 0x8000000000000002LL;
  v9 = v7;
  while ( 1 )
  {
    v10 = v9 < v6;
    v9 -= v6;
    if ( v10 )
      v9 = 0LL;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v25, v36);
    if ( (_QWORD)v25 == v30 )
      core::option::unwrap_failed(&off_1FF7B8);
    v29 = *(_OWORD *)&v26[16];
    v28 = *(_OWORD *)v26;
    v27 = v25;
    uu_sort::merge::merge_without_limit((__int64)&v22, (__int64)&v27, a3);
    v11 = *((_QWORD *)&v22 + 1);
    v12 = *(_QWORD *)v23;
    if ( (_QWORD)v22 == 3LL )
    {
LABEL_16:
      a1[1] = v11;
      a1[2] = v12;
      *a1 = 3LL;
      goto LABEL_21;
    }
    *(_QWORD *)&v32[72] = *(_QWORD *)&v23[72];
    *(_OWORD *)&v32[56] = *(_OWORD *)&v23[56];
    *(_OWORD *)&v32[40] = *(_OWORD *)&v23[40];
    *(_OWORD *)&v32[24] = *(_OWORD *)&v23[24];
    *(_OWORD *)&v32[8] = *(_OWORD *)&v23[8];
    v31 = v22;
    *(_QWORD *)v32 = *(_QWORD *)v23;
    uu_sort::tmp_dir::TmpDirWrapper::next_file((__int64)&v27, a4);
    if ( *((_QWORD *)&v27 + 1) == 0x8000000000000000LL )
    {
      *(_OWORD *)(a1 + 1) = v28;
LABEL_19:
      *a1 = 3LL;
      core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v31);
      goto LABEL_21;
    }
    v35[0] = v27;
    v35[1] = v28;
    <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v22, v35);
    v13 = *(_QWORD *)v23;
    if ( (_QWORD)v22 == 0x8000000000000000LL )
    {
      a1[1] = *((_QWORD *)&v22 + 1);
      a1[2] = v13;
      goto LABEL_19;
    }
    *(_OWORD *)&v26[24] = *(_OWORD *)&v23[24];
    *(_OWORD *)&v26[8] = *(_OWORD *)&v23[8];
    v25 = v22;
    *(_QWORD *)v26 = *(_QWORD *)v23;
    *(_OWORD *)&v23[64] = *(_OWORD *)&v32[64];
    *(_OWORD *)&v23[48] = *(_OWORD *)&v32[48];
    *(_OWORD *)&v23[32] = *(_OWORD *)&v32[32];
    *(_OWORD *)&v23[16] = *(_OWORD *)&v32[16];
    *(_OWORD *)v23 = *(_OWORD *)v32;
    v22 = v31;
    v14 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v25);
    v15 = uu_sort::merge::FileMerger::write_all_to(&v22, a3, v14);
    if ( v15 )
      break;
    *(_QWORD *)&v23[32] = *(_QWORD *)&v26[32];
    *(_OWORD *)&v23[16] = *(_OWORD *)&v26[16];
    *(_OWORD *)v23 = *(_OWORD *)v26;
    v22 = v25;
    <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v27, &v22);
    v11 = *((_QWORD *)&v27 + 1);
    v12 = v28;
    if ( (_QWORD)v27 == 0x8000000000000000LL )
      goto LABEL_16;
    v33 = v27;
    v34 = v28;
    alloc::vec::Vec<T,A>::push(v24, &v33);
    v17 = v7 <= v6;
    v7 = v9;
    if ( v17 )
      goto LABEL_13;
  }
  a1[1] = v15;
  a1[2] = v16;
  *a1 = 3LL;
  core::ptr::drop_in_place<uu_sort::merge::WriteablePlainTmpFile>(&v25);
LABEL_21:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(v24);
LABEL_22:
  core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>(v36);
  return a1;
}
