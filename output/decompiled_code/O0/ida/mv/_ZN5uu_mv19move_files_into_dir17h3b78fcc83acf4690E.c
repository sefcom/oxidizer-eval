__int64 __fastcall uu_mv::move_files_into_dir(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r13
  __int128 *v8; // rax
  __int64 v9; // r14
  char v10; // al
  __int64 v11; // rbx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  bool v14; // zf
  __int32 v16; // ecx
  __int8 v17; // al
  __int64 v18; // rcx
  void *v19; // r14
  size_t v20; // rbx
  __int64 v21; // r15
  void *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdx
  void *v25; // rbx
  size_t v26; // r14
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // r14
  char v32; // al
  __int64 v33; // rcx
  char v34; // al
  char v35; // bl
  _OWORD *v36; // rax
  __int128 v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r14
  __int64 (__fastcall **v41)(); // rax
  __int64 (__fastcall *v42)(); // rsi
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // r14
  __int64 v46; // rdi
  __int64 v47; // rsi
  volatile signed __int64 **v48; // r9
  __int64 v49; // rax
  __int64 v50; // rcx
  _OWORD *v51; // rax
  __int128 v52; // xmm0
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // r14
  __int64 (__fastcall **v56)(); // rax
  __int64 (__fastcall *v57)(); // rsi
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // r14
  __int64 v61; // rbx
  unsigned int v62; // edx
  unsigned int v63; // r14d
  void *v64; // r14
  size_t v65; // rbx
  __int64 v66; // r15
  void *v67; // r12
  char v68; // [rsp+7h] [rbp-751h] BYREF
  volatile signed __int64 *v69; // [rsp+8h] [rbp-750h] BYREF
  _BYTE v70[77]; // [rsp+10h] [rbp-748h] BYREF
  __int128 v71; // [rsp+5Dh] [rbp-6FBh]
  __int128 v72; // [rsp+6Dh] [rbp-6EBh]
  _BYTE v73[27]; // [rsp+7Dh] [rbp-6DBh]
  __int64 v74; // [rsp+98h] [rbp-6C0h] BYREF
  __m256i v75; // [rsp+A0h] [rbp-6B8h] BYREF
  _BYTE v76[23]; // [rsp+C0h] [rbp-698h]
  _OWORD *v77; // [rsp+E0h] [rbp-678h] BYREF
  __int64 (__fastcall **v78)(); // [rsp+E8h] [rbp-670h]
  _OWORD *v79; // [rsp+F0h] [rbp-668h] BYREF
  __int64 (__fastcall **v80)(); // [rsp+F8h] [rbp-660h]
  __int128 v81; // [rsp+100h] [rbp-658h] BYREF
  __int64 v82; // [rsp+110h] [rbp-648h]
  char v83[8]; // [rsp+120h] [rbp-638h] BYREF
  void *v84; // [rsp+128h] [rbp-630h]
  size_t v85; // [rsp+130h] [rbp-628h]
  __int64 v86; // [rsp+138h] [rbp-620h]
  __int64 v87; // [rsp+140h] [rbp-618h]
  __int64 v88; // [rsp+148h] [rbp-610h]
  _BYTE v89[64]; // [rsp+150h] [rbp-608h] BYREF
  __int64 v90; // [rsp+190h] [rbp-5C8h]
  __int128 v91; // [rsp+198h] [rbp-5C0h] BYREF
  __int64 v92; // [rsp+1A8h] [rbp-5B0h]
  __int128 v93; // [rsp+1B0h] [rbp-5A8h] BYREF
  __int64 v94; // [rsp+1C0h] [rbp-598h]
  __int64 v95; // [rsp+1C8h] [rbp-590h] BYREF
  __int32 v96; // [rsp+1D0h] [rbp-588h] BYREF
  __int8 v97; // [rsp+1D4h] [rbp-584h]
  __int64 v98; // [rsp+1D8h] [rbp-580h] BYREF
  void *src; // [rsp+1E0h] [rbp-578h]
  size_t n; // [rsp+1E8h] [rbp-570h] BYREF
  __int128 v101; // [rsp+1F0h] [rbp-568h]
  __int128 v102; // [rsp+200h] [rbp-558h] BYREF
  __int128 v103; // [rsp+210h] [rbp-548h]
  __int128 v104; // [rsp+220h] [rbp-538h] BYREF
  __int128 v105; // [rsp+230h] [rbp-528h] BYREF
  __int64 v106; // [rsp+240h] [rbp-518h]
  __int128 v107; // [rsp+250h] [rbp-508h] BYREF
  __int64 v108; // [rsp+260h] [rbp-4F8h] BYREF
  __int128 v109; // [rsp+270h] [rbp-4E8h] BYREF
  _QWORD v110[2]; // [rsp+280h] [rbp-4D8h] BYREF
  __int128 v111; // [rsp+290h] [rbp-4C8h] BYREF
  __int64 v112; // [rsp+2A0h] [rbp-4B8h]
  __int128 v113; // [rsp+2A8h] [rbp-4B0h] BYREF
  __int64 v114; // [rsp+2B8h] [rbp-4A0h]
  _QWORD v115[2]; // [rsp+2C0h] [rbp-498h] BYREF
  _QWORD v116[2]; // [rsp+2D0h] [rbp-488h] BYREF
  _QWORD v117[2]; // [rsp+2E0h] [rbp-478h] BYREF
  _QWORD v118[2]; // [rsp+2F0h] [rbp-468h] BYREF
  _QWORD v119[2]; // [rsp+300h] [rbp-458h] BYREF
  _QWORD v120[2]; // [rsp+310h] [rbp-448h] BYREF
  _QWORD v121[2]; // [rsp+320h] [rbp-438h] BYREF
  _QWORD v122[2]; // [rsp+330h] [rbp-428h] BYREF
  _QWORD v123[2]; // [rsp+340h] [rbp-418h] BYREF
  _QWORD v124[3]; // [rsp+350h] [rbp-408h] BYREF
  __int128 v125; // [rsp+368h] [rbp-3F0h] BYREF
  __int64 v126; // [rsp+378h] [rbp-3E0h]
  _QWORD v127[3]; // [rsp+380h] [rbp-3D8h] BYREF
  _QWORD v128[4]; // [rsp+398h] [rbp-3C0h] BYREF
  _QWORD v129[4]; // [rsp+3B8h] [rbp-3A0h] BYREF
  _QWORD v130[4]; // [rsp+3D8h] [rbp-380h] BYREF
  _QWORD v131[4]; // [rsp+3F8h] [rbp-360h] BYREF
  _QWORD v132[4]; // [rsp+418h] [rbp-340h] BYREF
  _QWORD v133[6]; // [rsp+438h] [rbp-320h] BYREF
  __m256i v134; // [rsp+468h] [rbp-2F0h]
  __int128 v135; // [rsp+488h] [rbp-2D0h]
  __int64 v136; // [rsp+498h] [rbp-2C0h]
  __int128 v137; // [rsp+4A0h] [rbp-2B8h]
  __int128 v138; // [rsp+4B0h] [rbp-2A8h]
  __int128 v139; // [rsp+4C0h] [rbp-298h]
  __int128 v140; // [rsp+4D0h] [rbp-288h]
  __int128 v141; // [rsp+4E0h] [rbp-278h]
  __int128 v142; // [rsp+4F0h] [rbp-268h]
  _OWORD v143[2]; // [rsp+500h] [rbp-258h]
  __int128 v144; // [rsp+520h] [rbp-238h] BYREF
  __int64 v145; // [rsp+530h] [rbp-228h]
  __int128 v146; // [rsp+538h] [rbp-220h] BYREF
  __int64 v147; // [rsp+548h] [rbp-210h]
  _QWORD v148[6]; // [rsp+550h] [rbp-208h] BYREF
  __int128 v149; // [rsp+580h] [rbp-1D8h] BYREF
  __int64 v150; // [rsp+590h] [rbp-1C8h]
  _QWORD v151[6]; // [rsp+598h] [rbp-1C0h] BYREF
  _QWORD v152[6]; // [rsp+5C8h] [rbp-190h] BYREF
  _QWORD v153[6]; // [rsp+5F8h] [rbp-160h] BYREF
  __int64 v154; // [rsp+628h] [rbp-130h] BYREF
  int v155; // [rsp+630h] [rbp-128h]
  char v156; // [rsp+634h] [rbp-124h]
  __int128 v157; // [rsp+635h] [rbp-123h]
  __int128 v158; // [rsp+645h] [rbp-113h]
  __int128 v159; // [rsp+655h] [rbp-103h]
  __int128 v160; // [rsp+665h] [rbp-F3h]
  __int128 v161; // [rsp+675h] [rbp-E3h]
  __int128 v162; // [rsp+685h] [rbp-D3h]
  _BYTE v163[27]; // [rsp+695h] [rbp-C3h]
  __int64 v164; // [rsp+6B0h] [rbp-A8h] BYREF
  __int128 v165; // [rsp+6B8h] [rbp-A0h]
  __int64 v166; // [rsp+6C8h] [rbp-90h]
  _BYTE v167[112]; // [rsp+6E8h] [rbp-70h] BYREF

  v86 = a5;
  v7 = a1;
  v8 = (__int128 *)core::ops::function::FnOnce::call_once(0LL);
  if ( !v8 )
    core::result::unwrap_failed(
      anon_d8f87fb53416144ac5b7b233781f4016_8_llvm_10091829534130422480,
      70LL,
      &v68,
      &anon_30ecf5788dc16ea493c1f299142c4ef1_21_llvm_10347183305587337279,
      &anon_d8f87fb53416144ac5b7b233781f4016_10_llvm_10091829534130422480);
  v101 = *v8;
  ++*(_QWORD *)v8;
  hashbrown::raw::RawTableInner::fallible_with_capacity(v70, &v68, 24LL, 16LL, a2, 1LL);
  v102 = *(_OWORD *)v70;
  v103 = *(_OWORD *)&v70[16];
  v104 = v101;
  if ( (unsigned __int8)std::path::Path::is_dir(a3, a4) )
  {
    std::sys::pal::unix::fs::canonicalize(&v113, a3, a4);
    if ( (_QWORD)v113 == 0x8000000000000000LL )
    {
      v9 = *((_QWORD *)&v113 + 1);
      *(_QWORD *)v89 = *((_QWORD *)&v113 + 1);
      std::path::Path::to_path_buf(&v93, a3, a4);
      std::io::error::repr_bitpacked::decode_repr(v70, v9);
      if ( v70[0] >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v70[8]);
    }
    else
    {
      v94 = v114;
      v93 = v113;
    }
    v14 = (*(_BYTE *)(v86 + 51) & 1) == 0;
    v88 = a4;
    v87 = a3;
    if ( v14 )
    {
      v69 = 0LL;
    }
    else
    {
      v69 = (volatile signed __int64 *)<indicatif::multi::MultiProgress as core::default::Default>::default();
      if ( v69 && a2 > 1 )
      {
        indicatif::progress_bar::ProgressBar::new(&v111, a2);
        indicatif::style::Template::from_str_with_tab_width(&v75, aMovingMsgWideB, 35LL, 8LL);
        v16 = v75.m256i_i32[2];
        v17 = v75.m256i_i8[12];
        if ( v75.m256i_i64[0] == 0x8000000000000000LL )
          goto LABEL_130;
        *(_DWORD *)&v89[20] = v75.m256i_i32[5];
        *(_QWORD *)&v89[13] = *(__int64 *)((char *)&v75.m256i_i64[1] + 5);
        *(_QWORD *)v89 = v75.m256i_i64[0];
        *(_DWORD *)&v89[8] = v75.m256i_i32[2];
        v89[12] = v75.m256i_i8[12];
        indicatif::style::ProgressStyle::new(v70, v89);
        v16 = *(_DWORD *)&v70[8];
        v17 = v70[12];
        v137 = *(_OWORD *)&v70[13];
        v138 = *(_OWORD *)&v70[29];
        v139 = *(_OWORD *)&v70[45];
        v140 = *(_OWORD *)&v70[61];
        v141 = v71;
        v142 = v72;
        v143[0] = *(_OWORD *)v73;
        *(_OWORD *)((char *)v143 + 11) = *(_OWORD *)&v73[11];
        if ( *(_QWORD *)v70 == 0x8000000000000000LL )
        {
LABEL_130:
          v96 = v16;
          v97 = v17;
          core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v96, &unk_15B368, &off_15B5B0);
        }
        v154 = *(_QWORD *)v70;
        v155 = *(_DWORD *)&v70[8];
        v156 = v70[12];
        v157 = v137;
        v158 = v138;
        v159 = v139;
        v160 = v140;
        v161 = v141;
        v162 = v142;
        *(_OWORD *)v163 = v143[0];
        *(_OWORD *)&v163[11] = *(_OWORD *)((char *)v143 + 11);
        indicatif::progress_bar::ProgressBar::set_style(&v111, &v154);
        v145 = v112;
        v144 = v111;
        indicatif::multi::MultiProgress::internalize(&v146, &v69, 0LL, v18, &v144);
        v82 = v147;
        v81 = v146;
        goto LABEL_29;
      }
    }
    *(_QWORD *)&v81 = 0LL;
    if ( !a2 )
    {
LABEL_17:
      if ( (_QWORD)v81 )
        core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(&v81);
      if ( v69 && !_InterlockedDecrement64(v69) )
        alloc::sync::Arc<T,A>::drop_slow(&v69);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v93);
      v11 = 0LL;
      goto LABEL_23;
    }
