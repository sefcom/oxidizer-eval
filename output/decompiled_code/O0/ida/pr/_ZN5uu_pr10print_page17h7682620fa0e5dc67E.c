__int64 __fastcall uu_pr::print_page(char **a1, char **a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  void *v27; // r13
  char **v28; // rbp
  unsigned __int64 v29; // rax
  char *v30; // r15
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r12
  bool v33; // cf
  unsigned __int64 v34; // rbx
  char **v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rax
  char **v38; // r15
  unsigned __int64 v39; // rdx
  __int64 v40; // rbp
  char **v41; // r13
  int v42; // r8d
  __int64 v43; // r12
  __int64 v44; // r14
  __int64 v45; // rbx
  __int64 v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // r13
  __int64 v56; // rbp
  __int64 v57; // r14
  __int64 v58; // rbx
  __int64 v59; // r15
  __int64 v60; // r14
  __int64 v61; // r14
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v65; // rcx
  __int64 v66; // rax
  char **v67; // rdx
  char v68; // [rsp+Fh] [rbp-249h]
  char v69; // [rsp+Fh] [rbp-249h]
  __int64 v70; // [rsp+10h] [rbp-248h] BYREF
  char **v71; // [rsp+18h] [rbp-240h]
  char **v72; // [rsp+20h] [rbp-238h]
  char **v73; // [rsp+28h] [rbp-230h]
  unsigned __int64 v74; // [rsp+30h] [rbp-228h]
  __int64 v75; // [rsp+38h] [rbp-220h]
  unsigned __int64 v76; // [rsp+40h] [rbp-218h]
  int v77; // [rsp+4Ch] [rbp-20Ch]
  __int64 v78; // [rsp+50h] [rbp-208h]
  void *v79; // [rsp+58h] [rbp-200h] BYREF
  __int64 v80; // [rsp+60h] [rbp-1F8h]
  __int64 *v81; // [rsp+68h] [rbp-1F0h]
  void *v82; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v83; // [rsp+78h] [rbp-1E0h] BYREF
  __int64 *v84; // [rsp+80h] [rbp-1D8h]
  __int64 v85; // [rsp+88h] [rbp-1D0h]
  char **v86; // [rsp+90h] [rbp-1C8h]
  __int64 v87; // [rsp+98h] [rbp-1C0h]
  __int64 v88; // [rsp+A0h] [rbp-1B8h]
  unsigned __int64 v89; // [rsp+A8h] [rbp-1B0h]
  char v90; // [rsp+B0h] [rbp-1A8h]
  __int64 v91; // [rsp+B8h] [rbp-1A0h]
  unsigned __int64 v92; // [rsp+C0h] [rbp-198h]
  __int64 v93; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v94; // [rsp+D8h] [rbp-180h]
  __int64 v95; // [rsp+E0h] [rbp-178h]
  __int64 v96; // [rsp+E8h] [rbp-170h]
  __int64 v97; // [rsp+F0h] [rbp-168h]
  __int64 v98; // [rsp+F8h] [rbp-160h]
  __int64 v99; // [rsp+100h] [rbp-158h]
  __int64 v100; // [rsp+108h] [rbp-150h]
  __int64 v101; // [rsp+110h] [rbp-148h]
  __int64 v102; // [rsp+118h] [rbp-140h] BYREF
  __int64 v103; // [rsp+120h] [rbp-138h]
  unsigned __int64 v104; // [rsp+128h] [rbp-130h]
  __int64 v105; // [rsp+130h] [rbp-128h] BYREF
  __int64 (__fastcall *v106)(); // [rsp+138h] [rbp-120h]
  __int64 v107; // [rsp+140h] [rbp-118h] BYREF
  __int128 v108; // [rsp+148h] [rbp-110h]
  __int128 v109; // [rsp+158h] [rbp-100h]
  __int64 v110; // [rsp+168h] [rbp-F0h]
  __int64 v111; // [rsp+170h] [rbp-E8h] BYREF
  __int64 *v112; // [rsp+178h] [rbp-E0h]
  __int64 v113; // [rsp+180h] [rbp-D8h]
  __int64 v114; // [rsp+188h] [rbp-D0h]
  __int64 v115; // [rsp+190h] [rbp-C8h] BYREF
  __int64 v116; // [rsp+198h] [rbp-C0h]
  __int64 v117; // [rsp+1A0h] [rbp-B8h]
  __int64 v118; // [rsp+1A8h] [rbp-B0h]
  __int64 v119; // [rsp+1B0h] [rbp-A8h]
  __int64 v120; // [rsp+1B8h] [rbp-A0h]
  __int64 v121; // [rsp+1C0h] [rbp-98h]
  _QWORD v122[2]; // [rsp+1C8h] [rbp-90h] BYREF
  __int128 v123; // [rsp+1D8h] [rbp-80h]
  __int64 v124; // [rsp+1E8h] [rbp-70h] BYREF
  __int64 v125; // [rsp+1F0h] [rbp-68h]
  __int64 v126; // [rsp+1F8h] [rbp-60h]
  __int128 v127; // [rsp+200h] [rbp-58h] BYREF
  __int64 v128; // [rsp+210h] [rbp-48h] BYREF
  __int64 v129; // [rsp+218h] [rbp-40h]
  __int64 v130; // [rsp+220h] [rbp-38h]

  v71 = a2;
  v73 = a1;
  v6 = *(_QWORD *)(a3 + 88);
  v101 = *(_QWORD *)(a3 + 80);
  v100 = v6;
  core::slice::raw::from_raw_parts::precondition_check(v101, 1LL, 1LL, v6);
  v7 = *(_QWORD *)(a3 + 152);
  v8 = *(_QWORD *)(a3 + 160);
  core::slice::raw::from_raw_parts::precondition_check(v7, 1LL, 1LL, v8);
  v115 = a4;
  v12 = (*(_BYTE *)(a3 + 321) & 1) == 0;
  v75 = a3;
  if ( !v12 )
  {
    v105 = a3 + 120;
    v106 = <alloc::string::String as core::fmt::Display>::fmt;
    v107 = a3 + 48;
    *(_QWORD *)&v108 = <alloc::string::String as core::fmt::Display>::fmt;
    *((_QWORD *)&v108 + 1) = &v115;
    *(_QWORD *)&v109 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v82 = &unk_2C8260;
    v83 = 3LL;
    v84 = &v105;
    v85 = 3LL;
    v86 = 0LL;
    alloc::fmt::format::format_inner(&v93, &v82, v9, a3 + 48, v10, v11);
    v14 = v93;
    v15 = v94;
    v16 = v95;
    v13 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 120LL, 0LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 120LL);
    if ( (v13 & 7) != 0 )
    {
      v67 = &off_2C8290;
    }
    else
    {
      *(_QWORD *)v13 = 0LL;
      *(_QWORD *)(v13 + 8) = 1LL;
      *(_OWORD *)(v13 + 16) = 0LL;
      *(_QWORD *)(v13 + 32) = 1LL;
      *(_QWORD *)(v13 + 40) = 0LL;
      *(_QWORD *)(v13 + 48) = v14;
      *(_QWORD *)(v13 + 56) = v15;
      *(_QWORD *)(v13 + 64) = v16;
      *(_QWORD *)(v13 + 72) = 0LL;
      *(_QWORD *)(v13 + 80) = 1LL;
      *(_OWORD *)(v13 + 88) = 0LL;
      *(_QWORD *)(v13 + 104) = 1LL;
      *(_QWORD *)(v13 + 112) = 0LL;
      v12 = (*(_BYTE *)(v75 + 321) & 1) == 0;
      v97 = 5LL;
      v98 = v13;
      v99 = 5LL;
      v13 = 8LL;
      if ( v12 || (*(_BYTE *)(v75 + 322) & 1) != 0 )
        goto LABEL_10;
      v13 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 120LL, 0LL);
      if ( !v13 )
        alloc::alloc::handle_alloc_error(8LL, 120LL);
      if ( (v13 & 7) == 0 )
      {
        *(_QWORD *)v13 = 0LL;
        *(_QWORD *)(v13 + 8) = 1LL;
        *(_OWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 32) = 1LL;
        *(_OWORD *)(v13 + 40) = 0LL;
        *(_QWORD *)(v13 + 56) = 1LL;
        *(_OWORD *)(v13 + 64) = 0LL;
        *(_QWORD *)(v13 + 80) = 1LL;
        *(_OWORD *)(v13 + 88) = 0LL;
        *(_QWORD *)(v13 + 104) = 1LL;
        *(_QWORD *)(v13 + 112) = 0LL;
        v17 = 5LL;
        goto LABEL_11;
      }
      v67 = &off_2C82A8;
    }
    core::panicking::panic_misaligned_pointer_dereference(8LL, v13, v67);
  }
  v97 = 0LL;
  v98 = 8LL;
  v99 = 0LL;
  v13 = 8LL;
