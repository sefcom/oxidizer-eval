__int64 __fastcall uu_head::HeadOptions::get_from(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  bool v3; // zf
  char v4; // al
  __int64 v5; // r12
  unsigned __int8 v6; // bp
  char **v7; // rbx
  int v8; // r13d
  unsigned int v9; // r14d
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  char **v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  _BYTE *v16; // r13
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  unsigned __int64 v19; // rax
  char **v21; // rsi
  const char **v22; // [rsp+8h] [rbp-1F0h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+10h] [rbp-1E8h]
  __int128 *v24; // [rsp+18h] [rbp-1E0h]
  __int64 (__fastcall *v25)(); // [rsp+20h] [rbp-1D8h]
  __int64 v26; // [rsp+28h] [rbp-1D0h]
  char **v27; // [rsp+30h] [rbp-1C8h] BYREF
  _BYTE v28[64]; // [rsp+38h] [rbp-1C0h]
  __int64 v29; // [rsp+78h] [rbp-180h]
  __int128 v30; // [rsp+80h] [rbp-178h] BYREF
  __int128 v31; // [rsp+90h] [rbp-168h]
  __int128 v32; // [rsp+A0h] [rbp-158h]
  __int128 v33; // [rsp+B0h] [rbp-148h]
  __int128 v34; // [rsp+C8h] [rbp-130h]
  __int128 v35; // [rsp+D8h] [rbp-120h] BYREF
  __int128 v36; // [rsp+E8h] [rbp-110h]
  char **v37; // [rsp+F8h] [rbp-100h] BYREF
  __int64 v38; // [rsp+100h] [rbp-F8h]
  const char ***v39; // [rsp+108h] [rbp-F0h]
  __int64 v40; // [rsp+110h] [rbp-E8h]
  __int64 v41; // [rsp+118h] [rbp-E0h]
  const char *v42; // [rsp+128h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+130h] [rbp-C8h]
  __int128 v44; // [rsp+138h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+148h] [rbp-B0h]
  __int128 v46; // [rsp+150h] [rbp-A8h] BYREF
  __int128 v47; // [rsp+160h] [rbp-98h]
  __int128 v48; // [rsp+170h] [rbp-88h] BYREF
  __int128 v49; // [rsp+180h] [rbp-78h]
  __int128 v50; // [rsp+190h] [rbp-68h]
  __int128 v51; // [rsp+1A0h] [rbp-58h]
  __int128 v52; // [rsp+1B0h] [rbp-48h]
  __int64 v53; // [rsp+1C0h] [rbp-38h]

  v2 = a1;
  WORD5(v36) = 2560;
  *(_QWORD *)&v34 = 0LL;
  *((_QWORD *)&v34 + 1) = 10LL;
  *(_QWORD *)&v35 = 0LL;
  *((_QWORD *)&v35 + 1) = 8LL;
  *(_QWORD *)&v36 = 0LL;
  BYTE8(v36) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL, &off_117B30);
  BYTE9(v36) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL, &off_117B48);
  v3 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZero, 4LL, &off_117B60) == 0;
  v4 = 10;
  if ( !v3 )
    v4 = 0;
  BYTE11(v36) = v4;
  BYTE10(v36) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPresumeInputPi, 19LL, &off_117B78);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, a2, aBytes_0, 5LL);
  v42 = aBytes_0;
  v43 = 5LL;
  if ( v27 )
  {
    v33 = *(_OWORD *)&v28[48];
    v32 = *(_OWORD *)&v28[32];
    v31 = *(_OWORD *)&v28[16];
    v30 = *(_OWORD *)v28;
    v22 = &v42;
    v23 = <&T as core::fmt::Display>::fmt;
    v24 = &v30;
    v25 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v37 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v21 = &off_117AE0;
    goto LABEL_40;
  }
  if ( *(_QWORD *)v28 )
  {
    if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) && *(__int64 *)(*(_QWORD *)v28 + 16LL) >= 0 )
    {
      uu_head::parse::parse_num(&v48);
      if ( (_QWORD)v48 == 3LL )
      {
        v5 = *((_QWORD *)&v48 + 1);
        v6 = v49 & 1;
LABEL_19:
        v11 = v5 & 0xFFFFFFFFFFFFFF00LL;
        v12 = v6 & 1 | 2LL;
        goto LABEL_26;
      }
      v26 = a1;
      v31 = v49;
      v30 = v48;
      v22 = (const char **)&v30;
      v23 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
      v27 = &anon_38af5ddcce3d505918a2f653e0346d55_35_llvm_27406000712401027;
      *(_QWORD *)v28 = 1LL;
      *(_QWORD *)&v28[8] = &v22;
      *(_QWORD *)&v28[16] = 1LL;
      *(_QWORD *)&v28[24] = 0LL;
      alloc::fmt::format::format_inner(&v37, &v27);
      v7 = v37;
      v5 = v38;
      v6 = (unsigned __int8)v39;
      v8 = HIBYTE(v39);
      v9 = *(unsigned __int16 *)((char *)&v39 + 5);
      v10 = *(unsigned int *)((char *)&v39 + 1);
      if ( *((_QWORD *)&v30 + 1) )
      {
        v29 = *(unsigned int *)((char *)&v39 + 1);
        _rust_dealloc(v31, *((_QWORD *)&v30 + 1), 1LL);
        v10 = v29;
      }
      if ( v7 == (char **)0x8000000000000000LL )
      {
        v2 = v26;
        goto LABEL_19;
      }
LABEL_34:
      v19 = ((((unsigned __int64)((v8 << 16) | v9) << 32) | v10) << 8) | v6;
      v2 = v26;
      *(_QWORD *)(v26 + 8) = v7;
      *(_QWORD *)(v2 + 16) = v5;
      *(_QWORD *)(v2 + 24) = v19;
      *(_QWORD *)v2 = 4LL;
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v35);
      return v2;
    }
