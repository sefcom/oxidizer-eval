__int64 __fastcall uu_df::blocks::read_block_size(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r14d
  __int64 (__fastcall *v12)(); // r14
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r12
  __int64 v16; // rdi
  char v17; // bp
  int v18; // r12d
  char **v20; // [rsp+0h] [rbp-128h] BYREF
  __int64 v21; // [rsp+8h] [rbp-120h]
  __int64 ***v22; // [rsp+10h] [rbp-118h]
  __int64 v23; // [rsp+18h] [rbp-110h]
  __int64 v24; // [rsp+20h] [rbp-108h]
  __int128 *v25; // [rsp+30h] [rbp-F8h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+38h] [rbp-F0h]
  __int64 v27; // [rsp+40h] [rbp-E8h]
  __int64 v28; // [rsp+48h] [rbp-E0h]
  __int64 *v29; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-D0h]
  __int128 v31; // [rsp+60h] [rbp-C8h]
  __int128 v32; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+80h] [rbp-A8h]
  __int64 v34; // [rsp+90h] [rbp-98h]
  __int128 v35; // [rsp+98h] [rbp-90h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-80h]
  __int64 v37; // [rsp+B8h] [rbp-70h]
  __int128 v38; // [rsp+C0h] [rbp-68h] BYREF
  __int64 **v39; // [rsp+D8h] [rbp-50h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+E0h] [rbp-48h] BYREF
  __int128 v41; // [rsp+E8h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 16);
  if ( !v3 )
  {
LABEL_11:
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            a2,
                            anon_5f995df778c88d2f993662794f843320_12_llvm_13646445757275454229,
                            11LL) )
    {
      std::env::_var(&v20, aPosixlyCorrect, 15LL);
      v11 = (int)v20;
      if ( (!v20 || v21 != 0x8000000000000000LL) && v21 )
        _rust_dealloc(v22, v21, 1LL);
      *(_QWORD *)(a1 + 8) = (unsigned int)(v11 << 9) + 512LL;
      goto LABEL_44;
    }
    std::env::_var(&v25, aDfBlockSize, 13LL);
    if ( v25 )
    {
      if ( v26 != (__int64 (__fastcall *)())0x8000000000000000LL && v26 )
        _rust_dealloc(v27, v26, 1LL);
      std::env::_var(&v25, aBlockSize_0, 10LL);
      if ( v25 )
      {
        if ( v26 != (__int64 (__fastcall *)())0x8000000000000000LL && v26 )
          _rust_dealloc(v27, v26, 1LL);
        std::env::_var(&v25, aBlocksize, 9LL);
        if ( v25 )
        {
          if ( v26 != (__int64 (__fastcall *)())0x8000000000000000LL && v26 )
            _rust_dealloc(v27, v26, 1LL);
          goto LABEL_38;
        }
      }
    }
    v12 = v26;
    v13 = v27;
    v14 = v28;
    LOWORD(v34) = 0;
    BYTE2(v34) = 0;
    *(_QWORD *)&v32 = 0LL;
    *(_QWORD *)&v33 = 0LL;
    uucore::parser::parse_size::Parser::parse(&v29, &v32, v27, v28);
    if ( (_DWORD)v29 == 3 )
    {
      if ( !*((_QWORD *)&v31 + 1) )
      {
        v15 = v31;
        v17 = 1;
        if ( !v12 )
        {
LABEL_37:
          if ( v17 )
          {
LABEL_43:
            *(_QWORD *)(a1 + 8) = v15;
            goto LABEL_44;
          }
LABEL_38:
          std::env::_var(&v20, aPosixlyCorrect, 15LL);
          v18 = (int)v20;
          if ( (!v20 || v21 != 0x8000000000000000LL) && v21 )
            _rust_dealloc(v22, v21, 1LL);
          v15 = (unsigned int)(v18 << 9) + 512LL;
          goto LABEL_43;
        }
LABEL_36:
        _rust_dealloc(v13, v12, 1LL);
        goto LABEL_37;
      }
      *(_QWORD *)&v35 = 0LL;
      *((_QWORD *)&v35 + 1) = v13;
      *(_QWORD *)&v36 = v14;
      BYTE8(v36) = 1;
      *(_QWORD *)&v38 = &v35;
      *((_QWORD *)&v38 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v20 = (char **)&anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
      v21 = 2LL;
      v24 = 0LL;
      v22 = (__int64 ***)&v38;
      v23 = 1LL;
      alloc::fmt::format::format_inner(&v40, &v20);
      v15 = (__int64)v40;
      v16 = v41;
      if ( !v40 )
      {
LABEL_32:
        v17 = 0;
        v15 = 0LL;
        if ( !v12 )
          goto LABEL_37;
        goto LABEL_36;
      }
    }
    else
    {
      v15 = v30;
      v16 = v31;
      if ( !v30 )
        goto LABEL_32;
    }
    _rust_dealloc(v16, v15, 1LL);
    v17 = 0;
    if ( !v12 )
      goto LABEL_37;
    goto LABEL_36;
  }
  v4 = *(_QWORD *)(a2 + 8);
  v5 = 16 * v3;
  v6 = 0LL;
  while ( *(_QWORD *)(v4 + v6 + 8) != 9LL
       || anon_5f995df778c88d2f993662794f843320_2_llvm_13646445757275454229 ^ **(_QWORD **)(v4 + v6) | *(_BYTE *)(*(_QWORD *)(v4 + v6) + 8LL) ^ 0x65u )
  {
    v6 += 16LL;
    if ( v5 == v6 )
      goto LABEL_11;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v35,
    a2,
    &anon_5f995df778c88d2f993662794f843320_2_llvm_13646445757275454229,
    9LL);
  v29 = &anon_5f995df778c88d2f993662794f843320_2_llvm_13646445757275454229;
  v30 = 9LL;
  if ( (_DWORD)v35 != 2 )
  {
    v34 = v37;
    v33 = v36;
    v32 = v35;
    v39 = &v29;
    v40 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v41 = &v32;
    *((_QWORD *)&v41 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v20 = &anon_37e8404f29ea422d3c165b81a7597284_5_llvm_3498370989897006048;
    v21 = 2LL;
    v24 = 0LL;
    v22 = &v39;
    v23 = 2LL;
    core::panicking::panic_fmt(&v20, &anon_37e8404f29ea422d3c165b81a7597284_7_llvm_3498370989897006048);
  }
  if ( !*((_QWORD *)&v35 + 1) )
    core::option::unwrap_failed(&off_100400);
  v7 = *(_QWORD *)(*((_QWORD *)&v35 + 1) + 8LL);
  v8 = *(_QWORD *)(*((_QWORD *)&v35 + 1) + 16LL);
  LOWORD(v34) = 0;
  BYTE2(v34) = 0;
  *(_QWORD *)&v32 = 0LL;
  *(_QWORD *)&v33 = 0LL;
  uucore::parser::parse_size::Parser::parse(&v29, &v32, v7, v8);
  v9 = (__int64)v29;
  if ( v29 != (__int64 *)((char *)&dword_0 + 3) )
  {
    v10 = v30;
    v38 = v31;
    goto LABEL_47;
  }
  if ( *((_QWORD *)&v31 + 1) )
  {
    *(_QWORD *)&v35 = 0LL;
    *((_QWORD *)&v35 + 1) = v7;
    *(_QWORD *)&v36 = v8;
    BYTE8(v36) = 1;
    v25 = &v35;
    v26 = <os_display::Quoted as core::fmt::Display>::fmt;
    v20 = (char **)&anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
    v21 = 2LL;
    v24 = 0LL;
    v22 = (__int64 ***)&v25;
    v23 = 1LL;
    alloc::fmt::format::format_inner(&v40, &v20);
    v10 = (__int64)v40;
    v38 = v41;
    v9 = 2LL;
LABEL_47:
    *(_OWORD *)(a1 + 16) = v38;
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v10;
    return a1;
  }
  if ( !(_QWORD)v31 )
  {
    *(_QWORD *)&v32 = 0LL;
    *((_QWORD *)&v32 + 1) = v7;
    *(_QWORD *)&v33 = v8;
    BYTE8(v33) = 1;
    *(_QWORD *)&v35 = &v32;
    *((_QWORD *)&v35 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v20 = (char **)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
    v21 = 1LL;
    v24 = 0LL;
    v22 = (__int64 ***)&v35;
    v23 = 1LL;
    alloc::fmt::format::format_inner(a1 + 8, &v20);
    *(_QWORD *)a1 = 1LL;
    return a1;
  }
  *(_QWORD *)(a1 + 8) = v31;
LABEL_44:
  *(_QWORD *)a1 = 3LL;
  return a1;
}
