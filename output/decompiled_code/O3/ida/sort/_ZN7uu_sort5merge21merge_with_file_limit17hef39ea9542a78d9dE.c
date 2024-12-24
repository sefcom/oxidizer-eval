_QWORD *__fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int128 *a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r12
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int128 v10; // xmm0
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rax
  bool v13; // cf
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  bool v20; // cc
  __int64 v21; // rax
  __int64 v23; // [rsp+18h] [rbp-350h]
  unsigned __int64 v24; // [rsp+20h] [rbp-348h]
  __int128 v26; // [rsp+30h] [rbp-338h] BYREF
  _BYTE v27[96]; // [rsp+40h] [rbp-328h]
  _QWORD v28[3]; // [rsp+A8h] [rbp-2C0h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-2A8h]
  unsigned __int64 v30; // [rsp+C8h] [rbp-2A0h]
  __int128 v31; // [rsp+D0h] [rbp-298h] BYREF
  _BYTE v32[96]; // [rsp+E0h] [rbp-288h]
  __int128 v33; // [rsp+140h] [rbp-228h] BYREF
  _BYTE v34[24]; // [rsp+150h] [rbp-218h]
  __int128 v35; // [rsp+168h] [rbp-200h]
  __int128 v36; // [rsp+178h] [rbp-1F0h]
  __int128 v37; // [rsp+188h] [rbp-1E0h]
  __int64 v38; // [rsp+198h] [rbp-1D0h]
  __int128 v39; // [rsp+1A0h] [rbp-1C8h] BYREF
  _BYTE v40[80]; // [rsp+1B0h] [rbp-1B8h]
  _OWORD v41[2]; // [rsp+200h] [rbp-168h] BYREF
  __int128 v42; // [rsp+220h] [rbp-148h] BYREF
  __int64 v43; // [rsp+230h] [rbp-138h]
  __int128 v44; // [rsp+238h] [rbp-130h]
  __int64 v45; // [rsp+248h] [rbp-120h]
  _OWORD v46[17]; // [rsp+250h] [rbp-118h] BYREF

  v5 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a2);
  v6 = a3[14];
  if ( v5 <= v6 )
  {
    v10 = *a2;
    v46[1] = a2[1];
    v46[0] = v10;
    uu_sort::merge::merge_without_limit((__int64)a1, (__int64)v46, (__int64)a3);
    return a1;
  }
  v7 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a2);
  v8 = *a2;
  *(_OWORD *)v27 = a2[1];
  v26 = v8;
  itertools::Itertools::chunks(v46, &v26, v6);
  v28[0] = 0LL;
  v28[1] = 8LL;
  v28[2] = 0LL;
  if ( !v7 )
  {
LABEL_17:
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v26, v46);
    if ( (_QWORD)v26 != 0x8000000000000002LL )
    {
      core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>>(&v26);
      core::panicking::panic(aAssertionFaile_15, 42LL, &off_1FF778);
    }
    core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>>(&v26);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v31, v28);
    v21 = alloc::boxed::Box<T>::new();
    *(_OWORD *)v27 = *(_OWORD *)v32;
    v26 = v31;
    *(_QWORD *)&v27[16] = v21;
    *(_QWORD *)&v27[24] = &unk_1FF870;
    uu_sort::merge::merge_with_file_limit(a1, &v26, a3, a4);
    goto LABEL_25;
  }
  v24 = v6;
  if ( a3[6] == 0x8000000000000000LL )
    v9 = 0LL;
  else
    v9 = a3[7];
  v23 = v9;
  v29 = a3[8];
  v30 = 0x8000000000000002LL;
  v11 = v7;
  v12 = v24;
  while ( 1 )
  {
    v13 = v11 < v12;
    v11 -= v12;
    if ( v13 )
      v11 = 0LL;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v26, v46);
    if ( (_QWORD)v26 == v30 )
      core::option::unwrap_failed(&off_1FF7B8);
    *(_OWORD *)&v32[64] = *(_OWORD *)&v27[64];
    *(_OWORD *)&v32[48] = *(_OWORD *)&v27[48];
    *(_OWORD *)&v32[32] = *(_OWORD *)&v27[32];
    *(_OWORD *)&v32[16] = *(_OWORD *)&v27[16];
    *(_OWORD *)v32 = *(_OWORD *)v27;
    v31 = v26;
    uu_sort::merge::merge_without_limit((__int64)&v33, (__int64)&v31, (__int64)a3);
    v14 = *((_QWORD *)&v33 + 1);
    v15 = *(_QWORD *)v34;
    if ( (_QWORD)v33 == 3LL )
    {
LABEL_19:
      a1[1] = v14;
      a1[2] = v15;
      *a1 = 3LL;
      goto LABEL_24;
    }
    *(_QWORD *)&v40[72] = v38;
    *(_OWORD *)&v40[56] = v37;
    *(_OWORD *)&v40[40] = v36;
    *(_OWORD *)&v40[24] = v35;
    *(_OWORD *)&v40[8] = *(_OWORD *)&v34[8];
    v39 = v33;
    *(_QWORD *)v40 = *(_QWORD *)v34;
    uu_sort::tmp_dir::TmpDirWrapper::next_file((__int64)&v33, a4);
    if ( *((_QWORD *)&v33 + 1) == 0x8000000000000000LL )
    {
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v34;
LABEL_22:
      *a1 = 3LL;
      core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v39);
      goto LABEL_24;
    }
    v41[0] = v33;
    v41[1] = *(_OWORD *)v34;
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v26, v41, v23, v29);
    v16 = *(_QWORD *)v27;
    if ( (_QWORD)v26 == 0x8000000000000000LL )
    {
      a1[1] = *((_QWORD *)&v26 + 1);
      a1[2] = v16;
      goto LABEL_22;
    }
    *(_QWORD *)&v32[88] = *(_QWORD *)&v27[88];
    *(_OWORD *)&v32[72] = *(_OWORD *)&v27[72];
    *(_OWORD *)&v32[56] = *(_OWORD *)&v27[56];
    *(_OWORD *)&v32[40] = *(_OWORD *)&v27[40];
    *(_OWORD *)&v32[24] = *(_OWORD *)&v27[24];
    *(_OWORD *)&v32[8] = *(_OWORD *)&v27[8];
    v31 = v26;
    *(_QWORD *)v32 = *(_QWORD *)v27;
    *(_OWORD *)&v27[64] = *(_OWORD *)&v40[64];
    *(_OWORD *)&v27[48] = *(_OWORD *)&v40[48];
    *(_OWORD *)&v27[32] = *(_OWORD *)&v40[32];
    *(_OWORD *)&v27[16] = *(_OWORD *)&v40[16];
    *(_OWORD *)v27 = *(_OWORD *)v40;
    v26 = v39;
    v17 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v31);
    v18 = uu_sort::merge::FileMerger::write_all_to(&v26, (__int64)a3, v17);
    if ( v18 )
      break;
    *(_OWORD *)&v27[80] = *(_OWORD *)&v32[80];
    *(_OWORD *)&v27[64] = *(_OWORD *)&v32[64];
    *(_OWORD *)&v27[48] = *(_OWORD *)&v32[48];
    *(_OWORD *)&v27[32] = *(_OWORD *)&v32[32];
    *(_OWORD *)&v27[16] = *(_OWORD *)&v32[16];
    *(_OWORD *)v27 = *(_OWORD *)v32;
    v26 = v31;
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v33, &v26);
    v14 = *((_QWORD *)&v33 + 1);
    v15 = *(_QWORD *)v34;
    if ( (_QWORD)v33 == 0x8000000000000000LL )
      goto LABEL_19;
    v45 = v35;
    v44 = *(_OWORD *)&v34[8];
    v42 = v33;
    v43 = *(_QWORD *)v34;
    alloc::vec::Vec<T,A>::push(v28, &v42);
    v12 = v24;
    v20 = v7 <= v24;
    v7 = v11;
    if ( v20 )
      goto LABEL_17;
  }
  a1[1] = v18;
  a1[2] = v19;
  *a1 = 3LL;
  core::ptr::drop_in_place<uu_sort::merge::WriteableCompressedTmpFile>(&v31);
LABEL_24:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>(v28);
LABEL_25:
  core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>(v46);
  return a1;
}
