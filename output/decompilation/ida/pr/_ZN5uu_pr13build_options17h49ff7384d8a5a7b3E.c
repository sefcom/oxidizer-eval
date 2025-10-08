_QWORD *__fastcall uu_pr::build_options(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rbp
  _QWORD *v8; // r15
  const char *v9; // rsi
  __int64 v10; // rdx
  void *v11; // r12
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r13
  void *v15; // rcx
  __int64 v16; // rbx
  void *v17; // rbp
  char v18; // al
  __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // r14
  __int64 v24; // r12
  __int64 v25; // rax
  _QWORD *v26; // rax
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rcx
  __int128 v30; // xmm0
  _BYTE *v31; // rsi
  __int64 v32; // rdi
  _BYTE *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // r12
  __int64 v40; // r14
  unsigned int v41; // eax
  __int64 v42; // r14
  _BYTE *v43; // rax
  __int64 v44; // rax
  __int32 v45; // eax
  __int64 v46; // rax
  __int64 v47; // r12
  char v48; // al
  __int64 v49; // rbp
  __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // rax
  char v53; // bp
  __int64 v54; // rcx
  __int64 v55; // r15
  __int64 v56; // r14
  _QWORD *v57; // rax
  char v58; // al
  __int64 v59; // r15
  unsigned __int64 v60; // r12
  char v61; // bp
  __int64 v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int128 v65; // xmm0
  char v66; // r14
  _QWORD *v67; // rax
  unsigned __int64 v69; // rcx
  __int128 v70; // xmm0
  unsigned __int64 v71; // rax
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  unsigned __int8 flag; // [rsp+5h] [rbp-333h]
  char v75; // [rsp+6h] [rbp-332h] BYREF
  unsigned __int8 v76; // [rsp+7h] [rbp-331h]
  __int32 v77; // [rsp+8h] [rbp-330h]
  int v78; // [rsp+Ch] [rbp-32Ch]
  __m256i v79; // [rsp+10h] [rbp-328h] BYREF
  __int128 v80; // [rsp+30h] [rbp-308h]
  __int128 v81; // [rsp+40h] [rbp-2F8h]
  __int64 v82; // [rsp+50h] [rbp-2E8h]
  __int64 v83; // [rsp+68h] [rbp-2D0h]
  __int64 v84; // [rsp+70h] [rbp-2C8h]
  __int64 v85; // [rsp+78h] [rbp-2C0h]
  __m256i v86; // [rsp+80h] [rbp-2B8h] BYREF
  __int128 v87; // [rsp+A0h] [rbp-298h]
  __int128 v88; // [rsp+B0h] [rbp-288h]
  __int64 v89; // [rsp+C0h] [rbp-278h]
  __int128 v90; // [rsp+D0h] [rbp-268h] BYREF
  __int128 v91; // [rsp+E0h] [rbp-258h]
  unsigned __int64 v92; // [rsp+F8h] [rbp-240h]
  __int64 v93; // [rsp+100h] [rbp-238h]
  unsigned __int64 v94; // [rsp+108h] [rbp-230h]
  __int64 v95; // [rsp+110h] [rbp-228h]
  __int64 v96; // [rsp+118h] [rbp-220h]
  __int64 v97; // [rsp+120h] [rbp-218h] BYREF
  int v98; // [rsp+12Ch] [rbp-20Ch]
  __int128 v99; // [rsp+130h] [rbp-208h] BYREF
  __int64 v100; // [rsp+140h] [rbp-1F8h]
  _BYTE v101[24]; // [rsp+150h] [rbp-1E8h] BYREF
  unsigned __int64 v102; // [rsp+168h] [rbp-1D0h] BYREF
  __int128 v103; // [rsp+170h] [rbp-1C8h] BYREF
  __int64 v104; // [rsp+180h] [rbp-1B8h]
  __int128 v105; // [rsp+190h] [rbp-1A8h] BYREF
  __int64 v106; // [rsp+1A0h] [rbp-198h]
  _OWORD v107[2]; // [rsp+1B0h] [rbp-188h] BYREF
  __int64 v108; // [rsp+1D0h] [rbp-168h]
  unsigned __int64 v109; // [rsp+1E0h] [rbp-158h]
  __int128 v110; // [rsp+1E8h] [rbp-150h] BYREF
  __int64 v111; // [rsp+1F8h] [rbp-140h]
  __int128 v112; // [rsp+200h] [rbp-138h]
  __int64 v113; // [rsp+210h] [rbp-128h]
  __int128 v114; // [rsp+220h] [rbp-118h] BYREF
  __int64 v115; // [rsp+230h] [rbp-108h]
  _BYTE v116[32]; // [rsp+238h] [rbp-100h] BYREF
  _QWORD v117[3]; // [rsp+258h] [rbp-E0h] BYREF
  _BYTE v118[32]; // [rsp+270h] [rbp-C8h] BYREF
  __int128 v119; // [rsp+290h] [rbp-A8h]
  __int128 v120; // [rsp+2A0h] [rbp-98h]
  __int128 v121; // [rsp+2B0h] [rbp-88h]
  __int128 v122; // [rsp+2C0h] [rbp-78h]
  __int128 v123; // [rsp+2D0h] [rbp-68h]
  __int128 v124; // [rsp+2E0h] [rbp-58h]
  __int128 v125; // [rsp+2F0h] [rbp-48h] BYREF
  __int64 v126; // [rsp+300h] [rbp-38h]

  v84 = a6;
  v96 = a5;
  v94 = a4;
  v7 = a2;
  v8 = (_QWORD *)a1;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aFormFeed, 9LL);
  LOBYTE(v85) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aMerge_0, 5LL);
  if ( !(_BYTE)v85 )
    goto LABEL_7;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aColumn, 6LL) )
  {
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAcross, 6LL) )
    {
      v9 = aCannotSpecifyB;
      v10 = 60LL;
      goto LABEL_6;
    }
