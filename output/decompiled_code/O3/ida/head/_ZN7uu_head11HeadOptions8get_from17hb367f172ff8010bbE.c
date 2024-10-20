__int64 __fastcall uu_head::HeadOptions::get_from(__int64 a1, __int64 a2)
{
  bool v2; // zf
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // r14
  _BYTE *v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 *v23; // rdi
  const char *v24; // [rsp+0h] [rbp-178h] BYREF
  __int64 v25; // [rsp+8h] [rbp-170h]
  const char **v26; // [rsp+10h] [rbp-168h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+18h] [rbp-160h]
  __int128 *v28; // [rsp+20h] [rbp-158h]
  __int64 (__fastcall *v29)(); // [rsp+28h] [rbp-150h]
  __int128 v30; // [rsp+30h] [rbp-148h] BYREF
  __int128 v31; // [rsp+40h] [rbp-138h]
  __int64 v32; // [rsp+50h] [rbp-128h]
  __int128 v33; // [rsp+60h] [rbp-118h] BYREF
  __int128 v34; // [rsp+70h] [rbp-108h]
  __int128 v35; // [rsp+80h] [rbp-F8h]
  __int64 v36; // [rsp+90h] [rbp-E8h]
  _BYTE v37[48]; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v38; // [rsp+D0h] [rbp-A8h]
  __int64 v39; // [rsp+E0h] [rbp-98h]
  __int128 v40; // [rsp+E8h] [rbp-90h]
  __int128 v41; // [rsp+F8h] [rbp-80h]
  __int128 v42; // [rsp+108h] [rbp-70h]
  __int64 v43; // [rsp+118h] [rbp-60h] BYREF
  __int128 v44; // [rsp+120h] [rbp-58h]
  __int128 v45; // [rsp+130h] [rbp-48h]
  __int128 v46; // [rsp+140h] [rbp-38h]
  __int64 v47; // [rsp+150h] [rbp-28h]

  WORD5(v42) = 2560;
  *(_QWORD *)&v40 = 0LL;
  *((_QWORD *)&v40 + 1) = 10LL;
  *(_QWORD *)&v41 = 0LL;
  *((_QWORD *)&v41 + 1) = 8LL;
  *(_QWORD *)&v42 = 0LL;
  BYTE8(v42) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL);
  BYTE9(v42) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL);
  v2 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZero, 4LL) == 0;
  v3 = 10;
  if ( !v2 )
    v3 = 0;
  BYTE11(v42) = v3;
  BYTE10(v42) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPresumeInputPi, 19LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, a2, aBytes_0, 5LL);
  v24 = aBytes_0;
  v25 = 5LL;
  if ( (_DWORD)v30 != 2 )
    goto LABEL_26;
  if ( *((_QWORD *)&v30 + 1) )
  {
    uu_head::parse::parse_num(&v30, *(_QWORD *)(*((_QWORD *)&v30 + 1) + 8LL), *(_QWORD *)(*((_QWORD *)&v30 + 1) + 16LL));
    if ( (_DWORD)v30 == 3 )
    {
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&v30 + 1);
      *(_QWORD *)&v12 = 3LL - ((_BYTE)v31 == 0);
      goto LABEL_17;
    }
    v34 = v31;
    v33 = v30;
    *(_QWORD *)v37 = &off_EFD30;
    *(_QWORD *)&v37[8] = 1LL;
    *(_QWORD *)&v37[32] = 0LL;
    *(_QWORD *)&v37[16] = &v24;
    *(_QWORD *)&v37[24] = 1LL;
    ((void (__fastcall *)(const char ***, _BYTE *, __int64, __int64, __int64, __int64, __int128 *, __int64 (__fastcall *)()))alloc::fmt::format::format_inner)(
      &v26,
      v37,
      v8,
      v9,
      v10,
      v11,
      &v33,
      <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt);
    goto LABEL_14;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, a2, &unk_19D43, 5LL);
  v24 = (const char *)&unk_19D43;
  v25 = 5LL;
  if ( (_DWORD)v30 != 2 )
  {
LABEL_26:
    *(_QWORD *)&v35 = v32;
    v34 = v31;
    v33 = v30;
    v26 = &v24;
    v27 = <&T as core::fmt::Display>::fmt;
    v28 = &v33;
    v29 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v37 = &anon_6f6f3e37f16b8954b77919bc67cb5a82_4_llvm_1431650823985739752;
    v23 = (__int128 *)v37;
    goto LABEL_28;
  }
  if ( !*((_QWORD *)&v30 + 1) )
  {
    *((_QWORD *)&v12 + 1) = 10LL;
    *(_QWORD *)&v12 = 0LL;
    goto LABEL_17;
  }
  uu_head::parse::parse_num(&v30, *(_QWORD *)(*((_QWORD *)&v30 + 1) + 8LL), *(_QWORD *)(*((_QWORD *)&v30 + 1) + 16LL));
  if ( (_DWORD)v30 == 3 )
  {
    *((_QWORD *)&v12 + 1) = *((_QWORD *)&v30 + 1);
    *(_QWORD *)&v12 = (unsigned __int8)v31;
    goto LABEL_17;
  }
  v34 = v31;
  v33 = v30;
  *(_QWORD *)v37 = &off_EFD40;
  *(_QWORD *)&v37[8] = 1LL;
  *(_QWORD *)&v37[32] = 0LL;
  *(_QWORD *)&v37[16] = &v24;
  *(_QWORD *)&v37[24] = 1LL;
  ((void (__fastcall *)(const char ***, _BYTE *, __int64, __int64, __int64, __int64, __int128 *, __int64 (__fastcall *)()))alloc::fmt::format::format_inner)(
    &v26,
    v37,
    v13,
    v14,
    v15,
    v16,
    &v33,
    <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt);
