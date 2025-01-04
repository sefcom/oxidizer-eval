_QWORD *__fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int128 *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v5; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r12
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int128 v11; // xmm0
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  bool v14; // cf
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  bool v21; // cc
  __int64 v22; // rax
  __int64 v24; // [rsp+18h] [rbp-350h]
  unsigned __int64 v25; // [rsp+20h] [rbp-348h]
  __int128 v27; // [rsp+30h] [rbp-338h] BYREF
  _BYTE v28[96]; // [rsp+40h] [rbp-328h]
  _QWORD v29[3]; // [rsp+A8h] [rbp-2C0h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-2A8h]
  unsigned __int64 v31; // [rsp+C8h] [rbp-2A0h]
  __int128 v32; // [rsp+D0h] [rbp-298h] BYREF
  _BYTE v33[96]; // [rsp+E0h] [rbp-288h]
  __int128 v34; // [rsp+140h] [rbp-228h] BYREF
  _BYTE v35[24]; // [rsp+150h] [rbp-218h]
  __int128 v36; // [rsp+168h] [rbp-200h]
  __int128 v37; // [rsp+178h] [rbp-1F0h]
  __int128 v38; // [rsp+188h] [rbp-1E0h]
  __int64 v39; // [rsp+198h] [rbp-1D0h]
  __int128 v40; // [rsp+1A0h] [rbp-1C8h] BYREF
  _BYTE v41[80]; // [rsp+1B0h] [rbp-1B8h]
  _OWORD v42[2]; // [rsp+200h] [rbp-168h] BYREF
  __int128 v43; // [rsp+220h] [rbp-148h] BYREF
  __int64 v44; // [rsp+230h] [rbp-138h]
  __int128 v45; // [rsp+238h] [rbp-130h]
  __int64 v46; // [rsp+248h] [rbp-120h]
  _OWORD v47[17]; // [rsp+250h] [rbp-118h] BYREF

  v5 = a1;
  v6 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a2);
  v7 = a3[14];
  if ( v6 <= v7 )
  {
    v11 = *a2;
    v47[1] = a2[1];
    v47[0] = v11;
    uu_sort::merge::merge_without_limit(a1, v47, a3);
    return v5;
  }
  v8 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a2);
  v9 = *a2;
  *(_OWORD *)v28 = a2[1];
  v27 = v9;
  itertools::Itertools::chunks(v47, &v27, v7);
  v29[0] = 0LL;
  v29[1] = 8LL;
  v29[2] = 0LL;
  if ( !v8 )
  {
LABEL_17:
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v27, v47);
    v5 = a1;
    if ( (_QWORD)v27 != 0x8000000000000002LL )
    {
      core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>>(&v27);
      core::panicking::panic(aAssertionFaile_15, 42LL, &off_2002A0);
    }
    core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>>(&v27);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v32, v29);
    v22 = alloc::boxed::Box<T>::new();
    *(_OWORD *)v28 = *(_OWORD *)v33;
    v27 = v32;
    *(_QWORD *)&v28[16] = v22;
    *(_QWORD *)&v28[24] = &unk_2002F8;
    uu_sort::merge::merge_with_file_limit(a1, &v27, a3, a4);
    goto LABEL_25;
  }
  v25 = v7;
  if ( a3[6] == 0x8000000000000000LL )
    v10 = 0LL;
  else
    v10 = a3[7];
  v24 = v10;
  v30 = a3[8];
  v31 = 0x8000000000000002LL;
  v12 = v8;
  v13 = v25;
  while ( 1 )
  {
    v14 = v12 < v13;
    v12 -= v13;
    if ( v14 )
      v12 = 0LL;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v27, v47);
    if ( (_QWORD)v27 == v31 )
      core::option::unwrap_failed(&off_2002E0);
    *(_OWORD *)&v33[64] = *(_OWORD *)&v28[64];
    *(_OWORD *)&v33[48] = *(_OWORD *)&v28[48];
    *(_OWORD *)&v33[32] = *(_OWORD *)&v28[32];
    *(_OWORD *)&v33[16] = *(_OWORD *)&v28[16];
    *(_OWORD *)v33 = *(_OWORD *)v28;
    v32 = v27;
    uu_sort::merge::merge_without_limit(&v34, &v32, a3);
    v15 = *((_QWORD *)&v34 + 1);
    v16 = *(_QWORD *)v35;
    if ( (_QWORD)v34 == 3LL )
    {
LABEL_19:
      v5 = a1;
      a1[1] = v15;
      a1[2] = v16;
      *a1 = 3LL;
      goto LABEL_24;
    }
    *(_QWORD *)&v41[72] = v39;
    *(_OWORD *)&v41[56] = v38;
    *(_OWORD *)&v41[40] = v37;
    *(_OWORD *)&v41[24] = v36;
    *(_OWORD *)&v41[8] = *(_OWORD *)&v35[8];
    v40 = v34;
    *(_QWORD *)v41 = *(_QWORD *)v35;
    uu_sort::tmp_dir::TmpDirWrapper::next_file(&v34, a4);
    if ( *((_QWORD *)&v34 + 1) == 0x8000000000000000LL )
    {
      v5 = a1;
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v35;
LABEL_22:
      *v5 = 3LL;
      core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v40);
      goto LABEL_24;
    }
    v42[0] = v34;
    v42[1] = *(_OWORD *)v35;
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v27, v42, v24, v30);
    v17 = *(_QWORD *)v28;
    if ( (_QWORD)v27 == 0x8000000000000000LL )
    {
      v5 = a1;
      a1[1] = *((_QWORD *)&v27 + 1);
      a1[2] = v17;
      goto LABEL_22;
    }
    *(_QWORD *)&v33[88] = *(_QWORD *)&v28[88];
    *(_OWORD *)&v33[72] = *(_OWORD *)&v28[72];
    *(_OWORD *)&v33[56] = *(_OWORD *)&v28[56];
    *(_OWORD *)&v33[40] = *(_OWORD *)&v28[40];
    *(_OWORD *)&v33[24] = *(_OWORD *)&v28[24];
    *(_OWORD *)&v33[8] = *(_OWORD *)&v28[8];
    v32 = v27;
    *(_QWORD *)v33 = *(_QWORD *)v28;
    *(_OWORD *)&v28[64] = *(_OWORD *)&v41[64];
    *(_OWORD *)&v28[48] = *(_OWORD *)&v41[48];
    *(_OWORD *)&v28[32] = *(_OWORD *)&v41[32];
    *(_OWORD *)&v28[16] = *(_OWORD *)&v41[16];
    *(_OWORD *)v28 = *(_OWORD *)v41;
    v27 = v40;
    v18 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v32);
    v19 = uu_sort::merge::FileMerger::write_all_to(&v27, a3, v18);
    if ( v19 )
      break;
    *(_OWORD *)&v28[80] = *(_OWORD *)&v33[80];
    *(_OWORD *)&v28[64] = *(_OWORD *)&v33[64];
    *(_OWORD *)&v28[48] = *(_OWORD *)&v33[48];
    *(_OWORD *)&v28[32] = *(_OWORD *)&v33[32];
    *(_OWORD *)&v28[16] = *(_OWORD *)&v33[16];
    *(_OWORD *)v28 = *(_OWORD *)v33;
    v27 = v32;
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v34, &v27);
    v15 = *((_QWORD *)&v34 + 1);
    v16 = *(_QWORD *)v35;
    if ( (_QWORD)v34 == 0x8000000000000000LL )
      goto LABEL_19;
    v46 = v36;
    v45 = *(_OWORD *)&v35[8];
    v43 = v34;
    v44 = *(_QWORD *)v35;
    alloc::vec::Vec<T,A>::push(v29, &v43);
    v13 = v25;
    v21 = v8 <= v25;
    v8 = v12;
    if ( v21 )
      goto LABEL_17;
  }
  v5 = a1;
  a1[1] = v19;
  a1[2] = v20;
  *a1 = 3LL;
  core::ptr::drop_in_place<uu_sort::merge::WriteableCompressedTmpFile>(&v32);
LABEL_24:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>(v29);
LABEL_25:
  core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>(v47);
  return v5;
}
