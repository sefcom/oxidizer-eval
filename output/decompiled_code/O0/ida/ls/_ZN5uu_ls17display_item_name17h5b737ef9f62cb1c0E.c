        __int64 a9)
{
  __int64 v10; // rsi
  __int64 v12; // rdx
  __int64 v13; // rbx
  char v14; // al
  const void *v15; // rbx
  size_t v16; // r15
  size_t v17; // r12
  void *v18; // r12
  int v19; // eax
  int *v20; // rax
  int v21; // ecx
  unsigned int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rcx
  bool v25; // zf
  int *v26; // r15
  int v27; // eax
  int v28; // eax
  __int64 v29; // r12
  const void *v30; // r15
  size_t v31; // rbx
  void *v32; // r12
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // r15
  size_t v36; // rbx
  char *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbx
  char v44; // al
  __int64 v45; // rcx
  __int128 *v46; // rbx
  void *src[2]; // [rsp+10h] [rbp-608h] BYREF
  size_t n; // [rsp+20h] [rbp-5F8h] BYREF
  int v50; // [rsp+2Ch] [rbp-5ECh]
  void *v51; // [rsp+30h] [rbp-5E8h] BYREF
  __int64 v52; // [rsp+38h] [rbp-5E0h]
  void *dest; // [rsp+40h] [rbp-5D8h]
  __int64 v54; // [rsp+48h] [rbp-5D0h]
  __int64 v55; // [rsp+50h] [rbp-5C8h]
  __int64 v56; // [rsp+58h] [rbp-5C0h]
  char v57; // [rsp+60h] [rbp-5B8h]
  __int64 v58; // [rsp+68h] [rbp-5B0h]
  __int128 v59; // [rsp+70h] [rbp-5A8h] BYREF
  __int64 v60; // [rsp+80h] [rbp-598h] BYREF
  __int128 *v61; // [rsp+88h] [rbp-590h]
  __int128 v62; // [rsp+90h] [rbp-588h] BYREF
  size_t v63; // [rsp+A0h] [rbp-578h]
  __int64 v64; // [rsp+A8h] [rbp-570h] BYREF
  __int128 v65; // [rsp+B0h] [rbp-568h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-558h]
  __int128 v67; // [rsp+D0h] [rbp-548h] BYREF
  __int64 v68; // [rsp+E0h] [rbp-538h] BYREF
  __int128 v69; // [rsp+F0h] [rbp-528h]
  size_t v70; // [rsp+100h] [rbp-518h]
  __int128 v71; // [rsp+110h] [rbp-508h]
  size_t v72; // [rsp+120h] [rbp-4F8h]
  __int64 v73; // [rsp+128h] [rbp-4F0h]
  __int64 v74; // [rsp+130h] [rbp-4E8h]
  __int64 v75; // [rsp+138h] [rbp-4E0h]
  __int64 v76; // [rsp+140h] [rbp-4D8h] BYREF
  __int64 v77; // [rsp+148h] [rbp-4D0h]
  __int64 v78; // [rsp+150h] [rbp-4C8h]
  __int64 v79; // [rsp+158h] [rbp-4C0h]
  __int128 v80; // [rsp+160h] [rbp-4B8h] BYREF
  __int64 v81; // [rsp+170h] [rbp-4A8h]
  __int128 v82; // [rsp+180h] [rbp-498h] BYREF
  size_t v83; // [rsp+190h] [rbp-488h]
  __int128 v84; // [rsp+198h] [rbp-480h] BYREF
  size_t v85; // [rsp+1A8h] [rbp-470h]
  __int128 v86; // [rsp+1B0h] [rbp-468h] BYREF
  __int64 v87; // [rsp+1C0h] [rbp-458h]
  __int128 v88; // [rsp+1C8h] [rbp-450h] BYREF
  __int64 v89; // [rsp+1D8h] [rbp-440h]
  char v90[8]; // [rsp+1E0h] [rbp-438h] BYREF
  __int64 v91; // [rsp+1E8h] [rbp-430h]
  __int64 v92; // [rsp+1F0h] [rbp-428h]
  char v93[8]; // [rsp+1F8h] [rbp-420h] BYREF
  __int64 v94; // [rsp+200h] [rbp-418h]
  __int64 v95; // [rsp+208h] [rbp-410h]
  char v96[8]; // [rsp+210h] [rbp-408h] BYREF
  __int64 v97; // [rsp+218h] [rbp-400h]
  __int64 v98; // [rsp+220h] [rbp-3F8h]
  _QWORD v99[2]; // [rsp+228h] [rbp-3F0h] BYREF
  _QWORD v100[2]; // [rsp+238h] [rbp-3E0h] BYREF
  _QWORD v101[4]; // [rsp+248h] [rbp-3D0h] BYREF
  _QWORD v102[4]; // [rsp+268h] [rbp-3B0h] BYREF
  _QWORD v103[4]; // [rsp+288h] [rbp-390h] BYREF
  _QWORD v104[6]; // [rsp+2A8h] [rbp-370h] BYREF
  __int16 v105; // [rsp+2D8h] [rbp-340h] BYREF
  __int64 v106; // [rsp+2E0h] [rbp-338h]
  __int64 v107; // [rsp+2E8h] [rbp-330h]
  void *v108; // [rsp+2F0h] [rbp-328h]
  size_t v109; // [rsp+2F8h] [rbp-320h]
  __int128 v110; // [rsp+310h] [rbp-308h] BYREF
  __int64 v111; // [rsp+320h] [rbp-2F8h]
  __int128 v112; // [rsp+330h] [rbp-2E8h] BYREF
  __int64 v113; // [rsp+340h] [rbp-2D8h]
  __int128 v114; // [rsp+348h] [rbp-2D0h] BYREF
  __int64 v115; // [rsp+358h] [rbp-2C0h]
  _QWORD v116[6]; // [rsp+360h] [rbp-2B8h] BYREF
  __int128 v117; // [rsp+390h] [rbp-288h] BYREF
  size_t v118; // [rsp+3A0h] [rbp-278h]
  __int128 v119; // [rsp+3A8h] [rbp-270h] BYREF
  __int64 v120; // [rsp+3B8h] [rbp-260h]
  __int64 v121[3]; // [rsp+3C0h] [rbp-258h] BYREF
  __int64 v122[6]; // [rsp+3D8h] [rbp-240h] BYREF
  _QWORD v123[22]; // [rsp+408h] [rbp-210h] BYREF
  _BYTE v124[32]; // [rsp+4B8h] [rbp-160h] BYREF
  __int64 v125; // [rsp+4D8h] [rbp-140h]
  __int64 v126; // [rsp+4E0h] [rbp-138h]
  char v127; // [rsp+5E0h] [rbp-38h]

  v61 = a6;
  v74 = a5;
  v75 = a4;
  v10 = *(_QWORD *)(a2 + 8);
  if ( !v10 )
    goto LABEL_125;
  v12 = *(_QWORD *)(a2 + 16);
  if ( v12 < 0 )
    goto LABEL_125;
  v58 = a3 + 245;
  uucore::features::quoting_style::escape_name_inner(src, v10, v12, a3 + 245, 0LL);
  if ( (*(_BYTE *)(a3 + 239) & 1) != 0 )
  {
    if ( !src[1] || (n & 0x8000000000000000LL) != 0LL )
      goto LABEL_125;
    uu_ls::create_hyperlink(&v82, src[1], n, a2);
    alloc::raw_vec::RawVec<T,A>::current_memory(&v51, src);
    if ( v52 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v51, v52, dest);
    *(_OWORD *)src = v82;
    n = v83;
  }
  v13 = a7;
  if ( *(_BYTE *)(a8 + 29) != 2 )
  {
    if ( !src[1] || (n & 0x8000000000000000LL) != 0LL )
      goto LABEL_125;
    if ( *(_WORD *)(a3 + 228) )
    {
      if ( __CFADD__(n, a9) )
        core::panicking::panic_const::panic_const_add_overflow(&off_1FF830);
      v14 = n + a9 > *(unsigned __int16 *)(a3 + 228);
    }
    else
    {
      v14 = 0;
    }
    uu_ls::colors::color_name((unsigned int)&v84, src[1], n, a2, a8, a7, 0LL, v14);
    alloc::raw_vec::RawVec<T,A>::current_memory(&v51, src);
    if ( v52 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v51, v52, dest);
    *(_OWORD *)src = v84;
    n = v85;
  }
  if ( *(_BYTE *)(a3 + 248) == 1 || !*((_QWORD *)v61 + 2) )
  {
    v50 = 0;
    if ( !*(_BYTE *)(a3 + 244) )
      goto LABEL_50;
    goto LABEL_30;
  }
  v63 = *((_QWORD *)v61 + 2);
  v62 = *v61;
  v15 = src[1];
  if ( !src[1] )
    goto LABEL_125;
  v16 = n;
  if ( (n & 0x8000000000000000LL) != 0LL )
    goto LABEL_125;
  v17 = v63;
  if ( (unsigned __int64)v62 - v63 < n )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v62, v63, n);
    v17 = v63;
  }
  v18 = (void *)(*((_QWORD *)&v62 + 1) + v17);
  core::intrinsics::copy_nonoverlapping::precondition_check(v15, v18, 1LL, 1LL, v16);
  memcpy(v18, v15, v16);
  v63 += v16;
  v69 = v62;
  v70 = v63;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v51, src);
  if ( v52 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v51, v52, dest);
  *(_OWORD *)src = v69;
  v19 = v70;
  n = v70;
  LOBYTE(v19) = 1;
  v50 = v19;
  v13 = a7;
  if ( *(_BYTE *)(a3 + 244) )
  {
LABEL_30:
    v20 = (int *)(a2 + 248);
    v21 = *(_DWORD *)(a2 + 248);
    if ( v21 == 2 )
    {
      v20 = (int *)core::cell::once::OnceCell<T>::try_init(a2 + 248, a2, v13);
      v21 = *v20;
    }
    v22 = 1114112;
    if ( v21 )
    {
      switch ( ((v20[1] & 0xF000u) - 4096) >> 12 )
      {
        case 0u:
          v22 = 124;
          switch ( *(_BYTE *)(a3 + 244) )
          {
            case 0:
              goto LABEL_50;
            case 1:
              goto LABEL_43;
            case 2:
              goto LABEL_47;
            case 3:
              goto LABEL_48;
          }
        case 3u:
          v22 = 47;
          goto LABEL_42;
        case 7u:
          v23 = a2 + 72;
          v24 = *(_QWORD *)(a2 + 72);
          if ( v24 == 3 )
          {
            v23 = core::cell::once::OnceCell<T>::try_init(a2 + 72, a2, v13);
            v24 = *(_QWORD *)v23;
          }
          if ( v24 == 2 )
            goto LABEL_42;
          v22 = 42;
          if ( (*(_BYTE *)(v23 + 56) & 0x49) == 0 )
            v22 = 1114112;
          switch ( *(_BYTE *)(a3 + 244) )
          {
            case 0:
              goto LABEL_50;
            case 1:
              goto LABEL_43;
            case 2:
              goto LABEL_47;
            case 3:
              goto LABEL_48;
          }
        case 9u:
          v22 = 64;
          switch ( *(_BYTE *)(a3 + 244) )
          {
            case 0:
              goto LABEL_50;
            case 1:
              goto LABEL_43;
            case 2:
              goto LABEL_47;
            case 3:
              goto LABEL_48;
          }
        case 0xBu:
          v22 = 61;
          switch ( *(_BYTE *)(a3 + 244) )
          {
            case 0:
              goto LABEL_50;
            case 1:
LABEL_43:
              v25 = v22 == 47;
              v22 = 47;
              if ( v25 )
                goto LABEL_49;
              break;
            case 2:
LABEL_47:
              if ( v22 != 42 )
                goto LABEL_48;
              break;
            case 3:
LABEL_48:
              if ( v22 != 1114112 )
LABEL_49:
                alloc::string::String::push(src, v22);
              break;
          }
          break;
        default:
          goto LABEL_42;
      }
    }
    else
    {
LABEL_42:
      switch ( *(_BYTE *)(a3 + 244) )
      {
        case 0:
          break;
        case 1:
          goto LABEL_43;
        case 2:
          goto LABEL_47;
        case 3:
          goto LABEL_48;
      }
    }
  }
