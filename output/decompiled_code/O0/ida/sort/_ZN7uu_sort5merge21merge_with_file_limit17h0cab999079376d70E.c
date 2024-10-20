_QWORD *__fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int128 *a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  bool v6; // cf
  unsigned __int64 v7; // rax
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  bool v21; // cc
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r13
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v34; // rax
  __int64 v35; // [rsp+10h] [rbp-668h] BYREF
  __int64 v36; // [rsp+18h] [rbp-660h]
  __int64 v37; // [rsp+20h] [rbp-658h]
  unsigned __int64 v38; // [rsp+28h] [rbp-650h]
  __int64 v39; // [rsp+30h] [rbp-648h]
  char *v40; // [rsp+38h] [rbp-640h] BYREF
  __int128 v41; // [rsp+40h] [rbp-638h]
  __int128 v42; // [rsp+50h] [rbp-628h]
  __int64 v43; // [rsp+60h] [rbp-618h] BYREF
  __int64 v44; // [rsp+68h] [rbp-610h]
  __int128 v45; // [rsp+70h] [rbp-608h]
  __int128 v46; // [rsp+80h] [rbp-5F8h]
  __m256i v47; // [rsp+90h] [rbp-5E8h]
  __int128 v48; // [rsp+B0h] [rbp-5C8h] BYREF
  _BYTE v49[80]; // [rsp+C0h] [rbp-5B8h]
  __int128 v50; // [rsp+110h] [rbp-568h] BYREF
  _BYTE v51[96]; // [rsp+120h] [rbp-558h] BYREF
  _QWORD v52[2]; // [rsp+180h] [rbp-4F8h] BYREF
  __int128 v53; // [rsp+190h] [rbp-4E8h]
  _OWORD v54[2]; // [rsp+1A0h] [rbp-4D8h] BYREF
  __int64 v55; // [rsp+1C0h] [rbp-4B8h]
  void *v56; // [rsp+1C8h] [rbp-4B0h]
  __int128 v57; // [rsp+1D0h] [rbp-4A8h] BYREF
  __m256i v58; // [rsp+1E0h] [rbp-498h]
  __int128 v59; // [rsp+200h] [rbp-478h]
  __int128 v60; // [rsp+210h] [rbp-468h]
  __int128 v61; // [rsp+220h] [rbp-458h]
  _OWORD v62[3]; // [rsp+230h] [rbp-448h] BYREF
  _OWORD v63[3]; // [rsp+260h] [rbp-418h] BYREF
  _OWORD v64[6]; // [rsp+290h] [rbp-3E8h] BYREF
  _OWORD v65[6]; // [rsp+2F0h] [rbp-388h] BYREF
  _OWORD v66[6]; // [rsp+350h] [rbp-328h] BYREF
  _OWORD v67[7]; // [rsp+3B0h] [rbp-2C8h] BYREF
  __int128 v68; // [rsp+420h] [rbp-258h] BYREF
  __int64 v69; // [rsp+430h] [rbp-248h]
  __int128 v70; // [rsp+438h] [rbp-240h]
  __int128 v71; // [rsp+448h] [rbp-230h]
  __int128 v72; // [rsp+458h] [rbp-220h]
  __int128 v73; // [rsp+468h] [rbp-210h]
  __int64 v74; // [rsp+478h] [rbp-200h]
  __int128 v75; // [rsp+480h] [rbp-1F8h] BYREF
  __int64 v76; // [rsp+490h] [rbp-1E8h]
  __int128 v77; // [rsp+498h] [rbp-1E0h]
  __int128 v78; // [rsp+4A8h] [rbp-1D0h]
  __int128 v79; // [rsp+4B8h] [rbp-1C0h]
  __int128 v80; // [rsp+4C8h] [rbp-1B0h]
  __int128 v81; // [rsp+4D8h] [rbp-1A0h]
  __int64 v82; // [rsp+4E8h] [rbp-190h]
  _QWORD v83[12]; // [rsp+4F0h] [rbp-188h] BYREF
  char v84[8]; // [rsp+550h] [rbp-128h] BYREF
  char v85[288]; // [rsp+558h] [rbp-120h] BYREF

  v39 = a4;
  v5 = *((_QWORD *)a2 + 3);
  v6 = v5 < *((_QWORD *)a2 + 1);
  v7 = v5 - *((_QWORD *)a2 + 1);
  if ( v6 )
    core::panicking::panic_nounwind(anon_ff3add0fc2121d489142e144a6a370f6_24_llvm_5182399808099546885, 71LL);
  v9 = a1;
  v10 = v7 / 0x30;
  v11 = a3[14];
  if ( v7 / 0x30 <= v11 )
  {
    v31 = *a2;
    v32 = a2[1];
    v62[2] = a2[2];
    v62[1] = v32;
    v62[0] = v31;
    uu_sort::merge::merge_without_limit(a1, v62, a3);
    return v9;
  }
  v12 = *a2;
  v13 = a2[1];
  v61 = a2[2];
  v60 = v13;
  v59 = v12;
  if ( !v11 )
    core::panicking::panic(
      anon_ff3add0fc2121d489142e144a6a370f6_41_llvm_5182399808099546885,
      27LL,
      &anon_ff3add0fc2121d489142e144a6a370f6_43_llvm_5182399808099546885);
  v14 = *a2;
  v15 = a2[1];
  v63[2] = a2[2];
  v63[1] = v15;
  v63[0] = v14;
  itertools::groupbylazy::new_chunks(v84, v63);
  v40 = v84;
  v35 = 0LL;
  v36 = 8LL;
  v37 = 0LL;
  v38 = 0x8000000000000002LL;
  v16 = v10;
  do
  {
    v22 = a3[14];
    v6 = v16 < v22;
    v16 -= v22;
    if ( v6 )
      v16 = 0LL;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(v64, &v40);
    if ( *(_QWORD *)&v64[0] == v38 )
      core::option::unwrap_failed(&off_1D4C20);
    v65[5] = v64[5];
    v65[4] = v64[4];
    v65[3] = v64[3];
    v65[2] = v64[2];
    v65[1] = v64[1];
    v65[0] = v64[0];
    uu_sort::merge::merge_without_limit(&v68, v65, a3);
    v23 = *((_QWORD *)&v68 + 1);
    v24 = v69;
    if ( (_QWORD)v68 == 3LL )
    {
LABEL_20:
      v9 = a1;
      a1[1] = v23;
      a1[2] = v24;
      *a1 = 3LL;
      goto LABEL_24;
    }
    *(_QWORD *)&v49[72] = v74;
    *(_OWORD *)&v49[56] = v73;
    *(_OWORD *)&v49[40] = v72;
    *(_OWORD *)&v49[24] = v71;
    *(_OWORD *)&v49[8] = v70;
    v48 = v68;
    *(_QWORD *)v49 = v69;
    uu_sort::tmp_dir::TmpDirWrapper::next_file(&v43, v39);
    if ( v44 == 0x8000000000000000LL )
    {
      v27 = *((_QWORD *)&v45 + 1);
      v26 = v45;
LABEL_22:
      v9 = a1;
      a1[1] = v26;
      a1[2] = v27;
      *a1 = 3LL;
      core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v48);
LABEL_24:
      core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>(&v35);
      goto LABEL_25;
    }
    v52[0] = v43;
    v52[1] = v44;
    v53 = v45;
    if ( a3[6] == 0x8000000000000000LL )
    {
      v25 = 0LL;
    }
    else
    {
      v25 = a3[7];
      v4 = a3[8];
      core::slice::raw::from_raw_parts::precondition_check(v25, 1LL, 1LL, v4);
    }
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v75, v52, v25, v4);
    v26 = *((_QWORD *)&v75 + 1);
    v27 = v76;
    if ( (_QWORD)v75 == 0x8000000000000000LL )
      goto LABEL_22;
    *(_QWORD *)&v51[88] = v82;
    *(_OWORD *)&v51[72] = v81;
    *(_OWORD *)&v51[56] = v80;
    *(_OWORD *)&v51[40] = v79;
    *(_OWORD *)&v51[24] = v78;
    *(_OWORD *)&v51[8] = v77;
    v50 = v75;
    *(_QWORD *)v51 = v76;
    v66[0] = v48;
    v66[1] = *(_OWORD *)v49;
    v66[2] = *(_OWORD *)&v49[16];
    v66[3] = *(_OWORD *)&v49[32];
    v66[4] = *(_OWORD *)&v49[48];
    v66[5] = *(_OWORD *)&v49[64];
    v28 = uu_sort::merge::FileMerger::write_all_to(v66, a3, &v51[32]);
    if ( v28 )
    {
      v9 = a1;
      a1[1] = v28;
      a1[2] = v29;
      *a1 = 3LL;
      core::ptr::drop_in_place<uu_sort::merge::WriteableCompressedTmpFile>(&v50);
      goto LABEL_24;
    }
    v67[6] = *(_OWORD *)&v51[80];
    v67[5] = *(_OWORD *)&v51[64];
    v67[4] = *(_OWORD *)&v51[48];
    v67[3] = *(_OWORD *)&v51[32];
    v67[2] = *(_OWORD *)&v51[16];
    v67[1] = *(_OWORD *)v51;
    v67[0] = v50;
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v57, v67);
    v23 = *((_QWORD *)&v57 + 1);
    v24 = v58.m256i_i64[0];
    if ( (_QWORD)v57 == 0x8000000000000000LL )
      goto LABEL_20;
    v47 = v58;
    v46 = v57;
    v30 = v37;
    if ( v37 == v35 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v35);
    v17 = v36;
    v18 = 48 * v30;
    v19 = v46;
    v20 = *(_OWORD *)v47.m256i_i8;
    *(_OWORD *)(v36 + v18 + 32) = *(_OWORD *)&v47.m256i_u64[2];
    *(_OWORD *)(v17 + v18 + 16) = v20;
    *(_OWORD *)(v17 + v18) = v19;
    v37 = v30 + 1;
    v21 = v10 <= v22;
    v10 = v16;
  }
  while ( !v21 );
  <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(v83, &v40);
  v9 = a1;
  if ( v83[0] != v38 )
  {
    core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>>(v83);
    core::panicking::panic(aAssertionFaile_25, 42LL, &off_1D4BE0);
  }
  *(_QWORD *)&v41 = v36;
  *(_QWORD *)&v42 = v35;
  *((_QWORD *)&v41 + 1) = v36;
  *((_QWORD *)&v42 + 1) = v36 + 48 * v37;
  v34 = alloc::alloc::Global::alloc_impl(1LL, 1LL, 0LL, 0LL);
  if ( !v34 )
    alloc::alloc::handle_alloc_error(1LL, 0LL);
  v54[1] = v42;
  v54[0] = v41;
  v55 = v34;
  v56 = &unk_1D4BF8;
  uu_sort::merge::merge_with_file_limit(a1, v54, a3, v39);
LABEL_25:
  core::ptr::drop_in_place<itertools::groupbylazy::GroupInner<usize,core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>,itertools::groupbylazy::ChunkIndex>>(v85);
  return v9;
}