LABEL_10:
  v17 = 0LL;
LABEL_11:
  v118 = v8;
  v119 = v7;
  v102 = v17;
  v103 = v13;
  v104 = v17;
  v122[0] = std::io::stdio::stdout();
  v70 = std::io::stdio::Stdout::lock(v122);
  v18 = (__int64 *)v98;
  v111 = v98;
  v112 = (__int64 *)v98;
  v113 = v97;
  v114 = v98 + 24 * v99;
  if ( v99 )
  {
    do
    {
      v112 = v18 + 3;
      v19 = *v18;
      if ( *v18 == 0x8000000000000000LL )
        break;
      v20 = v18[1];
      v21 = v18[2];
      core::slice::raw::from_raw_parts::precondition_check(v20, 1LL, 1LL, v21);
      if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v70, v20, v21)
        || <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v70, v101, v100) )
      {
        if ( v19 )
          _rust_dealloc(v20, v19, 1LL);
        <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v111);
        goto LABEL_116;
      }
      if ( v19 )
        _rust_dealloc(v20, v19, 1LL);
      v18 = v112;
    }
    while ( v112 != (__int64 *)v114 );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v111);
  v22 = v75;
  v23 = *(_QWORD *)(v75 + 112);
  v24 = 1LL;
  v121 = *(_QWORD *)(v75 + 104);
  v120 = v23;
  core::slice::raw::from_raw_parts::precondition_check(v121, 1LL, 1LL, v23);
  v25 = *(_QWORD *)(v22 + 16);
  v74 = *(_QWORD *)(v22 + 312) >> (*(_BYTE *)(v22 + 320) & 1);
  if ( v25 )
  {
    v24 = *(_QWORD *)(v22 + 24);
    v26 = *(_QWORD *)(v22 + 256);
  }
  else
  {
    v26 = 0x8000000000000000LL;
    if ( *(_QWORD *)(v22 + 256) != 0x8000000000000000LL )
    {
      v24 = *(_QWORD *)(v22 + 288);
      v26 = *(_QWORD *)(v22 + 256);
    }
  }
  v127 = *(_OWORD *)(v22 + 32);
  if ( v26 == 0x8000000000000000LL )
    v77 = 0;
  else
    v77 = *(_BYTE *)(v22 + 296) & 1;
  v68 = *(_BYTE *)(v22 + 322);
  v79 = 0LL;
  v80 = 8LL;
  v81 = 0LL;
  v78 = v24;
  if ( v25 == 1 && v24 )
  {
    v72 = &v73[8 * (_QWORD)v71];
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    do
    {
      v30 = (char *)v29;
      v31 = v29 + 1;
      if ( v28 > v71 )
        core::slice::index::slice_start_index_len_fail(v28, v71, &off_2C8158);
      v76 = v31;
      if ( v28 == v71 )
      {
        v32 = 0LL;
      }
      else
      {
        v35 = &v73[8 * (_QWORD)v28];
        v32 = 0LL;
        do
        {
          if ( !v35 || v35[3] != v30 )
            break;
          if ( v27 == v79 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v79);
          *(_QWORD *)(v80 + 8LL * (_QWORD)v27) = v35;
          v27 = (char *)v27 + 1;
          v81 = (__int64 *)v27;
          ++v32;
          v35 += 8;
        }
        while ( v35 != v72 );
      }
      v33 = __CFADD__(v32, v28);
      v28 = (char **)((char *)v28 + v32);
      if ( v33 )
        core::panicking::panic_const::panic_const_add_overflow(&off_2C8170);
      v34 = v74 - v32;
      if ( v74 <= v32 )
      {
        v24 = v78;
      }
      else
      {
        v24 = v78;
        do
        {
          if ( v27 == v79 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v79);
          *(_QWORD *)(v80 + 8LL * (_QWORD)v27) = 0LL;
          v27 = (char *)v27 + 1;
          v81 = (__int64 *)v27;
          --v34;
        }
        while ( v34 );
      }
      v29 = v76;
    }
    while ( v76 != v24 );
  }
  v84 = v81;
  v82 = v79;
  v83 = v80;
  v85 = (__int64)v73;
  v86 = v71;
  v36 = v75;
  v87 = v75;
  v88 = v24;
  v89 = v74;
  v90 = v77;
  v91 = 0LL;
  v92 = v74;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v128, &v82);
  v105 = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  v106 = (__int64 (__fastcall *)())(&dword_0 + 1);
  v107 = 0LL;
  v110 = 0LL;
  v37 = v129;
  v93 = v129;
  v94 = v129;
  v95 = v128;
  v96 = v129 + 24 * v130;
  if ( v130 )
  {
    v74 = 0LL;
    v69 = v68 & 1;
    v73 = &anon_475f815846da37737caa07221b879fb7_1_llvm_234892413440793941;
    v38 = 0LL;
LABEL_52:
    v94 = v37 + 24;
    v39 = *(_QWORD *)v37;
    if ( *(_QWORD *)v37 == 0x8000000000000000LL )
      goto LABEL_89;
    v76 = *(_QWORD *)v37;
    v122[1] = v39;
    v123 = *(_OWORD *)(v37 + 8);
    v72 = (char **)v123;
    if ( !(_QWORD)v123
      || ((unsigned __int8)v72 & 7) != 0
      || (v40 = *((_QWORD *)&v123 + 1), *((_QWORD *)&v123 + 1) >> 60) )
    {
      core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
    }
    if ( !*((_QWORD *)&v123 + 1) )
      goto LABEL_73;
    v71 = v38;
    v41 = v72;
    v38 = &v72[*((_QWORD *)&v123 + 1)];
    v42 = 0;
    v43 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !++v43 )
          goto LABEL_137;
        if ( !*v41 )
          break;
        uu_pr::get_line_for_printing((unsigned int)&v115, v36, (unsigned int)*v41, v78, v42, (unsigned int)&v127, v40);
        v44 = v116;
        v48 = v117;
        core::slice::raw::from_raw_parts::precondition_check(v116, 1LL, 1LL, v117);
        v49 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v70, v44, v48);
        v47 = v115;
        if ( v49 )
        {
LABEL_83:
          if ( v47 )
            _rust_dealloc(v44, v47, 1LL);
LABEL_85:
          if ( !v76 )
          {
            v53 = 8LL;
            v52 = 0LL;
            goto LABEL_108;
          }
          if ( v76 <= 0x1FFFFFFFFFFFFFFFLL )
          {
            v52 = 8 * v76;
            v82 = v72;
            v83 = 8LL;
            v53 = 16LL;
LABEL_108:
            *(void **)((char *)&v82 + v53) = (void *)v52;
            if ( v83 && v84 )
              _rust_dealloc(v82, v84, v83);
            <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v93);
            if ( v105 == 0x8000000000000000LL )
            {
              std::io::error::repr_bitpacked::decode_repr(&v82, v106);
              if ( (unsigned __int8)v82 >= 3u )
                core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v83);
            }
            else
            {
              alloc::raw_vec::RawVec<T,A>::current_memory(&v82, &v105);
              if ( v83 )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v107, v82, v83, v84);
            }
