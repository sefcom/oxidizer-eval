__int64 __fastcall uu_pr::mpr(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 *v5; // r15
  __int64 v6; // r13
  void (__fastcall **v7)(__int64); // rbp
  void (__fastcall *v8)(__int64); // rsi
  char *v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // rax
  char *v16; // r14
  __int64 v17; // r13
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int64 v22; // rcx
  __int64 v24; // rdx
  __int128 v25; // xmm0
  __int64 v27; // [rsp+8h] [rbp-350h]
  __int64 v28; // [rsp+18h] [rbp-340h] BYREF
  __int64 v29; // [rsp+20h] [rbp-338h]
  unsigned __int64 v30; // [rsp+28h] [rbp-330h]
  __int64 v31; // [rsp+30h] [rbp-328h]
  __int128 v32; // [rsp+38h] [rbp-320h] BYREF
  __int128 v33; // [rsp+48h] [rbp-310h]
  unsigned __int64 v34; // [rsp+58h] [rbp-300h]
  __int128 v35; // [rsp+60h] [rbp-2F8h] BYREF
  __int128 v36; // [rsp+70h] [rbp-2E8h] BYREF
  __int128 v37; // [rsp+80h] [rbp-2D8h]
  __int128 v38; // [rsp+90h] [rbp-2C8h]
  unsigned __int64 v39; // [rsp+A8h] [rbp-2B0h]
  __int64 v40; // [rsp+B0h] [rbp-2A8h] BYREF
  char *v41; // [rsp+B8h] [rbp-2A0h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-298h]
  __int128 v43; // [rsp+D0h] [rbp-288h]
  __int128 v44; // [rsp+E0h] [rbp-278h]
  __int128 v45; // [rsp+F0h] [rbp-268h]
  _BYTE v46[64]; // [rsp+100h] [rbp-258h] BYREF
  _BYTE v47[64]; // [rsp+140h] [rbp-218h] BYREF
  __int128 v48; // [rsp+180h] [rbp-1D8h]
  __int64 v49; // [rsp+198h] [rbp-1C0h] BYREF
  __int64 v50; // [rsp+1A0h] [rbp-1B8h]
  void (__fastcall **v51)(__int64); // [rsp+1A8h] [rbp-1B0h]
  __int64 v52; // [rsp+1B0h] [rbp-1A8h]
  _QWORD v53[5]; // [rsp+1B8h] [rbp-1A0h] BYREF
  _OWORD v54[2]; // [rsp+1E0h] [rbp-178h] BYREF
  _BYTE v55[24]; // [rsp+200h] [rbp-158h] BYREF
  char v56; // [rsp+218h] [rbp-140h] BYREF
  __int128 v57; // [rsp+220h] [rbp-138h]
  __int128 v58; // [rsp+230h] [rbp-128h]
  __int128 v59; // [rsp+240h] [rbp-118h]
  __int128 v60; // [rsp+250h] [rbp-108h]
  __int128 v61; // [rsp+260h] [rbp-F8h]
  char v62[8]; // [rsp+270h] [rbp-E8h] BYREF
  char v63[224]; // [rsp+278h] [rbp-E0h] BYREF

  v31 = a4;
  v40 = a3;
  v4 = &a2[2 * a3];
  if ( !a3 )
  {
LABEL_10:
    v53[0] = a2;
    v53[1] = v4;
    v53[2] = 0LL;
    v53[3] = v31;
    v53[4] = &v40;
    itertools::kmerge_impl::kmerge_by(v55, v53);
    itertools::groupbylazy::new(v62, v55);
    v27 = *(_QWORD *)(v31 + 304);
    v28 = 0LL;
    v29 = 8LL;
    v30 = 0LL;
    v41 = v62;
    v9 = &v56;
    v39 = 0x8000000000000002LL;
    v34 = 0x8000000000000001LL;
LABEL_11:
    <itertools::groupbylazy::Groups<K,I,F> as core::iter::traits::iterator::Iterator>::next(v9, &v41);
    if ( (_QWORD)v57 == v39 )
    {
      if ( !v29 || (v29 & 7) != 0 || v30 > 0x1FFFFFFFFFFFFFFLL )
LABEL_46:
        core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
      if ( uu_pr::print_page(v29, v30, v31, v27) )
      {
        <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v32, v24);
        v25 = v32;
        *(_OWORD *)(a1 + 16) = v33;
        *(_OWORD *)a1 = v25;
        goto LABEL_36;
      }
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0x8000000000000005LL;
      core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v28);
LABEL_37:
      core::ptr::drop_in_place<itertools::groupbylazy::GroupInner<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(v63);
      return a1;
    }
    v48 = v61;
    *(_OWORD *)&v47[48] = v60;
    *(_OWORD *)&v47[32] = v59;
    *(_OWORD *)&v47[16] = v58;
    *(_OWORD *)v47 = v57;
    while ( 1 )
    {
      v15 = *(_QWORD *)v47;
      *(_QWORD *)v47 = v34;
      if ( v15 == v34 )
      {
        itertools::groupbylazy::ChunkBy<K,I,F>::step(v46, v48, *((_QWORD *)&v48 + 1));
        if ( *(_QWORD *)v46 == v34 )
        {
          core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(v47);
          goto LABEL_11;
        }
      }
      else
      {
        *(_QWORD *)&v46[56] = *(_QWORD *)&v47[56];
        *(_OWORD *)&v46[40] = *(_OWORD *)&v47[40];
        *(_OWORD *)&v46[24] = *(_OWORD *)&v47[24];
        *(_OWORD *)&v46[8] = *(_OWORD *)&v47[8];
        *(_QWORD *)v46 = v15;
      }
      v35 = *(_OWORD *)v46;
      v38 = *(_OWORD *)&v46[48];
      v37 = *(_OWORD *)&v46[32];
      v36 = *(_OWORD *)&v46[16];
      if ( *(_QWORD *)v46 == 0x8000000000000000LL )
      {
        <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v54, *((_QWORD *)&v35 + 1));
        v20 = v54[0];
        *(_OWORD *)(a1 + 16) = v54[1];
        *(_OWORD *)a1 = v20;
        if ( (_QWORD)v35 == 0x8000000000000000LL )
          goto LABEL_35;
        goto LABEL_33;
      }
      v16 = v9;
      v17 = *((_QWORD *)&v37 + 1);
      v18 = v30;
      if ( v27 != *((_QWORD *)&v37 + 1) )
        break;
      v42 = *(_OWORD *)v46;
      v43 = *(_OWORD *)&v46[16];
      v44 = *(_OWORD *)&v46[32];
      v45 = *(_OWORD *)&v46[48];
      if ( v30 == v28 )
        goto LABEL_13;
