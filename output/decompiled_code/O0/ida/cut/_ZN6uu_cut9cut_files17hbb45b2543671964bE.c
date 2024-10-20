__int64 __fastcall uu_cut::cut_files(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r14
  __int64 v3; // r14
  _BYTE *v4; // r15
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int64 v9; // rbx
  __int64 v10; // r14
  char v11; // bp
  _BYTE *v12; // r15
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 (__fastcall **v20)(); // rdx
  __int64 (__fastcall **v21)(); // rsi
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 (__fastcall **v25)(); // rax
  _QWORD *v26; // rbp
  __int64 *v27; // r15
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  __int64 (__fastcall **v31)(); // rdx
  _OWORD *v32; // r12
  __int64 v33; // r12
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  char v36; // dl
  unsigned __int8 v37; // si
  __int64 v38; // r8
  __int64 v39; // r15
  __int64 v40; // rbp
  void (__fastcall **v41)(__int64); // rdx
  __int64 v42; // rax
  _OWORD *v43; // rax
  __int128 v44; // xmm0
  void (__fastcall **v45)(__int64); // rax
  __int128 *v46; // rdi
  const char *v47; // r15
  bool v48; // zf
  __int64 v49; // rbp
  void (__fastcall **v50)(__int64); // rdx
  __int64 v51; // rax
  _OWORD *v52; // rax
  __int128 v53; // xmm0
  void (__fastcall **v54)(__int64); // rax
  void (__fastcall **v55)(__int64); // rdx
  __int64 v56; // rax
  _OWORD *v57; // rax
  __int128 v58; // xmm0
  void (__fastcall **v59)(__int64); // rax
  void (__fastcall **v60)(__int64); // rax
  __int128 *v61; // rdi
  void (__fastcall **v62)(__int64); // rax
  void (__fastcall **v63)(__int64); // rax
  __int64 v64; // rax
  __int64 v65; // r15
  __int64 v66; // r12
  __int64 (__fastcall **v67)(); // rax
  unsigned __int8 v69; // [rsp+Eh] [rbp-32Ah] BYREF
  char v70; // [rsp+Fh] [rbp-329h] BYREF
  __int64 v71; // [rsp+10h] [rbp-328h] BYREF
  void (__fastcall **v72)(__int64); // [rsp+18h] [rbp-320h]
  __int64 v73; // [rsp+20h] [rbp-318h] BYREF
  __int128 v74; // [rsp+28h] [rbp-310h] BYREF
  __int64 v75; // [rsp+38h] [rbp-300h]
  __int64 v76; // [rsp+40h] [rbp-2F8h] BYREF
  __int64 v77; // [rsp+48h] [rbp-2F0h] BYREF
  _QWORD v78[2]; // [rsp+50h] [rbp-2E8h] BYREF
  __int128 *v79; // [rsp+60h] [rbp-2D8h]
  __int64 (__fastcall **v80)(); // [rsp+68h] [rbp-2D0h]
  __int64 v81; // [rsp+70h] [rbp-2C8h]
  char v82; // [rsp+78h] [rbp-2C0h]
  __int128 v83; // [rsp+80h] [rbp-2B8h] BYREF
  __int128 v84; // [rsp+90h] [rbp-2A8h]
  _OWORD *v85; // [rsp+A8h] [rbp-290h] BYREF
  __int64 (__fastcall **v86)(); // [rsp+B0h] [rbp-288h]
  __int64 v87; // [rsp+B8h] [rbp-280h] BYREF
  __int64 (__fastcall **v88)(); // [rsp+C0h] [rbp-278h]
  __int128 *v89; // [rsp+C8h] [rbp-270h] BYREF
  char *v90; // [rsp+D0h] [rbp-268h]
  __int128 v91; // [rsp+D8h] [rbp-260h]
  __int64 *v92; // [rsp+E8h] [rbp-250h]
  __int64 v93; // [rsp+F0h] [rbp-248h]
  __int64 v94; // [rsp+F8h] [rbp-240h] BYREF
  unsigned __int64 v95; // [rsp+100h] [rbp-238h]
  __int64 (__fastcall **v96)(); // [rsp+108h] [rbp-230h]
  __int128 *v97; // [rsp+110h] [rbp-228h] BYREF
  char *v98; // [rsp+118h] [rbp-220h]
  __int128 v99; // [rsp+120h] [rbp-218h]
  __int64 *v100; // [rsp+130h] [rbp-208h]
  __int64 v101; // [rsp+138h] [rbp-200h]
  __int64 v102; // [rsp+140h] [rbp-1F8h]
  _QWORD *v103; // [rsp+148h] [rbp-1F0h]
  _QWORD *v104; // [rsp+150h] [rbp-1E8h]
  _QWORD *v105; // [rsp+158h] [rbp-1E0h] BYREF
  __int128 v106; // [rsp+160h] [rbp-1D8h]
  __int64 v107; // [rsp+170h] [rbp-1C8h]
  _DWORD v108[2]; // [rsp+178h] [rbp-1C0h] BYREF
  __int64 v109; // [rsp+180h] [rbp-1B8h]
  _QWORD v110[2]; // [rsp+188h] [rbp-1B0h] BYREF
  _QWORD v111[2]; // [rsp+198h] [rbp-1A0h] BYREF
  _QWORD v112[2]; // [rsp+1A8h] [rbp-190h] BYREF
  _QWORD v113[2]; // [rsp+1B8h] [rbp-180h] BYREF
  _QWORD v114[2]; // [rsp+1C8h] [rbp-170h] BYREF
  _QWORD v115[2]; // [rsp+1D8h] [rbp-160h] BYREF
  _QWORD v116[4]; // [rsp+1E8h] [rbp-150h] BYREF
  _QWORD v117[3]; // [rsp+208h] [rbp-130h] BYREF
  char v118; // [rsp+220h] [rbp-118h]
  _QWORD v119[4]; // [rsp+228h] [rbp-110h] BYREF
  _QWORD v120[6]; // [rsp+248h] [rbp-F0h] BYREF
  _QWORD v121[6]; // [rsp+278h] [rbp-C0h] BYREF
  _QWORD v122[6]; // [rsp+2A8h] [rbp-90h] BYREF
  _QWORD v123[12]; // [rsp+2D8h] [rbp-60h] BYREF

  v105 = a2;
  v2 = a1[2];
  v104 = a1;
  if ( !v2 )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v76, 1LL, 0LL);
    v3 = v77;
    if ( v76 )
    {
      v103 = v78;
      goto LABEL_127;
    }
    v4 = (_BYTE *)v78[0];
    core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1FD32, v78[0], 1LL, 1LL, 1LL);
    *v4 = 45;
    *(_QWORD *)&v106 = v3;
    *((_QWORD *)&v106 + 1) = v4;
    v107 = 1LL;
    v5 = a1[2];
    if ( v5 == *a1 )
      alloc::raw_vec::RawVec<T,A>::grow_one(a1);
    v6 = a1[1];
    v7 = 3 * v5;
    v8 = v106;
    *(_QWORD *)(v6 + 8 * v7 + 16) = v107;
    *(_OWORD *)(v6 + 8 * v7) = v8;
    v2 = v5 + 1;
    a1[2] = v2;
  }
  v9 = a1[1];
  if ( !v9 || (v9 & 7) != 0 || v2 >= 0x555555555555556LL )
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  if ( !v2 )
    return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v104);
  v10 = v9 + 24 * v2;
  v103 = v78;
  v11 = 0;
  do
  {
LABEL_11:
    for ( v9 += 24LL; ; v9 += 24LL )
    {
      v12 = *(_BYTE **)(v9 - 16);
      if ( !v12 )
        goto LABEL_124;
      v13 = *(_QWORD *)(v9 - 8);
      if ( v13 < 0 )
        goto LABEL_124;
      if ( v13 == 1 && *v12 == 45 )
      {
        if ( v11 )
          goto LABEL_13;
        v26 = v105;
        v27 = v105 + 1;
        if ( *v105 )
        {
          if ( *v105 != 1LL )
          {
            v33 = std::io::stdio::stdin();
            v34 = v26[8];
            if ( !v34 )
              goto LABEL_124;
            if ( (v34 & 7) != 0 )
              goto LABEL_124;
            v35 = v26[9];
            if ( v35 > 0x7FFFFFFFFFFFFFFLL )
              goto LABEL_124;
            v36 = *((_BYTE *)v26 + 40);
            if ( v36 == 2 )
              core::option::unwrap_failed(&off_11AD40);
            v37 = *((_BYTE *)v26 + 48);
            if ( !v26[3] )
            {
              v47 = (const char *)v26[1];
              v48 = v47 == 0LL;
              if ( !v47 )
                v47 = asc_1FD1C;
              v49 = v26[2];
              if ( v48 )
                v49 = 1LL;
              v94 = v34;
              v95 = v35;
              v70 = v36 & 1;
              v69 = v37;
              alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v76, 0x2000LL, 0LL);
              if ( !v76 )
              {
                if ( !v78[0] )
                  goto LABEL_129;
                v89 = (__int128 *)v78[0];
                v90 = (_BYTE *)&stru_2000;
                v91 = 0LL;
                v92 = 0LL;
                v93 = v33;
                v71 = uu_cut::stdout_writer();
                v72 = v50;
                v97 = &v83;
                v98 = &v70;
                *(_QWORD *)&v99 = &v71;
                *((_QWORD *)&v99 + 1) = &v69;
                v100 = &v94;
                v101 = (__int64)v47;
                v102 = v49;
                v51 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v89, v69, &v97);
                if ( !v51 )
                {
                  v62 = v72;
                  if ( *v72 )
                  {
                    (*v72)(v71);
                    v62 = v72;
                  }
                  if ( v62[1] )
                    _rust_dealloc(v71);
                  if ( v90 )
                    _rust_dealloc(v89);
                  v32 = 0LL;
                  v31 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
                  goto LABEL_117;
                }
                v73 = v51;
                *(_QWORD *)&v74 = 0LL;
                *((_QWORD *)&v74 + 1) = 1LL;
                v75 = 0LL;
                v81 = 32LL;
                v82 = 3;
                v76 = 0LL;
                v78[0] = 0LL;
                v79 = &v74;
                v80 = &anon_f907210316a4f48a9c7de5c93e2a79ff_5_llvm_5503381581801417789;
                if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v73, &v76) )
                  core::result::unwrap_failed(
                    anon_f907210316a4f48a9c7de5c93e2a79ff_7_llvm_5503381581801417789,
                    55LL,
                    &v83,
                    &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                    &anon_f907210316a4f48a9c7de5c93e2a79ff_9_llvm_5503381581801417789);
                *(_QWORD *)&v84 = v75;
                v83 = v74;
                DWORD2(v84) = 1;
                v52 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
                v32 = v52;
                if ( !v52 )
                  alloc::alloc::handle_alloc_error(8LL, 32LL);
                v53 = v83;
                v52[1] = v84;
                *v52 = v53;
                std::io::error::repr_bitpacked::decode_repr(&v76, v73);
                if ( (unsigned __int8)v76 >= 3u )
                  core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v77);
                v54 = v72;
                if ( *v72 )
                {
                  (*v72)(v71);
                  v54 = v72;
                }
                if ( v54[1] )
                  _rust_dealloc(v71);
                if ( v90 )
                  _rust_dealloc(v89);
                goto LABEL_116;
              }
LABEL_128:
              v3 = v77;
LABEL_127:
              alloc::raw_vec::handle_error(v3, *v103);
            }
            v38 = v26[4];
            if ( !v38 )
              core::panicking::panic(
                anon_8a413ea3e55ef2f27523b53f9db0d00f_56_llvm_16715495509781371082,
                36LL,
                &anon_8a413ea3e55ef2f27523b53f9db0d00f_58_llvm_16715495509781371082);
            v110[0] = v26[3];
            v110[1] = v38;
            v39 = *v27;
            if ( v39 )
            {
              v40 = v26[2];
              v94 = v34;
              v95 = v35;
              v70 = v36 & 1;
              v69 = v37;
              alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v76, 0x2000LL, 0LL);
              if ( v76 )
                goto LABEL_128;
              if ( !v78[0] )
                goto LABEL_129;
              v89 = (__int128 *)v78[0];
              v90 = (_BYTE *)&stru_2000;
              v91 = 0LL;
              v92 = 0LL;
              v93 = v33;
              v71 = uu_cut::stdout_writer();
              v72 = v41;
              v97 = (__int128 *)v110;
              v98 = &v70;
              *(_QWORD *)&v99 = &v71;
              *((_QWORD *)&v99 + 1) = &v69;
              v100 = &v94;
              v101 = v39;
              v102 = v40;
              v42 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v89, v69, &v97);
              if ( !v42 )
              {
                v60 = v72;
                if ( *v72 )
                {
                  (*v72)(v71);
                  v60 = v72;
                }
                if ( v60[1] )
                  _rust_dealloc(v71);
                if ( v90 )
                {
                  v61 = v89;
                  goto LABEL_114;
                }
                goto LABEL_115;
              }
              v73 = v42;
              *(_QWORD *)&v74 = 0LL;
              *((_QWORD *)&v74 + 1) = 1LL;
              v75 = 0LL;
              v81 = 32LL;
              v82 = 3;
              v76 = 0LL;
              v78[0] = 0LL;
              v79 = &v74;
              v80 = &anon_f907210316a4f48a9c7de5c93e2a79ff_5_llvm_5503381581801417789;
              if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v73, &v76) )
                core::result::unwrap_failed(
                  anon_f907210316a4f48a9c7de5c93e2a79ff_7_llvm_5503381581801417789,
                  55LL,
                  &v83,
                  &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                  &anon_f907210316a4f48a9c7de5c93e2a79ff_9_llvm_5503381581801417789);
              *(_QWORD *)&v84 = v75;
              v83 = v74;
              DWORD2(v84) = 1;
              v43 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
              v32 = v43;
              if ( !v43 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v44 = v83;
              v43[1] = v84;
              *v43 = v44;
              std::io::error::repr_bitpacked::decode_repr(&v76, v73);
              if ( (unsigned __int8)v76 >= 3u )
                core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v77);
              v45 = v72;
              if ( *v72 )
              {
                (*v72)(v71);
                v45 = v72;
              }
              if ( v45[1] )
                _rust_dealloc(v71);
              if ( !v90 )
                goto LABEL_116;
              v46 = v89;
            }
            else
            {
              v94 = v34;
              v95 = v35;
              v70 = v36 & 1;
              v69 = v37;
              alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v76, 0x2000LL, 0LL);
              if ( v76 )
                goto LABEL_128;
              if ( !v78[0] )
