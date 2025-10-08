__int64 __fastcall uu_sort::merge::merge_with_file_limit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  char v16; // r14
  char v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  __int128 v22; // [rsp+10h] [rbp-328h] BYREF
  _BYTE v23[80]; // [rsp+20h] [rbp-318h]
  __int64 v24; // [rsp+70h] [rbp-2C8h] BYREF
  __int64 v25; // [rsp+78h] [rbp-2C0h]
  unsigned __int64 v26; // [rsp+80h] [rbp-2B8h]
  __int128 *v27; // [rsp+88h] [rbp-2B0h]
  __int64 v28; // [rsp+90h] [rbp-2A8h]
  __int128 v29; // [rsp+98h] [rbp-2A0h] BYREF
  _BYTE v30[40]; // [rsp+A8h] [rbp-290h]
  __int128 v31; // [rsp+D0h] [rbp-268h] BYREF
  __int128 v32; // [rsp+E0h] [rbp-258h]
  __int128 v33; // [rsp+F0h] [rbp-248h]
  _QWORD v34[3]; // [rsp+108h] [rbp-230h] BYREF
  __int128 v35; // [rsp+120h] [rbp-218h] BYREF
  _BYTE v36[80]; // [rsp+130h] [rbp-208h]
  __int64 v37; // [rsp+180h] [rbp-1B8h] BYREF
  __int64 v38; // [rsp+188h] [rbp-1B0h]
  __int128 v39; // [rsp+190h] [rbp-1A8h]
  __int64 v40; // [rsp+1A0h] [rbp-198h]
  unsigned __int64 v41; // [rsp+1A8h] [rbp-190h]
  unsigned __int64 v42; // [rsp+1B0h] [rbp-188h] BYREF
  _QWORD v43[3]; // [rsp+1B8h] [rbp-180h] BYREF
  __int128 v44; // [rsp+1D0h] [rbp-168h] BYREF
  __int64 v45; // [rsp+1E0h] [rbp-158h]
  _QWORD v46[2]; // [rsp+1E8h] [rbp-150h] BYREF
  __int128 v47; // [rsp+1F8h] [rbp-140h]
  _OWORD v48[2]; // [rsp+208h] [rbp-130h] BYREF
  __int64 v49; // [rsp+228h] [rbp-110h] BYREF
  __int64 v50; // [rsp+230h] [rbp-108h]
  __int64 v51; // [rsp+238h] [rbp-100h]
  __int128 v52; // [rsp+240h] [rbp-F8h]
  __int128 v53; // [rsp+250h] [rbp-E8h]
  __int128 v54; // [rsp+260h] [rbp-D8h]
  __int128 v55; // [rsp+270h] [rbp-C8h]
  __int64 v56; // [rsp+280h] [rbp-B8h]
  _QWORD v57[3]; // [rsp+288h] [rbp-B0h] BYREF
  __int128 v58; // [rsp+2A0h] [rbp-98h]
  __int128 v59; // [rsp+2B0h] [rbp-88h]
  __int128 v60; // [rsp+2C0h] [rbp-78h]
  __int128 v61; // [rsp+2D0h] [rbp-68h]
  __int64 v62; // [rsp+2E0h] [rbp-58h]
  _QWORD v63[10]; // [rsp+2E8h] [rbp-50h] BYREF

  v28 = a4;
  v4 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  v27 = (__int128 *)a1;
  v7 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(
         v6,
         *(_QWORD *)(a1 + 24));
  v8 = *(_QWORD *)(a2 + 112);
  if ( v7 <= v8 )
  {
    v14 = *v27;
    v15 = v27[1];
    *(_OWORD *)&v23[16] = v27[2];
    *(_OWORD *)v23 = v15;
    v22 = v14;
    uu_sort::merge::merge_without_limit(&v49, &v22, a2);
    v12 = v50;
    if ( v49 == 3 )
    {
LABEL_27:
      core::ptr::drop_in_place<uu_sort::Output>(a3);
    }
    else
    {
      v62 = v56;
      v61 = v55;
      v60 = v54;
      v59 = v53;
      v58 = v52;
      v57[0] = v49;
      v57[1] = v50;
      v57[2] = v51;
      return uu_sort::merge::FileMerger::write_all(v57, a2, a3);
    }
  }
  else
  {
    v40 = a2 + 112;
    v34[0] = 0LL;
    v34[1] = 8LL;
    v34[2] = 0LL;
    v24 = 0LL;
    v25 = 8LL;
    v26 = 0LL;
    v9 = *v27;
    v10 = v27[1];
    v33 = v27[2];
    v32 = v10;
    v31 = v9;
    v11 = 0LL;
    v41 = 0x8000000000000001LL;
    while ( 1 )
    {
      <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(v63, &v31);
      if ( v63[0] == v41 )
        break;
      alloc::vec::Vec<T,A>::push(&v24, v63);
      v11 = v26;
      if ( v26 >= v8 )
      {
        v42 = v26;
        if ( v26 != v8 )
        {
          *(_QWORD *)&v22 = 0LL;
          core::panicking::assert_failed(0LL, &v42, v40, &v22, &off_18C7D0);
        }
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v29, &v24);
        uu_sort::merge::merge_without_limit(&v22, &v29, v4);
        v12 = *((_QWORD *)&v22 + 1);
        if ( (_QWORD)v22 == 3LL )
        {
          v16 = 0;
          goto LABEL_24;
        }
        *(_QWORD *)&v36[72] = *(_QWORD *)&v23[72];
        *(_OWORD *)&v36[56] = *(_OWORD *)&v23[56];
        *(_OWORD *)&v36[40] = *(_OWORD *)&v23[40];
        *(_OWORD *)&v36[24] = *(_OWORD *)&v23[24];
        *(_OWORD *)&v36[8] = *(_OWORD *)&v23[8];
        v35 = v22;
        *(_QWORD *)v36 = *(_QWORD *)v23;
        v24 = 0LL;
        v25 = 8LL;
        v26 = 0LL;
        uu_sort::tmp_dir::TmpDirWrapper::next_file(&v37, v28);
        if ( v38 == 0x8000000000000000LL )
        {
          v12 = v39;
LABEL_21:
          v16 = 1;
          core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v35);
          goto LABEL_24;
        }
        v46[0] = v37;
        v46[1] = v38;
        v47 = v39;
        <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v22, v46);
        v12 = *((_QWORD *)&v22 + 1);
        if ( (_QWORD)v22 == 0x8000000000000000LL )
          goto LABEL_21;
        *(_OWORD *)&v30[24] = *(_OWORD *)&v23[24];
        *(_OWORD *)&v30[8] = *(_OWORD *)&v23[8];
        v29 = v22;
        *(_QWORD *)v30 = *(_QWORD *)v23;
        *(_OWORD *)&v23[64] = *(_OWORD *)&v36[64];
        *(_OWORD *)&v23[48] = *(_OWORD *)&v36[48];
        *(_OWORD *)&v23[32] = *(_OWORD *)&v36[32];
        *(_OWORD *)&v23[16] = *(_OWORD *)&v36[16];
        *(_OWORD *)v23 = *(_OWORD *)v36;
        v22 = v35;
        v13 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v29);
        v12 = uu_sort::merge::FileMerger::write_all_to(&v22, a2, v13);
        if ( v12 )
        {
          core::ptr::drop_in_place<uu_sort::merge::WriteablePlainTmpFile>(&v29);
LABEL_23:
          v16 = 1;
LABEL_24:
          core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v31);
          if ( v16 )
            core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v24);
