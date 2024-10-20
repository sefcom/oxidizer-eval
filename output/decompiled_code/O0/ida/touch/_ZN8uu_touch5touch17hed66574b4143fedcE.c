__int64 __fastcall uu_touch::touch(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  bool v9; // cc
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r12d
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r14
  const void *v17; // r15
  signed __int64 v18; // rbx
  __int64 v19; // r13
  void *v20; // r12
  __int64 result; // rax
  int v22; // ebp
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 (__fastcall **v27)(); // rbx
  __int128 *v28; // rax
  __int64 v29; // r12
  __int64 v30; // r13
  __int64 v31; // rbx
  _BYTE *v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rbx
  int v35; // edx
  void *v36; // rbx
  char v37; // al
  __int64 v38; // r12
  _OWORD *v39; // rax
  __int128 v40; // xmm0
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 (__fastcall **v43)(); // rax
  __int64 (__fastcall *v44)(); // rsi
  int v45; // eax
  void *v46; // rcx
  int v47; // edx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // r12
  int v55; // ebx
  __int64 v56; // rdx
  int v57; // r12d
  void *v58; // rsi
  int v59; // edx
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int64 v63; // [rsp+0h] [rbp-438h]
  int v64; // [rsp+Ch] [rbp-42Ch]
  int v66; // [rsp+18h] [rbp-420h] BYREF
  int fd; // [rsp+1Ch] [rbp-41Ch]
  __int64 v68; // [rsp+20h] [rbp-418h]
  int v69; // [rsp+2Ch] [rbp-40Ch]
  void *v70; // [rsp+30h] [rbp-408h]
  __int64 v71; // [rsp+38h] [rbp-400h]
  __int64 v72; // [rsp+40h] [rbp-3F8h]
  _OWORD *v73; // [rsp+48h] [rbp-3F0h] BYREF
  __int64 (__fastcall **v74)(); // [rsp+50h] [rbp-3E8h]
  __int128 v75; // [rsp+58h] [rbp-3E0h] BYREF
  __int64 v76; // [rsp+68h] [rbp-3D0h]
  __int128 v77; // [rsp+70h] [rbp-3C8h] BYREF
  __int64 v78; // [rsp+80h] [rbp-3B8h] BYREF
  __int64 v79; // [rsp+88h] [rbp-3B0h]
  __int128 v80; // [rsp+90h] [rbp-3A8h] BYREF
  void *dest[2]; // [rsp+A0h] [rbp-398h]
  __int128 *v82; // [rsp+B0h] [rbp-388h]
  __int64 (__fastcall **v83)(); // [rsp+B8h] [rbp-380h]
  __int64 v84; // [rsp+C0h] [rbp-378h]
  char v85; // [rsp+C8h] [rbp-370h]
  __int128 v86; // [rsp+148h] [rbp-2F0h] BYREF
  void *v87; // [rsp+158h] [rbp-2E0h]
  __int64 v88; // [rsp+160h] [rbp-2D8h]
  __int64 v89; // [rsp+168h] [rbp-2D0h]
  __int64 v90; // [rsp+170h] [rbp-2C8h] BYREF
  __int64 v91; // [rsp+178h] [rbp-2C0h] BYREF
  __int64 v92; // [rsp+180h] [rbp-2B8h]
  int v93; // [rsp+188h] [rbp-2B0h]
  __int64 v94; // [rsp+190h] [rbp-2A8h] BYREF
  __int64 v95; // [rsp+198h] [rbp-2A0h]
  __int64 v96; // [rsp+1A0h] [rbp-298h] BYREF
  _QWORD v97[2]; // [rsp+1A8h] [rbp-290h] BYREF
  _QWORD v98[4]; // [rsp+1B8h] [rbp-280h] BYREF
  void *v99; // [rsp+1D8h] [rbp-260h] BYREF
  __int64 v100; // [rsp+1E0h] [rbp-258h]
  _QWORD *v101; // [rsp+1E8h] [rbp-250h]
  __int64 v102; // [rsp+1F0h] [rbp-248h]
  __int64 v103; // [rsp+1F8h] [rbp-240h]
  __int64 v104; // [rsp+208h] [rbp-230h] BYREF
  int v105; // [rsp+210h] [rbp-228h]
  __int64 v106; // [rsp+218h] [rbp-220h] BYREF
  int v107; // [rsp+220h] [rbp-218h]
  __int128 v108; // [rsp+228h] [rbp-210h] BYREF
  __int128 v109; // [rsp+238h] [rbp-200h] BYREF
  _QWORD v110[2]; // [rsp+248h] [rbp-1F0h] BYREF
  _QWORD v111[2]; // [rsp+258h] [rbp-1E0h] BYREF
  _QWORD v112[2]; // [rsp+268h] [rbp-1D0h] BYREF
  _QWORD v113[6]; // [rsp+278h] [rbp-1C0h] BYREF
  _QWORD v114[2]; // [rsp+2A8h] [rbp-190h] BYREF
  __int64 v115; // [rsp+2B8h] [rbp-180h] BYREF
  __int64 v116; // [rsp+2C0h] [rbp-178h]
  int v117; // [rsp+2C8h] [rbp-170h]
  __int64 v118; // [rsp+2D0h] [rbp-168h]
  int v119; // [rsp+2D8h] [rbp-160h]
  _QWORD v120[3]; // [rsp+2E0h] [rbp-158h] BYREF
  char v121; // [rsp+2F8h] [rbp-140h]
  _QWORD v122[4]; // [rsp+300h] [rbp-138h] BYREF
  __int128 v123; // [rsp+320h] [rbp-118h] BYREF
  void *v124; // [rsp+330h] [rbp-108h]
  _QWORD *v125; // [rsp+338h] [rbp-100h]
  __int64 v126; // [rsp+340h] [rbp-F8h] BYREF
  __int64 v127; // [rsp+348h] [rbp-F0h]
  int v128; // [rsp+350h] [rbp-E8h]
  _BYTE v129[28]; // [rsp+354h] [rbp-E4h]
  __int64 v130; // [rsp+370h] [rbp-C8h] BYREF
  void *v131; // [rsp+378h] [rbp-C0h]
  int v132; // [rsp+380h] [rbp-B8h]
  _BYTE v133[28]; // [rsp+384h] [rbp-B4h]
  __int128 v134; // [rsp+3A0h] [rbp-98h] BYREF
  __int128 v135; // [rsp+3B0h] [rbp-88h] BYREF
  __int128 v136; // [rsp+3C0h] [rbp-78h] BYREF
  void *v137; // [rsp+3D0h] [rbp-68h]
  __int64 v138; // [rsp+3D8h] [rbp-60h] BYREF
  __int128 v139; // [rsp+3E0h] [rbp-58h]
  __int128 v140; // [rsp+3F0h] [rbp-48h]
  __int64 v141; // [rsp+400h] [rbp-38h]

  v7 = *(_QWORD *)(a4 + 24);
  v8 = 0LL;
  v9 = v7 < (__int64)0x8000000000000002LL;
  v10 = v7 - 0x7FFFFFFFFFFFFFFFLL;
  if ( v9 )
    v8 = v10;
  v63 = a4;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v11 = *(_QWORD *)(a4 + 32);
      v12 = *(_DWORD *)(a4 + 40);
    }
    else
    {
      chrono::offset::utc::Utc::now(&v99);
      v22 = (int)v99;
      v79 = HIDWORD(v99);
      v12 = v100;
      LOBYTE(v98[0]) = 0;
      std::thread::local::LocalKey<T>::try_with(
        &v80,
        &anon_3f273f3c4772dc55a54bdec9062ccb39_6_llvm_3469199380322658755,
        &v99,
        v98);
      core::result::Result<T,E>::expect(
        v113,
        &v80,
        anon_6b18f3ca19b16514212961b62c614770_0_llvm_3964607150695535679,
        70LL,
        &anon_6b18f3ca19b16514212961b62c614770_2_llvm_3964607150695535679);
      chrono::offset::LocalResult<T>::unwrap(v113, &anon_4b66f08430e3b2971a63e8fbb00d0ebe_106_llvm_5877677624257021904);
      LODWORD(v80) = v22;
      v11 = 86400LL * (int)chrono::naive::date::NaiveDate::num_days_from_ce(&v80) + v79 - 0xE77934880LL;
    }
    v23 = v12;
    v24 = v11;
