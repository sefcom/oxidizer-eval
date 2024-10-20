__int64 __fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // cf
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // r14
  int v16; // r15d
  __int128 v17; // kr00_16
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v24; // rbx
  _QWORD *v25; // r14
  __int64 v26; // rsi
  __int64 v27; // [rsp+10h] [rbp-278h] BYREF
  __int64 v28; // [rsp+18h] [rbp-270h]
  __int64 v29; // [rsp+20h] [rbp-268h]
  __m256i v30; // [rsp+28h] [rbp-260h] BYREF
  __int128 v31; // [rsp+48h] [rbp-240h]
  __int64 v32; // [rsp+58h] [rbp-230h]
  unsigned __int64 v33; // [rsp+60h] [rbp-228h]
  __int64 v34; // [rsp+68h] [rbp-220h]
  _BYTE v35[96]; // [rsp+70h] [rbp-218h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-1B8h]
  unsigned __int64 v37; // [rsp+E0h] [rbp-1A8h]
  unsigned __int64 v38; // [rsp+E8h] [rbp-1A0h]
  __int128 v39; // [rsp+F0h] [rbp-198h] BYREF
  _BYTE v40[80]; // [rsp+100h] [rbp-188h]
  __int128 v41; // [rsp+150h] [rbp-138h] BYREF
  __int64 v42; // [rsp+168h] [rbp-120h]
  __int64 v43; // [rsp+170h] [rbp-118h]
  __int64 v44; // [rsp+178h] [rbp-110h]
  unsigned __int64 v45; // [rsp+180h] [rbp-108h]
  __int128 v46; // [rsp+1A0h] [rbp-E8h]
  __int128 v47; // [rsp+1B0h] [rbp-D8h]
  __int128 v48; // [rsp+1C0h] [rbp-C8h]
  unsigned __int64 v49; // [rsp+1D0h] [rbp-B8h]
  __int128 v50; // [rsp+1D8h] [rbp-B0h]
  __int128 v51; // [rsp+1E8h] [rbp-A0h]
  __int64 v52; // [rsp+1F8h] [rbp-90h]
  __int64 v53; // [rsp+200h] [rbp-88h]
  char v54; // [rsp+208h] [rbp-80h]
  __int64 v55; // [rsp+210h] [rbp-78h]
  __m256i v56; // [rsp+220h] [rbp-68h] BYREF
  __int128 v57; // [rsp+240h] [rbp-48h]

  v34 = a4;
  v4 = a3;
  v5 = (*((_QWORD *)a2 + 3) - *((_QWORD *)a2 + 1)) / 0x18uLL;
  v6 = *(_QWORD *)(a3 + 112);
  if ( v5 <= v6 )
    return uu_sort::merge::merge_without_limit(a1, a2, a3);
  if ( !v6 )
    core::panicking::panic(
      anon_21b577e8ef70acd0d31b630f442194b7_33_llvm_11221174558704488820,
      27LL,
      &anon_21b577e8ef70acd0d31b630f442194b7_35_llvm_11221174558704488820);
  v42 = 0LL;
  v41 = 0LL;
  v43 = 8LL;
  v44 = 0LL;
  v45 = 0x8000000000000001LL;
  v7 = a2[1];
  v8 = a2[2];
  v46 = *a2;
  v47 = v7;
  v48 = v8;
  v49 = v6;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = -1LL;
  v54 = 0;
  v55 = 0LL;
  v27 = 0LL;
  v28 = 8LL;
  v29 = 0LL;
  v33 = 0x8000000000000002LL;
  v9 = v5;
  v37 = v6;
  while ( 1 )
  {
    v12 = v9 < v6;
    v9 -= v6;
    if ( v12 )
      v9 = 0LL;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v30, &v41);
    if ( v30.m256i_i64[0] == v33 )
      core::option::unwrap_failed(&off_193330);
    v57 = v31;
    v56 = v30;
    uu_sort::merge::merge_without_limit(v35, &v56, v4);
    v13 = *(_QWORD *)&v35[16];
    if ( *(_QWORD *)v35 == 3LL )
    {
      a1[1] = *(_QWORD *)&v35[8];
      a1[2] = v13;
      *a1 = 3LL;
      goto LABEL_22;
    }
    *(_QWORD *)&v40[72] = *(_QWORD *)&v35[88];
    *(_OWORD *)&v40[56] = *(_OWORD *)&v35[72];
    *(_OWORD *)&v40[40] = *(_OWORD *)&v35[56];
    *(_OWORD *)&v40[24] = *(_OWORD *)&v35[40];
    *(_OWORD *)&v40[8] = *(_OWORD *)&v35[24];
    v39 = *(_OWORD *)v35;
    *(_QWORD *)v40 = *(_QWORD *)&v35[16];
    uu_sort::tmp_dir::TmpDirWrapper::next_file(v35, v34);
    v14 = *(_QWORD *)&v35[8];
    if ( *(_QWORD *)&v35[8] == 0x8000000000000000LL )
    {
      *(_OWORD *)(a1 + 1) = *(_OWORD *)&v35[16];
      *a1 = 3LL;
      core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v39);
      goto LABEL_22;
    }
    v38 = v5;
    v15 = v4;
    v16 = *(_DWORD *)v35;
    v17 = *(_OWORD *)&v35[16];
    v18 = _rust_alloc(0x2000LL, 1LL);
    if ( !v18 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    v30.m256i_i64[3] = 0x2000LL;
    v31 = (unsigned __int64)v18;
    LOBYTE(v32) = 0;
    HIDWORD(v32) = v16;
    v30.m256i_i64[0] = v14;
    *(_OWORD *)&v30.m256i_u64[1] = v17;
    *(_OWORD *)&v35[80] = *(_OWORD *)&v40[64];
    *(_OWORD *)&v35[64] = *(_OWORD *)&v40[48];
    *(_OWORD *)&v35[48] = *(_OWORD *)&v40[32];
    *(_OWORD *)&v35[32] = *(_OWORD *)&v40[16];
    *(_OWORD *)&v35[16] = *(_OWORD *)v40;
    *(_OWORD *)v35 = v39;
    v4 = v15;
    v19 = uu_sort::merge::FileMerger::write_all_to(v35, v15, &v30.m256i_u64[3]);
    v6 = v37;
    if ( v19 )
      break;
    *(__m256i *)v35 = v30;
    *(_QWORD *)&v35[48] = v32;
    *(_OWORD *)&v35[32] = v31;
    v21 = v30.m256i_i64[0];
    v36 = *(_OWORD *)&v30.m256i_u64[1];
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::fs::File>>(&v35[24]);
    if ( v21 == 0x8000000000000000LL )
    {
      *(_OWORD *)(a1 + 1) = v36;
      *a1 = 3LL;
      goto LABEL_22;
    }
    v22 = v29;
    if ( v29 == v27 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v27);
    v10 = v28;
    v11 = 3 * v22;
    *(_QWORD *)(v28 + 8 * v11) = v21;
    *(_OWORD *)(v10 + 8 * v11 + 8) = v36;
    v29 = v22 + 1;
    v5 = v9;
    if ( v38 <= v6 )
    {
      <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(v35, &v41);
      if ( *(_QWORD *)v35 != v33 )
      {
        core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>>(v35);
        core::panicking::panic(aAssertionFaile_15, 42LL, &off_1932F0);
      }
      *(_QWORD *)v35 = v28;
      *(_QWORD *)&v35[8] = v28;
      *(_QWORD *)&v35[16] = v27;
      *(_QWORD *)&v35[24] = v28 + 24 * v29;
      *(_QWORD *)&v35[32] = 1LL;
      *(_QWORD *)&v35[40] = &unk_193348;
      uu_sort::merge::merge_with_file_limit(a1, v35, v4, v34);
      return core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(&v41);
    }
  }
  a1[1] = v19;
  a1[2] = v20;
  *a1 = 3LL;
  if ( v30.m256i_i64[0] )
    _rust_dealloc(v30.m256i_i64[1], v30.m256i_i64[0], 1LL);
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::fs::File>>(&v30.m256i_u64[3]);
LABEL_22:
  v24 = v29;
  if ( v29 )
  {
    v25 = (_QWORD *)(v28 + 8);
    do
    {
      v26 = *(v25 - 1);
      if ( v26 )
        _rust_dealloc(*v25, v26, 1LL);
      v25 += 3;
      --v24;
    }
    while ( v24 );
  }
  if ( v27 )
    _rust_dealloc(v28, 24 * v27, 8LL);
  return core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(&v41);
}