LABEL_29:
    *(_QWORD *)&v101 = a1 + 24 * a2;
    while ( 1 )
    {
      if ( !v7 )
        goto LABEL_17;
      if ( (_QWORD)v81 )
      {
        if ( !*(_QWORD *)(v7 + 8)
          || *(__int64 *)(v7 + 16) < 0
          || (std::sys::os_str::bytes::Slice::to_string_lossy(&v98), v19 = src, v20 = n, v98 != 0x8000000000000000LL)
          && (!src || (n & 0x8000000000000000LL) != 0LL) )
        {
LABEL_119:
          core::panicking::panic_nounwind(anon_e274cffadf33dbf508504243ff687348_19_llvm_17332325210196355997, 162LL);
        }
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(v70, n, 0LL);
        v21 = *(_QWORD *)&v70[8];
        if ( *(_QWORD *)v70 )
          alloc::raw_vec::handle_error(*(_QWORD *)&v70[8], *(_QWORD *)&v70[16]);
        v22 = *(void **)&v70[16];
        core::intrinsics::copy_nonoverlapping::precondition_check(v19, *(_QWORD *)&v70[16], 1LL, 1LL, v20);
        memcpy(v22, v19, v20);
        v124[0] = v21;
        v124[1] = v22;
        v124[2] = v20;
        indicatif::progress_bar::ProgressBar::set_message(&v81, v124);
        if ( v98 != 0x8000000000000000LL )
        {
          alloc::raw_vec::RawVec<T,A>::current_memory(v70, &v98);
          if ( *(_QWORD *)&v70[8] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &n,
              *(_QWORD *)v70,
              *(_QWORD *)&v70[8],
              *(_QWORD *)&v70[16]);
        }
      }
      if ( !*(_QWORD *)(v7 + 8) || *(__int64 *)(v7 + 16) < 0 )
        goto LABEL_119;
      v23 = std::path::Path::file_name();
      if ( v23 )
        break;
      v30 = *(_QWORD *)(v7 + 8);
      if ( !v30 )
        goto LABEL_119;
      v31 = *(_QWORD *)(v7 + 16);
      if ( v31 < 0 )
        goto LABEL_119;
      v75.m256i_i64[0] = 0LL;
      *(_OWORD *)&v75.m256i_u64[1] = 1uLL;
      *(_QWORD *)&v70[48] = 32LL;
      v70[56] = 3;
      *(_QWORD *)v70 = 0LL;
      *(_QWORD *)&v70[16] = 0LL;
      *(_QWORD *)&v70[32] = &v75;
      *(_QWORD *)&v70[40] = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
      std::sys::os_str::bytes::Slice::to_str(v89, v30, v31);
      if ( *(_QWORD *)v89 || !*(_QWORD *)&v89[8] )
        v32 = os_display::unix::write_escaped(v70, v30, v31);
      else
        v32 = os_display::unix::write(v70, *(_QWORD *)&v89[8], *(_QWORD *)&v89[16], 1LL);
      if ( v32 )
        core::result::unwrap_failed(
          anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
          55LL,
          &v68,
          &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
          &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
      v166 = v75.m256i_i64[2];
      v165 = *(_OWORD *)v75.m256i_i8;
      v164 = 0LL;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      v43 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v44 = *(_QWORD *)(v43 + 8);
      v45 = *(_QWORD *)(v43 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v44, 1LL, 1LL, v45);
      v115[0] = v44;
      v115[1] = v45;
      v128[0] = v115;
      v128[1] = <&T as core::fmt::Display>::fmt;
      v128[2] = &v164;
      v128[3] = <uu_mv::error::MvError as core::fmt::Display>::fmt;
      v148[0] = &anon_80a71568819187eb068e7dc772b8a818_81_llvm_5221707602514596811;
      v148[1] = 3LL;
      v148[4] = 0LL;
      v148[2] = v128;
      v148[3] = 2LL;
      std::io::stdio::_eprint(v148);
      core::ptr::drop_in_place<uu_mv::error::MvError>(&v164);
LABEL_31:
      v7 += 24LL;
      if ( v7 == (_QWORD)v101 )
        goto LABEL_17;
    }
    std::path::Path::_join(v83, v87, v88, v23, v24);
    if ( *((_QWORD *)&v103 + 1) )
    {
      *(_OWORD *)&v70[32] = v104;
      memset(v70, 0, 32);
      memset(&v70[48], 0, 24);
      core::hash::sip::Hasher<S>::reset(v70);
      v90 = *(_QWORD *)&v70[64];
      *(_OWORD *)&v89[48] = *(_OWORD *)&v70[48];
      *(_OWORD *)&v89[32] = *(_OWORD *)&v70[32];
      *(_OWORD *)&v89[16] = *(_OWORD *)&v70[16];
      *(_OWORD *)v89 = *(_OWORD *)v70;
      v25 = v84;
      v26 = v85;
      core::slice::raw::from_raw_parts::precondition_check(v84, 1LL, 1LL, v85);
      <std::path::Path as core::hash::Hash>::hash(v25, v26, v89);
      v27 = <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(v89);
      if ( hashbrown::raw::RawTable<T,A>::find(&v102, v27, v83) )
      {
        if ( *(_BYTE *)(v86 + 54) != 2 )
        {
          if ( !v84 )
            goto LABEL_119;
          if ( (v85 & 0x8000000000000000LL) != 0LL )
            goto LABEL_119;
          v116[0] = v84;
          v116[1] = v85;
          if ( !*(_QWORD *)(v7 + 8) )
            goto LABEL_119;
          v50 = *(_QWORD *)(v7 + 16);
          if ( v50 < 0 )
            goto LABEL_119;
          v117[0] = *(_QWORD *)(v7 + 8);
          v117[1] = v50;
          v129[0] = v116;
          v129[1] = <std::path::Display as core::fmt::Display>::fmt;
          v129[2] = v117;
          v129[3] = <std::path::Display as core::fmt::Display>::fmt;
          *(_QWORD *)v70 = &off_15B638;
          *(_QWORD *)&v70[8] = 3LL;
          *(_QWORD *)&v70[16] = v129;
          *(_QWORD *)&v70[24] = 2LL;
          *(_QWORD *)&v70[32] = 0LL;
          alloc::fmt::format::format_inner(&v149, v70);
          *(_QWORD *)&v70[16] = v150;
          *(_OWORD *)v70 = v149;
          *(_DWORD *)&v70[24] = 1;
          v51 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          if ( !v51 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v52 = *(_OWORD *)v70;
          v51[1] = *(_OWORD *)&v70[16];
          *v51 = v52;
          v77 = v51;
          v78 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
          _InterlockedExchange(
            &uucore::mods::error::EXIT_CODE,
            <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v51));
          v53 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v54 = *(_QWORD *)(v53 + 8);
          v55 = *(_QWORD *)(v53 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v54, 1LL, 1LL, v55);
          v118[0] = v54;
          v118[1] = v55;
          v130[0] = v118;
          v130[1] = <&T as core::fmt::Display>::fmt;
          v130[2] = &v77;
          v130[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          v151[0] = &anon_80a71568819187eb068e7dc772b8a818_81_llvm_5221707602514596811;
          v151[1] = 3LL;
          v151[4] = 0LL;
          v151[2] = v130;
          v151[3] = 2LL;
          std::io::stdio::_eprint(v151);
          v56 = v78;
          if ( *v78 )
          {
            ((void (__fastcall *)(_OWORD *))*v78)(v77);
            v56 = v78;
          }
          v57 = v56[1];
          if ( v57 )
            _rust_dealloc(v77, v57, v56[2]);
          goto LABEL_30;
        }
      }
    }
    v28 = *(_QWORD *)(v7 + 8);
    if ( !v28 )
      goto LABEL_119;
    v29 = *(_QWORD *)(v7 + 16);
    if ( v29 < 0 )
      goto LABEL_119;
    std::sys::pal::unix::fs::canonicalize(&v91, v28, v29);
    if ( (_QWORD)v91 == 0x8000000000000000LL )
      goto LABEL_52;
    v106 = v92;
    v105 = v91;
    if ( !*((_QWORD *)&v91 + 1) )
      goto LABEL_119;
    if ( v92 < 0 )
      goto LABEL_119;
    std::path::Path::components(v89, *((_QWORD *)&v91 + 1), v92);
    if ( !*((_QWORD *)&v93 + 1) || v94 < 0 )
      goto LABEL_119;
    std::path::Path::components(v70, *((_QWORD *)&v93 + 1), v94);
    if ( (unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(v89, v70) )
    {
      if ( !*(_QWORD *)(v7 + 8) )
        goto LABEL_119;
      v33 = *(_QWORD *)(v7 + 16);
      if ( v33 < 0 )
        goto LABEL_119;
      v119[0] = *(_QWORD *)(v7 + 8);
      v119[1] = v33;
      v120[0] = v87;
      v120[1] = v88;
      if ( !*((_QWORD *)&v93 + 1) || v94 < 0 )
        goto LABEL_119;
      std::path::Path::components(v167, *((_QWORD *)&v93 + 1), v94);
      <std::path::Components as core::iter::traits::iterator::Iterator>::next(v70, v167);
      v34 = v70[0];
      if ( v70[0] == 10 )
      {
        v123[0] = v87;
        v123[1] = v88;
        v75.m256i_i64[0] = 0LL;
        *(_OWORD *)&v75.m256i_u64[1] = 1uLL;
        *(_QWORD *)&v70[48] = 32LL;
        v70[56] = 3;
        *(_QWORD *)v70 = 0LL;
        *(_QWORD *)&v70[16] = 0LL;
        *(_QWORD *)&v70[32] = &v75;
        *(_QWORD *)&v70[40] = &anon_447769264800e1b36145520fff97c7f2_4_llvm_3413629854620190702;
        if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(v123, v70) )
          core::result::unwrap_failed(
            anon_447769264800e1b36145520fff97c7f2_5_llvm_3413629854620190702,
            55LL,
            &v68,
            &anon_30ecf5788dc16ea493c1f299142c4ef1_19_llvm_10347183305587337279,
            &anon_447769264800e1b36145520fff97c7f2_7_llvm_3413629854620190702);
        v107 = *(_OWORD *)v75.m256i_i8;
        v108 = v75.m256i_i64[2];
      }
      else
      {
        do
        {
          v35 = v34;
          *(_QWORD *)&v76[15] = *(_QWORD *)&v70[48];
          *(_OWORD *)v76 = *(_OWORD *)&v70[33];
          v75 = *(__m256i *)&v70[1];
          <std::path::Components as core::iter::traits::iterator::Iterator>::next(v70, v167);
          v34 = v70[0];
        }
        while ( v70[0] != 10 );
        *(_QWORD *)&v89[48] = *(_QWORD *)&v76[15];
        *(_OWORD *)&v89[33] = *(_OWORD *)v76;
        *(__m256i *)&v89[1] = v75;
        v89[0] = v35;
        uu_mv::move_files_into_dir::{{closure}}(&v107, v89);
      }
      v133[0] = v119;
      v133[1] = <std::path::Display as core::fmt::Display>::fmt;
      v133[2] = v120;
      v133[3] = <std::path::Display as core::fmt::Display>::fmt;
      v133[4] = &v107;
      v133[5] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v70 = &off_15B5F8;
      *(_QWORD *)&v70[8] = 4LL;
      *(_QWORD *)&v70[16] = v133;
      *(_QWORD *)&v70[24] = 3LL;
      *(_QWORD *)&v70[32] = 0LL;
      alloc::fmt::format::format_inner(&v125, v70);
      alloc::raw_vec::RawVec<T,A>::current_memory(v70, &v107);
      if ( *(_QWORD *)&v70[8] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
          &v108,
          *(_QWORD *)v70,
          *(_QWORD *)&v70[8],
          *(_QWORD *)&v70[16]);
      *(_QWORD *)&v70[16] = v126;
      *(_OWORD *)v70 = v125;
      *(_DWORD *)&v70[24] = 1;
      v36 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v36 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v37 = *(_OWORD *)v70;
      v36[1] = *(_OWORD *)&v70[16];
      *v36 = v37;
      v79 = v36;
      v80 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
      _InterlockedExchange(
        &uucore::mods::error::EXIT_CODE,
        <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v36));
      v38 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v39 = *(_QWORD *)(v38 + 8);
      v40 = *(_QWORD *)(v38 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v39, 1LL, 1LL, v40);
      v121[0] = v39;
      v121[1] = v40;
      v131[0] = v121;
      v131[1] = <&T as core::fmt::Display>::fmt;
      v131[2] = &v79;
      v131[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v152[0] = &anon_80a71568819187eb068e7dc772b8a818_81_llvm_5221707602514596811;
      v152[1] = 3LL;
      v152[4] = 0LL;
      v152[2] = v131;
      v152[3] = 2LL;
      std::io::stdio::_eprint(v152);
      v41 = v80;
      if ( *v80 )
      {
        ((void (__fastcall *)(_OWORD *))*v80)(v79);
        v41 = v80;
      }
      v42 = v41[1];
      if ( v42 )
        _rust_dealloc(v79, v42, v41[2]);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v105);
      if ( (_QWORD)v91 == 0x8000000000000000LL )
      {
        std::io::error::repr_bitpacked::decode_repr(v70, *((_QWORD *)&v91 + 1));
        if ( v70[0] >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v70[8]);
      }
      goto LABEL_30;
    }
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v105);
    if ( (_QWORD)v91 == 0x8000000000000000LL )
    {
LABEL_52:
      std::io::error::repr_bitpacked::decode_repr(v70, *((_QWORD *)&v91 + 1));
      if ( v70[0] >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v70[8]);
    }
    v46 = *(_QWORD *)(v7 + 8);
    if ( !v46 )
      goto LABEL_119;
    v47 = *(_QWORD *)(v7 + 16);
    if ( v47 < 0 || !v84 || (v85 & 0x8000000000000000LL) != 0LL )
      goto LABEL_119;
    v48 = (volatile signed __int64 **)v69;
    if ( v69 )
      v48 = &v69;
    v74 = uu_mv::rename(v46, v47, v84, v85, v86, v48);
    if ( v74 )
    {
      *(_QWORD *)v89 = 0LL;
      *(_QWORD *)&v89[8] = 1LL;
      *(_QWORD *)&v89[16] = 0LL;
      *(_QWORD *)&v70[48] = 32LL;
      v70[56] = 3;
      *(_QWORD *)v70 = 0LL;
      *(_QWORD *)&v70[16] = 0LL;
      *(_QWORD *)&v70[32] = v89;
      *(_QWORD *)&v70[40] = &anon_6a1096751d978b4dda51a5fc759a390d_3_llvm_5358935653520093020;
      if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v74, v70) )
        core::result::unwrap_failed(
          anon_6a1096751d978b4dda51a5fc759a390d_5_llvm_5358935653520093020,
          55LL,
          &v68,
          &anon_6a1096751d978b4dda51a5fc759a390d_34_llvm_5358935653520093020,
          &anon_6a1096751d978b4dda51a5fc759a390d_7_llvm_5358935653520093020);
      v109 = *(_OWORD *)v89;
      v110[0] = *(_QWORD *)&v89[16];
      if ( *(_QWORD *)&v89[16] )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(v70, &v109);
        if ( *(_QWORD *)&v70[8] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            v110,
            *(_QWORD *)v70,
            *(_QWORD *)&v70[8],
            *(_QWORD *)&v70[16]);
        v49 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                v74,
                v7,
                v83);
        if ( v69 )
        {
          indicatif::multi::MultiProgress::suspend(&v69, v49);
        }
        else
        {
          v95 = v49;
          _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
          v58 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v59 = *(_QWORD *)(v58 + 8);
          v60 = *(_QWORD *)(v58 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v59, 1LL, 1LL, v60);
          v122[0] = v59;
          v122[1] = v60;
          v132[0] = v122;
          v132[1] = <&T as core::fmt::Display>::fmt;
          v132[2] = &v95;
          v132[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          v153[0] = &anon_80a71568819187eb068e7dc772b8a818_81_llvm_5221707602514596811;
          v153[1] = 3LL;
          v153[4] = 0LL;
          v153[2] = v132;
          v153[3] = 2LL;
          std::io::stdio::_eprint(v153);
          core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(&v95);
        }
      }
      else
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(v70, &v109);
        if ( *(_QWORD *)&v70[8] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            v110,
            *(_QWORD *)v70,
            *(_QWORD *)&v70[8],
            *(_QWORD *)&v70[16]);
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        std::io::error::repr_bitpacked::decode_repr(v70, v74);
        if ( v70[0] >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v70[8]);
      }
    }
    if ( (_QWORD)v81 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)&v81 + 1) + 32LL));
      v61 = std::time::Instant::now();
      v63 = v62;
      if ( (unsigned __int8)indicatif::state::AtomicPosition::allow(*((_QWORD *)&v81 + 1) + 16LL, v61) )
        indicatif::progress_bar::ProgressBar::tick_inner(&v81, v61, v63);
    }
    v64 = v84;
    v65 = v85;
    core::slice::raw::from_raw_parts::precondition_check(v84, 1LL, 1LL, v85);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v70, v65, 0LL);
    v66 = *(_QWORD *)&v70[8];
    if ( *(_QWORD *)v70 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v70[8], *(_QWORD *)&v70[16]);
    v67 = *(void **)&v70[16];
    core::intrinsics::copy_nonoverlapping::precondition_check(v64, *(_QWORD *)&v70[16], 1LL, 1LL, v65);
    memcpy(v67, v64, v65);
    v127[0] = v66;
    v127[1] = v67;
    v127[2] = v65;
    hashbrown::map::HashMap<K,V,S,A>::insert(&v102, v127);