LABEL_129:
                core::panicking::panic_nounwind(anon_3ea58ce9b04195e65e7596eb035a132b_2_llvm_3490124054932126836, 93LL);
              v97 = (__int128 *)v78[0];
              v98 = (_BYTE *)&stru_2000;
              v99 = 0LL;
              v100 = 0LL;
              v101 = v33;
              v71 = uu_cut::stdout_writer();
              v72 = v55;
              v89 = (__int128 *)v110;
              v90 = &v70;
              *(_QWORD *)&v91 = &v71;
              *((_QWORD *)&v91 + 1) = &v69;
              v92 = &v94;
              v56 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v97, v69, &v89);
              if ( !v56 )
              {
                v63 = v72;
                if ( *v72 )
                {
                  (*v72)(v71);
                  v63 = v72;
                }
                if ( v63[1] )
                  _rust_dealloc(v71);
                if ( v98 )
                {
                  v61 = v97;
LABEL_114:
                  _rust_dealloc(v61);
                }
LABEL_115:
                v32 = 0LL;
LABEL_116:
                v31 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
                goto LABEL_117;
              }
              v73 = v56;
              *(_QWORD *)&v74 = 0LL;
              *((_QWORD *)&v74 + 1) = 1LL;
              v75 = 0LL;
              v81 = 32LL;
              v82 = 3;
              v76 = 0LL;
              v78[0] = 0LL;
              v79 = &v74;
              v80 = &anon_f907210316a4f48a9c7de5c93e2a79ff_5_llvm_5503381581801417789;
              if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v73, &v76) )
                core::result::unwrap_failed(
                  anon_f907210316a4f48a9c7de5c93e2a79ff_7_llvm_5503381581801417789,
                  55LL,
                  &v83,
                  &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                  &anon_f907210316a4f48a9c7de5c93e2a79ff_9_llvm_5503381581801417789);
              *(_QWORD *)&v84 = v75;
              v83 = v74;
              DWORD2(v84) = 1;
              v57 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
              v32 = v57;
              if ( !v57 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v58 = v83;
              v57[1] = v84;
              *v57 = v58;
              std::io::error::repr_bitpacked::decode_repr(&v76, v73);
              if ( (unsigned __int8)v76 >= 3u )
                core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v77);
              v59 = v72;
              if ( *v72 )
              {
                (*v72)(v71);
                v59 = v72;
              }
              if ( v59[1] )
                _rust_dealloc(v71);
              if ( !v98 )
                goto LABEL_116;
              v46 = v97;
            }
            _rust_dealloc(v46);
            v31 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
            goto LABEL_117;
          }
          v28 = std::io::stdio::stdin();
          v29 = v26[8];
          if ( !v29 )
            goto LABEL_124;
          if ( (v29 & 7) != 0 )
            goto LABEL_124;
          v30 = v26[9];
          if ( v30 > 0x7FFFFFFFFFFFFFFLL )
            goto LABEL_124;
        }
        else
        {
          v28 = std::io::stdio::stdin();
          v29 = v26[8];
          if ( !v29 || (v29 & 7) != 0 || (v30 = v26[9], v30 > 0x7FFFFFFFFFFFFFFLL) )
LABEL_124:
            core::panicking::panic_nounwind(anon_8a413ea3e55ef2f27523b53f9db0d00f_41_llvm_16715495509781371082, 162LL);
        }
        v32 = uu_cut::cut_bytes(v28, v29, v30, (__int64)v27);
