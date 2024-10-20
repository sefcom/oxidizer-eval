__int64 __fastcall uu_mktemp::Options::from(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  const void *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rax
  char *v9; // rdi
  __int64 v10; // r14
  void *v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // r12
  char v19; // bl
  const char *v20; // r14
  char v21; // al
  unsigned __int64 v23; // [rsp+0h] [rbp-138h]
  char v24; // [rsp+8h] [rbp-130h]
  char flag; // [rsp+Fh] [rbp-129h]
  size_t n; // [rsp+10h] [rbp-128h]
  char **v27; // [rsp+18h] [rbp-120h] BYREF
  __int64 v28; // [rsp+20h] [rbp-118h]
  const char ***v29; // [rsp+28h] [rbp-110h]
  __int64 v30; // [rsp+30h] [rbp-108h]
  __int64 v31; // [rsp+38h] [rbp-100h]
  size_t v32; // [rsp+48h] [rbp-F0h]
  const char *v33; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-E0h]
  char *v35; // [rsp+60h] [rbp-D8h]
  __int64 v36; // [rsp+68h] [rbp-D0h]
  unsigned __int64 v37; // [rsp+70h] [rbp-C8h]
  const char **v38; // [rsp+78h] [rbp-C0h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+80h] [rbp-B8h]
  __int128 *v40; // [rsp+88h] [rbp-B0h]
  __int64 (__fastcall *v41)(); // [rsp+90h] [rbp-A8h]
  __int128 v42; // [rsp+98h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-90h]
  __int64 v44; // [rsp+B8h] [rbp-80h]
  __int64 v45; // [rsp+C0h] [rbp-78h]
  __int64 v46; // [rsp+C8h] [rbp-70h]
  __int128 v47; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v48; // [rsp+E0h] [rbp-58h]
  __int64 v49; // [rsp+F0h] [rbp-48h]
  __int64 v50; // [rsp+100h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, a2, aTmpdir, 6LL);
  v33 = aTmpdir;
  v34 = 6LL;
  if ( (_DWORD)v42 != 2 )
    goto LABEL_47;
  v37 = 0x8000000000000000LL;
  v4 = *((_QWORD *)&v42 + 1);
  if ( *((_QWORD *)&v42 + 1) )
    goto LABEL_5;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, a2, aP, 1LL);
  v33 = aP;
  v34 = 1LL;
  if ( (_DWORD)v42 != 2 )
  {
LABEL_47:
    v49 = v44;
    v48 = v43;
    v47 = v42;
    v38 = &v33;
    v39 = <&T as core::fmt::Display>::fmt;
    v40 = &v47;
    v41 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v27 = &anon_08ab9350983c8f7cbc8ec591dd15aaf2_4_llvm_3973582617909744789;
    v28 = 2LL;
    v31 = 0LL;
    v29 = &v38;
    v30 = 2LL;
    core::panicking::panic_fmt(&v27, &anon_08ab9350983c8f7cbc8ec591dd15aaf2_6_llvm_3973582617909744789);
  }
  v4 = *((_QWORD *)&v42 + 1);
  if ( *((_QWORD *)&v42 + 1) )
  {
LABEL_5:
    v5 = *(const void **)(v4 + 8);
    v6 = *(_QWORD *)(v4 + 16);
    n = v6;
    if ( v6 )
    {
      if ( v6 < 0 )
      {
        v7 = 0LL;
      }
      else
      {
        v7 = 1LL;
        v8 = _rust_alloc(v6, 1LL);
        if ( v8 )
        {
          v9 = (char *)v8;
LABEL_10:
          v35 = v9;
          memcpy(v9, v5, n);
          goto LABEL_11;
        }
      }
      alloc::raw_vec::handle_error(v7, n);
    }
    v9 = (char *)&dword_0 + 1;
    goto LABEL_10;
  }
  n = 0x8000000000000000LL;