LABEL_7:
    v83 = a1;
    v76 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aMerge_0, 5LL);
    v11 = &unk_573B8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v79);
    v12 = clap_builder::parser::error::MatchesError::unwrap(&unk_573B8, 6LL, &v79);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 8);
      v11 = *(void **)(v12 + 16);
      if ( (_BYTE)v85 )
      {
LABEL_9:
        v14 = 1LL;
        v15 = 0LL;
        goto LABEL_15;
      }
    }
    else
    {
      v13 = 0LL;
      if ( (_BYTE)v85 )
        goto LABEL_9;
    }
    v93 = a2;
    if ( !v94 )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_269208);
    v16 = *a3;
    v17 = (void *)a3[1];
    v14 = 1LL;
    v18 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*a3, v17, asc_581F5, 1LL);
    v15 = 0LL;
    if ( !v18 )
    {
      v15 = v17;
      v14 = v16;
    }
    v7 = v93;
LABEL_15:
    if ( v13 )
      v14 = v13;
    else
      v11 = v15;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v114, v14, v11);
    <uu_pr::NumberingMode as core::default::Default>::default(&v79);
    v19 = v80;
    core::ptr::drop_in_place<uu_pr::NumberingMode>(&v79);
    uu_pr::parse_usize(&v86, v7, (__int64)aFirstLineNumbe, 17LL);
    v79.m256i_i64[1] = v19;
    v79.m256i_i64[0] = 0x8000000000000005LL;
    v20 = v86.m256i_i64[0];
    if ( v86.m256i_i64[0] != 0x8000000000000006LL )
    {
      v19 = v86.m256i_i64[1];
      v107[0] = *(_OWORD *)&v86.m256i_u64[2];
      core::ptr::drop_in_place<core::result::Result<usize,uu_pr::PrError>>(&v79);
      if ( v20 != 0x8000000000000005LL )
      {
        v26 = (_QWORD *)v83;
        *(_OWORD *)(v83 + 24) = v107[0];
        v26[1] = v20;
        v8 = v26;
        v26[2] = v19;
        *v26 = 2LL;
LABEL_117:
        core::ptr::drop_in_place<alloc::string::String>(&v114);
        return v8;
      }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v79);
    v21 = clap_builder::parser::error::MatchesError::unwrap(aNumberLines, 12LL, &v79);
    if ( v21 )
    {
      uu_pr::build_options::{{closure}}(&v79, v19, *(_QWORD *)(v21 + 8), *(_QWORD *)(v21 + 16));
      *(_QWORD *)&v87 = v80;
      v86 = v79;
    }
    else
    {
      v86.m256i_i64[0] = 0x8000000000000000LL;
    }
    core::option::Option<T>::or_else(v107, &v86, v7);
    LOBYTE(v93) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v7, aDoubleSpace, 12LL);
    v8 = (_QWORD *)v83;
    if ( (_BYTE)v93 )
      alloc::slice::<impl [T]>::repeat(&v79, asc_581EA, 2LL);
    else
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v79, asc_581EA, 1LL);
    v100 = v79.m256i_i64[2];
    v99 = *(_OWORD *)v79.m256i_i8;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v79, asc_581EA, 1LL);
    v104 = v79.m256i_i64[2];
    v103 = *(_OWORD *)v79.m256i_i8;
    if ( (_BYTE)v85 )
      goto LABEL_29;
    if ( !v94 )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_269220);
    v22 = a3;
    v23 = *a3;
    v24 = v22[1];
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, asc_581F5, 1LL) )
    {
LABEL_29:
      chrono::offset::local::Local::now(&v90);
      v86.m256i_i64[0] = (__int64)aBDHMY;
      v86.m256i_i64[1] = 14LL;
      *(_OWORD *)&v86.m256i_u64[2] = 8uLL;
      LOBYTE(v87) = 0;
      chrono::datetime::DateTime<Tz>::format_with_items(&v79, &v90, &v86);
      <T as alloc::string::SpecToString>::spec_to_string(&v110, &v79);
      v25 = core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v79);
    }
    else
    {
      v25 = uu_pr::file_last_modified_time(&v110, v23, v24);
    }
    LOBYTE(v25) = 1;
    v78 = v25;
    regex::regex::string::Regex::new(&v79, aSDDS, 18LL);
    core::result::Result<T,E>::unwrap(v116, &v79, &off_269238);
    regex::regex::string::Regex::captures_at(&v86, v116, v96, v84);
    if ( v86.m256i_i32[0] == 2 )
    {
      v27 = 1LL;
    }
    else
    {
      v82 = v89;
      v81 = v88;
      v80 = v87;
      v79 = v86;
      uu_pr::build_options::{{closure}}(&v90, &v79);
      v28 = *((_QWORD *)&v90 + 1);
      v29 = v90;
      v119 = v91;
      if ( (_QWORD)v90 == 0x8000000000000005LL )
      {
        v27 = *((_QWORD *)&v90 + 1);
      }
      else
      {
        v27 = 1LL;
        if ( (_QWORD)v90 != 0x8000000000000006LL )
        {
          v30 = v119;
LABEL_98:
          *(_OWORD *)(v8 + 3) = v30;
          v8[1] = v29;
          goto LABEL_99;
        }
      }
    }
    v31 = v116;
    regex::regex::string::Regex::captures_at(&v86, v116, v96, v84);
    if ( v86.m256i_i32[0] == 2 )
    {
      v32 = 0LL;
    }
    else
    {
      v82 = v89;
      v81 = v88;
      v80 = v87;
      v79 = v86;
      v32 = uu_pr::build_options::{{closure}}(&v79);
      v31 = v33;
    }
    v34 = core::option::Option<T>::filter(v32, v31);
    if ( v34 )
    {
      uu_pr::build_options::{{closure}}(&v79, v34);
      v92 = v79.m256i_u64[1];
      v35 = v79.m256i_i64[0];
      v120 = *(_OWORD *)&v79.m256i_u64[2];
      if ( v79.m256i_i64[0] == 0x8000000000000005LL )
      {
        v85 = 1LL;
        goto LABEL_46;
      }
      if ( v79.m256i_i64[0] != 0x8000000000000006LL )
      {
        *(_OWORD *)(v8 + 3) = v120;
        v8[1] = v35;
        v28 = v92;
LABEL_99:
        v8[2] = v28;
        goto LABEL_100;
      }
    }
    v85 = 0LL;