LABEL_15:
    v71 = v24;
    v104 = v24;
    v105 = v23;
    v70 = (void *)v11;
    v106 = v11;
    v64 = v12;
    v107 = v12;
    if ( *(_QWORD *)a4 == 0x8000000000000000LL )
    {
LABEL_16:
      v25 = 24 * a3;
      v26 = 0LL;
      v69 = v23;
      while ( 1 )
      {
        if ( !v25 || !a2 )
        {
          result = a1;
          *(_QWORD *)a1 = 0x8000000000000004LL;
          return result;
        }
        v97[0] = v26;
        v72 = *a2;
        v79 = v26;
        if ( v72 == 0x8000000000000000LL )
        {
          std::sys::os_str::bytes::Slice::to_owned(&v80, aDevStdout, 11LL);
          v28 = (__int128 *)*((_QWORD *)&v80 + 1);
          v86 = v80;
          v87 = dest[0];
          if ( (_QWORD)v80 != 0x8000000000000000LL )
            v28 = &v86;
          v29 = *((_QWORD *)v28 + 1);
          if ( !v29 )
            goto LABEL_125;
          v30 = *((_QWORD *)v28 + 2);
          if ( v30 < 0 )
            goto LABEL_125;
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v80, 1LL, 0LL);
          v31 = *((_QWORD *)&v80 + 1);
          if ( (_QWORD)v80 )
            alloc::raw_vec::handle_error(*((_QWORD *)&v80 + 1), dest[0]);
          v32 = dest[0];
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_64C6E, dest[0], 1LL, 1LL, 1LL);
          *v32 = 45;
          *(_QWORD *)&v77 = v31;
          *((_QWORD *)&v77 + 1) = v32;
          v78 = 1LL;
        }
        else
        {
          *(_QWORD *)&v86 = 0x8000000000000000LL;
          *((_QWORD *)&v86 + 1) = a2;
          v29 = a2[1];
          if ( !v29 )
            goto LABEL_125;
          v30 = a2[2];
          if ( v30 < 0 )
            goto LABEL_125;
          v110[0] = a2[1];
          v110[1] = v30;
          *(_QWORD *)&v75 = 0LL;
          *((_QWORD *)&v75 + 1) = 1LL;
          v76 = 0LL;
          v84 = 32LL;
          v85 = 3;
          *(_QWORD *)&v80 = 0LL;
          dest[0] = 0LL;
          v82 = &v75;
          v83 = &off_2C9AA0;
          if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(v110, &v80) )
            core::result::unwrap_failed(
              aADisplayImplem_0,
              55LL,
              &v91,
              &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
              &off_2C9AD0);
          v77 = v75;
          v78 = v76;
        }
        if ( (*(_BYTE *)(v63 + 49) & 1) != 0 )
          std::sys::pal::unix::fs::lstat(&v80);
        else
          std::sys::pal::unix::fs::stat(&v80);
        v27 = (__int64 (__fastcall **)())*((_QWORD *)&v80 + 1);
        if ( (_QWORD)v80 == 2LL )
        {
          v89 = *((_QWORD *)&v80 + 1);
          switch ( BYTE8(v80) & 3 )
          {
            case 0:
              if ( !*(_BYTE *)(*((_QWORD *)&v80 + 1) + 16LL) )
                goto LABEL_40;
              goto LABEL_52;
            case 1:
              if ( !*(_BYTE *)(*((_QWORD *)&v80 + 1) + 15LL) )
                goto LABEL_40;
              goto LABEL_52;
            case 2:
              if ( !(unsigned __int8)std::sys::pal::unix::decode_error_kind(HIDWORD(*((_QWORD *)&v80 + 1)), v29) )
                goto LABEL_40;
              goto LABEL_52;
            case 3:
              v37 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(*((_QWORD *)&v80 + 1)), v29);
              if ( v37 == 41 )
                core::hint::unreachable_unchecked::precondition_check();
              if ( v37 )
              {
LABEL_52:
                v38 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                        v27,
                        &v77);
                v27 = &off_2C9BC0;
                goto LABEL_72;
              }
