        _QWORD *a7)
{
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  bool v12; // of
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  size_t v24; // r14
  unsigned __int64 v25; // r15
  void *v26; // r15
  void *v27; // rbp
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  size_t v32; // r14
  unsigned __int64 v33; // r15
  void *v34; // r15
  void *v35; // rbp
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rbp
  __int64 v38; // rbx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r14
  __int64 v41; // rcx
  bool v42; // cf
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rbx
  size_t v48; // r14
  __int64 v49; // r12
  void *v50; // r12
  void *v51; // r15
  unsigned __int64 v52; // r13
  char **v53; // rdi
  __int64 v54; // r13
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r14
  __int64 v57; // rcx
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // r14
  unsigned __int64 v64; // r12
  size_t v65; // r13
  __int64 v66; // rbx
  void *v67; // rbx
  const void *v68; // rbp
  signed __int64 v69; // r15
  unsigned __int64 v70; // r13
  unsigned __int64 *v71; // rbx
  void *v72; // r13
  _QWORD *v73; // rax
  __int64 v74; // r13
  _QWORD *v75; // rax
  __int64 v76; // rcx
  void *v78; // [rsp+8h] [rbp-1E0h]
  const char *v79; // [rsp+10h] [rbp-1D8h] BYREF
  __int128 v80; // [rsp+18h] [rbp-1D0h]
  __int64 v81; // [rsp+28h] [rbp-1C0h]
  __int64 v82; // [rsp+30h] [rbp-1B8h]
  unsigned __int64 v83; // [rsp+40h] [rbp-1A8h]
  __int128 v84; // [rsp+48h] [rbp-1A0h] BYREF
  unsigned __int64 v85; // [rsp+58h] [rbp-190h] BYREF
  __int128 v86; // [rsp+60h] [rbp-188h] BYREF
  unsigned __int64 v87; // [rsp+70h] [rbp-178h]
  __int128 v88; // [rsp+78h] [rbp-170h] BYREF
  __int64 v89; // [rsp+88h] [rbp-160h] BYREF
  __int128 v90; // [rsp+90h] [rbp-158h] BYREF
  __int64 v91; // [rsp+A0h] [rbp-148h]
  unsigned __int64 v92; // [rsp+B0h] [rbp-138h]
  unsigned __int64 v93; // [rsp+B8h] [rbp-130h]
  const char *v94; // [rsp+C0h] [rbp-128h]
  const char *v95; // [rsp+C8h] [rbp-120h]
  const char *v96; // [rsp+D0h] [rbp-118h]
  void *v97; // [rsp+D8h] [rbp-110h]
  void *v98; // [rsp+E0h] [rbp-108h]
  void *src; // [rsp+E8h] [rbp-100h]
  __int64 v100; // [rsp+F0h] [rbp-F8h]
  unsigned __int64 v101; // [rsp+F8h] [rbp-F0h]
  unsigned __int64 v102; // [rsp+100h] [rbp-E8h]
  unsigned __int64 v103; // [rsp+108h] [rbp-E0h]
  __int128 v104; // [rsp+110h] [rbp-D8h]
  unsigned __int64 v105; // [rsp+120h] [rbp-C8h]
  __int128 v106; // [rsp+130h] [rbp-B8h]
  __int64 v107; // [rsp+140h] [rbp-A8h]
  _QWORD v108[4]; // [rsp+148h] [rbp-A0h] BYREF
  _QWORD v109[4]; // [rsp+168h] [rbp-80h] BYREF
  __int128 v110; // [rsp+188h] [rbp-60h] BYREF
  unsigned __int64 v111; // [rsp+198h] [rbp-50h]
  __int128 v112; // [rsp+1A0h] [rbp-48h] BYREF
  __int64 v113; // [rsp+1B0h] [rbp-38h]

  v83 = a3;
  v100 = a1;
  v7 = a7[9] >> 1;
  if ( __OFSUB__(v7, a7[10]) )
    core::panicking::panic_const::panic_const_sub_overflow(&off_2AAD28);
  v8 = 0LL;
  if ( v7 - a7[10] > 0 )
    v8 = v7 - a7[10];
  v9 = a7[5];
  if ( v9 < 0 )
    core::panicking::panic_const::panic_const_mul_overflow(&off_2AAD40);
  v10 = 2 * v9;
  v11 = v7 - v10;
  if ( __OFSUB__(v7, v10)
    || (v12 = __OFSUB__(v11, a4), v13 = v11 - a4, v12)
    || (v12 = __OFSUB__(v13, 1LL), v14 = v13 - 1, v12) )
  {
    core::panicking::panic_const::panic_const_sub_overflow(&off_2AAD58);
  }
  v17 = 0LL;
  if ( v14 > 0 )
    v17 = v14;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v79, a7[9] >> 1, 0LL);
  if ( v79 )
    alloc::raw_vec::handle_error(v80, *((_QWORD *)&v80 + 1));
  v90 = v80;
  v91 = 0LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v79, v7, 0LL);
  if ( v79 )
    alloc::raw_vec::handle_error(v80, *((_QWORD *)&v80 + 1));
  v86 = v80;
  v87 = 0LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v79, v7, 0LL);
  if ( v79 )
    alloc::raw_vec::handle_error(v80, *((_QWORD *)&v80 + 1));
  v84 = v80;
  v85 = 0LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v79, v7, 0LL);
  if ( v79 )
    alloc::raw_vec::handle_error(v80, *((_QWORD *)&v80 + 1));
  v88 = v80;
  v89 = 0LL;
  uu_ptx::trim_idx(a2, v83, 0LL, v83);
  v19 = v18;
  v20 = v18 - v8;
  if ( __OFSUB__(v18, v8) )
    core::panicking::panic_const::panic_const_sub_overflow(&off_2AAD70);
  v21 = 0LL;
  if ( v20 > 0 )
    v21 = v20;
  v22 = uu_ptx::trim_broken_word_left(a2, v83, v21, v19);
  v92 = uu_ptx::trim_idx(a2, v83, v22, v19);
  if ( v23 < v92 )
    core::slice::index::slice_index_order_fail(v92, v23, &off_2AAD88);
  if ( v23 > v83 )
    core::slice::index::slice_end_index_len_fail(v23, v83, &off_2AAD88);
  v79 = 0LL;
  v80 = 1uLL;
  <alloc::string::String as core::iter::traits::collect::Extend<char>>::extend(&v79, a2 + 4 * v92, a2 + 4 * v23);
  src = (void *)v80;
  if ( !(_QWORD)v80 )
    goto LABEL_91;
  v24 = *((_QWORD *)&v80 + 1);
  if ( v80 < 0 )
    goto LABEL_91;
  v96 = v79;
  v25 = v87;
  v101 = a6;
  if ( (unsigned __int64)v86 - v87 < *((_QWORD *)&v80 + 1) )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v86, v87, *((_QWORD *)&v80 + 1));
    v25 = v87;
  }
  v26 = (void *)(*((_QWORD *)&v86 + 1) + v25);
  v27 = src;
  core::intrinsics::copy_nonoverlapping::precondition_check(src, v26, 1LL, 1LL, v24);
  memcpy(v26, v27, v24);
  v87 += v24;
  if ( v8 < v87 )
    core::panicking::panic(aAssertionFaile_9, 49LL, &off_2AADA0);
  v28 = v101;
  v29 = v101;
  if ( v17 < v101 )
    v29 = v17;
  v30 = uu_ptx::trim_broken_word_right(a5, v101, 0LL, v29);
  uu_ptx::trim_idx(a5, v28, 0LL, v30);
  v93 = v31;
  if ( v31 > v28 )
    core::slice::index::slice_end_index_len_fail(v31, v28, &off_2AADB8);
  v79 = 0LL;
  v80 = 1uLL;
  <alloc::string::String as core::iter::traits::collect::Extend<char>>::extend(&v79, a5, a5 + 4 * v31);
  v98 = (void *)v80;
  if ( !(_QWORD)v80 )
    goto LABEL_91;
  v32 = *((_QWORD *)&v80 + 1);
  if ( v80 < 0 )
    goto LABEL_91;
  v95 = v79;
  v33 = v85;
  if ( (unsigned __int64)v84 - v85 < *((_QWORD *)&v80 + 1) )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v84, v85, *((_QWORD *)&v80 + 1));
    v33 = v85;
  }
  v34 = (void *)(*((_QWORD *)&v84 + 1) + v33);
  v35 = v98;
  core::intrinsics::copy_nonoverlapping::precondition_check(v98, v34, 1LL, 1LL, v32);
  memcpy(v34, v35, v32);
  v85 += v32;
  if ( v17 < v85 )
    core::panicking::panic(aAssertionFaile_10, 47LL, &off_2AADD0);
  v12 = __OFSUB__(v8, v87);
  v36 = v8 - v87;
  v37 = v101;
  if ( v12 || (v12 = __OFSUB__(v36, a7[10]), v38 = v36 - a7[10], v12) )
    core::panicking::panic_const::panic_const_sub_overflow(&off_2AADE8);
  v39 = uu_ptx::trim_idx(a5, v101, v93, v101);
  v40 = v39;
  v41 = 0LL;
  if ( v38 > 0 )
    v41 = v38;
  v42 = __CFADD__(v39, v41);
  v43 = v39 + v41;
  if ( v42 )
    core::panicking::panic_const::panic_const_add_overflow(&off_2AAE00);
  if ( v37 < v43 )
    v43 = v37;
  v44 = uu_ptx::trim_broken_word_right(a5, v37, v39, v43);
  v45 = uu_ptx::trim_idx(a5, v37, v40, v44);
  if ( v46 < v45 )
    core::slice::index::slice_index_order_fail(v45, v46, &off_2AAE18);
  v47 = v83;
  if ( v46 > v37 )
    core::slice::index::slice_end_index_len_fail(v46, v37, &off_2AAE18);
  v102 = v45;
  v103 = v46;
  v79 = 0LL;
  v80 = 1uLL;
  <alloc::string::String as core::iter::traits::collect::Extend<char>>::extend(&v79, a5 + 4 * v45, a5 + 4 * v46);
  v97 = (void *)v80;
  if ( !(_QWORD)v80 )
    goto LABEL_91;
  v48 = *((_QWORD *)&v80 + 1);
  if ( v80 < 0 )
    goto LABEL_91;
  v94 = v79;
  v49 = v89;
  if ( (unsigned __int64)(v88 - v89) < *((_QWORD *)&v80 + 1) )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v88, v89, *((_QWORD *)&v80 + 1));
    v49 = v89;
  }
  v50 = (void *)(*((_QWORD *)&v88 + 1) + v49);
  v51 = v97;
  core::intrinsics::copy_nonoverlapping::precondition_check(v97, v50, 1LL, 1LL, v48);
  memcpy(v50, v51, v48);
  v89 += v48;
  v12 = __OFSUB__(v17, v85);
  v52 = v17 - v85;
  v53 = &off_2AAE30;
  if ( v12 || (v12 = __OFSUB__(v52, a7[10]), v54 = v52 - a7[10], v12) )