LABEL_50:
  if ( *(_BYTE *)(a3 + 248) == 1 )
  {
    v26 = (int *)(a2 + 248);
    v27 = *(_DWORD *)(a2 + 248);
    if ( v27 == 2 )
      v27 = *(_DWORD *)core::cell::once::OnceCell<T>::try_init(a2 + 248, a2, v13);
    if ( v27 )
    {
      v28 = *v26;
      if ( *v26 == 2 )
      {
        v26 = (int *)core::cell::once::OnceCell<T>::try_init(a2 + 248, a2, v13);
        v28 = *v26;
      }
      if ( !v28 )
        core::option::unwrap_failed(&off_1FF800);
      if ( (v26[1] & 0xF000) == 0xA000 && (*(_BYTE *)(a2 + 296) & 1) == 0 )
      {
        if ( !*(_QWORD *)(a2 + 32) || *(__int64 *)(a2 + 40) < 0 )
          goto LABEL_125;
        std::sys::pal::unix::fs::readlink(&v86);
        if ( (_QWORD)v86 == 0x8000000000000000LL )
        {
          v29 = *((_QWORD *)&v86 + 1);
          v79 = *((_QWORD *)&v86 + 1);
          v30 = *(const void **)(a2 + 32);
          v31 = *(_QWORD *)(a2 + 40);
          core::slice::raw::from_raw_parts::precondition_check(v30, 1LL, 1LL, v31);
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v51, v31, 0LL);
          v73 = v29;
          v58 = v52;
          if ( v51 )
            alloc::raw_vec::handle_error(v58, dest);
          v32 = dest;
          core::intrinsics::copy_nonoverlapping::precondition_check(v30, dest, 1LL, 1LL, v31);
          memcpy(v32, v30, v31);
          v106 = v73;
          v107 = v58;
          v108 = v32;
          v109 = v31;
          v105 = 2;
          _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
          v33 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v34 = *(_QWORD *)(v33 + 8);
          v35 = *(_QWORD *)(v33 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v34, 1LL, 1LL, v35);
          v99[0] = v34;
          v99[1] = v35;
          v101[0] = v99;
          v101[1] = <&T as core::fmt::Display>::fmt;
          v101[2] = &v105;
          v101[3] = <uu_ls::LsError as core::fmt::Display>::fmt;
          v116[0] = &unk_1FF1D8;
          v116[1] = 3LL;
          v116[4] = 0LL;
          v116[2] = v101;
          v116[3] = 2LL;
          std::io::stdio::_eprint(v116);
          core::ptr::drop_in_place<uu_ls::LsError>(&v105);
          goto LABEL_104;
        }
        v60 = v87;
        v59 = v86;
        v36 = n;
        if ( (char *)src[0] - n <= (char *)&dword_0 + 3 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, n, 4LL);
          v36 = n;
        }
        v37 = (char *)src[1];
        core::intrinsics::copy_nonoverlapping::precondition_check(asc_2B4EC, (char *)src[1] + v36, 1LL, 1LL, 4LL);
        *(_DWORD *)&v37[v36] = 540945696;
        n += 4LL;
        if ( *(_BYTE *)(a8 + 29) == 2 )
        {
          if ( !*((_QWORD *)&v59 + 1) )
            goto LABEL_125;
          if ( v60 < 0 )
            goto LABEL_125;
          uucore::features::quoting_style::escape_name_inner(v96, *((_QWORD *)&v59 + 1), v60, v58, 0LL);
          if ( !v97 || v98 < 0 )
            goto LABEL_125;
          alloc::string::String::push_str(src);
          core::ptr::drop_in_place<alloc::string::String>(v96);
          goto LABEL_102;
        }
        <std::path::PathBuf as core::clone::Clone>::clone(&v65, &v59);
        if ( !*((_QWORD *)&v59 + 1) || v60 < 0 )
          goto LABEL_125;
        if ( !(unsigned __int8)std::path::Path::is_absolute() )
        {
          v38 = <std::path::PathBuf as core::ops::deref::Deref>::deref(a2 + 24);
          v40 = std::path::Path::parent(v38, v39);
          if ( v40 )
          {
            v111 = v66;
            v110 = v65;
            std::path::Path::join(&v114, v40, v41, &v110);
            v66 = v115;
            v65 = v114;
          }
        }
        v113 = v66;
        v112 = v65;
        v122[0] = 0LL;
        v121[0] = 0x8000000000000000LL;
        uu_ls::PathData::new((__int64)v124, &v112, (__int64)v122, v121, a3, 0);
        v42 = *(_QWORD *)(a2 + 72);
        if ( v42 == 3 )
          v42 = *(_QWORD *)core::cell::once::OnceCell<T>::try_init(a2 + 72, a2, a7);
        if ( v42 == 2 )
        {
          if ( !v125 || v126 < 0 )
            goto LABEL_125;
          uu_ls::get_metadata_with_deref_opt(v123, v125, v126, v127 & 1);
          if ( v123[0] == 2LL )
          {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v123);
            <std::path::PathBuf as core::ops::deref::Deref>::deref(a2 + 24);
            std::sys::pal::unix::fs::readlink(&v88);
            if ( (_QWORD)v88 == 0x8000000000000000LL )
            {
              v64 = *((_QWORD *)&v88 + 1);
              core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v64, &off_1FE618, &off_1FF818);
            }
            v80 = v88;
            v81 = v89;
            if ( !*((_QWORD *)&v88 + 1) || v89 < 0 )
              goto LABEL_125;
            std::sys::os_str::bytes::Slice::to_string_lossy(&v76);
            v43 = v77;
            if ( v76 != 0x8000000000000000LL )
              core::slice::raw::from_raw_parts::precondition_check(v77, 1LL, 1LL, v78);
            alloc::string::String::push_str(src);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v76, v43);
            core::ptr::drop_in_place<std::path::PathBuf>(&v80);