LABEL_40:
              if ( (*(_BYTE *)(v63 + 48) & 1) != 0 )
                goto LABEL_69;
              if ( (*(_BYTE *)(v63 + 49) & 1) != 0 )
              {
                if ( !*((_QWORD *)&v77 + 1) || v78 < 0 )
                  goto LABEL_125;
                v120[0] = 0LL;
                v120[1] = *((_QWORD *)&v77 + 1);
                v120[2] = v78;
                v121 = 1;
                v111[0] = v120;
                v111[1] = <os_display::Quoted as core::fmt::Display>::fmt;
                *(_QWORD *)&v80 = &off_2C9C30;
                *((_QWORD *)&v80 + 1) = 2LL;
                dest[0] = v111;
                dest[1] = &dword_0 + 1;
                v82 = 0LL;
                alloc::fmt::format::format_inner(&v136, &v80);
                dest[0] = v137;
                v80 = v136;
                LODWORD(dest[1]) = 1;
                v39 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
                v38 = (__int64)v39;
                if ( !v39 )
                  alloc::alloc::handle_alloc_error(8LL, 32LL);
                v40 = v80;
                v39[1] = *(_OWORD *)dest;
                *v39 = v40;
                if ( (*(_BYTE *)(v63 + 50) & 1) != 0 )
                {
                  v27 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
                }
                else
                {
                  v73 = v39;
                  v74 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
                  _InterlockedExchange(
                    &uucore::mods::error::EXIT_CODE,
                    <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v39));
                  v41 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
                  v27 = *(__int64 (__fastcall ***)())(v41 + 8);
                  v42 = *(_QWORD *)(v41 + 16);
                  core::slice::raw::from_raw_parts::precondition_check(v27, 1LL, 1LL, v42);
                  v112[0] = v27;
                  v112[1] = v42;
                  v122[0] = v112;
                  v122[1] = <&T as core::fmt::Display>::fmt;
                  v122[2] = &v73;
                  v122[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                  v99 = &unk_2C9B58;
                  v100 = 3LL;
                  v103 = 0LL;
                  v101 = v122;
                  v102 = 2LL;
                  std::io::stdio::_eprint(&v99);
                  v43 = v74;
                  if ( *v74 )
                  {
                    ((void (__fastcall *)(_OWORD *))*v74)(v73);
                    v43 = v74;
                  }
                  v44 = v43[1];
                  if ( v44 )
                    _rust_dealloc(v73, v44, v43[2]);
LABEL_69:
                  v38 = 0LL;
                }
LABEL_70:
                std::io::error::repr_bitpacked::decode_repr(&v80, v89);
                if ( (unsigned __int8)v80 >= 3u )
                  core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v80 + 8);
