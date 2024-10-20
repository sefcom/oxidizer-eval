__int64 __fastcall uu_pr::recreate_arguments(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 position; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r12
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // r12
  char v28; // bl
  __int64 v29; // r12
  unsigned __int64 v30; // rbp
  __int64 v31; // rbx
  __int64 *v32; // rdi
  unsigned __int64 v33; // r12
  _BYTE *v34; // rax
  __int64 *v35; // r13
  bool v36; // cc
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // r14
  _QWORD *v39; // r15
  __int64 v41; // [rsp+8h] [rbp-1B0h]
  __int128 v42; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v43; // [rsp+20h] [rbp-198h]
  __int64 v44; // [rsp+28h] [rbp-190h] BYREF
  __int64 v45; // [rsp+30h] [rbp-188h]
  char v46; // [rsp+38h] [rbp-180h]
  __int128 v47; // [rsp+40h] [rbp-178h] BYREF
  unsigned __int64 v48; // [rsp+50h] [rbp-168h]
  __m256i v49; // [rsp+60h] [rbp-158h] BYREF
  __int64 v50; // [rsp+80h] [rbp-138h]
  __int64 v51; // [rsp+90h] [rbp-128h]
  __int64 v52; // [rsp+98h] [rbp-120h]
  __int64 v53; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-110h]
  __int64 v55; // [rsp+B0h] [rbp-108h]
  char v56; // [rsp+B8h] [rbp-100h]
  __int64 v57; // [rsp+C0h] [rbp-F8h]
  __int64 v58; // [rsp+C8h] [rbp-F0h]
  __int64 v59; // [rsp+D0h] [rbp-E8h]
  __int64 v60; // [rsp+D8h] [rbp-E0h]
  __int64 v61; // [rsp+E0h] [rbp-D8h] BYREF
  _QWORD v62[3]; // [rsp+E8h] [rbp-D0h] BYREF
  __m256i v63; // [rsp+100h] [rbp-B8h] BYREF
  __m256i v64; // [rsp+120h] [rbp-98h] BYREF
  __m256i v65; // [rsp+140h] [rbp-78h] BYREF
  _QWORD v66[11]; // [rsp+160h] [rbp-58h] BYREF

  v4 = a2;
  v58 = a1;
  regex::regex::string::Regex::new(&v49, aD_1, 10LL);
  if ( !v49.m256i_i64[0] )
  {
    v43 = v49.m256i_i64[3];
    v42 = *(_OWORD *)&v49.m256i_u64[1];
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v42, &off_28E900, &off_28E9A0);
  }
  v64 = v49;
  regex::regex::string::Regex::new(&v49, aD_2, 9LL);
  if ( !v49.m256i_i64[0] )
  {
    v43 = v49.m256i_i64[3];
    v42 = *(_OWORD *)&v49.m256i_u64[1];
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v42, &off_28E900, &off_28E9B8);
  }
  v63 = v49;
  regex::regex::string::Regex::new(&v49, aNS, 7LL);
  if ( !v49.m256i_i64[0] )
  {
    v43 = v49.m256i_i64[3];
    v42 = *(_OWORD *)&v49.m256i_u64[1];
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v42, &off_28E900, &off_28E9D0);
  }
  v65 = v49;
  if ( !a3 )
  {
    *(_QWORD *)&v42 = 0LL;
    *((_QWORD *)&v42 + 1) = 8LL;
    v12 = a2;
    goto LABEL_12;
  }
  v5 = 24 * a3;
  if ( a3 > 0x555555555555555LL )
  {
    v7 = 0LL;
LABEL_56:
    alloc::raw_vec::handle_error(v7, 24 * a3);
  }
  v6 = a3;
  v7 = 8LL;
  v8 = _rust_alloc(24 * a3, 8LL);
  if ( !v8 )
    goto LABEL_56;
  v9 = v8;
  *(_QWORD *)&v42 = a3;
  *((_QWORD *)&v42 + 1) = v8;
  v10 = 0LL;
  v11 = 0LL;
  do
  {
    if ( v5 == v10 )
      break;
    <alloc::string::String as core::clone::Clone>::clone(&v49, v10 + a2);
    ++v11;
    *(_QWORD *)(v9 + v10 + 16) = v49.m256i_i64[2];
    *(_OWORD *)(v9 + v10) = *(_OWORD *)v49.m256i_i8;
    v10 += 24LL;
  }
  while ( v6 != v11 );
  v4 = a2;
  a3 = v6;
  v12 = a2 + v5;
