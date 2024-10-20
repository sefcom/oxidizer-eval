__int64 __fastcall uu_ptx::create_word_set(__int64 a1, __int64 a2, __int64 a3, __int128 **a4)
{
  __int128 *v6; // r14
  __int128 *v7; // r15
  __int16 v8; // ax
  __int128 *v9; // rdx
  __int64 impl; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  void *v15; // rdx
  __int64 v16; // r15
  __int64 v17; // r13
  char *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rax
  __m256i *v23; // rdx
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // r13
  __int64 v27; // rbx
  unsigned __int64 v28; // rsi
  __int64 v29; // r14
  const void *v30; // rbx
  void *v31; // r15
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rbp
  _OWORD *v38; // rcx
  bool v40; // [rsp+Fh] [rbp-439h]
  __int128 v41; // [rsp+10h] [rbp-438h] BYREF
  __int64 v42; // [rsp+20h] [rbp-428h]
  __int64 v43; // [rsp+28h] [rbp-420h]
  __int64 v44; // [rsp+30h] [rbp-418h]
  __int64 v45; // [rsp+38h] [rbp-410h]
  __m256i v46; // [rsp+40h] [rbp-408h] BYREF
  __int128 v47; // [rsp+60h] [rbp-3E8h] BYREF
  void *dest[2]; // [rsp+70h] [rbp-3D8h]
  __int128 v49; // [rsp+80h] [rbp-3C8h]
  __int128 v50; // [rsp+90h] [rbp-3B8h]
  __int128 v51; // [rsp+A0h] [rbp-3A8h]
  __int128 v52; // [rsp+B0h] [rbp-398h]
  __int128 v53; // [rsp+C0h] [rbp-388h]
  __m256i v54; // [rsp+D0h] [rbp-378h] BYREF
  __int64 v55; // [rsp+F8h] [rbp-350h]
  __int64 v56; // [rsp+100h] [rbp-348h]
  __int128 v57; // [rsp+108h] [rbp-340h]
  __int64 v58; // [rsp+118h] [rbp-330h] BYREF
  __int128 v59; // [rsp+120h] [rbp-328h] BYREF
  __int64 v60; // [rsp+130h] [rbp-318h]
  __int64 v61; // [rsp+138h] [rbp-310h]
  __int64 v62; // [rsp+140h] [rbp-308h]
  __int64 v63; // [rsp+148h] [rbp-300h]
  __int64 v64; // [rsp+150h] [rbp-2F8h]
  __int64 v65; // [rsp+158h] [rbp-2F0h]
  __int64 v66; // [rsp+160h] [rbp-2E8h]
  __int64 v67; // [rsp+168h] [rbp-2E0h]
  __int64 v68; // [rsp+170h] [rbp-2D8h]
  __int64 v69; // [rsp+178h] [rbp-2D0h]
  _QWORD v70[3]; // [rsp+180h] [rbp-2C8h] BYREF
  __int16 v71; // [rsp+198h] [rbp-2B0h]
  __int128 *v72; // [rsp+1A0h] [rbp-2A8h]
  __int64 *v73; // [rsp+1A8h] [rbp-2A0h] BYREF
  __int64 (__fastcall *v74)(); // [rsp+1B0h] [rbp-298h]
  __int64 v75; // [rsp+1B8h] [rbp-290h]
  __int128 v76; // [rsp+1C8h] [rbp-280h] BYREF
  __int64 v77; // [rsp+1D8h] [rbp-270h]
  __int128 v78; // [rsp+1E0h] [rbp-268h] BYREF
  void *v79; // [rsp+1F0h] [rbp-258h]
  void *v80; // [rsp+1F8h] [rbp-250h]
  __int64 v81; // [rsp+200h] [rbp-248h] BYREF
  int v82; // [rsp+210h] [rbp-238h]
  __int64 v83; // [rsp+218h] [rbp-230h]
  __int64 v84; // [rsp+220h] [rbp-228h]
  __int64 v85; // [rsp+228h] [rbp-220h]
  __int64 v86; // [rsp+230h] [rbp-218h]
  char v87; // [rsp+238h] [rbp-210h]
  __m256i *v88; // [rsp+240h] [rbp-208h]
  __int64 v89; // [rsp+248h] [rbp-200h]
  __int64 v90; // [rsp+250h] [rbp-1F8h]
  __m256i v91; // [rsp+260h] [rbp-1E8h] BYREF
  __m256i v92; // [rsp+280h] [rbp-1C8h] BYREF
  _BYTE v93[48]; // [rsp+2A0h] [rbp-1A8h] BYREF
  __int128 v94; // [rsp+2D0h] [rbp-178h]
  __int128 v95; // [rsp+2E0h] [rbp-168h]
  __int128 v96; // [rsp+2F0h] [rbp-158h]
  __int128 v97; // [rsp+300h] [rbp-148h]
  __int128 v98; // [rsp+310h] [rbp-138h] BYREF
  __int64 v99; // [rsp+320h] [rbp-128h]
  __int128 v100; // [rsp+330h] [rbp-118h] BYREF
  __int64 v101; // [rsp+340h] [rbp-108h]
  __int128 v102; // [rsp+368h] [rbp-E0h] BYREF
  __int64 v103; // [rsp+378h] [rbp-D0h]
  _QWORD v104[3]; // [rsp+380h] [rbp-C8h] BYREF
  __int128 v105; // [rsp+398h] [rbp-B0h]
  __int64 v106; // [rsp+3A8h] [rbp-A0h]
  __int64 v107; // [rsp+3B0h] [rbp-98h]
  __int64 v108; // [rsp+3B8h] [rbp-90h]
  __int64 v109; // [rsp+3C0h] [rbp-88h]
  __int64 v110; // [rsp+3C8h] [rbp-80h]

  v45 = a2;
  v55 = a1;
  if ( !*(_QWORD *)(a3 + 8) || *(__int64 *)(a3 + 16) < 0 )
    goto LABEL_75;
  regex::regex::string::Regex::new(&v91);
  if ( !v91.m256i_i64[0] )
  {
    v101 = v91.m256i_i64[3];
    v100 = *(_OWORD *)&v91.m256i_u64[1];
    core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v100, &off_2AA8C0, &off_2AABE8);
  }
  v46 = v91;
  if ( !*(_QWORD *)(v45 + 56) || *(__int64 *)(v45 + 64) < 0 )