LABEL_46:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v79);
    v36 = clap_builder::parser::error::MatchesError::unwrap(aPages, 5LL, &v79);
    if ( v36 )
    {
      uu_pr::build_options::{{closure}}(&v79, *(_QWORD *)(v36 + 8), *(_QWORD *)(v36 + 16));
      v90 = *(_OWORD *)&v79.m256i_u64[1];
      if ( v79.m256i_i64[0] != 0x8000000000000000LL )
      {
        *(_OWORD *)&v86.m256i_u64[1] = v90;
        v86.m256i_i64[0] = v79.m256i_i64[0];
        core::ops::function::FnOnce::call_once(&v79, v7, &v86);
        v28 = v79.m256i_i64[1];
        v29 = v79.m256i_i64[0];
        v121 = *(_OWORD *)&v79.m256i_u64[2];
        if ( v79.m256i_i64[0] == 0x8000000000000005LL )
        {
          v27 = v79.m256i_u64[1];
        }
        else if ( v79.m256i_i64[0] != 0x8000000000000006LL )
        {
          v30 = v121;
          goto LABEL_98;
        }
      }
    }
    v102 = v27;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v79);
    v37 = clap_builder::parser::error::MatchesError::unwrap(aPages, 5LL, &v79);
    v38 = core::option::Option<T>::filter(v37);
    if ( v38 )
    {
      uu_pr::build_options::{{closure}}(&v79, *(_QWORD *)(v38 + 8), *(_QWORD *)(v38 + 16));
      v90 = *(_OWORD *)&v79.m256i_u64[1];
      if ( v79.m256i_i64[0] != 0x8000000000000000LL )
      {
        *(_OWORD *)&v86.m256i_u64[1] = v90;
        v86.m256i_i64[0] = v79.m256i_i64[0];
        core::ops::function::FnOnce::call_once(&v79, v7, &v86);
        v28 = v79.m256i_i64[1];
        v29 = v79.m256i_i64[0];
        v122 = *(_OWORD *)&v79.m256i_u64[2];
        if ( v79.m256i_i64[0] == 0x8000000000000005LL )
        {
          v85 = 1LL;
          v92 = v79.m256i_u64[1];
          *(_QWORD *)&v90 = v79.m256i_i64[1];
          if ( v27 > v79.m256i_i64[1] )
          {
LABEL_59:
            v86.m256i_i64[0] = (__int64)&v102;
            v86.m256i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            v86.m256i_i64[2] = (__int64)&v90;
            v86.m256i_i64[3] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            v79.m256i_i64[0] = (__int64)&off_2691D8;
            v79.m256i_i64[1] = 3LL;
            *(_QWORD *)&v80 = 0LL;
            v79.m256i_i64[2] = (__int64)&v86;
            v79.m256i_i64[3] = 2LL;
            core::option::Option<T>::map_or_else(&v125, &v79);
            v8[4] = v126;
            *((_OWORD *)v8 + 1) = v125;
            v8[1] = 0x8000000000000001LL;
LABEL_100:
            *v8 = 2LL;
LABEL_116:
            core::ptr::drop_in_place<regex::regex::string::Regex>(v116);
            core::ptr::drop_in_place<alloc::string::String>(&v110);
            core::ptr::drop_in_place<alloc::string::String>(&v103);
            core::ptr::drop_in_place<alloc::string::String>(&v99);
            core::ptr::drop_in_place<core::option::Option<uu_pr::NumberingMode>>(v107);
            goto LABEL_117;
          }
LABEL_61:
          uu_pr::parse_usize(&v86, v7, (__int64)aLength, 6LL);
          v39 = 3LL * (flag ^ 1u) + 63;
          v79.m256i_i64[1] = v39;
          v79.m256i_i64[0] = 0x8000000000000005LL;
          v40 = v86.m256i_i64[0];
          if ( v86.m256i_i64[0] == 0x8000000000000006LL )
            goto LABEL_62;
          v39 = v86.m256i_u64[1];
          v90 = *(_OWORD *)&v86.m256i_u64[2];
          core::ptr::drop_in_place<core::result::Result<usize,uu_pr::PrError>>(&v79);
          if ( v40 != 0x8000000000000005LL )
          {
            *(_OWORD *)(v8 + 3) = v90;
            v8[1] = v40;
            v8[2] = v39;
            goto LABEL_100;
          }
          if ( v39 >= 0xA )
          {
LABEL_62:
            v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v7, aOmitHeader, 11LL);
            v42 = v41;
            LOBYTE(v42) = v41 ^ 1;
            v39 -= 10LL;
          }
          else
          {
            v42 = 0LL;
          }
          if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v7, aFormFeed, 9LL) )
          {
            v43 = (_BYTE *)alloc::alloc::Global::alloc_impl(1LL, 1LL);
            if ( !v43 )
              alloc::alloc::handle_alloc_error(1LL, 1LL);
            *v43 = 12;
            v117[0] = 1LL;
            v117[1] = v43;
            v117[2] = 1LL;
            alloc::string::String::from_utf8(&v79, v117);
            core::result::Result<T,E>::unwrap(&v105, &v79, &off_269250);
          }
          else
          {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v79, asc_581EA, 1LL);
            v106 = v79.m256i_i64[2];
            v105 = *(_OWORD *)v79.m256i_i8;
          }
          v75 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v7, aAcross, 6LL);
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v79);
          v44 = clap_builder::parser::error::MatchesError::unwrap(aSepString, 10LL, &v79);
          v109 = v39;
          v98 = v42;
          if ( (v44
             || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v79),
                 (v44 = clap_builder::parser::error::MatchesError::unwrap(aSeparator, 9LL, &v79)) != 0))
            && (<alloc::string::String as core::clone::Clone>::clone(&v79, v44),
                v45 = v79.m256i_i32[0],
                *(_OWORD *)v86.m256i_i8 = *(_OWORD *)&v79.m256i_u64[1],
                v79.m256i_i64[0] != 0x8000000000000000LL) )
          {
            *(_OWORD *)&v101[8] = *(_OWORD *)v86.m256i_i8;
            *(_QWORD *)v101 = v79.m256i_i64[0];
          }
          else
          {
            LODWORD(v90) = 0;
            v46 = core::char::methods::encode_utf8_raw(9LL, &v90);
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v79, v46, 1LL);
            v45 = v79.m256i_i32[4];
            *(_QWORD *)&v101[16] = v79.m256i_i64[2];
            *(_OWORD *)v101 = *(_OWORD *)v79.m256i_i8;
          }
          LOBYTE(v45) = 1;
          v77 = v45;
          v47 = v7;
          v48 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v7, aWidth, 5LL);
          v49 = 72LL;
          if ( v48 )
          {
            v49 = 72LL;
            if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                                    v47,
                                    aSeparator,
                                    9LL) )
              v49 = 512LL;
          }
          uu_pr::parse_usize(&v86, v47, (__int64)aWidth, 5LL);
          v79.m256i_i64[1] = v49;
          v79.m256i_i64[0] = 0x8000000000000005LL;
          v50 = v86.m256i_i64[0];
          if ( v86.m256i_i64[0] != 0x8000000000000006LL )
          {
            v49 = v86.m256i_i64[1];
            v90 = *(_OWORD *)&v86.m256i_u64[2];
            core::ptr::drop_in_place<core::result::Result<usize,uu_pr::PrError>>(&v79);
            if ( v50 != 0x8000000000000005LL )
            {
              v57 = (_QWORD *)v83;
              *(_OWORD *)(v83 + 24) = v90;
              v57[1] = v50;
              v8 = v57;
              v57[2] = v49;
              *v57 = 2LL;
              goto LABEL_114;
            }
          }
          v97 = v49;
          if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v47, aJoinLines, 10LL)
            || (uu_pr::parse_usize(&v79, v47, (__int64)aPageWidth, 10LL),
                v51 = v79.m256i_i64[0],
                v79.m256i_i64[0] == 0x8000000000000006LL) )
          {
            v95 = 0LL;
          }
          else
          {
            v50 = v79.m256i_i64[1];
            v95 = 1LL;
            if ( v79.m256i_i64[0] != 0x8000000000000005LL )
            {
              v64 = v79.m256i_i64[1];
              v8 = (_QWORD *)v83;
              *(_OWORD *)(v83 + 24) = *(_OWORD *)&v79.m256i_u64[2];
              v8[1] = v51;
              v8[2] = v64;
              *v8 = 2LL;
              goto LABEL_114;
            }
          }
          regex::regex::string::Regex::new(&v79, aSDS, 12LL);
          LOBYTE(v42) = 1;
          core::result::Result<T,E>::unwrap(v118, &v79, &off_269268);
          regex::regex::string::Regex::captures_at(&v86, v118, v96, v84);
          if ( v86.m256i_i32[0] != 2 )
          {
            v82 = v89;
            v81 = v88;
            v80 = v87;
            v79 = v86;
            uu_pr::build_options::{{closure}}(&v90, &v79);
            v42 = *((_QWORD *)&v90 + 1);
            v52 = v90;
            v123 = v91;
            if ( (_QWORD)v90 == 0x8000000000000005LL )
            {
              v53 = 1;
              goto LABEL_87;
            }
            if ( (_QWORD)v90 != 0x8000000000000006LL )
            {
              v65 = v123;
              v54 = v83;
              goto LABEL_111;
            }
          }
          v53 = 0;