LABEL_14:
  if ( *((_QWORD *)&v33 + 1) )
    _rust_dealloc(v34, *((_QWORD *)&v33 + 1), 1LL);
  *(_QWORD *)&v12 = v27;
  *((_QWORD *)&v12 + 1) = ((((unsigned __int64)((HIBYTE(v28) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v28 + 5)) << 32) | *(unsigned int *)((char *)&v28 + 1)) << 8) | (unsigned __int8)v28;
  if ( v26 != (const char **)0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = v26;
    *(_OWORD *)(a1 + 16) = v12;
    *(_QWORD *)a1 = 4LL;
    return a1;
  }
LABEL_17:
  v40 = v12;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v37, a2, aFile, 4LL);
  v24 = aFile;
  v25 = 4LL;
  if ( *(_QWORD *)v37 )
  {
    v5 = *(_QWORD *)&v37[40];
    v32 = *(_QWORD *)&v37[40];
    v31 = *(_OWORD *)&v37[24];
    v30 = *(_OWORD *)&v37[8];
    v26 = &v24;
    v27 = <&T as core::fmt::Display>::fmt;
    v28 = &v30;
    v29 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v33 = &anon_6f6f3e37f16b8954b77919bc67cb5a82_4_llvm_1431650823985739752;
    v23 = &v33;
LABEL_28:
    *((_QWORD *)v23 + 1) = 2LL;
    *((_QWORD *)v23 + 4) = 0LL;
    *((_QWORD *)v23 + 2) = &v26;
    *((_QWORD *)v23 + 3) = 2LL;
    core::panicking::panic_fmt(
      v23,
      &anon_6f6f3e37f16b8954b77919bc67cb5a82_6_llvm_1431650823985739752,
      v4,
      v5,
      v6,
      v7,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      *((_QWORD *)&v30 + 1),
      v31,
      *((_QWORD *)&v31 + 1),
      v32);
  }
  v33 = *(_OWORD *)&v37[16];
  v34 = *(_OWORD *)&v37[32];
  v35 = v38;
  v36 = v39;
  if ( *(_QWORD *)&v37[8] )
  {
    v43 = *(_QWORD *)&v37[8];
    v44 = v33;
    v45 = v34;
    v46 = v35;
    v47 = v36;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v37, &v43);
  }
  else
  {
    v17 = _rust_alloc(24LL, 8LL);
    if ( !v17 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v18 = (_QWORD *)v17;
    v19 = (_BYTE *)_rust_alloc(1LL, 1LL);
    if ( !v19 )
      alloc::raw_vec::handle_error(1LL, 1LL);
    *v19 = 45;
    *v18 = 1LL;
    v18[1] = v19;
    v18[2] = 1LL;
    *(_QWORD *)v37 = 1LL;
    *(_QWORD *)&v37[8] = v18;
    *(_QWORD *)&v37[16] = 1LL;
  }
  *(_QWORD *)&v42 = *(_QWORD *)&v37[16];
  v41 = *(_OWORD *)v37;
  v20 = v40;
  v21 = *(_OWORD *)v37;
  *(_OWORD *)(a1 + 32) = v42;
  *(_OWORD *)(a1 + 16) = v21;
  *(_OWORD *)a1 = v20;
  return a1;
}
