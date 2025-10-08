_QWORD *__fastcall uu_tail::args::Settings::from(_QWORD *a1, __int64 a2)
{
  char flag; // r13
  char v3; // al
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // r12
  char v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // al
  bool v12; // cl
  char v13; // r15
  __int128 v15; // kr00_16
  __int64 v16; // rbx
  _QWORD *v17; // rbx
  char v18; // al
  char v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 (__fastcall **v34)(); // rax
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  _BYTE *v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  char v51; // al
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  char v60; // [rsp+Dh] [rbp-1CBh]
  char v61; // [rsp+Eh] [rbp-1CAh]
  char v62; // [rsp+Fh] [rbp-1C9h] BYREF
  _BYTE v63[24]; // [rsp+10h] [rbp-1C8h] BYREF
  __int128 v64; // [rsp+28h] [rbp-1B0h]
  __int128 v65; // [rsp+38h] [rbp-1A0h]
  int v66; // [rsp+48h] [rbp-190h]
  __int64 v67; // [rsp+50h] [rbp-188h]
  __int128 v68; // [rsp+60h] [rbp-178h] BYREF
  __int64 v69; // [rsp+70h] [rbp-168h]
  char v70; // [rsp+78h] [rbp-160h]
  int v71; // [rsp+84h] [rbp-154h]
  _QWORD *v72; // [rsp+88h] [rbp-150h]
  __int128 v73; // [rsp+90h] [rbp-148h] BYREF
  _BYTE v74[48]; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v75; // [rsp+D0h] [rbp-108h]
  __int16 v76; // [rsp+D8h] [rbp-100h]
  char v77; // [rsp+DAh] [rbp-FEh]
  int v78; // [rsp+DBh] [rbp-FDh]
  char v79; // [rsp+DFh] [rbp-F9h]
  __int128 *v80; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 (__fastcall *v81)(); // [rsp+E8h] [rbp-F0h]
  char *v82; // [rsp+F0h] [rbp-E8h]
  __int64 (__fastcall *v83)(); // [rsp+F8h] [rbp-E0h]
  __int64 v84; // [rsp+100h] [rbp-D8h] BYREF
  _QWORD v85[2]; // [rsp+108h] [rbp-D0h] BYREF
  int v86; // [rsp+118h] [rbp-C0h]
  __int128 v87; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v88; // [rsp+130h] [rbp-A8h]
  __int128 v89; // [rsp+138h] [rbp-A0h] BYREF
  __int64 v90; // [rsp+148h] [rbp-90h]
  __int128 v91; // [rsp+150h] [rbp-88h] BYREF
  __int64 v92; // [rsp+160h] [rbp-78h]
  _QWORD v93[14]; // [rsp+168h] [rbp-70h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, asc_2463F, 1LL);
  v3 = 1;
  if ( !flag )
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aRetry, 5LL);
  v61 = v3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v63, a2, aFollow, 6LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aFollow, 6LL, v63);
  if ( !v4 )
  {
    LOBYTE(v5) = 2;
    if ( !flag )
      goto LABEL_11;
    goto LABEL_10;
  }
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *(_QWORD *)(v4 + 16);
  if ( !flag
    || (v8 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, asc_2463F, 1LL),
        v10 = v9,
        v11 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, aFollow, 6LL),
        v12 = v10 <= v5,
        (v8 & 1) == 0)
    || (LOBYTE(v5) = 1, (v12 & v11) != 0) )
  {
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aName, 4LL) )
    {
      LODWORD(v5) = 0;
      goto LABEL_11;
    }
LABEL_10:
    LOBYTE(v5) = 1;
  }