LABEL_101:
            core::ptr::drop_in_place<uu_ls::PathData>(v124);
LABEL_102:
            alloc::raw_vec::RawVec<T,A>::current_memory(&v51, &v59);
            if ( v52 )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v60, v51, v52, dest);
            goto LABEL_104;
          }
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v123);
        }
        if ( !*((_QWORD *)&v59 + 1) )
          goto LABEL_125;
        if ( v60 < 0 )
          goto LABEL_125;
        uucore::features::quoting_style::escape_name_inner(v93, *((_QWORD *)&v59 + 1), v60, v58, 0LL);
        if ( !v94 || v95 < 0 )
          goto LABEL_125;
        if ( *(_WORD *)(a3 + 228) )
        {
          if ( __CFADD__(n, a9) )
            core::panicking::panic_const::panic_const_add_overflow(&off_1FF830);
          v44 = n + a9 > *(unsigned __int16 *)(a3 + 228);
        }
        else
        {
          v44 = 0;
        }
        uu_ls::colors::color_name((unsigned int)v90, v94, v95, a2, a8, a7, (__int64)v124, v44);
        if ( !v91 || v92 < 0 )
          goto LABEL_125;
        alloc::string::String::push_str(src);
        core::ptr::drop_in_place<alloc::string::String>(v90);
        core::ptr::drop_in_place<alloc::string::String>(v93);
        goto LABEL_101;
      }
    }
  }