LABEL_117:
        if ( v32 )
        {
          v85 = v32;
          v86 = v31;
          _InterlockedExchange(&uucore::mods::error::EXIT_CODE, ((__int64 (__fastcall *)(_OWORD *))v31[12])(v32));
          v64 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v65 = *(_QWORD *)(v64 + 8);
          v66 = *(_QWORD *)(v64 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v65, 1LL, 1LL, v66);
          v111[0] = v65;
          v111[1] = v66;
          v116[0] = v111;
          v116[1] = <&T as core::fmt::Display>::fmt;
          v116[2] = &v85;
          v116[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          v120[0] = &unk_11AD58;
          v120[1] = 3LL;
          v120[4] = 0LL;
          v120[2] = v116;
          v120[3] = 2LL;
          std::io::stdio::_eprint(v120);
          v67 = v86;
          if ( *v86 )
          {
            ((void (__fastcall *)(_OWORD *))*v86)(v85);
            v67 = v86;
          }
          if ( v67[1] )
            _rust_dealloc(v85);
        }
        v11 = 1;
        if ( v9 == v10 )
          return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v104);
        goto LABEL_11;
      }
      if ( !(unsigned __int8)std::path::Path::is_dir(*(_QWORD *)(v9 - 16), *(_QWORD *)(v9 - 8)) )
        break;
      v14 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v15 = *(_QWORD *)(v14 + 8);
      v16 = *(_QWORD *)(v14 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v15, 1LL, 1LL, v16);
      v113[0] = v15;
      v113[1] = v16;
      v112[0] = v113;
      v112[1] = <&T as core::fmt::Display>::fmt;
      v121[0] = &unk_11AD88;
      v121[1] = 2LL;
      v121[4] = 0LL;
      v121[2] = v112;
      v121[3] = 1LL;
      std::io::stdio::_eprint(v121);
      v17 = *(_QWORD *)(v9 - 16);
      if ( !v17 )
        goto LABEL_124;
      v18 = *(_QWORD *)(v9 - 8);
      if ( v18 < 0 )
        goto LABEL_124;
      v117[0] = 0LL;
      v117[1] = v17;
      v117[2] = v18;
      v118 = 0;
      v114[0] = v117;
      v114[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v122[0] = &unk_11ADA8;
      v122[1] = 2LL;
      v122[4] = 0LL;
      v122[2] = v114;
      v122[3] = 1LL;
      std::io::stdio::_eprint(v122);
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
LABEL_13:
      v48 = v9 == v10;
      if ( v48 )
        return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v104);
    }
    v76 = 0x1B600000000LL;
    WORD2(v77) = 0;
    LODWORD(v77) = 1;
    std::fs::OpenOptions::_open(v108, &v76, v12, v13);
    if ( !v108[0] )
    {
      v21 = (__int64 (__fastcall **)())(v108[1] | (unsigned __int64)v96 & 0xFFFFFFFF00000000LL);
      goto LABEL_26;
    }
    v19 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
            v109,
            v9 - 24);
    v20 = &anon_8a413ea3e55ef2f27523b53f9db0d00f_13_llvm_16715495509781371082;
    v21 = &anon_8a413ea3e55ef2f27523b53f9db0d00f_13_llvm_16715495509781371082;
    if ( v19 )
    {
LABEL_28:
      v96 = v21;
      v87 = v19;
      v88 = v20;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, ((__int64 (__fastcall *)(__int64))v20[12])(v19));
      v22 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v23 = *(_QWORD *)(v22 + 8);
      v24 = *(_QWORD *)(v22 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v23, 1LL, 1LL, v24);
      v115[0] = v23;
      v115[1] = v24;
      v119[0] = v115;
      v119[1] = <&T as core::fmt::Display>::fmt;
      v119[2] = &v87;
      v119[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v123[0] = &unk_11AD58;
      v123[1] = 3LL;
      v123[4] = 0LL;
      v123[2] = v119;
      v123[3] = 2LL;
      std::io::stdio::_eprint(v123);
      v25 = v88;
      if ( *v88 )
      {
        ((void (__fastcall *)(__int64))*v88)(v87);
        v25 = v88;
      }
      if ( v25[1] )
        _rust_dealloc(v87);
    }
    else
    {
LABEL_26:
      v96 = v21;
      v19 = uu_cut::cut_files::{{closure}}(&v105);
      if ( v19 )
      {
        v21 = v96;
        goto LABEL_28;
      }
    }
  }
  while ( v9 != v10 );
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v104);
}
