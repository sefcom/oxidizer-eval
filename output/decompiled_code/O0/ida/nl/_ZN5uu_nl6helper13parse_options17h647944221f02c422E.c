__int64 __fastcall uu_nl::helper::parse_options(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int64 v23; // r9
  __int64 v24; // r12
  _OWORD *v25; // r13
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int64 v30; // r9
  _OWORD *v31; // r13
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rcx
  __int128 v35; // xmm0
  char **v37; // rsi
  const char *v38; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v39; // [rsp+8h] [rbp-1F0h]
  const char **v40; // [rsp+10h] [rbp-1E8h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+18h] [rbp-1E0h]
  __int128 *v42; // [rsp+20h] [rbp-1D8h]
  __int64 (__fastcall *v43)(); // [rsp+28h] [rbp-1D0h]
  __int128 v44; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-1B8h]
  _BYTE v46[24]; // [rsp+48h] [rbp-1B0h] BYREF
  __int128 v47; // [rsp+60h] [rbp-198h]
  __int128 v48; // [rsp+70h] [rbp-188h]
  __int128 v49; // [rsp+80h] [rbp-178h]
  __int128 v50; // [rsp+90h] [rbp-168h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-158h]
  __int128 v52; // [rsp+B0h] [rbp-148h]
  __int128 v53; // [rsp+C0h] [rbp-138h]
  _QWORD v54[6]; // [rsp+D0h] [rbp-128h] BYREF
  __int128 v55; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v56; // [rsp+110h] [rbp-E8h]
  __int64 v57; // [rsp+120h] [rbp-D8h] BYREF
  __int128 v58; // [rsp+128h] [rbp-D0h]
  __int64 v59; // [rsp+138h] [rbp-C0h]
  __int128 v60; // [rsp+140h] [rbp-B8h]
  __int64 v61; // [rsp+150h] [rbp-A8h]
  __int128 v62; // [rsp+158h] [rbp-A0h]
  __int64 v63; // [rsp+168h] [rbp-90h]
  __int128 v64; // [rsp+170h] [rbp-88h]
  __int64 v65; // [rsp+180h] [rbp-78h]
  __int128 v66; // [rsp+188h] [rbp-70h]
  __int64 v67; // [rsp+198h] [rbp-60h]
  _QWORD v68[2]; // [rsp+1A0h] [rbp-58h] BYREF
  __int128 v69; // [rsp+1B0h] [rbp-48h] BYREF
  __int64 v70; // [rsp+1C0h] [rbp-38h]

  *(_QWORD *)&v44 = 0LL;
  *((_QWORD *)&v44 + 1) = 8LL;
  v45 = 0LL;
  *(_BYTE *)(a2 + 128) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           a3,
                           aNoRenumber,
                           11LL,
                           &off_299A10);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v46, a3, &unk_5E935, 17LL);
  v38 = (const char *)&unk_5E935;
  v39 = 17LL;
  if ( *(_QWORD *)v46 )
  {
    v53 = v49;
    v52 = v48;
    v51 = v47;
    v50 = *(_OWORD *)&v46[8];
    v40 = &v38;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = &v50;
    v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v54[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v37 = &off_299A28;
    goto LABEL_86;
  }
  if ( *(_QWORD *)&v46[8] )
  {
    v57 = *(_QWORD *)&v46[8];
    if ( *(_QWORD *)(*(_QWORD *)&v46[8] + 16LL) == 1LL )
    {
      v68[0] = &v57;
      v68[1] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v46 = &unk_299A40;
      *(_QWORD *)&v46[8] = 2LL;
      *(_QWORD *)&v46[16] = v68;
      v47 = 1uLL;
      alloc::fmt::format::format_inner(&v69, v46);
      v55 = v69;
      v56 = v70;
    }
    else
    {
      <alloc::string::String as core::clone::Clone>::clone(&v55);
    }
    alloc::raw_vec::RawVec<T,A>::current_memory(v46, a2 + 48);
    if ( *(_QWORD *)&v46[8] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        a2 + 64,
        *(_QWORD *)v46,
        *(_QWORD *)&v46[8],
        *(_QWORD *)&v46[16]);
    *(_QWORD *)(a2 + 64) = v56;
    *(_OWORD *)(a2 + 48) = v55;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v46, a3, aNumberSeparato, 16LL);
  v38 = aNumberSeparato;
  v39 = 16LL;
  if ( *(_QWORD *)v46 )
  {
    v53 = v49;
    v52 = v48;
    v51 = v47;
    v50 = *(_OWORD *)&v46[8];
    v40 = &v38;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = &v50;
    v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v54[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v37 = &off_299A60;
    goto LABEL_86;
  }
  if ( *(_QWORD *)&v46[8] )
    <alloc::string::String as core::clone::Clone>::clone_from(a2 + 72);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v46, a3, &unk_5E947, 13LL);
  v38 = (const char *)&unk_5E947;
  v39 = 13LL;
  if ( *(_QWORD *)v46 )
  {
    v53 = v49;
    v52 = v48;
    v51 = v47;
    v50 = *(_OWORD *)&v46[8];
    v40 = &v38;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = &v50;
    v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v54[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v37 = &off_299A78;
    goto LABEL_86;
  }
  if ( !*(_QWORD *)&v46[8]
    || (v4 = <uu_nl::NumberFormat as core::convert::From<T>>::from(*(_QWORD *)&v46[8], a3), v4 == 3) )
  {
    v4 = 1;
  }
  *(_BYTE *)(a2 + 129) = v4;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v46, a3, aHeaderNumberin, 16LL);
  v38 = aHeaderNumberin;
  v39 = 16LL;
  if ( *(_QWORD *)v46 )
  {
    v53 = v49;
    v52 = v48;
    v51 = v47;
    v50 = *(_OWORD *)&v46[8];
    v40 = &v38;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = &v50;
    v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v54[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v37 = &off_299A90;
    goto LABEL_86;
  }
  if ( *(_QWORD *)&v46[8] )
  {
    if ( !*(_QWORD *)(*(_QWORD *)&v46[8] + 8LL) || *(__int64 *)(*(_QWORD *)&v46[8] + 16LL) < 0 )
      goto LABEL_75;
    <uu_nl::NumberingStyle as core::convert::TryFrom<&str>>::try_from(v46);
    v5 = *(_QWORD *)&v46[8];
    v6 = *(_QWORD *)&v46[16];
    if ( *(_QWORD *)v46 == 0x8000000000000000LL )
    {
      if ( *(_QWORD *)a2 >= 3uLL )
      {
        core::ptr::drop_in_place<regex::regex::string::Regex>(*(_QWORD *)(a2 + 8));
        _rust_dealloc(*(_QWORD *)(a2 + 8), 32LL, 8LL);
      }
      *(_QWORD *)a2 = v5;
      *(_QWORD *)(a2 + 8) = v6;
    }
    else if ( *(_QWORD *)v46 != 0x8000000000000001LL )
    {
      v58 = *(_OWORD *)v46;
      v59 = *(_QWORD *)&v46[16];
      v7 = v45;
      if ( v45 == (_QWORD)v44 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v44);
      v8 = *((_QWORD *)&v44 + 1);
      v9 = 3 * v7;
      v10 = v58;
      *(_QWORD *)(*((_QWORD *)&v44 + 1) + 8 * v9 + 16) = v59;
      *(_OWORD *)(v8 + 8 * v9) = v10;
      v45 = v7 + 1;
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v46, a3, &unk_5E954, 14LL);
  v38 = (const char *)&unk_5E954;
  v39 = 14LL;
  if ( *(_QWORD *)v46 )
  {
    v53 = v49;
    v52 = v48;
    v51 = v47;
    v50 = *(_OWORD *)&v46[8];
    v40 = &v38;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = &v50;
    v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v54[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v37 = &off_299AA8;
    goto LABEL_86;
  }
  if ( *(_QWORD *)&v46[8] )
  {
    if ( !*(_QWORD *)(*(_QWORD *)&v46[8] + 8LL) || *(__int64 *)(*(_QWORD *)&v46[8] + 16LL) < 0 )
      goto LABEL_75;
    <uu_nl::NumberingStyle as core::convert::TryFrom<&str>>::try_from(v46);
    v11 = *(_QWORD *)&v46[8];
    v12 = *(_QWORD *)&v46[16];
    if ( *(_QWORD *)v46 == 0x8000000000000000LL )
    {
      if ( *(_QWORD *)(a2 + 16) >= 3uLL )
      {
        core::ptr::drop_in_place<regex::regex::string::Regex>(*(_QWORD *)(a2 + 24));
        _rust_dealloc(*(_QWORD *)(a2 + 24), 32LL, 8LL);
      }
      *(_QWORD *)(a2 + 16) = v11;
      *(_QWORD *)(a2 + 24) = v12;
    }
    else if ( *(_QWORD *)v46 != 0x8000000000000001LL )
    {
      v60 = *(_OWORD *)v46;
      v61 = *(_QWORD *)&v46[16];
      v13 = v45;
      if ( v45 == (_QWORD)v44 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v44);
      v14 = *((_QWORD *)&v44 + 1);
      v15 = 3 * v13;
      v16 = v60;
      *(_QWORD *)(*((_QWORD *)&v44 + 1) + 8 * v15 + 16) = v61;
      *(_OWORD *)(v14 + 8 * v15) = v16;
      v45 = v13 + 1;
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v46, a3, aFooterNumberin, 16LL);
  v38 = aFooterNumberin;
  v39 = 16LL;
  if ( *(_QWORD *)v46 )
  {
    v53 = v49;
    v52 = v48;
    v51 = v47;
    v50 = *(_OWORD *)&v46[8];
    v40 = &v38;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = &v50;
    v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v54[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v37 = &off_299AC0;
    goto LABEL_86;
  }
  if ( *(_QWORD *)&v46[8] )
  {
    if ( *(_QWORD *)(*(_QWORD *)&v46[8] + 8LL) && *(__int64 *)(*(_QWORD *)&v46[8] + 16LL) >= 0 )
    {
      <uu_nl::NumberingStyle as core::convert::TryFrom<&str>>::try_from(v46);
      v17 = *(_QWORD *)&v46[8];
      v18 = *(_QWORD *)&v46[16];
      if ( *(_QWORD *)v46 == 0x8000000000000000LL )
      {
        if ( *(_QWORD *)(a2 + 32) >= 3uLL )
        {
          core::ptr::drop_in_place<regex::regex::string::Regex>(*(_QWORD *)(a2 + 40));
          _rust_dealloc(*(_QWORD *)(a2 + 40), 32LL, 8LL);
        }
        *(_QWORD *)(a2 + 32) = v17;
        *(_QWORD *)(a2 + 40) = v18;
      }
      else if ( *(_QWORD *)v46 != 0x8000000000000001LL )
      {
        v62 = *(_OWORD *)v46;
        v63 = *(_QWORD *)&v46[16];
        v19 = v45;
        if ( v45 == (_QWORD)v44 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v44);
        v20 = *((_QWORD *)&v44 + 1);
        v21 = 3 * v19;
        v22 = v62;
        *(_QWORD *)(*((_QWORD *)&v44 + 1) + 8 * v21 + 16) = v63;
        *(_OWORD *)(v20 + 8 * v21) = v22;
        v45 = v19 + 1;
      }
      goto LABEL_52;
    }
LABEL_75:
    core::panicking::panic_nounwind(anon_f2fb85536fffd0a461a91483864f6ad6_36_llvm_13329461704207359836, 162LL);
  }
LABEL_52:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v46, a3, &unk_5E962, 12LL);
  v38 = (const char *)&unk_5E962;
  v39 = 12LL;
  if ( *(_QWORD *)v46 )
  {
    v53 = v49;
    v52 = v48;
    v51 = v47;
    v50 = *(_OWORD *)&v46[8];
    v40 = &v38;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = &v50;
    v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v54[0] = &anon_f2fb85536fffd0a461a91483864f6ad6_6_llvm_13329461704207359836;
    v37 = &off_299AD8;
    goto LABEL_86;
  }
  if ( *(_QWORD *)&v46[8] )
  {
    if ( **(_QWORD **)&v46[8] )
    {
      *(_QWORD *)(a2 + 120) = **(_QWORD **)&v46[8];
    }
    else
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(v46, 71LL, 0LL);
      v24 = *(_QWORD *)&v46[8];
      if ( *(_QWORD *)v46 )
        goto LABEL_87;
      v25 = *(_OWORD **)&v46[16];
      core::intrinsics::copy_nonoverlapping::precondition_check(
        &xmmword_5E96E,
        *(_QWORD *)&v46[16],
        1LL,
        1LL,
        71LL,
        v23,
        v38,
        v39);
      qmemcpy(v25 + 3, "cal result out of range", 23);
      v25[2] = xmmword_5E98E;
      qmemcpy(v25, "Invalid line number field width:", 32);
      *(_QWORD *)&v64 = v24;
      *((_QWORD *)&v64 + 1) = v25;
      v65 = 71LL;
      v26 = v45;
      if ( v45 == (_QWORD)v44 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v44);
      v27 = *((_QWORD *)&v44 + 1);
      v28 = 3 * v26;
      v29 = v64;
      *(_QWORD *)(*((_QWORD *)&v44 + 1) + 8 * v28 + 16) = v65;
      *(_OWORD *)(v27 + 8 * v28) = v29;
      v45 = v26 + 1;
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v46, a3, aJoinBlankLines, 16LL);
  v38 = aJoinBlankLines;
  v39 = 16LL;
  if ( *(_QWORD *)v46 )
  {
    v53 = v49;
    v52 = v48;
    v51 = v47;
    v50 = *(_OWORD *)&v46[8];
    v40 = &v38;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = &v50;
    v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v54[0] = &anon_f2fb85536fffd0a461a91483864f6ad6_6_llvm_13329461704207359836;
    v37 = &off_299AF0;
    goto LABEL_86;
  }
  if ( *(_QWORD *)&v46[8] )
  {
    if ( **(_QWORD **)&v46[8] )
    {
      *(_QWORD *)(a2 + 112) = **(_QWORD **)&v46[8];
      goto LABEL_68;
    }
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v46, 74LL, 0LL);
    v24 = *(_QWORD *)&v46[8];
    if ( !*(_QWORD *)v46 )
    {
      v31 = *(_OWORD **)&v46[16];
      core::intrinsics::copy_nonoverlapping::precondition_check(
        &xmmword_5E9B5,
        *(_QWORD *)&v46[16],
        1LL,
        1LL,
        74LL,
        v30,
        v38,
        v39);
      qmemcpy(v31 + 3, "erical result out of range", 26);
      v31[2] = xmmword_5E9D5;
      qmemcpy(v31, "Invalid line number of blank lin", 32);
      *(_QWORD *)&v66 = v24;
      *((_QWORD *)&v66 + 1) = v31;
      v67 = 74LL;
      v32 = v45;
      if ( v45 == (_QWORD)v44 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v44);
      v33 = *((_QWORD *)&v44 + 1);
      v34 = 3 * v32;
      v35 = v66;
      *(_QWORD *)(*((_QWORD *)&v44 + 1) + 8 * v34 + 16) = v67;
      *(_OWORD *)(v33 + 8 * v34) = v35;
      v45 = v32 + 1;
      goto LABEL_68;
    }
LABEL_87:
    alloc::raw_vec::handle_error(v24, *(_QWORD *)&v46[16]);
  }
LABEL_68:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v46, a3, &unk_5E9FF, 14LL);
  v38 = (const char *)&unk_5E9FF;
  v39 = 14LL;
  if ( *(_QWORD *)v46 )
  {
    v53 = v49;
    v52 = v48;
    v51 = v47;
    v50 = *(_OWORD *)&v46[8];
    v40 = &v38;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = &v50;
    v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v54[0] = &anon_f2fb85536fffd0a461a91483864f6ad6_6_llvm_13329461704207359836;
    v37 = &off_299B08;
    goto LABEL_86;
  }
  if ( *(_QWORD *)&v46[8] )
    *(_QWORD *)(a2 + 104) = **(_QWORD **)&v46[8];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v46, a3, &unk_5EA0D, 20LL);
  v38 = (const char *)&unk_5EA0D;
  v39 = 20LL;
  if ( *(_QWORD *)v46 )
  {
    v53 = v49;
    v52 = v48;
    v51 = v47;
    v50 = *(_OWORD *)&v46[8];
    v40 = &v38;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = &v50;
    v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v54[0] = &anon_f2fb85536fffd0a461a91483864f6ad6_6_llvm_13329461704207359836;
    v37 = &off_299B20;
LABEL_86:
    v54[1] = 2LL;
    v54[4] = 0LL;
    v54[2] = &v40;
    v54[3] = 2LL;
    core::panicking::panic_fmt(v54, v37);
  }
  if ( *(_QWORD *)&v46[8] )
    *(_QWORD *)(a2 + 96) = **(_QWORD **)&v46[8];
  *(_QWORD *)(a1 + 16) = v45;
  *(_OWORD *)a1 = v44;
  return a1;
}