LABEL_116:
            v61 = v70;
            v12 = (*(_DWORD *)(v70 + 12))-- == 1;
            if ( v12 )
            {
              v62 = core::option::Option<T>::map_or(0LL, 0LL);
              core::sync::atomic::atomic_store(v61, v62, 0LL);
              v63 = v70;
              if ( _InterlockedExchange((volatile __int32 *)(v70 + 8), 0) == 2 )
                std::sys::sync::mutex::futex::Mutex::wake(v63 + 8);
            }
            v60 = 1LL;
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v102);
            return v60;
          }
LABEL_131:
          core::panicking::panic_nounwind(anon_f7be525e746154e34cdd400086c42546_4_llvm_11761240801109542047, 69LL);
        }
        if ( v115 )
          _rust_dealloc(v44, v115, 1LL);
        if ( !++v74 )
        {
          v73 = &off_2C8140;
LABEL_137:
          core::panicking::panic_const::panic_const_add_overflow(v73);
        }
        ++v41;
        v42 = v43;
        v36 = v75;
        if ( v41 == v38 )
          goto LABEL_70;
      }
      if ( *(_QWORD *)(v36 + 16) != 1LL )
        break;
      uu_pr::get_line_for_printing((unsigned int)&v124, v36, (unsigned int)&v105, v78, v42, (unsigned int)&v127, v40);
      v44 = v125;
      v45 = v126;
      core::slice::raw::from_raw_parts::precondition_check(v125, 1LL, 1LL, v126);
      v46 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v70, v44, v45);
      v47 = v124;
      if ( v46 )
        goto LABEL_83;
      if ( v124 )
        _rust_dealloc(v44, v124, 1LL);
      ++v41;
      v42 = v43;
      v36 = v75;
      if ( v41 == v38 )
      {
LABEL_70:
        v38 = v71;
        if ( ((unsigned __int8)v71 & 1) != 0 )
          goto LABEL_74;
LABEL_75:
        if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v70, v121, v120) )
          goto LABEL_85;
        if ( !v76 )
        {
          v51 = 8LL;
          v50 = 0LL;
          goto LABEL_80;
        }
        if ( v76 > 0x1FFFFFFFFFFFFFFFLL )
          goto LABEL_131;
        v50 = 8 * v76;
        v82 = v72;
        v83 = 8LL;
        v51 = 16LL;