LABEL_72:
                alloc::raw_vec::RawVec<T,A>::current_memory(&v80, &v77);
                if ( *((_QWORD *)&v80 + 1) )
                  <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                    &v78,
                    v80,
                    *((_QWORD *)&v80 + 1),
                    dest[0]);
                goto LABEL_18;
              }
              *(_QWORD *)&v80 = 0x1B600000000LL;
              BYTE13(v80) = 0;
              DWORD2(v80) = 256;
              *(_WORD *)((char *)&v80 + 11) = 257;
              std::fs::OpenOptions::_open(&v66, &v80, v29, v30);
              if ( v66 )
              {
                if ( v66 == 1 )
                {
                  v72 = v68;
                  v97[1] = v68;
                  std::sys::os_str::bytes::Slice::to_string_lossy(&v94, v29, v30);
                  v33 = v95;
                  v34 = v96;
                  if ( v94 != 0x8000000000000000LL )
                  {
                    v88 = v95;
                    core::slice::raw::from_raw_parts::precondition_check(v95, 1LL, 1LL, v96);
                    v33 = v88;
                  }
                  *(_QWORD *)&v80 = v33;
                  *((_QWORD *)&v80 + 1) = v33 + v34;
                  if ( (unsigned int)core::str::validations::next_code_point_reverse(&v80) )
                  {
                    LODWORD(v36) = v35;
                    if ( (v35 ^ 0xD800u) - 2048 >= 0x10F800 )
                      core::panicking::panic_nounwind(
                        anon_3a697c587a5181cf7f4f3636b00cd118_20_llvm_1028874120538859734,
                        57LL);
                    if ( v94 == 0x8000000000000000LL )
                      goto LABEL_97;
LABEL_95:
                    alloc::raw_vec::RawVec<T,A>::current_memory(&v80, &v94);
                    if ( *((_QWORD *)&v80 + 1) )
                      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                        &v96,
                        v80,
                        *((_QWORD *)&v80 + 1),
                        dest[0]);
                  }
                  else
                  {
                    v36 = &loc_110000;
                    if ( v94 != 0x8000000000000000LL )
                      goto LABEL_95;
                  }
LABEL_97:
                  if ( (_DWORD)v36 == 47 )
                  {
                    v51 = std::io::error::Error::new(39LL, aNoSuchFileOrDi, 25LL);
                    v38 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                            v51,
                            &v77);
                    std::io::error::repr_bitpacked::decode_repr(&v80, v72);
                    if ( (unsigned __int8)v80 >= 3u )
                      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v80 + 8);
                  }
                  else
                  {
                    v38 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                            v72,
                            v29,
                            v30);
                    if ( (*(_BYTE *)(v63 + 50) & 1) == 0 )
                    {
                      v90 = v38;
                      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
                      v52 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
                      v53 = *(_QWORD *)(v52 + 8);
                      v54 = *(_QWORD *)(v52 + 16);
                      core::slice::raw::from_raw_parts::precondition_check(v53, 1LL, 1LL, v54);
                      v114[0] = v53;
                      v114[1] = v54;
                      v98[0] = v114;
                      v98[1] = <&T as core::fmt::Display>::fmt;
                      v98[2] = &v90;
                      v98[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                      v113[0] = &unk_2C9B58;
                      v113[1] = 3LL;
                      v113[4] = 0LL;
                      v113[2] = v98;
                      v113[3] = 2LL;
                      std::io::stdio::_eprint(v113);
                      core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(&v90);
                      v38 = 0LL;
                    }
                  }
                  if ( v66 )
                  {
                    if ( v66 != 1 )
                    {
                      std::io::error::repr_bitpacked::decode_repr(&v80, v68);
                      if ( (unsigned __int8)v80 >= 3u )
                        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v80 + 8);
                    }
                  }
                  else
                  {
                    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
                    close(fd);
                  }
                  v27 = &off_2C9BC0;
                  goto LABEL_70;
                }
                std::io::error::repr_bitpacked::decode_repr(&v80, v68);
                if ( (unsigned __int8)v80 >= 3u )
                  core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v80 + 8);
              }
              else
              {
                std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
                close(fd);
              }
              if ( *(_QWORD *)(v63 + 24) == 0x8000000000000001LL && *(_QWORD *)v63 == 0x8000000000000000LL )
                goto LABEL_69;
              std::io::error::repr_bitpacked::decode_repr(&v80, v27);
              if ( (unsigned __int8)v80 >= 3u )
                core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v80 + 8);
              break;
          }
        }
        if ( *(_BYTE *)(v63 + 51) )
        {
          v45 = v64;
          v46 = v70;
          v47 = v69;
          v48 = v71;
          if ( *(_BYTE *)(v63 + 51) == 1 )
          {
            uu_touch::stat(&v80, v29, v30, (*(_BYTE *)(v63 + 49) & 1) == 0);
            v48 = *((_QWORD *)&v80 + 1);
            if ( (_QWORD)v80 )
            {
              v49 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                      *((_QWORD *)&v80 + 1),
                      v29,
                      v30);
LABEL_90:
              v38 = v49;
              goto LABEL_92;
            }
            v47 = (int)dest[0];
            v45 = v64;
            v46 = v70;
          }
          if ( v72 == 0x8000000000000000LL )
            goto LABEL_87;
        }
        else
        {
          uu_touch::stat(&v80, v29, v30, (*(_BYTE *)(v63 + 49) & 1) == 0);
          if ( (_QWORD)v80 )
          {
            v49 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                    *((_QWORD *)&v80 + 1),
                    v29,
                    v30);
            goto LABEL_90;
          }
          v46 = dest[1];
          v45 = (int)v82;
          v47 = v69;
          v48 = v71;
          if ( v72 == 0x8000000000000000LL )
            goto LABEL_87;
        }
        if ( (*(_BYTE *)(v63 + 49) & 1) != 0 )
        {
          v92 = v48;
          v93 = v47;
          v91 = 1LL;
          *((_QWORD *)&v75 + 1) = v46;
          LODWORD(v76) = v45;
          *(_QWORD *)&v75 = 1LL;
          v50 = filetime::imp::linux::set_times(v29, v30, &v91, &v75, 1LL);
          goto LABEL_88;
        }