LABEL_11:
  v71 = v5;
  v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aUsePolling, 11LL);
  uu_tail::args::FilterMode::from((__int64 *)v63, a2);
  v15 = *(_OWORD *)v63;
  v16 = *(_QWORD *)&v63[16];
  if ( *(_QWORD *)v63 == 5LL )
  {
    a1[1] = *(_QWORD *)&v63[8];
    a1[2] = v16;
    v17 = a1;
    *a1 = 5LL;
    return v17;
  }
  v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL);
  v72 = a1;
  v60 = v18;
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPresumeInputPi, 19LL);
  <uu_tail::args::Settings as core::default::Default>::default(v63);
  BYTE1(v78) = v71;
  v73 = v15;
  *(_QWORD *)v74 = v16;
  v75 = v67;
  LOBYTE(v76) = v61;
  *(_DWORD *)&v74[40] = v66;
  HIBYTE(v76) = v13;
  v77 = v60;
  v17 = v72;
  LOBYTE(v78) = v19;
  *(_OWORD *)&v74[8] = v64;
  *(_OWORD *)&v74[24] = v65;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v63, a2, aSleepInterval, 14LL);
  v20 = clap_builder::parser::error::MatchesError::unwrap(aSleepInterval, 14LL, v63);
  if ( v20 )
  {
    v84 = v20;
    uucore::features::parser::parse_time::from_str(v85, *(_QWORD *)(v20 + 8), *(_QWORD *)(v20 + 16), 0LL);
    if ( !__OFSUB__(0LL, v85[0]) )
    {
      v33 = uu_tail::args::Settings::from::{{closure}}(&v84, v85);
      goto LABEL_20;
    }
    *(_QWORD *)&v74[32] = v85[1];
    *(_DWORD *)&v74[40] = v86;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v63, a2, aMaxUnchangedSt, 19LL);
  v21 = clap_builder::parser::error::MatchesError::unwrap(aMaxUnchangedSt, 19LL, v63);
  if ( v21 )
  {
    v22 = *(_QWORD *)(v21 + 8);
    v23 = *(_QWORD *)(v21 + 16);
    v24 = core::num::<impl u32>::from_ascii_radix(v22, v23);
    if ( (v24 & 1) != 0 )
    {
      *(_QWORD *)&v68 = 0LL;
      *((_QWORD *)&v68 + 1) = v22;
      v69 = v23;
      v70 = 1;
      v80 = &v68;
      v81 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)v63 = &off_172FB0;
      *(_QWORD *)&v63[8] = 1LL;
      *(_QWORD *)&v63[16] = &v80;
      v64 = 1uLL;
      core::option::Option<T>::map_or_else(&v87, v63, v25, v26, v27, v28);
      LODWORD(v64) = 1;
      *(_OWORD *)v63 = v87;
      *(_QWORD *)&v63[16] = v88;
      v33 = alloc::boxed::Box<T>::new(v63, v63, v29, v30, v31, v32);
LABEL_20:
      v17[1] = v33;
      v34 = &off_173010;
LABEL_38:
      v17[2] = v34;
      *v17 = 5LL;
      core::ptr::drop_in_place<uu_tail::args::Settings>(&v73);
      return v17;
    }
    LODWORD(v75) = HIDWORD(v24);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v63, a2, aPid, 3LL);
  v35 = clap_builder::parser::error::MatchesError::unwrap(aPid, 3LL, v63);
  if ( v35 )
  {
    v36 = *(_QWORD *)(v35 + 8);
    v37 = *(_QWORD *)(v35 + 16);
    v38 = core::num::<impl i32>::from_ascii_radix(v36, v37);
    if ( (v38 & 1) != 0 )
    {
      v62 = BYTE1(v38);
      *(_QWORD *)&v68 = 0LL;
      *((_QWORD *)&v68 + 1) = v36;
      v69 = v37;
      v70 = 1;
      v80 = &v68;
      v81 = <os_display::Quoted as core::fmt::Display>::fmt;
      v82 = &v62;
      v83 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
      *(_QWORD *)v63 = &off_172FD0;
      *(_QWORD *)&v63[8] = 2LL;
      *(_QWORD *)&v63[16] = &v80;
      v64 = 2uLL;
      core::option::Option<T>::map_or_else(&v91, v63, v39, v40, v41, v42);
      LODWORD(v64) = 1;
      *(_OWORD *)v63 = v91;
      *(_QWORD *)&v63[16] = v92;
      v47 = alloc::boxed::Box<T>::new(v63, v63, v43, v44, v45, v46);
LABEL_37:
      v17[1] = v47;
      v34 = &off_172F18;
      goto LABEL_38;
    }
    if ( v38 < 0 )
    {
      *(_QWORD *)&v68 = 0LL;
      *((_QWORD *)&v68 + 1) = v36;
      v69 = v37;
      v70 = 1;
      v80 = &v68;
      v81 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)v63 = &off_172FC0;
      *(_QWORD *)&v63[8] = 1LL;
      *(_QWORD *)&v63[16] = &v80;
      v64 = 1uLL;
      core::option::Option<T>::map_or_else(&v89, v63, v39, v40, v41, v42);
      LODWORD(v64) = 1;
      *(_OWORD *)v63 = v89;
      *(_QWORD *)&v63[16] = v90;
      v47 = alloc::boxed::Box<T>::new(v63, v63, v55, v56, v57, v58);
      goto LABEL_37;
    }
    HIDWORD(v75) = HIDWORD(v38);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v63, a2);
  v48 = v63;
  clap_builder::parser::error::MatchesError::unwrap(v93, v63);
  if ( v93[0]
    && (v48 = v93,
        core::iter::traits::iterator::Iterator::collect(v63, v93),
        v68 = *(_OWORD *)&v63[8],
        v50 = -*(_QWORD *)v63,
        !__OFSUB__(-*(_QWORD *)v63, 1LL)) )
  {
    *(_OWORD *)&v63[8] = v68;
  }
  else
  {
    uu_tail::args::Settings::from::{{closure}}(v63, v48, v49, v50);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(&v74[8]);
  *(_QWORD *)&v74[24] = *(_QWORD *)&v63[16];
  *(_OWORD *)&v74[8] = *(_OWORD *)v63;
  v17 = v72;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL)
    || *(_QWORD *)&v74[24] >= 2uLL )
  {
    v51 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL) ^ 1;
  }
  else
  {
    v51 = 0;
  }
  v77 = v51;
  v52 = v73;
  v53 = *(_OWORD *)v74;
  v54 = *(_OWORD *)&v74[16];
  *((_OWORD *)v17 + 3) = *(_OWORD *)&v74[32];
  *((_OWORD *)v17 + 2) = v54;
  *((_OWORD *)v17 + 1) = v53;
  *(_OWORD *)v17 = v52;
  v17[8] = v75;
  *((_WORD *)v17 + 36) = v76;
  *((_BYTE *)v17 + 74) = v77;
  *(_DWORD *)((char *)v17 + 75) = v78;
  *((_BYTE *)v17 + 79) = v79;
  return v17;
}