LABEL_110:
    core::panicking::panic_const::panic_const_sub_overflow(v53);
  uu_ptx::trim_idx(a2, v47, 0LL, v92);
  v56 = v55;
  v57 = 0LL;
  if ( v54 > 0 )
    v57 = v54;
  v58 = v55 - v57;
  if ( __OFSUB__(v55, v57) )
  {
    v53 = &off_2AAE48;
    goto LABEL_110;
  }
  v59 = 0LL;
  if ( v58 > 0 )
    v59 = v58;
  v60 = uu_ptx::trim_broken_word_left(a2, v47, v59, v56);
  v61 = uu_ptx::trim_idx(a2, v47, v60, v56);
  v63 = v61;
  v64 = v62;
  if ( v62 < v61 )
    core::slice::index::slice_index_order_fail(v61, v62, &off_2AAE60);
  if ( v62 > v47 )
    core::slice::index::slice_end_index_len_fail(v62, v47, &off_2AAE60);
  v79 = 0LL;
  v80 = 1uLL;
  <alloc::string::String as core::iter::traits::collect::Extend<char>>::extend(&v79, a2 + 4 * v61, a2 + 4 * v62);
  v78 = (void *)v80;
  if ( !(_QWORD)v80 )
    goto LABEL_91;
  v65 = *((_QWORD *)&v80 + 1);
  if ( v80 < 0 )
    goto LABEL_91;
  v83 = (unsigned __int64)v79;
  v66 = v91;
  if ( (unsigned __int64)(v90 - v91) < *((_QWORD *)&v80 + 1) )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v90, v91, *((_QWORD *)&v80 + 1));
    v66 = v91;
  }
  v67 = (void *)(*((_QWORD *)&v90 + 1) + v66);
  core::intrinsics::copy_nonoverlapping::precondition_check(v78, v67, 1LL, 1LL, v65);
  memcpy(v67, v78, v65);
  v91 += v65;
  if ( v93 != v37 && v102 == v103 )
  {
    v68 = (const void *)a7[4];
    if ( v68 )
    {
      v69 = a7[5];
      if ( v69 >= 0 )
      {
        v70 = v85;
        if ( (unsigned __int64)v84 - v85 < v69 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v84, v85, v69);
          v70 = v85;
        }
        v71 = &v85;
        v72 = (void *)(*((_QWORD *)&v84 + 1) + v70);
LABEL_72:
        core::intrinsics::copy_nonoverlapping::precondition_check(v68, v72, 1LL, 1LL, v69);
        memcpy(v72, v68, v69);
        *v71 += v69;
        v73 = a7;
        goto LABEL_73;
      }
    }
    goto LABEL_91;
  }
  v73 = a7;
  if ( v93 != v37 && v103 != v37 )
  {
    v68 = (const void *)a7[4];
    if ( v68 )
    {
      v69 = a7[5];
      if ( v69 >= 0 )
      {
        v74 = v89;
        if ( (__int64)v88 - v89 < (unsigned __int64)v69 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v88, v89, v69);
          v74 = v89;
        }
        v71 = (unsigned __int64 *)&v89;
        v72 = (void *)(*((_QWORD *)&v88 + 1) + v74);
        goto LABEL_72;
      }
    }