LABEL_12:
  v47 = v42;
  v48 = a3;
  v49.m256i_i64[0] = v4;
  v49.m256i_i64[1] = v12;
  position = itertools::Itertools::find_position(&v49, &v65);
  if ( !v14 )
    goto LABEL_51;
  v15 = position;
  v16 = position + 1;
  if ( position + 1 >= a3 )
    goto LABEL_51;
  v17 = *(_QWORD *)(v4 + 24 * v16 + 8);
  v18 = *(_QWORD *)(v4 + 24 * v16 + 16);
  v20 = v63.m256i_i64[1];
  v19 = v63.m256i_i64[0];
  LODWORD(v42) = 0;
  *((_QWORD *)&v42 + 1) = v17;
  v43 = v18;
  v44 = 0LL;
  v45 = v18;
  v46 = 1;
  v21 = *(_QWORD *)(*(_QWORD *)(v63.m256i_i64[0] + 32) + 168LL);
  if ( *(_QWORD *)v21
    && (*(_QWORD *)(v21 + 8) > v18
     || (*(_BYTE *)(v21 + 60) & 1) != 0
     && (*(_BYTE *)(v21 + 64) & 2) != 0
     && *(_QWORD *)(v21 + 16)
     && *(_QWORD *)(v21 + 24) < v18) )
  {
    goto LABEL_36;
  }
  v22 = (_QWORD *)(__readfsqword(0) - 16);
  if ( *v22 )
    v23 = v22 + 1;
  else
    v23 = (__int64 *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(__readfsqword(0) - 16, 0LL);
  v24 = *v23;
  if ( *v23 == *(_QWORD *)(v20 + 40) )
  {
    *(_QWORD *)(v20 + 40) = 1LL;
    v55 = v20;
    v53 = 1LL;
    v54 = v24;
    v56 = 0;
    v25 = *(_QWORD *)(v19 + 24);
    v26 = *(_QWORD *)(v19 + 16) + ((*(_QWORD *)(v25 + 16) - 1LL) & 0xFFFFFFFFFFFFFFF0LL) + 16;
LABEL_27:
    v27 = v20 + 48;
    v28 = 0;
    goto LABEL_28;
  }
  regex_automata::util::pool::inner::Pool<T,F>::get_slow(&v53, v20);
  v25 = *(_QWORD *)(v19 + 24);
  v26 = *(_QWORD *)(v19 + 16) + ((*(_QWORD *)(v25 + 16) - 1LL) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  if ( v53 )
  {
    v20 = v55;
    goto LABEL_27;
  }
  v28 = 1;
  v27 = v54;
LABEL_28:
  (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64, __int128 *))(v25 + 112))(v62, v26, v27, &v42);
  v29 = v54;
  if ( v28 )
  {
    if ( v56 )
    {
      core::ptr::drop_in_place<regex_automata::meta::regex::Cache>(v54);
      _rust_dealloc(v29, 1400LL, 8LL);
    }
    else
    {
      regex_automata::util::pool::inner::Pool<T,F>::put_value(v55, v54);
    }
  }
  else
  {
    v61 = v54;
    if ( v54 == 2 )
    {
      v49.m256i_i64[0] = 0LL;
      core::panicking::assert_failed(
        1LL,
        &regex_automata::util::pool::inner::THREAD_ID_DROPPED,
        &v61,
        &v49,
        &off_28E880);
    }
    *(_QWORD *)(v55 + 40) = v54;
  }
  if ( !v62[0] )
  {
LABEL_36:
    v30 = v48;
    if ( v48 <= v16 )
      alloc::vec::Vec<T,A>::remove::assert_failed(v16, v48, &off_28E9E8);
    v31 = *((_QWORD *)&v47 + 1);
    v32 = (__int64 *)(*((_QWORD *)&v47 + 1) + 24 * v16);
    v41 = *v32;
    v52 = v32[1];
    v60 = v32[2];
    memmove(v32, v32 + 3, 24 * (v48 - v15) - 48);
    v33 = v30 - 1;
    v48 = v30 - 1;
    v34 = (_BYTE *)_rust_alloc(1LL, 1LL);
    if ( !v34 )
      alloc::raw_vec::handle_error(1LL, 1LL);
    *v34 = 9;
    v44 = 5LL;
    *(_QWORD *)&v42 = 1LL;
    *((_QWORD *)&v42 + 1) = v34;
    v43 = 1LL;
    v45 = 1LL;
    v62[0] = &v44;
    v62[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v49.m256i_i64[0] = (__int64)&anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
    v49.m256i_i64[1] = 1LL;
    v50 = 0LL;
    v49.m256i_i64[2] = (__int64)v62;
    v49.m256i_i64[3] = 1LL;
    alloc::fmt::format::format_inner(&v53, &v49);
    if ( (_QWORD)v42 )
      _rust_dealloc(*((_QWORD *)&v42 + 1), v42, 1LL);
    v51 = v53;
    v57 = v54;
    if ( v33 < v16 )
      alloc::vec::Vec<T,A>::insert::assert_failed(
        v16,
        v30 - 1,
        &anon_bb941d8fa1ce0f94b5c281ba67cfd6b6_6_llvm_4738797067168647296);
    v59 = v55;
    if ( v33 == (_QWORD)v47 )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(&v47);
      v31 = *((_QWORD *)&v47 + 1);
    }
    v35 = (__int64 *)(v31 + 24 * v16);
    v36 = v33 <= v16;
    v37 = v33 - v16;
    if ( !v36 )
      memmove(v35 + 3, v35, 24 * v37);
    *v35 = v51;
    v35[1] = v57;
    v35[2] = v59;
    v48 = v30;
    v38 = v15 + 2;
    if ( v30 < v38 )
      alloc::vec::Vec<T,A>::insert::assert_failed(
        v38,
        v30,
        &anon_bb941d8fa1ce0f94b5c281ba67cfd6b6_6_llvm_4738797067168647296);
    if ( v30 == (_QWORD)v47 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v47);
    v39 = (_QWORD *)(*((_QWORD *)&v47 + 1) + 24 * v38);
    if ( v30 > v38 )
      memmove(v39 + 3, (const void *)(*((_QWORD *)&v47 + 1) + 24 * v38), 24 * (v30 - v38));
    *v39 = v41;
    v39[1] = v52;
    v39[2] = v60;
    v48 = v30 + 1;
  }
LABEL_51:
  v66[0] = *((_QWORD *)&v47 + 1);
  v66[1] = *((_QWORD *)&v47 + 1);
  v66[2] = v47;
  v66[3] = *((_QWORD *)&v47 + 1) + 24 * v48;
  v66[4] = &v64;
  alloc::vec::in_place_collect::from_iter_in_place(v58, v66);
  core::ptr::drop_in_place<regex::regex::string::Regex>(&v65);
  core::ptr::drop_in_place<regex::regex::string::Regex>(&v63);
  core::ptr::drop_in_place<regex::regex::string::Regex>(&v64);
  return v58;
}