LABEL_26:
          core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(v34);
          goto LABEL_27;
        }
        *(_QWORD *)&v23[32] = *(_QWORD *)&v30[32];
        *(_OWORD *)&v23[16] = *(_OWORD *)&v30[16];
        *(_OWORD *)v23 = *(_OWORD *)v30;
        v22 = v29;
        <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v37, &v22);
        v12 = v38;
        if ( v37 == 0x8000000000000000LL )
          goto LABEL_23;
        v43[0] = v37;
        v43[1] = v38;
        v43[2] = v39;
        alloc::vec::Vec<T,A>::push(v34, v43, &off_18C7E8);
        v11 = 0LL;
        v4 = a2;
      }
    }
    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v31);
    if ( v11 )
    {
      if ( v11 >= v8 )
        core::panicking::panic(aAssertionFaile_8, 57LL, &off_18C760);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v29, &v24);
      uu_sort::merge::merge_without_limit(&v22, &v29, v4);
      v12 = *((_QWORD *)&v22 + 1);
      if ( (_QWORD)v22 == 3LL )
        goto LABEL_26;
      *(_QWORD *)&v36[72] = *(_QWORD *)&v23[72];
      *(_OWORD *)&v36[56] = *(_OWORD *)&v23[56];
      *(_OWORD *)&v36[40] = *(_OWORD *)&v23[40];
      *(_OWORD *)&v36[24] = *(_OWORD *)&v23[24];
      *(_OWORD *)&v36[8] = *(_OWORD *)&v23[8];
      v35 = v22;
      *(_QWORD *)v36 = *(_QWORD *)v23;
      uu_sort::tmp_dir::TmpDirWrapper::next_file(&v31, v28);
      if ( *((_QWORD *)&v31 + 1) == 0x8000000000000000LL )
      {
        v12 = v32;
LABEL_33:
        core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v35);
        goto LABEL_26;
      }
      v48[0] = v31;
      v48[1] = v32;
      <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v22, v48);
      v12 = *((_QWORD *)&v22 + 1);
      if ( (_QWORD)v22 == 0x8000000000000000LL )
        goto LABEL_33;
      *(_OWORD *)&v30[24] = *(_OWORD *)&v23[24];
      *(_OWORD *)&v30[8] = *(_OWORD *)&v23[8];
      v29 = v22;
      *(_QWORD *)v30 = *(_QWORD *)v23;
      *(_OWORD *)&v23[64] = *(_OWORD *)&v36[64];
      *(_OWORD *)&v23[48] = *(_OWORD *)&v36[48];
      *(_OWORD *)&v23[32] = *(_OWORD *)&v36[32];
      *(_OWORD *)&v23[16] = *(_OWORD *)&v36[16];
      *(_OWORD *)v23 = *(_OWORD *)v36;
      v22 = v35;
      v20 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v29);
      v12 = uu_sort::merge::FileMerger::write_all_to(&v22, a2, v20);
      if ( v12 )
      {
        core::ptr::drop_in_place<uu_sort::merge::WriteablePlainTmpFile>(&v29);
        goto LABEL_26;
      }
      *(_QWORD *)&v23[32] = *(_QWORD *)&v30[32];
      *(_OWORD *)&v23[16] = *(_OWORD *)&v30[16];
      *(_OWORD *)v23 = *(_OWORD *)v30;
      v22 = v29;
      <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v31, &v22);
      v12 = *((_QWORD *)&v31 + 1);
      if ( (_QWORD)v31 == 0x8000000000000000LL )
        goto LABEL_26;
      v44 = v31;
      v45 = v32;
      alloc::vec::Vec<T,A>::push(v34, &v44, &off_18C778);
      v18 = 0;
      v4 = a2;
    }
    else
    {
      v18 = 1;
    }
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v35, v34);
    v19 = alloc::boxed::Box<T>::new();
    *(_OWORD *)v23 = *(_OWORD *)v36;
    v22 = v35;
    *(_QWORD *)&v23[16] = v19;
    *(_QWORD *)&v23[24] = &unk_18C790;
    v12 = uu_sort::merge::merge_with_file_limit(&v22, v4, a3, v28);
    if ( v18 )
      core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v24);
  }
  return v12;
}