LABEL_87:
          uu_pr::parse_usize(&v79, v47, (__int64)aColumn, 6LL);
          v52 = v79.m256i_i64[0];
          if ( v79.m256i_i64[0] == 0x8000000000000006LL )
          {
            v86.m256i_i64[3] = (__int64)&v97;
            *(_OWORD *)v86.m256i_i8 = *(_OWORD *)v101;
            v86.m256i_i64[2] = *(_QWORD *)&v101[16];
            *(_QWORD *)&v87 = &v75;
            if ( !v53 )
            {
              v84 = v50;
              v79.m256i_i64[0] = 0x8000000000000000LL;
              core::ptr::drop_in_place<uu_pr::NumberingMode>(&v86);
LABEL_94:
              uu_pr::parse_usize(&v90, v47, (__int64)aIndent, 6LL);
              *(_OWORD *)v86.m256i_i8 = 0x8000000000000005LL;
              v55 = v90;
              if ( (_QWORD)v90 == 0x8000000000000006LL )
              {
                v56 = 0LL;
LABEL_102:
                alloc::slice::<impl [T]>::repeat(&v86, asc_58296, v56);
                v113 = v86.m256i_i64[2];
                v112 = *(_OWORD *)v86.m256i_i8;
                v58 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v47, aJoinLines, 10LL);
                v59 = v83;
                v60 = v109;
                v61 = v58;
                v62 = v76;
                if ( v79.m256i_i64[0] == 0x8000000000000000LL
                  || (<alloc::string::String as core::clone::Clone>::clone(&v86, &v79),
                      v90 = *(_OWORD *)&v86.m256i_u64[1],
                      v86.m256i_i64[0] == 0x8000000000000000LL) )
                {
                  uu_pr::build_options::{{closure}}(&v86, v62);
                  if ( v61 )
                  {
LABEL_105:
                    v63 = 0LL;
LABEL_129:
                    *(_QWORD *)(v59 + 248) = v108;
                    v70 = v107[0];
                    *(_OWORD *)(v59 + 232) = v107[1];
                    *(_OWORD *)(v59 + 216) = v70;
                    *(_QWORD *)(v59 + 64) = v115;
                    *(_OWORD *)(v59 + 48) = v114;
                    *(_QWORD *)(v59 + 88) = v104;
                    *(_OWORD *)(v59 + 72) = v103;
                    *(_QWORD *)(v59 + 112) = v100;
                    *(_OWORD *)(v59 + 96) = v99;
                    *(_OWORD *)(v59 + 120) = v110;
                    *(_QWORD *)(v59 + 136) = v111;
                    v71 = v102;
                    *(_OWORD *)(v59 + 144) = v105;
                    *(_QWORD *)(v59 + 160) = v106;
                    v72 = *(_OWORD *)&v79.m256i_u64[2];
                    v73 = v80;
                    *(_OWORD *)(v59 + 256) = *(_OWORD *)v79.m256i_i8;
                    *(_OWORD *)(v59 + 272) = v72;
                    *(_OWORD *)(v59 + 288) = v73;
                    *(_OWORD *)(v59 + 168) = v112;
                    *(_QWORD *)(v59 + 184) = v113;
                    *(_OWORD *)(v59 + 192) = *(_OWORD *)v86.m256i_i8;
                    *(_QWORD *)(v59 + 208) = v86.m256i_i64[2];
                    *(_QWORD *)v59 = v85;
                    *(_QWORD *)(v59 + 8) = v92;
                    *(_QWORD *)(v59 + 16) = v62;
                    *(_QWORD *)(v59 + 24) = v94;
                    *(_QWORD *)(v59 + 32) = v63;
                    *(_QWORD *)(v59 + 40) = v84;
                    *(_QWORD *)(v59 + 304) = v71;
                    *(_QWORD *)(v59 + 312) = v60;
                    *(_BYTE *)(v59 + 320) = v93;
                    *(_BYTE *)(v59 + 321) = v98;
                    *(_BYTE *)(v59 + 322) = flag;
                    *(_BYTE *)(v59 + 323) = v61;
                    v77 = 0;
                    core::ptr::drop_in_place<regex::regex::string::Regex>(v118);
                    v78 = 0;
                    core::ptr::drop_in_place<regex::regex::string::Regex>(v116);
                    return (_QWORD *)v83;
                  }
                }
                else
                {
                  *(_OWORD *)&v86.m256i_u64[1] = v90;
                  if ( v61 )
                    goto LABEL_105;
                }
                if ( v79.m256i_i64[0] == 0x8000000000000000LL )
                  v69 = 0LL;
                else
                  v69 = v80;
                if ( v62 )
                  v69 = v94;
                v63 = v95;
                if ( v69 >= 2 )
                {
                  v84 = 72LL;
                  if ( v79.m256i_i64[0] != 0x8000000000000000LL )
                    v84 = v79.m256i_i64[3];
                  v63 = 1LL;
                }
                goto LABEL_129;
              }
              v56 = *((_QWORD *)&v90 + 1);
              v124 = v91;
              core::ptr::drop_in_place<core::result::Result<usize,uu_pr::PrError>>(&v86);
              if ( v55 == 0x8000000000000005LL )
                goto LABEL_102;
              v67 = (_QWORD *)v83;
              *(_OWORD *)(v83 + 24) = v124;
              v67[1] = v55;
              v67[2] = v56;
              *v67 = 2LL;
              core::ptr::drop_in_place<core::option::Option<uu_pr::ColumnModeOptions>>(&v79);
              v66 = 0;
LABEL_113:
              core::ptr::drop_in_place<regex::regex::string::Regex>(v118);
              v8 = (_QWORD *)v83;
              if ( !v66 )
              {
LABEL_115:
                core::ptr::drop_in_place<alloc::string::String>(&v105);
                goto LABEL_116;
              }
LABEL_114:
              core::ptr::drop_in_place<alloc::string::String>(v101);
              goto LABEL_115;
            }
