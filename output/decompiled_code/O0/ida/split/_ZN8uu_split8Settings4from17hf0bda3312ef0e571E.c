_QWORD *__fastcall uu_split::Settings::from(_QWORD *dest, _OWORD *a2)
{
  const char *v2; // r13
  _OWORD *v3; // r12
  __int64 v4; // rbx
  __int128 v5; // xmm1
  __int64 v6; // rax
  char **v7; // r14
  __int64 v8; // rax
  char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // r14
  char v16; // r14
  char v17; // bp
  char flag; // al
  __int64 v19; // rcx
  char **v21; // rsi
  char v22; // [rsp+Ch] [rbp-3ECh]
  const char **v23; // [rsp+10h] [rbp-3E8h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+18h] [rbp-3E0h]
  __int128 *v25; // [rsp+20h] [rbp-3D8h]
  __int64 (__fastcall *v26)(); // [rsp+28h] [rbp-3D0h]
  __int64 v27; // [rsp+30h] [rbp-3C8h]
  const char *v28; // [rsp+38h] [rbp-3C0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-3B8h]
  char **v30; // [rsp+50h] [rbp-3A8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-3A0h]
  const char ***v32; // [rsp+60h] [rbp-398h]
  __int64 v33; // [rsp+68h] [rbp-390h]
  __int64 v34; // [rsp+70h] [rbp-388h]
  __int128 v35; // [rsp+80h] [rbp-378h] BYREF
  __int128 v36; // [rsp+90h] [rbp-368h]
  __int128 v37; // [rsp+A0h] [rbp-358h]
  __int128 v38; // [rsp+B0h] [rbp-348h]
  __int64 v39; // [rsp+C8h] [rbp-330h]
  __int64 v40; // [rsp+D0h] [rbp-328h] BYREF
  _BYTE v41[24]; // [rsp+D8h] [rbp-320h] BYREF
  __int128 v42; // [rsp+F0h] [rbp-308h]
  __int128 v43; // [rsp+100h] [rbp-2F8h]
  __int128 v44; // [rsp+110h] [rbp-2E8h]
  __int128 v45; // [rsp+120h] [rbp-2D8h]
  __int64 v46; // [rsp+130h] [rbp-2C8h]
  __int128 v47; // [rsp+140h] [rbp-2B8h]
  __int64 v48; // [rsp+150h] [rbp-2A8h]
  __int128 v49; // [rsp+160h] [rbp-298h] BYREF
  __int64 v50; // [rsp+170h] [rbp-288h]
  __int128 v51; // [rsp+180h] [rbp-278h] BYREF
  __int64 v52; // [rsp+190h] [rbp-268h]
  __int128 v53; // [rsp+198h] [rbp-260h] BYREF
  __int64 v54; // [rsp+1A8h] [rbp-250h]
  _QWORD v55[2]; // [rsp+1B0h] [rbp-248h] BYREF
  __int128 v56; // [rsp+1C0h] [rbp-238h]
  __int64 v57; // [rsp+1D0h] [rbp-228h]
  __int64 v58; // [rsp+1D8h] [rbp-220h] BYREF
  __int128 v59; // [rsp+1E0h] [rbp-218h]
  __int64 v60; // [rsp+1F0h] [rbp-208h]
  __int64 v61; // [rsp+1F8h] [rbp-200h]
  _OWORD v62[3]; // [rsp+200h] [rbp-1F8h] BYREF
  __int128 v63; // [rsp+230h] [rbp-1C8h]
  __int128 v64; // [rsp+240h] [rbp-1B8h]
  __int128 v65; // [rsp+250h] [rbp-1A8h]
  __int64 v66; // [rsp+268h] [rbp-190h] BYREF
  _BYTE v67[40]; // [rsp+270h] [rbp-188h]
  __int128 v68; // [rsp+298h] [rbp-160h] BYREF
  __int64 v69; // [rsp+2A8h] [rbp-150h]
  __int128 v70; // [rsp+2B0h] [rbp-148h] BYREF
  __int64 v71; // [rsp+2C0h] [rbp-138h]
  __int128 v72; // [rsp+2C8h] [rbp-130h] BYREF
  __int64 v73; // [rsp+2D8h] [rbp-120h]
  _BYTE src[168]; // [rsp+2E0h] [rbp-118h] BYREF
  _OWORD v75[7]; // [rsp+388h] [rbp-70h] BYREF

  v3 = a2;
  uu_split::strategy::Strategy::from(&v58);
  v56 = v59;
  v57 = v60;
  if ( v58 != 9 && v58 != 4 )
  {
    v11 = v61;
    dest[1] = v58;
    *((_OWORD *)dest + 1) = v59;
    dest[4] = v60;
    dest[5] = v11;
    *dest = 2LL;
    return dest;
  }
  v46 = v57;
  v45 = v56;
  v49 = v56;
  v50 = v57;
  uu_split::filenames::Suffix::from(&v66, a2, &v49);
  v4 = v66;
  if ( v66 == 0x8000000000000000LL )
  {
    dest[1] = 4LL;
    v5 = *(_OWORD *)&v67[16];
    *((_OWORD *)dest + 1) = *(_OWORD *)v67;
    *((_OWORD *)dest + 2) = v5;
    *dest = 2LL;
    return dest;
  }
  v27 = *(_QWORD *)v67;
  v64 = *(_OWORD *)&v67[8];
  v65 = *(_OWORD *)&v67[24];
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v75, a2, aSeparator, 9LL, &off_1355A8);
  if ( !*(_QWORD *)&v75[0] )
  {
    v12 = 10;
LABEL_21:
    v22 = v12;
    goto LABEL_22;
  }
  v63 = v75[3];
  v62[2] = v75[2];
  v62[1] = v75[1];
  v62[0] = v75[0];
  v6 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next((char *)v62 + 8);
  v7 = &off_1355C0;
  if ( !v6 || (v8 = (*(__int64 (__fastcall **)(__int64))&v62[0])(v6)) == 0 )