LABEL_80:
        *(void **)((char *)&v82 + v51) = (void *)v50;
        if ( v83 && v84 )
          _rust_dealloc(v82, v84, v83);
        v37 = v94;
        if ( v94 == v96 )
          goto LABEL_89;
        goto LABEL_52;
      }
    }
    LOBYTE(v38) = 1;
LABEL_73:
    if ( ((unsigned __int8)v38 & 1) == 0 )
      goto LABEL_75;
LABEL_74:
    if ( !v69 )
      goto LABEL_75;
    if ( v76 )
    {
      if ( v76 > 0x1FFFFFFFFFFFFFFFLL )
        goto LABEL_131;
      v65 = 8 * v76;
      v82 = v72;
      v83 = 8LL;
      v66 = 16LL;
    }
    else
    {
      v66 = 8LL;
      v65 = 0LL;
    }
    *(void **)((char *)&v82 + v66) = (void *)v65;
    if ( v83 && v84 )
      _rust_dealloc(v82, v84, v83);
  }
  else
  {
    v74 = 0LL;
  }
LABEL_89:
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v93);
  if ( v105 == 0x8000000000000000LL )
  {
    std::io::error::repr_bitpacked::decode_repr(&v82, v106);
    if ( (unsigned __int8)v82 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v83);
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v82, &v105);
    if ( v83 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v107, v82, v83, v84);
  }
  v54 = v103;
  if ( !v103 || (v103 & 7) != 0 || v104 >= 0x555555555555556LL )
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  if ( v104 )
  {
    v55 = 24 * v104;
    v56 = 1LL;
    v57 = 0LL;
    do
    {
      v58 = *(_QWORD *)(v54 + v57 + 8);
      v59 = *(_QWORD *)(v54 + v57 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v58, 1LL, 1LL, v59);
      if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v70, v58, v59)
        || v56 != v104 && <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v70, v101, v100) )
      {
        goto LABEL_116;
      }
      ++v56;
      v57 += 24LL;
    }
    while ( v55 != v57 );
  }
  if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v70, v119, v118)
    || <std::io::stdio::StdoutLock as std::io::Write>::flush(&v70) )
  {
    goto LABEL_116;
  }
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(&v70);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v102);
  return 0LL;
}