LABEL_91:
    core::panicking::panic_nounwind(anon_23a8c89669b7e3966eab8f1d3c4cd90c_23_llvm_2187995499940452454, 162LL);
  }
LABEL_73:
  if ( v92 )
  {
    v75 = v73 + 3;
    if ( v63 == v64 )
    {
      v108[0] = v75;
      v108[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v108[2] = &v86;
      v108[3] = <alloc::string::String as core::fmt::Display>::fmt;
      v79 = "\x01";
      *(_QWORD *)&v80 = 2LL;
      *((_QWORD *)&v80 + 1) = v108;
      v81 = 2LL;
      v82 = 0LL;
      alloc::fmt::format::format_inner(&v110, &v79);
      v104 = v110;
      v105 = v111;
      if ( (_QWORD)v86 )
        _rust_dealloc(*((_QWORD *)&v86 + 1), v86, 1LL);
      v87 = v105;
      v86 = v104;
    }
    else if ( v63 )
    {
      v109[0] = v75;
      v109[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v109[2] = &v90;
      v109[3] = <alloc::string::String as core::fmt::Display>::fmt;
      v79 = "\x01";
      *(_QWORD *)&v80 = 2LL;
      *((_QWORD *)&v80 + 1) = v109;
      v81 = 2LL;
      v82 = 0LL;
      alloc::fmt::format::format_inner(&v112, &v79);
      v106 = v112;
      v107 = v113;
      if ( (_QWORD)v90 )
        _rust_dealloc(*((_QWORD *)&v90 + 1), v90, 1LL);
      v91 = v107;
      v90 = v106;
    }
  }
  v76 = v100;
  *(_QWORD *)(v100 + 16) = v89;
  *(_OWORD *)v76 = v88;
  *(_QWORD *)(v76 + 40) = v87;
  *(_OWORD *)(v76 + 24) = v86;
  *(_QWORD *)(v76 + 64) = v85;
  *(_OWORD *)(v76 + 48) = v84;
  *(_OWORD *)(v76 + 72) = v90;
  *(_QWORD *)(v76 + 88) = v91;
  if ( v83 )
    _rust_dealloc(v78, v83, 1LL);
  if ( v94 )
    _rust_dealloc(v97, v94, 1LL);
  if ( v95 )
    _rust_dealloc(v98, v95, 1LL);
  if ( v96 )
    _rust_dealloc(src, v96, 1LL);
  return v100;
}