LABEL_62:
    core::option::unwrap_failed(v7);
  if ( !*((_QWORD *)&v63 + 1) )
    core::panicking::panic_const::panic_const_sub_overflow(&anon_791dd9c0d2c869e43c67d741dd94c45b_2_llvm_17242572455711829746);
  --*((_QWORD *)&v63 + 1);
  v40 = v8;
  v41[0] = core::iter::traits::iterator::Iterator::try_fold(v62, &v40);
  if ( !(unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(
                           v41,
                           &anon_791dd9c0d2c869e43c67d741dd94c45b_21_llvm_17242572455711829746) )
  {
    dest[1] = 6LL;
    goto LABEL_19;
  }
  v9 = *(char **)(v40 + 8);
  if ( !v9 )
    goto LABEL_56;
  v10 = *(_QWORD *)(v40 + 16);
  if ( v10 < 0 )
    goto LABEL_56;
  if ( v10 == 1 )
  {
    v12 = *v9;
    goto LABEL_21;
  }
  if ( v10 != 2 || *(_WORD *)v9 != 12380 )
  {
    <str as alloc::string::ToString>::to_string(&v68);
    dest[1] = 5LL;
    *((_OWORD *)dest + 1) = v68;
    dest[4] = v69;
LABEL_19:
    *dest = 2LL;
LABEL_50:
    if ( v4 )
      _rust_dealloc(v27);
    return dest;
  }
  v22 = 0;
LABEL_22:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v41, v3, aIoBlksize, 11LL);
  v28 = aIoBlksize;
  v29 = 11LL;
  if ( *(_QWORD *)v41 )
  {
    v38 = v44;
    v37 = v43;
    v36 = v42;
    v35 = *(_OWORD *)&v41[8];
    v23 = &v28;
    v24 = <&T as core::fmt::Display>::fmt;
    v25 = &v35;
    v26 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v30 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v21 = &off_1355D8;
    goto LABEL_60;
  }
  v13 = *(_QWORD *)&v41[8];
  if ( !*(_QWORD *)&v41[8] )
  {
    v39 = 0LL;
    goto LABEL_32;
  }
  v14 = *(_QWORD *)(*(_QWORD *)&v41[8] + 8LL);
  if ( !v14 || (v15 = *(_QWORD *)(*(_QWORD *)&v41[8] + 16LL), v15 < 0) )
LABEL_56:
    core::panicking::panic_nounwind(anon_a1369f34f0af36e085eaa2e09186d83a_17_llvm_8562216672536282045, 162LL);
  LOWORD(v37) = 0;
  BYTE2(v37) = 0;
  *(_QWORD *)&v35 = 0LL;
  *(_QWORD *)&v36 = 0LL;
  uucore::parser::parse_size::Parser::parse(&v23, &v35, v14, v15);
  if ( v23 != (const char **)((char *)&dword_0 + 3) )
  {
    v2 = (const char *)v24;
    v3 = v25;
LABEL_47:
    v16 = 0;
LABEL_48:
    <alloc::string::String as core::clone::Clone>::clone(&v72, v13);
    dest[1] = 8LL;
    *((_OWORD *)dest + 1) = v72;
    dest[4] = v73;
    *dest = 2LL;
    if ( !((v2 == 0LL) | (unsigned __int8)v16) )
      _rust_dealloc(v3);
    goto LABEL_50;
  }
  if ( v26 )
  {
    v30 = 0LL;
    v31 = v14;
    v32 = (const char ***)v15;
    LOBYTE(v33) = 1;
    v55[0] = &v30;
    v55[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v41 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
    *(_QWORD *)&v41[8] = 2LL;
    *(_QWORD *)&v41[16] = v55;
    v42 = 1uLL;
    alloc::fmt::format::format_inner(&v28, v41);
    v2 = v28;
    v3 = (_OWORD *)v29;
    goto LABEL_47;
  }
  v2 = (const char *)v25;
  if ( !v25 )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v70, v13);
    dest[1] = 8LL;
    *((_OWORD *)dest + 1) = v70;
    dest[4] = v71;
    goto LABEL_19;
  }
  v39 = 1LL;
  if ( (unsigned __int64)v25 >= 0x20000001 )
  {
    v16 = 1;
    goto LABEL_48;
  }
