__int64 __fastcall uu_tail::args::Settings::from(__int64 a1, __int64 a2)
{
  char flag; // r13
  char v3; // al
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char v13; // r15
  __int128 v14; // kr00_16
  __int64 v15; // rbx
  char v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 (__fastcall **v41)(); // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  char v47; // al
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  char v56; // [rsp+6h] [rbp-1E2h]
  char v57; // [rsp+7h] [rbp-1E1h]
  _BYTE v58[64]; // [rsp+10h] [rbp-1D8h] BYREF
  _QWORD v59[2]; // [rsp+50h] [rbp-198h] BYREF
  __int128 *v60; // [rsp+60h] [rbp-188h] BYREF
  __int128 v61; // [rsp+68h] [rbp-180h]
  __int64 (__fastcall *v62)(); // [rsp+78h] [rbp-170h]
  int v63; // [rsp+8Ch] [rbp-15Ch]
  __int128 v64; // [rsp+90h] [rbp-158h] BYREF
  __int128 v65; // [rsp+A0h] [rbp-148h]
  __int128 v66; // [rsp+B0h] [rbp-138h]
  __int128 v67; // [rsp+C0h] [rbp-128h]
  __int128 v68; // [rsp+D0h] [rbp-118h] BYREF
  __int128 v69; // [rsp+E8h] [rbp-100h] BYREF
  _BYTE v70[48]; // [rsp+F8h] [rbp-F0h] BYREF
  __int64 v71; // [rsp+128h] [rbp-C0h]
  __int16 v72; // [rsp+130h] [rbp-B8h]
  char v73; // [rsp+132h] [rbp-B6h]
  int v74; // [rsp+133h] [rbp-B5h]
  char v75; // [rsp+137h] [rbp-B1h]
  __int64 v76; // [rsp+138h] [rbp-B0h] BYREF
  __int128 v77; // [rsp+140h] [rbp-A8h] BYREF
  __int64 (__fastcall *v78)(); // [rsp+150h] [rbp-98h]
  __int128 v79; // [rsp+158h] [rbp-90h] BYREF
  __int64 v80; // [rsp+168h] [rbp-80h]
  __int128 v81; // [rsp+170h] [rbp-78h] BYREF
  __int64 v82; // [rsp+180h] [rbp-68h]
  __int128 v83; // [rsp+188h] [rbp-60h] BYREF
  __int64 v84; // [rsp+198h] [rbp-50h]
  __int128 v85; // [rsp+1A0h] [rbp-48h] BYREF
  __int64 v86; // [rsp+1B0h] [rbp-38h]

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, asc_28646, 1LL);
  v3 = 1;
  if ( !flag )
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aRetry, 5LL);
  v57 = v3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v58, a2, aFollow, 6LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aFollow, 6LL, v58);
  if ( !v4 )
  {
    LOBYTE(v5) = 2;
    if ( !flag )
      goto LABEL_12;
    goto LABEL_11;
  }
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *(_QWORD *)(v4 + 16);
  if ( !flag
    || (v8 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, asc_28646, 1LL),
        v10 = v9,
        v11 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, aFollow, 6LL),
        !v8)
    || (LOBYTE(v5) = 1, v11) && v10 <= v12 )
  {
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aName, 4LL) )
    {
      v5 = 0;
      goto LABEL_12;
    }
LABEL_11:
    LOBYTE(v5) = 1;
  }
