_QWORD *__fastcall uu_base32::base_common::Config::from(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 (__fastcall *v3)(__int64); // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rbx
  const char *v13; // r12
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // r13
  _OWORD *v17; // rax
  __int128 v18; // xmm0
  _QWORD *v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  _OWORD *v24; // rax
  __int128 v25; // xmm0
  __int64 (__fastcall **v26)(); // rcx
  char flag; // bp
  char v28; // al
  _BYTE *v30; // r12
  __int64 v31; // r15
  __int128 v32; // xmm0
  const char **v34; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+18h] [rbp-1A0h]
  __m256i *v36; // [rsp+20h] [rbp-198h]
  __int64 (__fastcall *v37)(); // [rsp+28h] [rbp-190h]
  __m256i v38; // [rsp+30h] [rbp-188h] BYREF
  __int64 v39; // [rsp+50h] [rbp-168h]
  __m256i v40; // [rsp+60h] [rbp-158h] BYREF
  __int64 v41; // [rsp+80h] [rbp-138h]
  const char *v42; // [rsp+98h] [rbp-120h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-118h]
  __int64 *v44; // [rsp+A8h] [rbp-110h]
  __int64 v45; // [rsp+B0h] [rbp-108h]
  __int128 v46; // [rsp+B8h] [rbp-100h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-F0h]
  __int64 v48; // [rsp+D0h] [rbp-E8h]
  char **dest; // [rsp+D8h] [rbp-E0h] BYREF
  __m256i v50; // [rsp+E0h] [rbp-D8h]
  __int64 v51; // [rsp+100h] [rbp-B8h]
  __int64 v52; // [rsp+108h] [rbp-B0h]
  __int64 v53; // [rsp+110h] [rbp-A8h]

  v2 = a2;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    &dest,
    a2,
    anon_aee8d0926622a1c6e97588a73d77e694_27_llvm_9973493521462227259,
    4LL);
  v42 = anon_aee8d0926622a1c6e97588a73d77e694_27_llvm_9973493521462227259;
  v43 = 4LL;
  if ( dest )
  {
    v39 = v51;
    v38 = v50;
    v34 = &v42;
    v35 = <&T as core::fmt::Display>::fmt;
    v36 = &v38;
    v37 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v40.m256i_i64[0] = (__int64)&anon_aee8d0926622a1c6e97588a73d77e694_4_llvm_9973493521462227259;
    v40.m256i_i64[1] = 2LL;
    v41 = 0LL;
    v40.m256i_i64[2] = (__int64)&v34;
    v40.m256i_i64[3] = 2LL;
    core::panicking::panic_fmt(&v40, &anon_aee8d0926622a1c6e97588a73d77e694_6_llvm_9973493521462227259);
  }
  v3 = (__int64 (__fastcall *)(__int64))v50.m256i_i64[0];
  if ( v50.m256i_i64[0] )
  {
    v45 = a2;
    v4 = v50.m256i_i64[1];
    v5 = v50.m256i_i64[3];
    v6 = v50.m256i_i64[2];
    v7 = v51;
    v8 = v52;
    v48 = v53;
    if ( v50.m256i_i64[3] && (v9 = v50.m256i_i64[1], v50.m256i_i64[3] != v51) )
    {
LABEL_8:
      v11 = v5 + 32;
      v4 = v9;
      v12 = v52;
      v8 = v5;
    }
    else
    {
      while ( v4 && v4 != v50.m256i_i64[2] )
      {
        v9 = v4 + 24;
        v5 = *(_QWORD *)(v4 + 8);
        v10 = *(_QWORD *)(v4 + 16);
        v7 = v5 + 32 * v10;
        v4 += 24LL;
        if ( v10 )
          goto LABEL_8;
      }
      if ( !v52 || v52 == v53 )
        core::option::unwrap_failed(&off_101988);
      v12 = v52 + 32;
      v11 = 0LL;
    }
    v44 = &v40.m256i_i64[1];
    v21 = ((__int64 (__fastcall *)(__int64))v50.m256i_i64[0])(v8);
    if ( v11 && v11 != v7 )
      goto LABEL_29;
    while ( v4 )
    {
      v22 = v4;
      if ( v4 == v6 )
        break;
      v4 += 24LL;
      if ( *(_QWORD *)(v22 + 16) )
      {
        v11 = *(_QWORD *)(v22 + 8);
        goto LABEL_29;
      }
    }
    if ( v12 )
    {
      v11 = v12;
      if ( v12 != v48 )
      {
LABEL_29:
        v23 = *(_OWORD *)(v3(v11) + 8);
        v38.m256i_i64[0] = 0LL;
        *(_OWORD *)&v38.m256i_u64[1] = v23;
        v38.m256i_i8[24] = 1;
        v34 = (const char **)&v38;
        v35 = <os_display::Quoted as core::fmt::Display>::fmt;
        dest = &off_1019A0;
        v50.m256i_i64[0] = 1LL;
        v50.m256i_i64[1] = (__int64)&v34;
        *(_OWORD *)&v50.m256i_u64[2] = 1uLL;
        alloc::fmt::format::format_inner(&v40, &dest);
        v40.m256i_i32[6] = 1;
        v24 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v24 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v25 = *(_OWORD *)v40.m256i_i8;
        v24[1] = *(_OWORD *)&v40.m256i_u64[2];
        *v24 = v25;
        v26 = &off_1019E8;
        v19 = (_QWORD *)a1;
LABEL_31:
        v19[1] = v24;
        v19[2] = v26;
        *v19 = 2LL;
        return v19;
      }
    }
    v30 = *(_BYTE **)(v21 + 8);
    v31 = *(_QWORD *)(v21 + 16);
    if ( v31 == 1 && *v30 == 45 )
    {
      *(_QWORD *)&v46 = 0x8000000000000000LL;
      v2 = v45;
    }
    else
    {
      std::sys::pal::unix::fs::stat(&dest);
      v2 = v45;
      if ( dest == (char **)((char *)&dword_0 + 2) )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, v50.m256i_i64[0]);
        v38.m256i_i64[0] = 1LL;
        v38.m256i_i64[1] = (__int64)v30;
        v38.m256i_i64[2] = v31;
        v38.m256i_i8[24] = 0;
        v34 = (const char **)&v38;
        v35 = <os_display::Quoted as core::fmt::Display>::fmt;
        dest = (char **)&unk_101A58;
        v50.m256i_i64[0] = 2LL;
        v50.m256i_i64[1] = (__int64)&v34;
        *(_OWORD *)&v50.m256i_u64[2] = 1uLL;
        alloc::fmt::format::format_inner(&v40, &dest);
        v40.m256i_i32[6] = 1;
        v24 = (_OWORD *)_rust_alloc(32LL, 8LL);
        v19 = (_QWORD *)a1;
        if ( !v24 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v32 = *(_OWORD *)v40.m256i_i8;
        v24[1] = *(_OWORD *)&v40.m256i_u64[2];
        *v24 = v32;
        v26 = &off_101AB0;
        goto LABEL_31;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v50.m256i_i64[0]);
      std::path::Path::to_path_buf(&v46, v30, v31);
    }
  }
  else
  {
    *(_QWORD *)&v46 = 0x8000000000000000LL;
  }
  v13 = anon_aee8d0926622a1c6e97588a73d77e694_25_llvm_9973493521462227259;
  v14 = v2;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v38,
    v2,
    anon_aee8d0926622a1c6e97588a73d77e694_25_llvm_9973493521462227259,
    4LL);
  v42 = anon_aee8d0926622a1c6e97588a73d77e694_25_llvm_9973493521462227259;
  v43 = 4LL;
  if ( v38.m256i_i32[0] != 2 )
  {
    v41 = v39;
    v40 = v38;
    v34 = &v42;
    v35 = <&T as core::fmt::Display>::fmt;
    v36 = &v40;
    v37 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    dest = &anon_aee8d0926622a1c6e97588a73d77e694_4_llvm_9973493521462227259;
    v50.m256i_i64[0] = 2LL;
    v50.m256i_i64[1] = (__int64)&v34;
    *(_OWORD *)&v50.m256i_u64[2] = 2uLL;
    core::panicking::panic_fmt(&dest, &anon_aee8d0926622a1c6e97588a73d77e694_6_llvm_9973493521462227259);
  }
  if ( !v38.m256i_i64[1] )
  {
    v20 = 0LL;
LABEL_33:
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v14,
             anon_aee8d0926622a1c6e97588a73d77e694_24_llvm_9973493521462227259,
             6LL);
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v14,
            anon_aee8d0926622a1c6e97588a73d77e694_26_llvm_9973493521462227259,
            14LL);
    v19 = (_QWORD *)a1;
    *(_QWORD *)(a1 + 32) = v47;
    *(_OWORD *)(a1 + 16) = v46;
    *(_QWORD *)a1 = v20;
    *(_QWORD *)(a1 + 8) = v13;
    *(_BYTE *)(a1 + 40) = flag;
    *(_BYTE *)(a1 + 41) = v28;
    return v19;
  }
  v15 = *(_QWORD *)(v38.m256i_i64[1] + 8);
  v16 = *(_QWORD *)(v38.m256i_i64[1] + 16);
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v42, v15, v16);
  if ( !(_BYTE)v42 )
  {
    v13 = (const char *)v43;
    v20 = 1LL;
    goto LABEL_33;
  }
  v38.m256i_i64[0] = 0LL;
  v38.m256i_i64[1] = v15;
  v38.m256i_i64[2] = v16;
  v38.m256i_i8[24] = 1;
  v34 = (const char **)&v38;
  v35 = <os_display::Quoted as core::fmt::Display>::fmt;
  dest = &off_101B20;
  v50.m256i_i64[0] = 1LL;
  v50.m256i_i64[1] = (__int64)&v34;
  *(_OWORD *)&v50.m256i_u64[2] = 1uLL;
  alloc::fmt::format::format_inner(&v40, &dest);
  v40.m256i_i32[6] = 1;
  v17 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v17 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v18 = *(_OWORD *)v40.m256i_i8;
  v17[1] = *(_OWORD *)&v40.m256i_u64[2];
  *v17 = v18;
  v19 = (_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v17;
  *(_QWORD *)(a1 + 16) = &off_101AB0;
  *(_QWORD *)a1 = 2LL;
  if ( (_QWORD)v46 != 0x8000000000000000LL && (_QWORD)v46 )
    _rust_dealloc(*((_QWORD *)&v46 + 1), v46, 1LL);
  return v19;
}
