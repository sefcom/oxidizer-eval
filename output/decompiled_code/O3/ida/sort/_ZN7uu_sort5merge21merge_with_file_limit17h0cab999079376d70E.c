__int64 __fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int128 *a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rcx
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  _QWORD *v8; // r15
  __int64 v9; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  bool v16; // cc
  unsigned __int64 v17; // rbx
  bool v18; // cf
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rbx
  _QWORD *v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // [rsp+8h] [rbp-360h] BYREF
  __int64 v30; // [rsp+10h] [rbp-358h]
  __int64 v31; // [rsp+18h] [rbp-350h]
  __int64 v32; // [rsp+20h] [rbp-348h]
  unsigned __int64 v33; // [rsp+28h] [rbp-340h]
  _QWORD *v34; // [rsp+30h] [rbp-338h]
  __int64 v35; // [rsp+38h] [rbp-330h]
  __int128 v36; // [rsp+40h] [rbp-328h] BYREF
  _BYTE v37[96]; // [rsp+50h] [rbp-318h]
  __int64 v38; // [rsp+B8h] [rbp-2B0h]
  __int128 v39; // [rsp+C0h] [rbp-2A8h] BYREF
  _BYTE v40[96]; // [rsp+D0h] [rbp-298h] BYREF
  __int128 v41; // [rsp+130h] [rbp-238h]
  __m256i v42; // [rsp+140h] [rbp-228h]
  __int128 v43; // [rsp+160h] [rbp-208h] BYREF
  _BYTE v44[24]; // [rsp+170h] [rbp-1F8h]
  __int128 v45; // [rsp+188h] [rbp-1E0h]
  __int128 v46; // [rsp+198h] [rbp-1D0h]
  __int128 v47; // [rsp+1A8h] [rbp-1C0h]
  __int64 v48; // [rsp+1B8h] [rbp-1B0h]
  __int128 v49; // [rsp+1C0h] [rbp-1A8h] BYREF
  _BYTE v50[80]; // [rsp+1D0h] [rbp-198h]
  _OWORD v51[2]; // [rsp+220h] [rbp-148h] BYREF
  __int128 v52; // [rsp+240h] [rbp-128h] BYREF
  __int64 v53; // [rsp+258h] [rbp-110h]
  __int64 v54; // [rsp+260h] [rbp-108h]
  __int64 v55; // [rsp+268h] [rbp-100h]
  unsigned __int64 v56; // [rsp+270h] [rbp-F8h]
  __int128 v57; // [rsp+2C0h] [rbp-A8h]
  __int128 v58; // [rsp+2D0h] [rbp-98h]
  __int128 v59; // [rsp+2E0h] [rbp-88h]
  unsigned __int64 v60; // [rsp+2F0h] [rbp-78h]
  __int128 v61; // [rsp+2F8h] [rbp-70h]
  __int128 v62; // [rsp+308h] [rbp-60h]
  __int64 v63; // [rsp+318h] [rbp-50h]
  __int64 v64; // [rsp+320h] [rbp-48h]
  char v65; // [rsp+328h] [rbp-40h]
  __int64 v66; // [rsp+330h] [rbp-38h]

  v35 = a4;
  v4 = (*((_QWORD *)a2 + 3) - *((_QWORD *)a2 + 1)) / 0x30uLL;
  v5 = a3[14];
  if ( v4 <= v5 )
    return uu_sort::merge::merge_without_limit(a1, a2, a3);
  v34 = a3;
  if ( !v5 )
    core::panicking::panic(
      anon_21b577e8ef70acd0d31b630f442194b7_33_llvm_11221174558704488820,
      27LL,
      &anon_21b577e8ef70acd0d31b630f442194b7_35_llvm_11221174558704488820);
  v53 = 0LL;
  v52 = 0LL;
  v54 = 8LL;
  v55 = 0LL;
  v56 = 0x8000000000000001LL;
  v6 = a2[1];
  v7 = a2[2];
  v57 = *a2;
  v58 = v6;
  v59 = v7;
  v60 = v5;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = -1LL;
  v65 = 0;
  v66 = 0LL;
  v29 = 0LL;
  v30 = 8LL;
  v31 = 0LL;
  v8 = v34;
  if ( v34[6] == 0x8000000000000000LL )
    v9 = 0LL;
  else
    v9 = v34[7];
  v32 = v9;
  v38 = v34[8];
  v33 = 0x8000000000000002LL;
  v11 = v4;
  while ( 1 )
  {
    v17 = v5;
    v18 = v11 < v5;
    v11 -= v5;
    if ( v18 )
      v11 = 0LL;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v36, &v52);
    if ( (_QWORD)v36 == v33 )
      core::option::unwrap_failed(&off_193330);
    *(_OWORD *)&v40[64] = *(_OWORD *)&v37[64];
    *(_OWORD *)&v40[48] = *(_OWORD *)&v37[48];
    *(_OWORD *)&v40[32] = *(_OWORD *)&v37[32];
    *(_OWORD *)&v40[16] = *(_OWORD *)&v37[16];
    *(_OWORD *)v40 = *(_OWORD *)v37;
    v39 = v36;
    uu_sort::merge::merge_without_limit(&v43, &v39, v8);
    v19 = *((_QWORD *)&v43 + 1);
    v20 = *(_QWORD *)v44;
    if ( (_QWORD)v43 == 3LL )
    {
LABEL_19:
      a1[1] = v19;
      a1[2] = v20;
      *a1 = 3LL;
      goto LABEL_24;
    }
    *(_QWORD *)&v50[72] = v48;
    *(_OWORD *)&v50[56] = v47;
    *(_OWORD *)&v50[40] = v46;
    *(_OWORD *)&v50[24] = v45;
    *(_OWORD *)&v50[8] = *(_OWORD *)&v44[8];
    v49 = v43;
    *(_QWORD *)v50 = *(_QWORD *)v44;
    uu_sort::tmp_dir::TmpDirWrapper::next_file(&v43, v35);
    if ( *((_QWORD *)&v43 + 1) == 0x8000000000000000LL )
    {
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v44;
      *a1 = 3LL;
LABEL_22:
      core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v49);
      goto LABEL_24;
    }
    v51[0] = v43;
    v51[1] = *(_OWORD *)v44;
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v36, v51, v32, v38);
    v21 = *(_QWORD *)v37;
    if ( (_QWORD)v36 == 0x8000000000000000LL )
    {
      a1[1] = *((_QWORD *)&v36 + 1);
      a1[2] = v21;
      *a1 = 3LL;
      goto LABEL_22;
    }
    *(_QWORD *)&v40[88] = *(_QWORD *)&v37[88];
    *(_OWORD *)&v40[72] = *(_OWORD *)&v37[72];
    *(_OWORD *)&v40[56] = *(_OWORD *)&v37[56];
    *(_OWORD *)&v40[40] = *(_OWORD *)&v37[40];
    *(_OWORD *)&v40[24] = *(_OWORD *)&v37[24];
    *(_OWORD *)&v40[8] = *(_OWORD *)&v37[8];
    v39 = v36;
    *(_QWORD *)v40 = *(_QWORD *)v37;
    *(_OWORD *)&v37[64] = *(_OWORD *)&v50[64];
    *(_OWORD *)&v37[48] = *(_OWORD *)&v50[48];
    *(_OWORD *)&v37[32] = *(_OWORD *)&v50[32];
    *(_OWORD *)&v37[16] = *(_OWORD *)&v50[16];
    *(_OWORD *)v37 = *(_OWORD *)v50;
    v36 = v49;
    v22 = uu_sort::merge::FileMerger::write_all_to(&v36, v8, &v40[32]);
    if ( v22 )
      break;
    *(_OWORD *)&v37[80] = *(_OWORD *)&v40[80];
    *(_OWORD *)&v37[64] = *(_OWORD *)&v40[64];
    *(_OWORD *)&v37[48] = *(_OWORD *)&v40[48];
    *(_OWORD *)&v37[32] = *(_OWORD *)&v40[32];
    *(_OWORD *)&v37[16] = *(_OWORD *)&v40[16];
    *(_OWORD *)v37 = *(_OWORD *)v40;
    v36 = v39;
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v43, &v36);
    v19 = *((_QWORD *)&v43 + 1);
    v20 = *(_QWORD *)v44;
    if ( (_QWORD)v43 == 0x8000000000000000LL )
      goto LABEL_19;
    v42.m256i_i64[3] = v45;
    *(_OWORD *)&v42.m256i_u64[1] = *(_OWORD *)&v44[8];
    v41 = v43;
    v42.m256i_i64[0] = *(_QWORD *)v44;
    v24 = v31;
    if ( v31 == v29 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v29, v45, v43, *(_QWORD *)v44);
    v12 = v30;
    v13 = 48 * v24;
    v14 = v41;
    v15 = *(_OWORD *)v42.m256i_i8;
    *(_OWORD *)(v30 + v13 + 32) = *(_OWORD *)&v42.m256i_u64[2];
    *(_OWORD *)(v12 + v13 + 16) = v15;
    *(_OWORD *)(v12 + v13) = v14;
    v31 = v24 + 1;
    v5 = v17;
    v16 = v4 <= v17;
    v4 = v11;
    v8 = v34;
    if ( v16 )
    {
      <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v36, &v52);
      if ( (_QWORD)v36 != v33 )
      {
        core::ptr::drop_in_place<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(&v36);
        core::panicking::panic(aAssertionFaile_15, 42LL, &off_1932F0);
      }
      *(_QWORD *)&v36 = v30;
      *((_QWORD *)&v36 + 1) = v30;
      *(_QWORD *)v37 = v29;
      *(_QWORD *)&v37[8] = v30 + 48 * v31;
      *(_QWORD *)&v37[16] = 1LL;
      *(_QWORD *)&v37[24] = &unk_193308;
      uu_sort::merge::merge_with_file_limit(a1, &v36, v8, v35);
      return core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(&v52);
    }
  }
  a1[1] = v22;
  a1[2] = v23;
  *a1 = 3LL;
  core::ptr::drop_in_place<uu_sort::merge::WriteableCompressedTmpFile>(&v39);
LABEL_24:
  v25 = v31;
  if ( v31 )
  {
    v26 = (_QWORD *)(v30 + 32);
    do
    {
      v27 = *(v26 - 4);
      if ( v27 )
        _rust_dealloc(*(v26 - 3), v27, 1LL);
      v28 = *(v26 - 1);
      if ( v28 )
        _rust_dealloc(*v26, v28, 1LL);
      v26 += 6;
      --v25;
    }
    while ( v25 );
  }
  if ( v29 )
    _rust_dealloc(v30, 48 * v29, 8LL);
  return core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(&v52);
}