LABEL_12:
  v63 = v5;
  v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aUsePolling, 11LL);
  uu_tail::args::FilterMode::from((__int64 *)v58, a2);
  v14 = *(_OWORD *)v58;
  v15 = *(_QWORD *)&v58[16];
  if ( *(_QWORD *)v58 == 5LL )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)&v58[8];
    *(_QWORD *)(a1 + 16) = v15;
    *(_QWORD *)a1 = 5LL;
    return a1;
  }
  v56 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL);
  v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPresumeInputPi, 19LL);
  <uu_tail::args::Settings as core::default::Default>::default(v58);
  BYTE1(v74) = v63;
  v69 = v14;
  *(_QWORD *)v70 = v15;
  v71 = v59[0];
  LOBYTE(v72) = v57;
  *(_DWORD *)&v70[40] = *(_DWORD *)&v58[56];
  HIBYTE(v72) = v13;
  v73 = v56;
  LOBYTE(v74) = v16;
  *(_OWORD *)&v70[8] = *(_OWORD *)&v58[24];
  *(_OWORD *)&v70[24] = *(_OWORD *)&v58[40];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v58, a2, aSleepInterval, 14LL);
  v17 = clap_builder::parser::error::MatchesError::unwrap(aSleepInterval, 14LL, v58);
  if ( v17 )
  {
    v76 = v17;
    memset(v59, 10, 10);
    *(_OWORD *)v58 = xmmword_1BB4B0;
    *(_OWORD *)&v58[16] = xmmword_1BB4C0;
    *(_OWORD *)&v58[32] = *(_OWORD *)&off_1BB4D0;
    *(_OWORD *)&v58[48] = xmmword_1BB4E0;
    fundu_core::parse::Parser::parse_single(&v60, v58, *(_QWORD *)(v17 + 8), *(_QWORD *)(v17 + 16), v59);
    if ( (_DWORD)v60 != 8 )
    {
      *(_QWORD *)&v68 = &v76;
      *((_QWORD *)&v68 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v64 = &off_1BB450;
      *((_QWORD *)&v64 + 1) = 2LL;
      *(_QWORD *)&v66 = 0LL;
      *(_QWORD *)&v65 = &v68;
      *((_QWORD *)&v65 + 1) = 1LL;
      core::option::Option<T>::map_or_else(&v79, &v64, v18, v19, v20, v21);
      DWORD2(v65) = 1;
      v64 = v79;
      *(_QWORD *)&v65 = v80;
      *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v64);
      *(_QWORD *)(a1 + 16) = &off_1BB550;
      *(_QWORD *)a1 = 5LL;
      core::ptr::drop_in_place<core::result::Result<fundu_core::time::Duration,fundu_core::error::ParseError>>(&v60);
LABEL_38:
      core::ptr::drop_in_place<uu_tail::args::Settings>(&v69);
      return a1;
    }
    v78 = v62;
    v77 = v61;
    *(_QWORD *)&v70[32] = <fundu_core::time::Duration as fundu_core::time::SaturatingInto<core::time::Duration>>::saturating_into(&v77);
    *(_DWORD *)&v70[40] = v22;
    core::ptr::drop_in_place<core::result::Result<fundu_core::time::Duration,fundu_core::error::ParseError>>(&v60);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v58, a2, aMaxUnchangedSt, 19LL);
  v23 = clap_builder::parser::error::MatchesError::unwrap(aMaxUnchangedSt, 19LL, v58);
  if ( v23 )
  {
    v24 = *(_QWORD *)(v23 + 8);
    v25 = *(_QWORD *)(v23 + 16);
    v26 = core::num::<impl core::str::traits::FromStr for u32>::from_str(v24, v25);
    if ( (v26 & 1) != 0 )
    {
      *(_QWORD *)&v64 = 0LL;
      *((_QWORD *)&v64 + 1) = v24;
      *(_QWORD *)&v65 = v25;
      BYTE8(v65) = 1;
      v60 = &v64;
      *(_QWORD *)&v61 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)v58 = &off_1BB470;
      *(_QWORD *)&v58[8] = 1LL;
      *(_QWORD *)&v58[32] = 0LL;
      *(_QWORD *)&v58[16] = &v60;
      *(_QWORD *)&v58[24] = 1LL;
      core::option::Option<T>::map_or_else(&v81, v58, v27, v28, v29, v30);
      *(_DWORD *)&v58[24] = 1;
      *(_OWORD *)v58 = v81;
      *(_QWORD *)&v58[16] = v82;
      v39 = alloc::boxed::Box<T>::new(v58);
      v40 = (_QWORD *)a1;
      *(_QWORD *)(a1 + 8) = v39;
      v41 = &off_1BB550;
LABEL_37:
      v40[2] = v41;
      *v40 = 5LL;
      goto LABEL_38;
    }
    LODWORD(v71) = HIDWORD(v26);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v58, a2, aPid, 3LL);
  v31 = clap_builder::parser::error::MatchesError::unwrap(aPid, 3LL, v58);
  if ( !v31 )
    goto LABEL_24;
  v32 = *(_QWORD *)(v31 + 8);
  v33 = *(_QWORD *)(v31 + 16);
  v34 = core::num::<impl core::str::traits::FromStr for i32>::from_str(v32, v33);
  if ( (v34 & 1) != 0 )
  {
    LOBYTE(v68) = BYTE1(v34);
    *(_QWORD *)&v64 = 0LL;
    *((_QWORD *)&v64 + 1) = v32;
    *(_QWORD *)&v65 = v33;
    BYTE8(v65) = 1;
    v60 = &v64;
    *(_QWORD *)&v61 = <os_display::Quoted as core::fmt::Display>::fmt;
    *((_QWORD *)&v61 + 1) = &v68;
    v62 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
    *(_QWORD *)v58 = &off_1BB490;
    *(_QWORD *)&v58[8] = 2LL;
    *(_QWORD *)&v58[32] = 0LL;
    *(_QWORD *)&v58[16] = &v60;
    *(_QWORD *)&v58[24] = 2LL;
    core::option::Option<T>::map_or_else(&v85, v58, v35, v36, v37, v38);
    *(_DWORD *)&v58[24] = 1;
    *(_OWORD *)v58 = v85;
    *(_QWORD *)&v58[16] = v86;
    v46 = alloc::boxed::Box<T>::new(v58, v58, v42, v43, v44, v45);
LABEL_36:
    v40 = (_QWORD *)a1;
    *(_QWORD *)(a1 + 8) = v46;
    v41 = &off_1BB3C8;
    goto LABEL_37;
  }
  if ( v34 < 0 )
  {
    *(_QWORD *)&v64 = 0LL;
    *((_QWORD *)&v64 + 1) = v32;
    *(_QWORD *)&v65 = v33;
    BYTE8(v65) = 1;
    v60 = &v64;
    *(_QWORD *)&v61 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v58 = &off_1BB480;
    *(_QWORD *)&v58[8] = 1LL;
    *(_QWORD *)&v58[32] = 0LL;
    *(_QWORD *)&v58[16] = &v60;
    *(_QWORD *)&v58[24] = 1LL;
    core::option::Option<T>::map_or_else(&v83, v58, v35, v36, v37, v38);
    *(_DWORD *)&v58[24] = 1;
    *(_OWORD *)v58 = v83;
    *(_QWORD *)&v58[16] = v84;
    v46 = alloc::boxed::Box<T>::new(v58, v58, v51, v52, v53, v54);
    goto LABEL_36;
  }
  HIDWORD(v71) = HIDWORD(v34);