LABEL_14:
      v10 = v29;
      v11 = v18 << 6;
      v12 = v42;
      v13 = v43;
      v14 = v44;
      *(_OWORD *)(v29 + v11 + 48) = v45;
      *(_OWORD *)(v10 + v11 + 32) = v14;
      *(_OWORD *)(v10 + v11 + 16) = v13;
      *(_OWORD *)(v10 + v11) = v12;
      v30 = v18 + 1;
      v9 = v16;
    }
    if ( !v29 || (v29 & 7) != 0 || v30 > 0x1FFFFFFFFFFFFFFLL )
      goto LABEL_46;
    if ( uu_pr::print_page(v29, v30, v31, v27) )
    {
      <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v32, v19);
      v21 = v32;
      *(_OWORD *)(a1 + 16) = v33;
      *(_OWORD *)a1 = v21;
      if ( (_QWORD)v35 == 0x8000000000000000LL )
      {
        std::io::error::repr_bitpacked::decode_repr(&v32, *((_QWORD *)&v35 + 1));
        if ( (unsigned __int8)v32 >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v32 + 8);
        goto LABEL_35;
      }
LABEL_33:
      alloc::raw_vec::RawVec<T,A>::current_memory(&v32, &v35);
      if ( *((_QWORD *)&v32 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v36, v32, *((_QWORD *)&v32 + 1), v33);
LABEL_35:
      core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(v47);
LABEL_36:
      core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v28);
      goto LABEL_37;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v28);
    v28 = 0LL;
    v29 = 8LL;
    v30 = 0LL;
    v42 = v35;
    v43 = v36;
    v44 = v37;
    v45 = v38;
    v27 = v17;
    v18 = 0LL;
LABEL_13:
    alloc::raw_vec::RawVec<T,A>::grow_one(&v28);
    goto LABEL_14;
  }
  v5 = a2;
  while ( 1 )
  {
    if ( !v5 )
      goto LABEL_10;
    uu_pr::open(&v49, *v5, v5[1]);
    v6 = v50;
    v7 = v51;
    if ( v49 != 0x8000000000000005LL )
      break;
    if ( *v51 )
      (*v51)(v50);
    v8 = v7[1];
    if ( v8 )
      _rust_dealloc(v6, v8, v7[2]);
    v5 += 2;
    if ( v5 == v4 )
      goto LABEL_10;
  }
  v22 = v52;
  *(_QWORD *)a1 = v49;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = v22;
  return a1;
}