LABEL_32:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v41, v3, aPrefix, 6LL);
  v28 = aPrefix;
  v29 = 6LL;
  if ( *(_QWORD *)v41 )
  {
    v38 = v44;
    v37 = v43;
    v36 = v42;
    v35 = *(_OWORD *)&v41[8];
    v23 = &v28;
    v24 = <&T as core::fmt::Display>::fmt;
    v25 = &v35;
    v26 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v30 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v21 = &off_1355F0;
LABEL_60:
    v31 = 2LL;
    v34 = 0LL;
    v32 = &v23;
    v33 = 2LL;
    core::panicking::panic_fmt(&v30, v21);
  }
  if ( !*(_QWORD *)&v41[8] )
  {
    v7 = &off_135608;
    goto LABEL_62;
  }
  <alloc::string::String as core::clone::Clone>::clone(&v51, *(_QWORD *)&v41[8]);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v41, v3, aInput, 5LL);
  v28 = aInput;
  v29 = 5LL;
  if ( *(_QWORD *)v41 )
  {
    v38 = v44;
    v37 = v43;
    v36 = v42;
    v35 = *(_OWORD *)&v41[8];
    v23 = &v28;
    v24 = <&T as core::fmt::Display>::fmt;
    v25 = &v35;
    v26 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v30 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v31 = 2LL;
    v34 = 0LL;
    v32 = &v23;
    v33 = 2LL;
    core::panicking::panic_fmt(&v30, &off_135620);
  }
  if ( !*(_QWORD *)&v41[8] )
    core::option::unwrap_failed(&off_135638);
  <alloc::string::String as core::clone::Clone>::clone(&v53, *(_QWORD *)&v41[8]);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v41, v3, aFilter, 6LL);
  v28 = aFilter;
  v29 = 6LL;
  if ( *(_QWORD *)v41 )
  {
    v38 = v44;
    v37 = v43;
    v36 = v42;
    v35 = *(_OWORD *)&v41[8];
    v23 = &v28;
    v24 = <&T as core::fmt::Display>::fmt;
    v25 = &v35;
    v26 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v30 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v31 = 2LL;
    v34 = 0LL;
    v32 = &v23;
    v33 = 2LL;
    core::panicking::panic_fmt(&v30, &off_135650);
  }
  if ( *(_QWORD *)&v41[8] )
  {
    <alloc::string::String as core::clone::Clone>::clone(v41, *(_QWORD *)&v41[8]);
    v48 = *(_QWORD *)&v41[16];
    v47 = *(_OWORD *)v41;
  }
  else
  {
    *(_QWORD *)&v47 = 0x8000000000000000LL;
  }
  v45 = v49;
  v46 = v50;
  v17 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(v3, aVerbose, 7LL, &off_135668);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aElideEmptyFile, 17LL, &off_135680);
  *(_QWORD *)&src[56] = v52;
  *(_OWORD *)&src[40] = v51;
  *(_QWORD *)&src[64] = v4;
  *(_QWORD *)&src[72] = v27;
  *(_OWORD *)&src[80] = v64;
  *(_OWORD *)&src[96] = v65;
  *(_OWORD *)&src[112] = v53;
  *(_QWORD *)&src[128] = v54;
  *(_OWORD *)&src[136] = v47;
  *(_QWORD *)&src[152] = v48;
  *(_OWORD *)&src[16] = v45;
  *(_QWORD *)&src[32] = v46;
  src[160] = v17 == 2;
  src[162] = v22;
  src[161] = flag;
  *(_QWORD *)src = v39;
  *(_QWORD *)&src[8] = v2;
  if ( (unsigned __int64)(v45 - 9) <= 0xFFFFFFFFFFFFFFFCLL
    && (unsigned __int64)v45 <= 5
    && (v19 = 42LL, _bittest64(&v19, v45))
    && *(_QWORD *)&src[136] != 0x8000000000000000LL )
  {
    dest[1] = 7LL;
    *dest = 2LL;
    core::ptr::drop_in_place<uu_split::Settings>(src);
  }
  else
  {
    memcpy(dest, src, 0xA8uLL);
  }
  return dest;
}