LABEL_104:
  if ( (*(_BYTE *)(a3 + 235) & 1) == 0 || v75 != 1 )
    goto LABEL_115;
  if ( *(_BYTE *)(a3 + 248) != 4 )
  {
    if ( *(_QWORD *)(a2 + 56) )
    {
      v45 = *(_QWORD *)(a2 + 64);
      if ( v45 >= 0 )
      {
        v100[0] = *(_QWORD *)(a2 + 56);
        v100[1] = v45;
        v103[0] = v100;
        v103[1] = <&T as core::fmt::Display>::fmt;
        v103[2] = v74;
        v103[3] = 0LL;
        v51 = &dword_0 + 2;
        dest = &dword_0 + 1;
        v54 = 1LL;
        v55 = 0LL;
        v56 = 32LL;
        v57 = 1;
        v104[0] = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
        v104[1] = 1LL;
        v104[2] = v103;
        v104[3] = 2LL;
        v104[4] = &v51;
        v104[5] = 1LL;
        alloc::fmt::format::format_inner(&v119, v104);
        v67 = v119;
        v68 = v120;
        goto LABEL_111;
      }
    }
LABEL_125:
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  }
  <alloc::string::String as core::clone::Clone>::clone(&v67, a2 + 48);
LABEL_111:
  v102[0] = &v67;
  v102[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v102[2] = src;
  v102[3] = <alloc::string::String as core::fmt::Display>::fmt;
  v51 = &unk_1FF378;
  v52 = 2LL;
  dest = v102;
  v54 = 2LL;
  v55 = 0LL;
  alloc::fmt::format::format_inner(&v117, &v51);
  v71 = v117;
  v72 = v118;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v51, src);
  if ( v52 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v51, v52, dest);
  *(_OWORD *)src = v71;
  n = v72;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v51, &v67);
  if ( v52 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v68, v51, v52, dest);
LABEL_115:
  *(_QWORD *)(a1 + 16) = n;
  *(_OWORD *)a1 = *(_OWORD *)src;
  if ( !(_BYTE)v50 )
  {
    v46 = v61;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v51, v61);
    if ( v52 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v46 + 1, v51, v52, dest);
  }
  return a1;
}
