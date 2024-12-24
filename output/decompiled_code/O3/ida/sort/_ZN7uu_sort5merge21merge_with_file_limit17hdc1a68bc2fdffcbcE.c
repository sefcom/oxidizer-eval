__int64 __fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int128 *a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r12
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rax
  bool v16; // cf
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  bool v23; // cc
  __int64 v24; // rax
  __int64 v25; // [rsp+18h] [rbp-360h]
  unsigned __int64 v26; // [rsp+20h] [rbp-358h]
  __int128 v28; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v29[96]; // [rsp+40h] [rbp-338h]
  _QWORD v30[3]; // [rsp+A8h] [rbp-2D0h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-2B8h]
  unsigned __int64 v32; // [rsp+C8h] [rbp-2B0h]
  __int128 v33; // [rsp+D0h] [rbp-2A8h] BYREF
  _BYTE v34[96]; // [rsp+E0h] [rbp-298h]
  __int128 v35; // [rsp+140h] [rbp-238h] BYREF
  _BYTE v36[24]; // [rsp+150h] [rbp-228h]
  __int128 v37; // [rsp+168h] [rbp-210h]
  __int128 v38; // [rsp+178h] [rbp-200h]
  __int128 v39; // [rsp+188h] [rbp-1F0h]
  __int64 v40; // [rsp+198h] [rbp-1E0h]
  __int128 v41; // [rsp+1A0h] [rbp-1D8h] BYREF
  _BYTE v42[80]; // [rsp+1B0h] [rbp-1C8h]
  _OWORD v43[2]; // [rsp+200h] [rbp-178h] BYREF
  __int128 v44; // [rsp+220h] [rbp-158h] BYREF
  __int64 v45; // [rsp+230h] [rbp-148h]
  __int128 v46; // [rsp+238h] [rbp-140h]
  __int64 v47; // [rsp+248h] [rbp-130h]
  _OWORD v48[18]; // [rsp+250h] [rbp-128h] BYREF

  v5 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a2);
  v6 = a3[14];
  if ( v5 <= v6 )
  {
    v11 = *a2;
    v12 = a2[1];
    v48[2] = a2[2];
    v48[1] = v12;
    v48[0] = v11;
    return uu_sort::merge::merge_without_limit((__int64)a1, (__int64)v48, (__int64)a3);
  }
  v7 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a2);
  v8 = *a2;
  v9 = a2[1];
  *(_OWORD *)&v29[16] = a2[2];
  *(_OWORD *)v29 = v9;
  v28 = v8;
  itertools::Itertools::chunks(v48, &v28, v6);
  v30[0] = 0LL;
  v30[1] = 8LL;
  v30[2] = 0LL;
  if ( !v7 )
  {
LABEL_17:
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v28, v48);
    if ( (_QWORD)v28 != 0x8000000000000002LL )
    {
      core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>>(&v28);
      core::panicking::panic(aAssertionFaile_15, 42LL, &off_1FF778);
    }
    core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>>(&v28);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v33, v30);
    v24 = alloc::boxed::Box<T>::new();
    *(_OWORD *)v29 = *(_OWORD *)v34;
    v28 = v33;
    *(_QWORD *)&v29[16] = v24;
    *(_QWORD *)&v29[24] = &unk_1FF848;
    uu_sort::merge::merge_with_file_limit(a1, &v28, a3, a4);
    return core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(v48);
  }
  v26 = v6;
  if ( a3[6] == 0x8000000000000000LL )
    v10 = 0LL;
  else
    v10 = a3[7];
  v25 = v10;
  v31 = a3[8];
  v32 = 0x8000000000000002LL;
  v14 = v7;
  v15 = v26;
  while ( 1 )
  {
    v16 = v14 < v15;
    v14 -= v15;
    if ( v16 )
      v14 = 0LL;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v28, v48);
    if ( (_QWORD)v28 == v32 )
      core::option::unwrap_failed(&off_1FF7B8);
    *(_OWORD *)&v34[64] = *(_OWORD *)&v29[64];
    *(_OWORD *)&v34[48] = *(_OWORD *)&v29[48];
    *(_OWORD *)&v34[32] = *(_OWORD *)&v29[32];
    *(_OWORD *)&v34[16] = *(_OWORD *)&v29[16];
    *(_OWORD *)v34 = *(_OWORD *)v29;
    v33 = v28;
    uu_sort::merge::merge_without_limit((__int64)&v35, (__int64)&v33, (__int64)a3);
    v17 = *((_QWORD *)&v35 + 1);
    v18 = *(_QWORD *)v36;
    if ( (_QWORD)v35 == 3LL )
    {
LABEL_19:
      a1[1] = v17;
      a1[2] = v18;
      *a1 = 3LL;
      goto LABEL_24;
    }
    *(_QWORD *)&v42[72] = v40;
    *(_OWORD *)&v42[56] = v39;
    *(_OWORD *)&v42[40] = v38;
    *(_OWORD *)&v42[24] = v37;
    *(_OWORD *)&v42[8] = *(_OWORD *)&v36[8];
    v41 = v35;
    *(_QWORD *)v42 = *(_QWORD *)v36;
    uu_sort::tmp_dir::TmpDirWrapper::next_file((__int64)&v35, a4);
    if ( *((_QWORD *)&v35 + 1) == 0x8000000000000000LL )
    {
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v36;
      *a1 = 3LL;
LABEL_22:
      core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v41);
      goto LABEL_24;
    }
    v43[0] = v35;
    v43[1] = *(_OWORD *)v36;
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v28, v43, v25, v31);
    v19 = *(_QWORD *)v29;
    if ( (_QWORD)v28 == 0x8000000000000000LL )
    {
      a1[1] = *((_QWORD *)&v28 + 1);
      a1[2] = v19;
      *a1 = 3LL;
      goto LABEL_22;
    }
    *(_QWORD *)&v34[88] = *(_QWORD *)&v29[88];
    *(_OWORD *)&v34[72] = *(_OWORD *)&v29[72];
    *(_OWORD *)&v34[56] = *(_OWORD *)&v29[56];
    *(_OWORD *)&v34[40] = *(_OWORD *)&v29[40];
    *(_OWORD *)&v34[24] = *(_OWORD *)&v29[24];
    *(_OWORD *)&v34[8] = *(_OWORD *)&v29[8];
    v33 = v28;
    *(_QWORD *)v34 = *(_QWORD *)v29;
    *(_OWORD *)&v29[64] = *(_OWORD *)&v42[64];
    *(_OWORD *)&v29[48] = *(_OWORD *)&v42[48];
    *(_OWORD *)&v29[32] = *(_OWORD *)&v42[32];
    *(_OWORD *)&v29[16] = *(_OWORD *)&v42[16];
    *(_OWORD *)v29 = *(_OWORD *)v42;
    v28 = v41;
    v20 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v33);
    v21 = uu_sort::merge::FileMerger::write_all_to(&v28, (__int64)a3, v20);
    if ( v21 )
      break;
    *(_OWORD *)&v29[80] = *(_OWORD *)&v34[80];
    *(_OWORD *)&v29[64] = *(_OWORD *)&v34[64];
    *(_OWORD *)&v29[48] = *(_OWORD *)&v34[48];
    *(_OWORD *)&v29[32] = *(_OWORD *)&v34[32];
    *(_OWORD *)&v29[16] = *(_OWORD *)&v34[16];
    *(_OWORD *)v29 = *(_OWORD *)v34;
    v28 = v33;
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v35, &v28);
    v17 = *((_QWORD *)&v35 + 1);
    v18 = *(_QWORD *)v36;
    if ( (_QWORD)v35 == 0x8000000000000000LL )
      goto LABEL_19;
    v47 = v37;
    v46 = *(_OWORD *)&v36[8];
    v44 = v35;
    v45 = *(_QWORD *)v36;
    alloc::vec::Vec<T,A>::push(v30, &v44);
    v15 = v26;
    v23 = v7 <= v26;
    v7 = v14;
    if ( v23 )
      goto LABEL_17;
  }
  a1[1] = v21;
  a1[2] = v22;
  *a1 = 3LL;
  core::ptr::drop_in_place<uu_sort::merge::WriteableCompressedTmpFile>(&v33);
LABEL_24:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>(v30);
  return core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(v48);
}