LABEL_93:
            v84 = v50;
            v79.m256i_i64[2] = v86.m256i_i64[2];
            *(_OWORD *)v79.m256i_i8 = *(_OWORD *)v86.m256i_i8;
            v79.m256i_i64[3] = v97;
            *(_QWORD *)&v80 = v42;
            BYTE8(v80) = v75;
            goto LABEL_94;
          }
          v42 = v79.m256i_i64[1];
          v54 = v83;
          if ( v79.m256i_i64[0] == 0x8000000000000005LL )
          {
            v86.m256i_i64[3] = (__int64)&v97;
            *(_OWORD *)v86.m256i_i8 = *(_OWORD *)v101;
            v86.m256i_i64[2] = *(_QWORD *)&v101[16];
            goto LABEL_93;
          }
          v65 = *(_OWORD *)&v79.m256i_u64[2];
LABEL_111:
          *(_OWORD *)(v54 + 24) = v65;
          *(_QWORD *)(v54 + 8) = v52;
          *(_QWORD *)(v54 + 16) = v42;
          *(_QWORD *)v54 = 2LL;
          v66 = 1;
          goto LABEL_113;
        }
        if ( v79.m256i_i64[0] != 0x8000000000000006LL )
        {
          v30 = v122;
          goto LABEL_98;
        }
      }
    }
    if ( v85 )
    {
      *(_QWORD *)&v90 = v92;
      if ( v27 > v92 )
        goto LABEL_59;
    }
    goto LABEL_61;
  }
  v9 = aCannotSpecifyN;
  v10 = 58LL;
LABEL_6:
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v79, v9, v10);
  *(_QWORD *)(a1 + 8) = 0x8000000000000001LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)v79.m256i_i8;
  *(_QWORD *)(a1 + 32) = v79.m256i_i64[2];
  *(_QWORD *)a1 = 2LL;
  return v8;
}