LABEL_87:
        v92 = v48;
        v93 = v47;
        v91 = 1LL;
        *((_QWORD *)&v75 + 1) = v46;
        LODWORD(v76) = v45;
        *(_QWORD *)&v75 = 1LL;
        v50 = filetime::imp::linux::set_times(v29, v30, &v91, &v75, 0LL);
LABEL_88:
        if ( v50 )
        {
          v49 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                  v50,
                  v29,
                  v30);
          goto LABEL_90;
        }
        v38 = 0LL;
LABEL_92:
        alloc::raw_vec::RawVec<T,A>::current_memory(&v80, &v77);
        if ( *((_QWORD *)&v80 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v78, v80, *((_QWORD *)&v80 + 1), dest[0]);
        v27 = &anon_3c49abdde3b3fdf25b1dcaa21df94cd5_38_llvm_2806096261713610274;
LABEL_18:
        a2 += 3;
        v123 = v86;
        v124 = v87;
        v125 = v97;
        core::result::Result<T,E>::map_err(&v138, v38, v27, &v123);
        v25 -= 24LL;
        v26 = v79 + 1;
        if ( v138 != 0x8000000000000004LL )
        {
          result = a1;
          *(_QWORD *)a1 = v138;
          v60 = v140;
          *(_OWORD *)(a1 + 8) = v139;
          *(_OWORD *)(a1 + 24) = v60;
          *(_QWORD *)(a1 + 40) = v141;
          return result;
        }
      }
    }
    v55 = v23;
    uu_touch::filetime_to_datetime((__int64)&v108, (__int64)&v104);
    if ( !(_DWORD)v108 )
    {
      result = a1;
      *(_QWORD *)a1 = 0x8000000000000001LL;
      *(_QWORD *)(a1 + 8) = v71;
      *(_DWORD *)(a1 + 16) = v55;
      return result;
    }
    if ( *(_QWORD *)(a4 + 8) && *(__int64 *)(a4 + 16) >= 0 )
    {
      v134 = v108;
      uu_touch::parse_date(&v126, &v134);
      v56 = v127;
      v57 = v128;
      if ( v126 != 0x8000000000000004LL )
      {
        result = a1;
        *(_QWORD *)a1 = v126;
        *(_QWORD *)(a1 + 8) = v56;
        *(_DWORD *)(a1 + 16) = v57;
        v61 = *(_OWORD *)v129;
        v62 = *(_OWORD *)&v129[12];
LABEL_124:
        *(_OWORD *)(result + 20) = v61;
        *(_OWORD *)(result + 32) = v62;
        return result;
      }
      v71 = v127;
      uu_touch::filetime_to_datetime((__int64)&v109, (__int64)&v106);
      if ( !(_DWORD)v109 )
      {
        result = a1;
        *(_QWORD *)a1 = 0x8000000000000001LL;
        *(_QWORD *)(a1 + 8) = v70;
        *(_DWORD *)(a1 + 16) = v64;
        return result;
      }
      if ( *(_QWORD *)(a4 + 8) && *(__int64 *)(a4 + 16) >= 0 )
      {
        v135 = v109;
        uu_touch::parse_date(&v130, &v135);
        v58 = v131;
        v59 = v132;
        if ( v130 == 0x8000000000000004LL )
        {
          v70 = v131;
          v64 = v132;
          v23 = v57;
          goto LABEL_16;
        }
        result = a1;
        *(_QWORD *)a1 = v130;
        *(_QWORD *)(a1 + 8) = v58;
        *(_DWORD *)(a1 + 16) = v59;
        v61 = *(_OWORD *)v133;
        v62 = *(_OWORD *)&v133[12];
        goto LABEL_124;
      }
    }
