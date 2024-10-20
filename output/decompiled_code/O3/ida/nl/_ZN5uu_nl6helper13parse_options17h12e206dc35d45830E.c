__int64 __fastcall uu_nl::helper::parse_options(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  char v11; // al
  __int64 v12; // r13
  __int64 v13; // r12
  _QWORD *v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r13
  _QWORD *v19; // r12
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r13
  __int64 v24; // r12
  _QWORD *v25; // r14
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r13
  _OWORD *v30; // rax
  _OWORD *v31; // r12
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rcx
  _OWORD *v35; // rax
  _OWORD *v36; // r12
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  const char *v41; // [rsp+0h] [rbp-138h] BYREF
  __int64 v42; // [rsp+8h] [rbp-130h]
  _QWORD v43[4]; // [rsp+10h] [rbp-128h] BYREF
  _OWORD v44[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v45; // [rsp+50h] [rbp-E8h]
  __int128 v46; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-D0h]
  _OWORD v48[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+90h] [rbp-A8h]
  __int128 v50; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD *v51; // [rsp+B0h] [rbp-88h]
  __int64 v52; // [rsp+B8h] [rbp-80h]
  __int64 v53; // [rsp+C0h] [rbp-78h]
  __int64 v54; // [rsp+D8h] [rbp-60h]
  __int64 v55; // [rsp+E0h] [rbp-58h]
  __int64 v56; // [rsp+E8h] [rbp-50h] BYREF
  __int128 v57; // [rsp+F0h] [rbp-48h] BYREF
  _QWORD *v58; // [rsp+100h] [rbp-38h]

  v5 = a1;
  *(_QWORD *)&v46 = 0LL;
  *((_QWORD *)&v46 + 1) = 8LL;
  v47 = 0LL;
  *(_BYTE *)(a2 + 128) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a3, aNoRenumber_0, 11LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v44, a3, &unk_66D3F, 17LL);
  v41 = (const char *)&unk_66D3F;
  v42 = 17LL;
  if ( LODWORD(v44[0]) != 2 )
    goto LABEL_63;
  if ( *((_QWORD *)&v44[0] + 1) )
  {
    v56 = *((_QWORD *)&v44[0] + 1);
    if ( *(_QWORD *)(*((_QWORD *)&v44[0] + 1) + 16LL) == 1LL )
    {
      *(_QWORD *)&v48[0] = &v56;
      *((_QWORD *)&v48[0] + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v50 = &unk_26EBE8;
      *((_QWORD *)&v50 + 1) = 2LL;
      v53 = 0LL;
      v51 = v48;
      v52 = 1LL;
      alloc::fmt::format::format_inner(&v57, &v50, v6, v7, v8, v9);
      v50 = v57;
      v51 = v58;
    }
    else
    {
      <alloc::string::String as core::clone::Clone>::clone(&v50);
    }
    v10 = *(_QWORD *)(a2 + 48);
    if ( v10 )
      _rust_dealloc(*(_QWORD *)(a2 + 56), v10, 1LL);
    *(_QWORD *)(a2 + 64) = v51;
    *(_OWORD *)(a2 + 48) = v50;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v44, a3, aNumberSeparato, 16LL);
  v41 = aNumberSeparato;
  v42 = 16LL;
  if ( LODWORD(v44[0]) != 2 )
    goto LABEL_63;
  if ( *((_QWORD *)&v44[0] + 1) )
    <alloc::string::String as core::clone::Clone>::clone_from(a2 + 72);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v44, a3, &unk_66D51, 13LL);
  v41 = (const char *)&unk_66D51;
  v42 = 13LL;
  if ( LODWORD(v44[0]) != 2 )
    goto LABEL_63;
  if ( !*((_QWORD *)&v44[0] + 1)
    || (v11 = <uu_nl::NumberFormat as core::convert::From<T>>::from(*((_QWORD *)&v44[0] + 1), a3), v11 == 3) )
  {
    v11 = 1;
  }
  *(_BYTE *)(a2 + 129) = v11;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v44, a3, aHeaderNumberin, 16LL);
  v41 = aHeaderNumberin;
  v42 = 16LL;
  if ( LODWORD(v44[0]) != 2 )
    goto LABEL_63;
  if ( *((_QWORD *)&v44[0] + 1) )
  {
    <uu_nl::NumberingStyle as core::convert::TryFrom<&str>>::try_from(
      &v50,
      *(_QWORD *)(*((_QWORD *)&v44[0] + 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)&v44[0] + 1) + 16LL));
    v12 = v50;
    if ( (_QWORD)v50 != 0x8000000000000001LL )
    {
      v13 = *((_QWORD *)&v50 + 1);
      v14 = v51;
      if ( (_QWORD)v50 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<uu_nl::NumberingStyle>(*(_QWORD *)a2, *(_QWORD *)(a2 + 8));
        *(_QWORD *)a2 = v13;
        *(_QWORD *)(a2 + 8) = v14;
      }
      else
      {
        v54 = a1;
        v15 = v47;
        if ( v47 == (_QWORD)v46 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v46);
        v16 = *((_QWORD *)&v46 + 1);
        v17 = 3 * v15;
        *(_QWORD *)(*((_QWORD *)&v46 + 1) + 8 * v17) = v12;
        *(_QWORD *)(v16 + 8 * v17 + 8) = v13;
        *(_QWORD *)(v16 + 8 * v17 + 16) = v14;
        v47 = v15 + 1;
        v5 = v54;
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v44, a3, &unk_66D5E, 14LL);
  v41 = (const char *)&unk_66D5E;
  v42 = 14LL;
  if ( LODWORD(v44[0]) != 2 )
    goto LABEL_63;
  if ( *((_QWORD *)&v44[0] + 1) )
  {
    <uu_nl::NumberingStyle as core::convert::TryFrom<&str>>::try_from(
      &v50,
      *(_QWORD *)(*((_QWORD *)&v44[0] + 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)&v44[0] + 1) + 16LL));
    v18 = v50;
    if ( (_QWORD)v50 != 0x8000000000000001LL )
    {
      v55 = *((_QWORD *)&v50 + 1);
      v19 = v51;
      if ( (_QWORD)v50 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<uu_nl::NumberingStyle>(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
        *(_QWORD *)(a2 + 16) = v55;
        *(_QWORD *)(a2 + 24) = v19;
      }
      else
      {
        v54 = v5;
        v20 = v47;
        if ( v47 == (_QWORD)v46 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v46);
        v21 = *((_QWORD *)&v46 + 1);
        v22 = 3 * v20;
        *(_QWORD *)(*((_QWORD *)&v46 + 1) + 8 * v22) = v18;
        *(_QWORD *)(v21 + 8 * v22 + 8) = v55;
        *(_QWORD *)(v21 + 8 * v22 + 16) = v19;
        v47 = v20 + 1;
        v5 = v54;
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v44, a3, aFooterNumberin, 16LL);
  v41 = aFooterNumberin;
  v42 = 16LL;
  if ( LODWORD(v44[0]) != 2 )
    goto LABEL_63;
  if ( *((_QWORD *)&v44[0] + 1) )
  {
    <uu_nl::NumberingStyle as core::convert::TryFrom<&str>>::try_from(
      &v50,
      *(_QWORD *)(*((_QWORD *)&v44[0] + 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)&v44[0] + 1) + 16LL));
    v23 = v50;
    if ( (_QWORD)v50 != 0x8000000000000001LL )
    {
      v24 = *((_QWORD *)&v50 + 1);
      v25 = v51;
      if ( (_QWORD)v50 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<uu_nl::NumberingStyle>(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        *(_QWORD *)(a2 + 32) = v24;
        *(_QWORD *)(a2 + 40) = v25;
      }
      else
      {
        v54 = v5;
        v26 = v47;
        if ( v47 == (_QWORD)v46 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v46);
        v27 = *((_QWORD *)&v46 + 1);
        v28 = 3 * v26;
        *(_QWORD *)(*((_QWORD *)&v46 + 1) + 8 * v28) = v23;
        *(_QWORD *)(v27 + 8 * v28 + 8) = v24;
        *(_QWORD *)(v27 + 8 * v28 + 16) = v25;
        v47 = v26 + 1;
        v5 = v54;
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v44, a3, &unk_66D6C, 12LL);
  v41 = (const char *)&unk_66D6C;
  v42 = 12LL;
  if ( LODWORD(v44[0]) != 2 )
  {
LABEL_63:
    v49 = v45;
    v48[1] = v44[1];
    v48[0] = v44[0];
    v43[0] = &v41;
    v43[1] = <&T as core::fmt::Display>::fmt;
    v43[2] = v48;
    v43[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v50 = &anon_682c05e6f91a003af03c053bf38bd243_5_llvm_12071188684995818347;
    *((_QWORD *)&v50 + 1) = 2LL;
    v53 = 0LL;
    v51 = v43;
    v52 = 2LL;
    ((void (__fastcall __noreturn *)(__int128 *, char **, __int64, __int64, __int64, __int64, const char *, __int64))core::panicking::panic_fmt)(
      &v50,
      &anon_682c05e6f91a003af03c053bf38bd243_7_llvm_12071188684995818347,
      v6,
      v7,
      v8,
      v9,
      v41,
      v42);
  }
  if ( *((_QWORD *)&v44[0] + 1) )
  {
    if ( **((_QWORD **)&v44[0] + 1) )
    {
      *(_QWORD *)(a2 + 120) = **((_QWORD **)&v44[0] + 1);
    }
    else
    {
      v29 = 71LL;
      v30 = (_OWORD *)_rust_alloc(71LL, 1LL);
      if ( !v30 )
        goto LABEL_64;
      v31 = v30;
      qmemcpy(v30 + 3, "cal result out of range", 23);
      v30[2] = xmmword_66D98;
      qmemcpy(v30, "Invalid line number field width:", 32);
      v32 = v47;
      if ( v47 == (_QWORD)v46 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v46);
      v33 = *((_QWORD *)&v46 + 1);
      v34 = 3 * v32;
      *(_QWORD *)(*((_QWORD *)&v46 + 1) + 8 * v34) = 71LL;
      *(_QWORD *)(v33 + 8 * v34 + 8) = v31;
      *(_QWORD *)(v33 + 8 * v34 + 16) = 71LL;
      v47 = v32 + 1;
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v44, a3, aJoinBlankLines, 16LL);
  v41 = aJoinBlankLines;
  v42 = 16LL;
  if ( LODWORD(v44[0]) != 2 )
    goto LABEL_63;
  if ( *((_QWORD *)&v44[0] + 1) )
  {
    if ( **((_QWORD **)&v44[0] + 1) )
    {
      *(_QWORD *)(a2 + 112) = **((_QWORD **)&v44[0] + 1);
      goto LABEL_56;
    }
    v29 = 74LL;
    v35 = (_OWORD *)_rust_alloc(74LL, 1LL);
    if ( v35 )
    {
      v36 = v35;
      qmemcpy(v35 + 3, "erical result out of range", 26);
      v35[2] = xmmword_66DDF;
      qmemcpy(v35, "Invalid line number of blank lin", 32);
      v37 = v47;
      if ( v47 == (_QWORD)v46 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v46);
      v38 = *((_QWORD *)&v46 + 1);
      v39 = 3 * v37;
      *(_QWORD *)(*((_QWORD *)&v46 + 1) + 8 * v39) = 74LL;
      *(_QWORD *)(v38 + 8 * v39 + 8) = v36;
      *(_QWORD *)(v38 + 8 * v39 + 16) = 74LL;
      v47 = v37 + 1;
      goto LABEL_56;
    }
LABEL_64:
    alloc::raw_vec::handle_error(1LL, v29);
  }
LABEL_56:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v44, a3, &unk_66E09, 14LL);
  v41 = (const char *)&unk_66E09;
  v42 = 14LL;
  if ( LODWORD(v44[0]) != 2 )
    goto LABEL_63;
  if ( *((_QWORD *)&v44[0] + 1) )
    *(_QWORD *)(a2 + 104) = **((_QWORD **)&v44[0] + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v44, a3, &unk_66E17, 20LL);
  v41 = (const char *)&unk_66E17;
  v42 = 20LL;
  if ( LODWORD(v44[0]) != 2 )
    goto LABEL_63;
  if ( *((_QWORD *)&v44[0] + 1) )
    *(_QWORD *)(a2 + 96) = **((_QWORD **)&v44[0] + 1);
  *(_QWORD *)(v5 + 16) = v47;
  *(_OWORD *)v5 = v46;
  return v5;
}