LABEL_37:
    core::panicking::panic_nounwind(anon_5c14c8e0fe94f958943f16684aa0fba9_15_llvm_16152083550558900114, 162LL);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, a2, aLines, 5LL);
  v42 = aLines;
  v43 = 5LL;
  if ( v27 )
  {
    v33 = *(_OWORD *)&v28[48];
    v32 = *(_OWORD *)&v28[32];
    v31 = *(_OWORD *)&v28[16];
    v30 = *(_OWORD *)v28;
    v22 = &v42;
    v23 = <&T as core::fmt::Display>::fmt;
    v24 = &v30;
    v25 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v37 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v21 = &off_117AF8;
LABEL_40:
    v38 = 2LL;
    v41 = 0LL;
    v39 = &v22;
    v40 = 2LL;
    core::panicking::panic_fmt(&v37, v21);
  }
  if ( *(_QWORD *)v28 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)v28 + 8LL) || *(__int64 *)(*(_QWORD *)v28 + 16LL) < 0 )
      goto LABEL_37;
    uu_head::parse::parse_num(&v46);
    if ( (_QWORD)v46 == 3LL )
    {
      v5 = *((_QWORD *)&v46 + 1);
      v6 = v47 & 1;
    }
    else
    {
      v26 = a1;
      v31 = v47;
      v30 = v46;
      v22 = (const char **)&v30;
      v23 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
      v27 = &anon_38af5ddcce3d505918a2f653e0346d55_37_llvm_27406000712401027;
      *(_QWORD *)v28 = 1LL;
      *(_QWORD *)&v28[8] = &v22;
      *(_QWORD *)&v28[16] = 1LL;
      *(_QWORD *)&v28[24] = 0LL;
      alloc::fmt::format::format_inner(&v37, &v27);
      v7 = v37;
      v5 = v38;
      v6 = (unsigned __int8)v39;
      v8 = HIBYTE(v39);
      v9 = *(unsigned __int16 *)((char *)&v39 + 5);
      v10 = *(unsigned int *)((char *)&v39 + 1);
      if ( *((_QWORD *)&v30 + 1) )
      {
        v29 = *(unsigned int *)((char *)&v39 + 1);
        _rust_dealloc(v31, *((_QWORD *)&v30 + 1), 1LL);
        v10 = v29;
      }
      if ( v7 != (char **)0x8000000000000000LL )
        goto LABEL_34;
      v2 = v26;
    }
    v11 = v5 & 0xFFFFFFFFFFFFFF00LL;
    v12 = v6 & 1;
  }
  else
  {
    LOBYTE(v5) = 10;
    v11 = 0LL;
    v12 = 0LL;
  }
LABEL_26:
  *(_QWORD *)&v34 = v12;
  *((_QWORD *)&v34 + 1) = v11 | (unsigned __int8)v5;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v27, a2, aFile, 4LL);
  *(_QWORD *)&v46 = aFile;
  *((_QWORD *)&v46 + 1) = 4LL;
  if ( v27 )
  {
    v33 = *(_OWORD *)&v28[48];
    v32 = *(_OWORD *)&v28[32];
    v31 = *(_OWORD *)&v28[16];
    v30 = *(_OWORD *)v28;
    v22 = (const char **)&v46;
    v23 = <&T as core::fmt::Display>::fmt;
    v24 = &v30;
    v25 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v37 = &anon_5c14c8e0fe94f958943f16684aa0fba9_4_llvm_16152083550558900114;
    v21 = &off_117B90;
    goto LABEL_40;
  }
  v13 = *(char ***)v28;
  v50 = *(_OWORD *)&v28[8];
  v51 = *(_OWORD *)&v28[24];
  v52 = *(_OWORD *)&v28[40];
  v53 = *(_QWORD *)&v28[56];
  if ( *(_QWORD *)v28 )
  {
    *(_QWORD *)&v28[48] = v53;
    *(_OWORD *)&v28[32] = v52;
    *(_OWORD *)&v28[16] = v51;
    *(_OWORD *)v28 = v50;
    v27 = v13;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v44, &v27);
  }
  else
  {
    v14 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
    if ( !v14 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v27, 1LL, 0LL);
    v15 = *(_QWORD *)v28;
    if ( v27 )
      alloc::raw_vec::handle_error(*(_QWORD *)v28, *(_QWORD *)&v28[8]);
    v16 = *(_BYTE **)&v28[8];
    core::intrinsics::copy_nonoverlapping::precondition_check(asc_1F7EF, *(_QWORD *)&v28[8], 1LL, 1LL, 1LL);
    *v16 = 45;
    if ( (v14 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v14, &off_117BA8);
    *(_QWORD *)v14 = v15;
    *(_QWORD *)(v14 + 8) = v16;
    *(_QWORD *)(v14 + 16) = 1LL;
    *(_QWORD *)&v44 = 1LL;
    *((_QWORD *)&v44 + 1) = v14;
    v45 = 1LL;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v35);
  *(_QWORD *)&v36 = v45;
  v35 = v44;
  v17 = v34;
  v18 = v44;
  *(_OWORD *)(v2 + 32) = v36;
  *(_OWORD *)(v2 + 16) = v18;
  *(_OWORD *)v2 = v17;
  return v2;
}