LABEL_11:
  LOBYTE(v2) = 1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, a2, &unk_11E40, 8LL);
  v33 = (const char *)&unk_11E40;
  v34 = 8LL;
  if ( (_DWORD)v42 != 2 )
  {
    v49 = v44;
    v48 = v43;
    v47 = v42;
    v38 = &v33;
    v39 = <&T as core::fmt::Display>::fmt;
    v40 = &v47;
    v41 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v27 = &anon_08ab9350983c8f7cbc8ec591dd15aaf2_4_llvm_3973582617909744789;
    v28 = 2LL;
    v31 = 0LL;
    v29 = &v38;
    v30 = 2LL;
    core::panicking::panic_fmt(&v27, &anon_08ab9350983c8f7cbc8ec591dd15aaf2_6_llvm_3973582617909744789);
  }
  v10 = *((_QWORD *)&v42 + 1);
  if ( *((_QWORD *)&v42 + 1) )
  {
    std::env::_var(&v27, aTmpdir_0, 6LL);
    if ( v27 )
    {
      if ( v28 != 0x8000000000000000LL && v28 )
        _rust_dealloc(v29, v28, 1LL);
    }
    else
    {
      if ( v28 )
        _rust_dealloc(v29, v28, 1LL);
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aT, 1LL) )
      {
        std::env::_var_os(&v27, aTmpdir_0, 6LL);
LABEL_28:
        v23 = (unsigned __int64)v27;
        v2 = v28;
        v32 = (size_t)v29;
        v24 = 1;
LABEL_39:
        <alloc::string::String as core::clone::Clone>::clone(&v27, v10);
        v36 = (__int64)v27;
        v46 = v28;
        v12 = (__int64)v29;
        goto LABEL_40;
      }
    }
    v13 = n;
    if ( n == 0x8000000000000000LL )
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aT, 1LL) )
      {
LABEL_27:
        std::env::temp_dir(&v27);
        goto LABEL_28;
      }
      v14 = *(_QWORD *)(a2 + 16);
      v24 = 1;
      if ( v14 )
      {
        v15 = *(_QWORD *)(a2 + 8);
        v16 = 16 * v14;
        v17 = 0LL;
        while ( *(_QWORD *)(v15 + v17 + 8) != 6LL
             || **(_DWORD **)(v15 + v17) ^ 0x64706D74 | *(unsigned __int16 *)(*(_QWORD *)(v15 + v17) + 4LL) ^ 0x7269 )
        {
          v17 += 16LL;
          if ( v16 == v17 )
            goto LABEL_37;
        }
        goto LABEL_27;
      }
LABEL_37:
      v13 = 0x8000000000000000LL;
    }
    else
    {
      v24 = 0;
      v2 = (__int64)v35;
      v32 = n;
    }
    v23 = v13;
    goto LABEL_39;
  }
  v32 = n;
  v2 = (__int64)v35;
  v23 = n;
  if ( n == 0x8000000000000000LL )
  {
    std::env::temp_dir(&v27);
    v23 = (unsigned __int64)v27;
    v2 = v28;
    v32 = (size_t)v29;
  }
  v36 = 14LL;
  v11 = (void *)_rust_alloc(14LL, 1LL);
  if ( !v11 )
    alloc::raw_vec::handle_error(1LL, 14LL);
  v46 = (__int64)v11;
  qmemcpy(v11, "tmp.XXXXXXXXXX", 14);
  v24 = 0;
  v12 = 14LL;
LABEL_40:
  v50 = v12;
  v45 = v2;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDirectory, 9LL);
  v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDryRun, 7LL);
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL);
  v20 = aSuffix;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, a2, aSuffix, 6LL);
  v33 = aSuffix;
  v34 = 6LL;
  if ( (_DWORD)v42 != 2 )
  {
    v49 = v44;
    v48 = v43;
    v47 = v42;
    v38 = &v33;
    v39 = <&T as core::fmt::Display>::fmt;
    v40 = &v47;
    v41 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v27 = &anon_08ab9350983c8f7cbc8ec591dd15aaf2_4_llvm_3973582617909744789;
    v28 = 2LL;
    v31 = 0LL;
    v29 = &v38;
    v30 = 2LL;
    core::panicking::panic_fmt(&v27, &anon_08ab9350983c8f7cbc8ec591dd15aaf2_6_llvm_3973582617909744789);
  }
  if ( *((_QWORD *)&v42 + 1) )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v27, *((_QWORD *)&v42 + 1));
    v37 = (unsigned __int64)v27;
    v20 = (const char *)v28;
    v2 = (__int64)v29;
  }
  v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aT, 1LL);
  *(_QWORD *)a1 = v36;
  *(_QWORD *)(a1 + 8) = v46;
  *(_QWORD *)(a1 + 16) = v50;
  *(_BYTE *)(a1 + 72) = flag;
  *(_BYTE *)(a1 + 73) = v18;
  *(_BYTE *)(a1 + 74) = v19;
  *(_QWORD *)(a1 + 24) = v23;
  *(_QWORD *)(a1 + 32) = v45;
  *(_QWORD *)(a1 + 40) = v32;
  *(_QWORD *)(a1 + 48) = v37;
  *(_QWORD *)(a1 + 56) = v20;
  *(_QWORD *)(a1 + 64) = v2;
  *(_BYTE *)(a1 + 75) = v21;
  if ( v24 && 2 * n )
    _rust_dealloc(v35, n, 1LL);
  return a1;
}
