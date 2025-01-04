__int64 __fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v11; // r13
  bool v12; // cf
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  bool v19; // cc
  __int64 v20; // rax
  __int64 v21; // [rsp+10h] [rbp-2D8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-2D0h]
  __int64 v23; // [rsp+20h] [rbp-2C8h]
  __int64 v24; // [rsp+28h] [rbp-2C0h]
  __int128 v25; // [rsp+30h] [rbp-2B8h] BYREF
  _BYTE v26[96]; // [rsp+40h] [rbp-2A8h]
  __int128 v27; // [rsp+A0h] [rbp-248h] BYREF
  _BYTE v28[24]; // [rsp+B0h] [rbp-238h]
  __int64 v29; // [rsp+C8h] [rbp-220h]
  _QWORD v30[3]; // [rsp+D8h] [rbp-210h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-1F8h]
  __int128 v32; // [rsp+F8h] [rbp-1F0h] BYREF
  _BYTE v33[96]; // [rsp+108h] [rbp-1E0h]
  __int128 v34; // [rsp+168h] [rbp-180h] BYREF
  _BYTE v35[80]; // [rsp+178h] [rbp-170h]
  _OWORD v36[2]; // [rsp+1C8h] [rbp-120h] BYREF
  __int128 v37; // [rsp+1E8h] [rbp-100h] BYREF
  __int64 v38; // [rsp+1F8h] [rbp-F0h]
  __int128 v39; // [rsp+200h] [rbp-E8h]
  __int64 v40; // [rsp+210h] [rbp-D8h]
  _BYTE v41[208]; // [rsp+218h] [rbp-D0h] BYREF

  v24 = a5;
  v21 = a2;
  v22 = a3;
  v6 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v21);
  v7 = a4[14];
  if ( v6 <= v7 )
    return uu_sort::merge::merge_without_limit(a1, v21, v22, a4);
  v8 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v21);
  itertools::Itertools::chunks(v41, v21, v22, v7);
  v30[0] = 0LL;
  v30[1] = 8LL;
  v30[2] = 0LL;
  if ( !v8 )
  {
LABEL_17:
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v25, v41);
    if ( (_DWORD)v25 != 3 )
    {
      core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::merge::merge::{{closure}}>>>>(&v25);
      core::panicking::panic(aAssertionFaile_15, 42LL, &off_2002A0);
    }
    core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::merge::merge::{{closure}}>>>>(&v25);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v32, v30);
    v20 = alloc::boxed::Box<T>::new();
    *(_OWORD *)v26 = *(_OWORD *)v33;
    v25 = v32;
    *(_QWORD *)&v26[16] = v20;
    *(_QWORD *)&v26[24] = &unk_200370;
    uu_sort::merge::merge_with_file_limit(a1, &v25, a4, v24);
    return core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::merge::merge::{{closure}}>>>(v41);
  }
  if ( a4[6] == 0x8000000000000000LL )
    v9 = 0LL;
  else
    v9 = a4[7];
  v23 = v9;
  v31 = a4[8];
  v11 = v8;
  while ( 1 )
  {
    v12 = v11 < v7;
    v11 -= v7;
    if ( v12 )
      v11 = 0LL;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v32, v41);
    if ( (_DWORD)v32 == 3 )
      core::option::unwrap_failed(&off_2002E0);
    *(_QWORD *)&v28[16] = *(_QWORD *)&v33[16];
    *(_OWORD *)v28 = *(_OWORD *)v33;
    v27 = v32;
    uu_sort::merge::merge_without_limit(&v25, &v27, a4);
    v13 = *((_QWORD *)&v25 + 1);
    v14 = *(_QWORD *)v26;
    if ( (_QWORD)v25 == 3LL )
    {
LABEL_19:
      a1[1] = v13;
      a1[2] = v14;
      *a1 = 3LL;
      goto LABEL_24;
    }
    *(_QWORD *)&v35[72] = *(_QWORD *)&v26[72];
    *(_OWORD *)&v35[56] = *(_OWORD *)&v26[56];
    *(_OWORD *)&v35[40] = *(_OWORD *)&v26[40];
    *(_OWORD *)&v35[24] = *(_OWORD *)&v26[24];
    *(_OWORD *)&v35[8] = *(_OWORD *)&v26[8];
    v34 = v25;
    *(_QWORD *)v35 = *(_QWORD *)v26;
    uu_sort::tmp_dir::TmpDirWrapper::next_file(&v27, v24);
    if ( *((_QWORD *)&v27 + 1) == 0x8000000000000000LL )
    {
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v28;
      *a1 = 3LL;
LABEL_22:
      core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v34);
      goto LABEL_24;
    }
    v36[0] = v27;
    v36[1] = *(_OWORD *)v28;
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v25, v36, v23, v31);
    v15 = *(_QWORD *)v26;
    if ( (_QWORD)v25 == 0x8000000000000000LL )
    {
      a1[1] = *((_QWORD *)&v25 + 1);
      a1[2] = v15;
      *a1 = 3LL;
      goto LABEL_22;
    }
    *(_QWORD *)&v33[88] = *(_QWORD *)&v26[88];
    *(_OWORD *)&v33[72] = *(_OWORD *)&v26[72];
    *(_OWORD *)&v33[56] = *(_OWORD *)&v26[56];
    *(_OWORD *)&v33[40] = *(_OWORD *)&v26[40];
    *(_OWORD *)&v33[24] = *(_OWORD *)&v26[24];
    *(_OWORD *)&v33[8] = *(_OWORD *)&v26[8];
    v32 = v25;
    *(_QWORD *)v33 = *(_QWORD *)v26;
    *(_OWORD *)&v26[64] = *(_OWORD *)&v35[64];
    *(_OWORD *)&v26[48] = *(_OWORD *)&v35[48];
    *(_OWORD *)&v26[32] = *(_OWORD *)&v35[32];
    *(_OWORD *)&v26[16] = *(_OWORD *)&v35[16];
    *(_OWORD *)v26 = *(_OWORD *)v35;
    v25 = v34;
    v16 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v32);
    v17 = uu_sort::merge::FileMerger::write_all_to(&v25, a4, v16);
    if ( v17 )
      break;
    *(_OWORD *)&v26[80] = *(_OWORD *)&v33[80];
    *(_OWORD *)&v26[64] = *(_OWORD *)&v33[64];
    *(_OWORD *)&v26[48] = *(_OWORD *)&v33[48];
    *(_OWORD *)&v26[32] = *(_OWORD *)&v33[32];
    *(_OWORD *)&v26[16] = *(_OWORD *)&v33[16];
    *(_OWORD *)v26 = *(_OWORD *)v33;
    v25 = v32;
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v27, &v25);
    v13 = *((_QWORD *)&v27 + 1);
    v14 = *(_QWORD *)v28;
    if ( (_QWORD)v27 == 0x8000000000000000LL )
      goto LABEL_19;
    v40 = v29;
    v39 = *(_OWORD *)&v28[8];
    v37 = v27;
    v38 = *(_QWORD *)v28;
    alloc::vec::Vec<T,A>::push(v30, &v37);
    v19 = v8 <= v7;
    v8 = v11;
    if ( v19 )
      goto LABEL_17;
  }
  a1[1] = v17;
  a1[2] = v18;
  *a1 = 3LL;
  core::ptr::drop_in_place<uu_sort::merge::WriteableCompressedTmpFile>(&v32);
LABEL_24:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>(v30);
  return core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::merge::merge::{{closure}}>>>(v41);
}