LABEL_75:
    core::panicking::panic_nounwind(anon_23a8c89669b7e3966eab8f1d3c4cd90c_23_llvm_2187995499940452454, 162LL);
  regex::regex::string::Regex::new(&v92);
  v56 = a3;
  if ( !v92.m256i_i64[0] )
  {
    v99 = v92.m256i_i64[3];
    v98 = *(_OWORD *)&v92.m256i_u64[1];
    core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v98, &off_2AA8C0, &off_2AAC00);
  }
  v54 = v92;
  *(_QWORD *)&v59 = 0LL;
  v60 = 0LL;
  v6 = *a4;
  v7 = a4[1];
  v47 = **a4;
  v8 = core::core_arch::x86::sse2::_mm_movemask_epi8(&v47);
  v9 = a4[3];
  v70[0] = v6;
  v70[1] = v6 + 1;
  v70[2] = (char *)v7 + (_QWORD)v6 + 1;
  v71 = ~v8;
  v72 = v9;
  if ( v9 )
  {
    v66 = v56 + 24;
    v67 = v56 + 56;
    v64 = v56 + 72;
    v65 = v56 + 104;
    while ( 1 )
    {
      impl = hashbrown::raw::RawIterRange<T>::next_impl(v70);
      v11 = (__int64)v72 - 1;
      v72 = (__int128 *)((char *)v72 - 1);
      if ( !impl )
        goto LABEL_68;
      v12 = *(_QWORD *)(impl - 48);
      if ( !v12 || (v12 & 7) != 0 || (v13 = *(_QWORD *)(impl - 40), v13 >= 0x555555555555556LL) )
        core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
      if ( v13 )
        break;
LABEL_9:
      if ( !v11 )
        goto LABEL_68;
    }
    v68 = impl - 80;
    v62 = *(_QWORD *)(impl - 8);
    v61 = v12 + 24 * v13;
    v44 = 0LL;
LABEL_16:
    v14 = *(_QWORD *)(v12 + 8);
    if ( !v14 )
      goto LABEL_75;
    v15 = *(void **)(v12 + 16);
    if ( (__int64)v15 < 0 )
      goto LABEL_75;
    v43 = v12;
    *((_QWORD *)&v47 + 1) = v14;
    dest[0] = v15;
    dest[1] = 0LL;
    *(_QWORD *)&v49 = v15;
    LODWORD(v47) = 0;
    BYTE8(v49) = 0;
    regex_automata::util::search::Input::set_span(&v47, 0LL);
    *(_OWORD *)&v93[32] = v49;
    *(_OWORD *)&v93[16] = *(_OWORD *)dest;
    *(_OWORD *)v93 = v47;
    regex_automata::meta::regex::Regex::search(&v73, &v54, v93);
    if ( v73 )
    {
      *((_QWORD *)&v57 + 1) = v74;
      *(_QWORD *)&v57 = v75;
    }
    else
    {
      v57 = 0uLL;
    }
    v16 = *(_QWORD *)(v43 + 8);
    if ( !v16 )
      goto LABEL_75;
    v17 = *(_QWORD *)(v43 + 16);
    if ( v17 < 0 )
      goto LABEL_75;
    v18 = (char *)v46.m256i_i64[1];
    v19 = std::thread::local::LocalKey<T>::try_with(&anon_fe9d1cf8fd7ac9e4a312d14ad42d0810_5_llvm_7710048280991797506);
    v21 = core::result::Result<T,E>::expect(
            v19,
            v20,
            anon_03522450585ae836116edbf29800e378_5_llvm_5073154966127019408,
            70LL,
            &anon_03522450585ae836116edbf29800e378_7_llvm_5073154966127019408);
    v22 = core::sync::atomic::atomic_load(v18 + 40, 2LL);
    if ( v21 == v22 )
    {
      core::sync::atomic::atomic_store(v18 + 40, 1LL, 1LL);
      dest[0] = v18;
      *(_QWORD *)&v47 = 1LL;
      *((_QWORD *)&v47 + 1) = v21;
      LOBYTE(dest[1]) = 0;
    }
    else
    {
      regex_automata::util::pool::inner::Pool<T,F>::get_slow(&v47, v18, v21, v22);
    }
    v63 = v43 + 24;
    v79 = dest[0];
    v80 = dest[1];
    v78 = v47;
    v81 = 0LL;
    v82 = 0;
    v83 = v16;
    v84 = v17;
    v85 = 0LL;
    v86 = v17;
    v87 = 0;
    v23 = &v46;
    v88 = &v46;
    v89 = v16;
    v24 = v43;
    v90 = v17;
    v69 = v44 + v62;
    v40 = __CFADD__(v44, v62);
    while ( 1 )
    {
      while ( 1 )
      {
        regex_automata::util::iter::Searcher::try_advance(v93, &v81, v23, &v78);
        if ( *(_QWORD *)v93 == 2LL )
        {
          v58 = *(_QWORD *)&v93[8];
          v73 = &v58;
          v74 = <regex_automata::util::search::MatchError as core::fmt::Display>::fmt;
          *(_QWORD *)&v47 = &anon_b0bb4b29b00138fe83d21c8735cebf5d_344_llvm_5606763989977015212;
          *((_QWORD *)&v47 + 1) = 2LL;
          *(_QWORD *)&v49 = 0LL;
          dest[0] = &v73;
          dest[1] = &dword_0 + 1;
          core::panicking::panic_fmt(&v47, &anon_b0bb4b29b00138fe83d21c8735cebf5d_346_llvm_5606763989977015212);
        }
        if ( !*(_QWORD *)v93 || !v89 )
        {
          core::ptr::drop_in_place<regex_automata::util::pool::inner::PoolGuard<regex_automata::meta::regex::Cache,alloc::boxed::Box<dyn core::ops::function::Fn<()>+Output = regex_automata::meta::regex::Cache+core::marker::Sync+core::panic::unwind_safe::RefUnwindSafe+core::marker::Send+core::panic::unwind_safe::UnwindSafe>>>(&v78);
          ++v44;
          v12 = v63;
          if ( v63 == v61 )
          {
            v11 = (__int64)v72;
            goto LABEL_9;
          }
          goto LABEL_16;
        }
        v25 = *(_QWORD *)&v93[8];
        v26 = *(_QWORD *)&v93[16];
        if ( (*(_BYTE *)(v45 + 90) & 1) == 0
          || __PAIR128__(*(unsigned __int64 *)&v93[8], *(unsigned __int64 *)&v93[16]) != v57 )
        {
          break;
        }
LABEL_28:
        v23 = v88;
      }
      v27 = *(_QWORD *)(v24 + 8);
      if ( !v27 )
        goto LABEL_75;
      v28 = *(_QWORD *)(v24 + 16);
      if ( (v28 & 0x8000000000000000LL) != 0LL )
        goto LABEL_75;
      if ( *(_QWORD *)&v93[16] < *(_QWORD *)&v93[8] )
        goto LABEL_73;
      if ( *(_QWORD *)&v93[8] )
      {
        if ( v28 <= *(_QWORD *)&v93[8] )
        {
          if ( v28 != *(_QWORD *)&v93[8] )
            goto LABEL_73;
        }
        else if ( *(char *)(v27 + *(_QWORD *)&v93[8]) <= -65 )
        {
          goto LABEL_73;
        }
      }
      if ( *(_QWORD *)&v93[16] )
      {
        if ( v28 <= *(_QWORD *)&v93[16] )
        {
          if ( v28 != *(_QWORD *)&v93[16] )
LABEL_73:
            core::str::slice_error_fail(*(_QWORD *)(v24 + 8), v28, *(_QWORD *)&v93[8], *(_QWORD *)&v93[16], &off_2AAC18);
        }
        else if ( *(char *)(v27 + *(_QWORD *)&v93[16]) < -64 )
        {
          goto LABEL_73;
        }
      }
      if ( v28 < *(_QWORD *)&v93[16] )
        core::panicking::panic_nounwind(anon_397063f1f014473d61d2154b9752ab14_26_llvm_15845615741859781558, 102LL);
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v47, *(_QWORD *)&v93[16] - *(_QWORD *)&v93[8], 0LL);
      v29 = *((_QWORD *)&v47 + 1);
      if ( (_QWORD)v47 )
        alloc::raw_vec::handle_error(*((_QWORD *)&v47 + 1), dest[0]);
      v30 = (const void *)(v25 + v27);
      v31 = dest[0];
      core::intrinsics::copy_nonoverlapping::precondition_check(v30, dest[0], 1LL, 1LL, v26 - v25);
      memcpy(v31, v30, v26 - v25);
      *(_QWORD *)&v41 = v29;
      *((_QWORD *)&v41 + 1) = v31;
      v24 = v43;
      v32 = v56;
      v42 = v26 - v25;
      if ( (*(_BYTE *)(v56 + 120) & 1) == 0
        || *(_QWORD *)(v56 + 48)
        && (v33 = core::hash::BuildHasher::hash_one(v67, &v41), hashbrown::raw::RawTable<T,A>::find(v66, v33, &v41)) )
      {
        if ( (*(_BYTE *)(v32 + 121) & 1) == 0
          || !*(_QWORD *)(v32 + 96)
          || (v34 = core::hash::BuildHasher::hash_one(v65, &v41), !hashbrown::raw::RawTable<T,A>::find(v64, v34, &v41)) )
        {
          v35 = *((_QWORD *)&v41 + 1);
          v36 = v42;
          if ( (*(_BYTE *)(v45 + 92) & 1) != 0 )
          {
            if ( !*((_QWORD *)&v41 + 1) || v42 < 0 )
              goto LABEL_75;
            alloc::str::<impl str>::to_lowercase(&v102, *((_QWORD *)&v41 + 1), v42);
            if ( (_QWORD)v41 )
              _rust_dealloc(*((_QWORD *)&v41 + 1), v41, 1LL);
            v41 = v102;
            v36 = v103;
            v42 = v103;
            v35 = *((_QWORD *)&v102 + 1);
          }
          v37 = v41;
          <alloc::string::String as core::clone::Clone>::clone(&v76);
          if ( v40 )
            core::panicking::panic_const::panic_const_add_overflow(&off_2AAC30);
          v104[0] = v37;
          v104[1] = v35;
          v104[2] = v36;
          v107 = v69;
          v108 = v44;
          v109 = v25;
          v110 = v26;
          v106 = v77;
          v105 = v76;
          alloc::collections::btree::map::BTreeMap<K,V,A>::entry(v93, &v59, v104);
          if ( *(_QWORD *)v93 == 0x8000000000000000LL )
          {
            *(_OWORD *)dest = *(_OWORD *)&v93[24];
            v47 = *(_OWORD *)&v93[8];
            alloc::collections::btree::node::Handle<alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,K,V,NodeType>,alloc::collections::btree::node::marker::KV>::kv_mut(&v47);
          }
          else
          {
            v53 = v97;
            v52 = v96;
            v51 = v95;
            v50 = v94;
            v49 = *(_OWORD *)&v93[32];
            *(_OWORD *)dest = *(_OWORD *)&v93[16];
            v47 = *(_OWORD *)v93;
            alloc::collections::btree::map::entry::VacantEntry<K,V,A>::insert(&v47);
          }
          goto LABEL_28;
        }
      }
      if ( !(_QWORD)v41 )
        goto LABEL_28;
      _rust_dealloc(*((_QWORD *)&v41 + 1), v41, 1LL);
      v23 = v88;
    }
  }
LABEL_68:
  v38 = (_OWORD *)v55;
  *(_QWORD *)(v55 + 16) = v60;
  *v38 = v59;
  core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v54);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v54.m256i_i64[2]) )
    alloc::sync::Arc<T,A>::drop_slow(&v54.m256i_u64[2]);
  core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v46);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v46.m256i_i64[2]) )
    alloc::sync::Arc<T,A>::drop_slow(&v46.m256i_u64[2]);
  return v55;
}