LABEL_125:
    core::panicking::panic_nounwind(anon_3c49abdde3b3fdf25b1dcaa21df94cd5_60_llvm_2806096261713610274, 162LL);
  }
  v13 = *(_QWORD *)(a4 + 32);
  if ( !v13 )
    goto LABEL_125;
  v14 = *(_QWORD *)(a4 + 40);
  if ( v14 < 0 )
    goto LABEL_125;
  uu_touch::stat(&v115, v13, v14, (*(_BYTE *)(a4 + 49) & 1) == 0);
  if ( !v115 )
  {
    v24 = v116;
    v23 = v117;
    v11 = v118;
    v12 = v119;
    goto LABEL_15;
  }
  v15 = a4;
  v16 = v116;
  v113[0] = v116;
  v17 = *(const void **)(v15 + 32);
  if ( !v17 || (v18 = *(_QWORD *)(v15 + 40), v18 < 0) )
    core::panicking::panic_nounwind(anon_965c7e9797bf363381d1deac3dc9c421_2_llvm_809249241883912370, 162LL);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v80, *(_QWORD *)(v15 + 40), 0LL);
  v19 = *((_QWORD *)&v80 + 1);
  if ( (_QWORD)v80 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v80 + 1), dest[0]);
  v20 = dest[0];
  core::intrinsics::copy_nonoverlapping::precondition_check(v17, dest[0], 1LL, 1LL, v18);
  memcpy(v20, v17, v18);
  result = a1;
  *(_QWORD *)a1 = 0x8000000000000002LL;
  *(_QWORD *)(a1 + 8) = v19;
  *(_QWORD *)(a1 + 16) = v20;
  *(_QWORD *)(a1 + 24) = v18;
  *(_QWORD *)(a1 + 32) = v16;
  return result;
}
