__int64 __fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  __int128 v8; // xmm0
  __int128 v9; // xmm1
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
  __int128 v21; // xmm1
  __int128 v24; // [rsp+20h] [rbp-278h] BYREF
  _BYTE v25[80]; // [rsp+30h] [rbp-268h]
  _QWORD v26[3]; // [rsp+80h] [rbp-218h] BYREF
  __int128 v27; // [rsp+98h] [rbp-200h] BYREF
  _BYTE v28[40]; // [rsp+A8h] [rbp-1F0h]
  __int128 v29; // [rsp+D0h] [rbp-1C8h] BYREF
  __int128 v30; // [rsp+E0h] [rbp-1B8h]
  __int128 v31; // [rsp+F0h] [rbp-1A8h]
  unsigned __int64 v32; // [rsp+100h] [rbp-198h]
  __int128 v33; // [rsp+108h] [rbp-190h] BYREF
  _BYTE v34[80]; // [rsp+118h] [rbp-180h]
  __int128 v35; // [rsp+168h] [rbp-130h] BYREF
  __int64 v36; // [rsp+178h] [rbp-120h]
  _OWORD v37[2]; // [rsp+180h] [rbp-118h] BYREF
  _OWORD v38[15]; // [rsp+1A0h] [rbp-F8h] BYREF

  v5 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a2);
  v6 = *(_QWORD *)(a3 + 112);
  if ( v5 <= v6 )
  {
    v20 = *a2;
    v21 = a2[1];
    v38[2] = a2[2];
    v38[1] = v21;
    v38[0] = v20;
    return uu_sort::merge::merge_without_limit((__int64)a1, (__int64)v38, a3);
  }
  v7 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a2);
  v8 = *a2;
  v9 = a2[1];
  *(_OWORD *)&v25[16] = a2[2];
  *(_OWORD *)v25 = v9;
  v24 = v8;
  itertools::Itertools::chunks(v38, &v24, v6);
  v26[0] = 0LL;
  v26[1] = 8LL;
  v26[2] = 0LL;
  if ( !v7 )
  {
LABEL_13:
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v24, v38);
    if ( (_QWORD)v24 != 0x8000000000000002LL )
    {
      core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>>(&v24);
      core::panicking::panic(aAssertionFaile_15, 42LL, &off_2002A0);
    }
    core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>>(&v24);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v33, v26);
    v19 = alloc::boxed::Box<T>::new();
    *(_OWORD *)v25 = *(_OWORD *)v34;
    v24 = v33;
    *(_QWORD *)&v25[16] = v19;
    *(_QWORD *)&v25[24] = &unk_200348;
    uu_sort::merge::merge_with_file_limit(a1, &v24, a3, a4);
    return core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(v38);
  }
  v32 = 0x8000000000000002LL;
  v10 = v7;
  while ( 1 )
  {
    v11 = v10 < v6;
    v10 -= v6;
    if ( v11 )
      v10 = 0LL;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v27, v38);
    if ( (_QWORD)v27 == v32 )
      core::option::unwrap_failed(&off_2002E0);
    v31 = *(_OWORD *)&v28[16];
    v30 = *(_OWORD *)v28;
    v29 = v27;
    uu_sort::merge::merge_without_limit((__int64)&v24, (__int64)&v29, a3);
    v12 = *((_QWORD *)&v24 + 1);
    v13 = *(_QWORD *)v25;
    if ( (_QWORD)v24 == 3LL )
    {
LABEL_16:
      a1[1] = v12;
      a1[2] = v13;
      *a1 = 3LL;
      goto LABEL_21;
    }
    *(_QWORD *)&v34[72] = *(_QWORD *)&v25[72];
    *(_OWORD *)&v34[56] = *(_OWORD *)&v25[56];
    *(_OWORD *)&v34[40] = *(_OWORD *)&v25[40];
    *(_OWORD *)&v34[24] = *(_OWORD *)&v25[24];
    *(_OWORD *)&v34[8] = *(_OWORD *)&v25[8];
    v33 = v24;
    *(_QWORD *)v34 = *(_QWORD *)v25;
    uu_sort::tmp_dir::TmpDirWrapper::next_file((__int64)&v29, a4);
    if ( *((_QWORD *)&v29 + 1) == 0x8000000000000000LL )
    {
      *(_OWORD *)(a1 + 1) = v30;
      *a1 = 3LL;
LABEL_19:
      core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v33);
      goto LABEL_21;
    }
    v37[0] = v29;
    v37[1] = v30;
    <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v24, v37);
    v14 = *(_QWORD *)v25;
    if ( (_QWORD)v24 == 0x8000000000000000LL )
    {
      a1[1] = *((_QWORD *)&v24 + 1);
      a1[2] = v14;
      *a1 = 3LL;
      goto LABEL_19;
    }
    *(_OWORD *)&v28[24] = *(_OWORD *)&v25[24];
    *(_OWORD *)&v28[8] = *(_OWORD *)&v25[8];
    v27 = v24;
    *(_QWORD *)v28 = *(_QWORD *)v25;
    *(_OWORD *)&v25[64] = *(_OWORD *)&v34[64];
    *(_OWORD *)&v25[48] = *(_OWORD *)&v34[48];
    *(_OWORD *)&v25[32] = *(_OWORD *)&v34[32];
    *(_OWORD *)&v25[16] = *(_OWORD *)&v34[16];
    *(_OWORD *)v25 = *(_OWORD *)v34;
    v24 = v33;
    v15 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v27);
    v16 = uu_sort::merge::FileMerger::write_all_to(&v24, a3, v15);
    if ( v16 )
      break;
    *(_QWORD *)&v25[32] = *(_QWORD *)&v28[32];
    *(_OWORD *)&v25[16] = *(_OWORD *)&v28[16];
    *(_OWORD *)v25 = *(_OWORD *)v28;
    v24 = v27;
    <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v29, &v24);
    v12 = *((_QWORD *)&v29 + 1);
    v13 = v30;
    if ( (_QWORD)v29 == 0x8000000000000000LL )
      goto LABEL_16;
    v35 = v29;
    v36 = v30;
    alloc::vec::Vec<T,A>::push(v26, &v35);
    v18 = v7 <= v6;
    v7 = v10;
    if ( v18 )
      goto LABEL_13;
  }
  a1[1] = v16;
  a1[2] = v17;
  *a1 = 3LL;
  core::ptr::drop_in_place<uu_sort::merge::WriteablePlainTmpFile>(&v27);
LABEL_21:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(v26);
  return core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(v38);
}