LABEL_30:
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v83);
    goto LABEL_31;
  }
  v75.m256i_i64[0] = 0LL;
  *(_OWORD *)&v75.m256i_u64[1] = 1uLL;
  *(_QWORD *)&v70[48] = 32LL;
  v70[56] = 3;
  *(_QWORD *)v70 = 0LL;
  *(_QWORD *)&v70[16] = 0LL;
  *(_QWORD *)&v70[32] = &v75;
  *(_QWORD *)&v70[40] = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
  std::sys::os_str::bytes::Slice::to_str(v89, a3, a4);
  if ( *(_QWORD *)v89 || !*(_QWORD *)&v89[8] )
    v10 = os_display::unix::write_escaped(v70, a3, a4);
  else
    v10 = os_display::unix::write(v70, *(_QWORD *)&v89[8], *(_QWORD *)&v89[16], 1LL);
  if ( v10 )
    core::result::unwrap_failed(
      anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
      55LL,
      &v68,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
      &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
  *(_OWORD *)&v134.m256i_u64[1] = *(_OWORD *)v75.m256i_i8;
  v134.m256i_i64[3] = v75.m256i_i64[2];
  v134.m256i_i64[0] = 7LL;
  v11 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 56LL, 0LL);
  if ( !v11 )
    alloc::alloc::handle_alloc_error(8LL, 56LL);
  *(_QWORD *)(v11 + 48) = v136;
  v12 = *(_OWORD *)v134.m256i_i8;
  v13 = *(_OWORD *)&v134.m256i_u64[2];
  *(_OWORD *)(v11 + 32) = v135;
  *(_OWORD *)(v11 + 16) = v13;
  *(_OWORD *)v11 = v12;
LABEL_23:
  hashbrown::raw::RawTableInner::drop_inner_table(&v102, &v104, 24LL, 16LL);
  return v11;
}
