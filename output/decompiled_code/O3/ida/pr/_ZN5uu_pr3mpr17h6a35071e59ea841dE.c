__int64 __fastcall uu_pr::mpr(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  void (__fastcall **v7)(__int64); // r14
  void (__fastcall *v8)(__int64); // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r12
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // r15
  void (__fastcall **v20)(__int64); // rax
  bool v21; // zf
  unsigned __int64 v22; // rbx
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rcx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 i; // r15
  __int128 v33; // xmm0
  __int64 v34; // rdi
  __int64 j; // rbx
  __int128 v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rdx
  __int128 v40; // xmm0
  __int64 v41; // [rsp+8h] [rbp-290h] BYREF
  __int64 v42; // [rsp+10h] [rbp-288h]
  __int64 v43; // [rsp+18h] [rbp-280h]
  unsigned __int64 v44; // [rsp+20h] [rbp-278h]
  __int64 v45; // [rsp+28h] [rbp-270h]
  __int128 v46; // [rsp+30h] [rbp-268h] BYREF
  __int128 v47; // [rsp+40h] [rbp-258h]
  __int128 v48; // [rsp+50h] [rbp-248h]
  __int128 v49; // [rsp+60h] [rbp-238h]
  __int64 v50; // [rsp+78h] [rbp-220h]
  unsigned __int64 v51; // [rsp+80h] [rbp-218h]
  __int64 v52; // [rsp+88h] [rbp-210h] BYREF
  _BYTE v53[40]; // [rsp+90h] [rbp-208h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-1E0h]
  __int64 v55; // [rsp+C8h] [rbp-1D0h]
  unsigned __int64 *v56; // [rsp+D0h] [rbp-1C8h]
  unsigned __int64 v57; // [rsp+D8h] [rbp-1C0h]
  unsigned __int64 v58; // [rsp+E0h] [rbp-1B8h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-1B0h] BYREF
  void (__fastcall **v60)(__int64); // [rsp+F0h] [rbp-1A8h]
  __int128 v61; // [rsp+F8h] [rbp-1A0h] BYREF
  __int64 v62; // [rsp+108h] [rbp-190h]
  __int64 v63; // [rsp+110h] [rbp-188h]
  __int64 v64; // [rsp+118h] [rbp-180h]
  unsigned __int64 v65; // [rsp+120h] [rbp-178h]
  unsigned __int64 v66; // [rsp+128h] [rbp-170h]
  __int128 v67; // [rsp+130h] [rbp-168h]
  __int128 v68; // [rsp+140h] [rbp-158h]
  __int128 v69; // [rsp+150h] [rbp-148h]
  __int64 v70; // [rsp+160h] [rbp-138h]
  __int128 v71; // [rsp+168h] [rbp-130h]
  __int64 v72; // [rsp+178h] [rbp-120h]
  __int64 v73; // [rsp+180h] [rbp-118h]
  char v74; // [rsp+188h] [rbp-110h]
  __int64 v75; // [rsp+190h] [rbp-108h]
  _BYTE v76[64]; // [rsp+198h] [rbp-100h] BYREF
  unsigned __int64 v77; // [rsp+1D8h] [rbp-C0h]
  __int128 v78; // [rsp+1E0h] [rbp-B8h]
  __int128 v79; // [rsp+1F0h] [rbp-A8h]
  __int128 v80; // [rsp+200h] [rbp-98h]
  __int128 v81; // [rsp+210h] [rbp-88h]
  unsigned __int64 v82; // [rsp+228h] [rbp-70h] BYREF
  __int128 v83; // [rsp+230h] [rbp-68h]
  __int128 v84; // [rsp+240h] [rbp-58h]
  __int128 v85; // [rsp+250h] [rbp-48h]
  __int64 v86; // [rsp+260h] [rbp-38h]

  v50 = a4;
  v45 = a1;
  v52 = a3;
  if ( a3 )
  {
    v4 = a2 + 16 * a3;
    v44 = a2;
    v5 = a2;
    do
    {
      uu_pr::open(&v58, *(_BYTE **)v5, *(_QWORD *)(v5 + 8));
      v6 = v59;
      v7 = v60;
      if ( v58 != 0x8000000000000005LL )
      {
        v10 = v61;
        v11 = v45;
        *(_QWORD *)v45 = v58;
        *(_QWORD *)(v11 + 8) = v6;
        *(_QWORD *)(v11 + 16) = v7;
        *(_QWORD *)(v11 + 24) = v10;
        return v11;
      }
      if ( *v60 )
        (*v60)(v59);
      v8 = v7[1];
      if ( v8 )
        _rust_dealloc(v6, v8, v7[2]);
      v5 += 16LL;
    }
    while ( v5 != v4 );
    v9 = v52;
    a2 = v44;
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)v53 = a2;
  *(_QWORD *)&v53[8] = a2 + 16 * v9;
  *(_QWORD *)&v53[16] = 0LL;
  v12 = v50;
  *(_QWORD *)&v53[24] = v50;
  *(_QWORD *)&v53[32] = &v52;
  itertools::kmerge_impl::kmerge_by(&v46, v53);
  v59 = 0LL;
  v61 = v46;
  v62 = v47;
  v63 = 0LL;
  v64 = 8LL;
  v65 = 0LL;
  v66 = 0x8000000000000001LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = -1LL;
  v74 = 0;
  v13 = *(_QWORD *)(v12 + 304);
  v41 = 0LL;
  v42 = 8LL;
  v43 = 0LL;
  v75 = 1LL;
  v14 = 0LL;
  v77 = 0x8000000000000002LL;
  v44 = 0x8000000000000000LL;
  v15 = 0LL;
LABEL_13:
  v58 = -1LL;
  if ( *((_QWORD *)&v71 + 1) <= v15 )
  {
    v51 = v15;
    if ( (unsigned __int64)v71 > v15 )
      goto LABEL_15;
    if ( (_QWORD)v71 != v15 )
    {
      if ( v74 )
        goto LABEL_72;
      itertools::groupbylazy::GroupInner<K,I,F>::step_buffering(&v82, &v59);
      goto LABEL_36;
    }
    if ( v65 > v15 - v72 )
    {
LABEL_15:
      itertools::groupbylazy::GroupInner<K,I,F>::lookup_buffer(&v82, &v59);
    }
    else
    {
      if ( v74 )
        goto LABEL_72;
      v16 = v66;
      v66 = 0x8000000000000001LL;
      if ( v16 == 0x8000000000000001LL )
      {
        <itertools::kmerge_impl::KMergeBy<I,F> as core::iter::traits::iterator::Iterator>::next(v53, &v61);
        v17 = *(_QWORD *)v53;
        if ( *(_QWORD *)v53 == 0x8000000000000001LL )
        {
          v74 = 1;
        }
        else
        {
          *(_QWORD *)&v48 = v54;
          v47 = *(_OWORD *)&v53[24];
          v46 = *(_OWORD *)&v53[8];
          v18 = *((_QWORD *)&v54 + 1);
          v19 = v55;
          v20 = v60;
          v21 = v59 == 0;
          v59 = 1LL;
          v60 = (void (__fastcall **)(__int64))*((_QWORD *)&v54 + 1);
          if ( v21 || v20 == *((void (__fastcall ***)(__int64))&v54 + 1) )
          {
            *(_QWORD *)&v85 = v48;
            v84 = v47;
            v83 = v46;
            v82 = *(_QWORD *)v53;
            *((_QWORD *)&v85 + 1) = *((_QWORD *)&v54 + 1);
            v86 = v55;
LABEL_35:
            v14 = 0LL;
            goto LABEL_36;
          }
          if ( v66 == 0x8000000000000000LL )
          {
            core::ptr::drop_in_place<std::io::error::Error>(v67);
          }
          else if ( v66 != 0x8000000000000001LL && v66 )
          {
            _rust_dealloc(v67, v66, 1LL);
          }
          v66 = v17;
          *(_QWORD *)&v69 = v48;
          v68 = v47;
          v67 = v46;
          *((_QWORD *)&v69 + 1) = v18;
          v70 = v19;
          *(_QWORD *)&v71 = v71 + 1;
        }
        v82 = 0x8000000000000001LL;
        goto LABEL_35;
      }
      v86 = v70;
      v85 = v69;
      v84 = v68;
      v83 = v67;
      v82 = v16;
    }
LABEL_36:
    v22 = v82;
    if ( v82 == 0x8000000000000001LL )
    {
      v14 = v58 + 1;
      goto LABEL_72;
    }
    itertools::groupbylazy::GroupInner<K,I,F>::group_key(&v59, v51);
    ++v58;
    if ( v22 == v77 )
      goto LABEL_73;
    v55 = v86;
    v54 = v85;
    *(_OWORD *)&v53[24] = v84;
    *(_OWORD *)&v53[8] = v83;
    v56 = &v58;
    v57 = v51;
    while ( 1 )
    {
      if ( v22 == 0x8000000000000001LL )
      {
        itertools::groupbylazy::ChunkBy<K,I,F>::step(v76, &v58, v51);
        if ( *(_QWORD *)v76 == 0x8000000000000001LL )
        {
          *(_QWORD *)v53 = 0x8000000000000001LL;
          core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(v53);
          v15 = v75++;
          if ( v58 )
            core::cell::panic_already_borrowed(&off_28E838);
          goto LABEL_13;
        }
      }
      else
      {
        *(_QWORD *)&v76[56] = v86;
        *(_OWORD *)&v76[40] = v85;
        *(_OWORD *)&v76[24] = v84;
        *(_OWORD *)&v76[8] = v83;
        *(_QWORD *)v76 = v22;
      }
      v78 = *(_OWORD *)v76;
      v81 = *(_OWORD *)&v76[48];
      v80 = *(_OWORD *)&v76[32];
      v79 = *(_OWORD *)&v76[16];
      if ( *(_QWORD *)v76 == v44 )
      {
        *(_QWORD *)v53 = 0x8000000000000001LL;
        <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v46, *((_QWORD *)&v78 + 1));
        v33 = v46;
        v11 = v45;
        *(_OWORD *)(v45 + 16) = v47;
        *(_OWORD *)v11 = v33;
LABEL_59:
        core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(v53);
        goto LABEL_60;
      }
      v29 = *((_QWORD *)&v80 + 1);
      v23 = v43;
      if ( v13 != *((_QWORD *)&v80 + 1) )
        break;
      v49 = *(_OWORD *)&v76[48];
      v48 = *(_OWORD *)&v76[32];
      v47 = *(_OWORD *)&v76[16];
      v46 = *(_OWORD *)v76;
      if ( v43 == v41 )
        goto LABEL_40;
LABEL_41:
      v24 = v42;
      v25 = v23 << 6;
      v26 = v46;
      v27 = v47;
      v28 = v48;
      *(_OWORD *)(v42 + v25 + 48) = v49;
      *(_OWORD *)(v24 + v25 + 32) = v28;
      *(_OWORD *)(v24 + v25 + 16) = v27;
      *(_OWORD *)(v24 + v25) = v26;
      v43 = v23 + 1;
      v22 = 0x8000000000000001LL;
      v14 = 0LL;
    }
    if ( uu_pr::print_page(v42, v43, v50, v13) )
    {
      *(_QWORD *)v53 = 0x8000000000000001LL;
      <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v46, v30);
      v37 = v46;
      v11 = v45;
      *(_OWORD *)(v45 + 16) = v47;
      *(_OWORD *)v11 = v37;
      if ( (_QWORD)v78 == v44 )
      {
        core::ptr::drop_in_place<std::io::error::Error>(*((_QWORD *)&v78 + 1));
      }
      else if ( (_QWORD)v78 )
      {
        _rust_dealloc(*((_QWORD *)&v78 + 1), v78, 1LL);
      }
      goto LABEL_59;
    }
    v31 = v42;
    for ( i = v43 + 1; i != 1; --i )
    {
      core::ptr::drop_in_place<uu_pr::FileLine>();
      v31 += 64LL;
    }
    if ( v41 )
      _rust_dealloc(v42, v41 << 6, 8LL);
    v41 = 0LL;
    v42 = 8LL;
    v43 = 0LL;
    v49 = *(_OWORD *)&v76[48];
    v48 = *(_OWORD *)&v76[32];
    v47 = *(_OWORD *)&v76[16];
    v46 = *(_OWORD *)v76;
    v13 = v29;
    v23 = 0LL;
LABEL_40:
    alloc::raw_vec::RawVec<T,A>::grow_one(&v41);
    goto LABEL_41;
  }
LABEL_72:
  v58 = v14;
LABEL_73:
  v38 = uu_pr::print_page(v42, v43, v50, v13);
  v11 = v45;
  if ( v38 )
  {
    <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v53, v39);
    v40 = *(_OWORD *)v53;
    *(_OWORD *)(v11 + 16) = *(_OWORD *)&v53[16];
    *(_OWORD *)v11 = v40;
LABEL_60:
    v34 = v42;
    for ( j = v43 + 1; j != 1; --j )
    {
      core::ptr::drop_in_place<uu_pr::FileLine>();
      v34 += 64LL;
    }
    if ( v41 )
      _rust_dealloc(v42, v41 << 6, 8LL);
  }
  else
  {
    *(_DWORD *)(v45 + 8) = 0;
    *(_QWORD *)v11 = 0x8000000000000005LL;
    core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v41);
  }
  core::ptr::drop_in_place<itertools::groupbylazy::ChunkBy<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v58);
  return v11;
}