LABEL_24:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v58, a2, aFiles, 5LL);
  clap_builder::parser::error::MatchesError::unwrap(&v64, aFiles, 5LL, v58);
  if ( (_QWORD)v64
    && (*(_OWORD *)&v58[48] = v67,
        *(_OWORD *)&v58[32] = v66,
        *(_OWORD *)&v58[16] = v65,
        *(_OWORD *)v58 = v64,
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v60, v58),
        v68 = v61,
        v60 != (__int128 *)0x8000000000000000LL) )
  {
    *(_OWORD *)&v58[8] = v68;
    *(_QWORD *)v58 = v60;
  }
  else
  {
    uu_tail::args::Settings::from::{{closure}}(v58);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(&v70[8]);
  *(_QWORD *)&v70[24] = *(_QWORD *)&v58[16];
  *(_OWORD *)&v70[8] = *(_OWORD *)v58;
  if ( *(_QWORD *)&v58[16] < 2uLL )
    v47 = 0;
  else
    v47 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL) ^ 1;
  v73 = v47;
  v48 = v69;
  v49 = *(_OWORD *)v70;
  v50 = *(_OWORD *)&v70[16];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v70[32];
  *(_OWORD *)(a1 + 32) = v50;
  *(_OWORD *)(a1 + 16) = v49;
  *(_OWORD *)a1 = v48;
  *(_QWORD *)(a1 + 64) = v71;
  *(_WORD *)(a1 + 72) = v72;
  *(_BYTE *)(a1 + 74) = v73;
  *(_DWORD *)(a1 + 75) = v74;
  *(_BYTE *)(a1 + 79) = v75;
  return a1;
}
