__int64 __fastcall uu_sort::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // bl
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r14
  __int128 v24; // rax
  __int128 v25; // xmm0
  _BYTE *v26; // rbx
  __int128 v27; // rax
  __int64 v28; // rax
  __int128 v29; // xmm0
  bool v30; // zf
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // r15
  __int128 v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // r14
  char *v38; // r14
  __int64 v39; // r15
  unsigned __int8 v40; // al
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rsi
  __m256i v48; // [rsp+0h] [rbp-618h] BYREF
  __int128 v49; // [rsp+20h] [rbp-5F8h]
  __int128 v50; // [rsp+30h] [rbp-5E8h]
  __m256i v51; // [rsp+40h] [rbp-5D8h] BYREF
  __int128 v52; // [rsp+60h] [rbp-5B8h]
  __int64 v53; // [rsp+70h] [rbp-5A8h]
  __m256i v54; // [rsp+80h] [rbp-598h] BYREF
  _BYTE v55[23]; // [rsp+A0h] [rbp-578h]
  char v56; // [rsp+B7h] [rbp-561h]
  _BYTE v57[24]; // [rsp+C0h] [rbp-558h] BYREF
  __int64 v58; // [rsp+D8h] [rbp-540h] BYREF
  __int128 v59; // [rsp+E0h] [rbp-538h]
  __int128 v60; // [rsp+F0h] [rbp-528h] BYREF
  __int64 v61; // [rsp+100h] [rbp-518h]
  __int128 v62; // [rsp+108h] [rbp-510h] BYREF
  __int64 v63; // [rsp+118h] [rbp-500h]
  _QWORD v64[2]; // [rsp+120h] [rbp-4F8h] BYREF
  __int128 v65; // [rsp+130h] [rbp-4E8h] BYREF
  __int128 v66; // [rsp+140h] [rbp-4D8h]
  unsigned __int64 v67; // [rsp+150h] [rbp-4C8h] BYREF
  __int128 v68; // [rsp+158h] [rbp-4C0h]
  _BYTE v69[25]; // [rsp+168h] [rbp-4B0h] BYREF
  __int64 v70; // [rsp+188h] [rbp-490h]
  __int64 v71; // [rsp+190h] [rbp-488h]
  int v72; // [rsp+198h] [rbp-480h]
  __int64 v73; // [rsp+19Ch] [rbp-47Ch]
  int v74; // [rsp+1A4h] [rbp-474h]
  __int128 v75; // [rsp+1A8h] [rbp-470h]
  unsigned int v76; // [rsp+1B8h] [rbp-460h]
  _BYTE v77[48]; // [rsp+1C0h] [rbp-458h] BYREF
  __int64 v78; // [rsp+200h] [rbp-418h]
  _QWORD v79[2]; // [rsp+208h] [rbp-410h] BYREF
  __int64 v80; // [rsp+218h] [rbp-400h] BYREF
  __m256i v81; // [rsp+220h] [rbp-3F8h] BYREF
  __int128 v82; // [rsp+240h] [rbp-3D8h]
  __int128 v83; // [rsp+250h] [rbp-3C8h]
  __int128 v84; // [rsp+260h] [rbp-3B8h]
  __int128 v85; // [rsp+270h] [rbp-3A8h]
  __int64 v86; // [rsp+280h] [rbp-398h]
  char v87; // [rsp+288h] [rbp-390h]
  __int128 v88; // [rsp+4E8h] [rbp-130h] BYREF
  __int64 v89; // [rsp+4F8h] [rbp-120h]
  __int128 v90; // [rsp+500h] [rbp-118h] BYREF
  __int64 v91; // [rsp+510h] [rbp-108h]
  __int128 v92; // [rsp+518h] [rbp-100h] BYREF
  __int64 v93; // [rsp+528h] [rbp-F0h]
  __m256i v94; // [rsp+530h] [rbp-E8h] BYREF
  _BYTE v95[23]; // [rsp+550h] [rbp-C8h]
  char v96; // [rsp+567h] [rbp-B1h]
  _OWORD v97[3]; // [rsp+568h] [rbp-B0h] BYREF
  __int64 v98; // [rsp+598h] [rbp-80h]
  __int128 v99; // [rsp+5A0h] [rbp-78h]
  __int64 v100; // [rsp+5B0h] [rbp-68h]
  _BYTE v101[24]; // [rsp+5B8h] [rbp-60h] BYREF
  _BYTE v102[72]; // [rsp+5D0h] [rbp-48h] BYREF

  LOWORD(v76) = 2566;
  v73 = 0LL;
  v74 = 0;
  v64[0] = 0LL;
  v64[1] = 8LL;
  v65 = 0LL;
  v72 = 1114112;
  v66 = 1uLL;
  v70 = 1000000000LL;
  v67 = 0x8000000000000000LL;
  v71 = 32LL;
  memset(v69, 0, sizeof(v69));
  uu_sort::uu_app(&v81);
  clap_builder::builder::command::Command::try_get_matches_from(&v48, &v81, a1, a2);
  if ( v48.m256i_i64[0] != 0x8000000000000000LL )
  {
    v53 = v50;
    v52 = v49;
    v51 = v48;
    LOBYTE(v73) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v51, aDebug, 5LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v51, aFiles0From, 11LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v81, &v51, aFiles0From, 11LL);
      clap_builder::parser::error::MatchesError::unwrap(&v48, aFiles0From, 11LL, &v81);
      if ( v48.m256i_i64[0]
        && (v83 = v50,
            v82 = v49,
            v81 = v48,
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v77, &v81),
            *(_OWORD *)v81.m256i_i8 = *(_OWORD *)&v77[8],
            *(_QWORD *)v77 != 0x8000000000000000LL) )
      {
        v59 = *(_OWORD *)v81.m256i_i8;
        v58 = *(_QWORD *)v77;
        v5 = v81.m256i_i64[1];
        v4 = v81.m256i_i64[0];
      }
      else
      {
        v58 = 0LL;
        v59 = 8uLL;
        v4 = 8LL;
        v5 = 0LL;
      }
      *(_QWORD *)&v60 = 0LL;
      *((_QWORD *)&v60 + 1) = 8LL;
      v61 = 0LL;
      v79[0] = v4;
      v79[1] = v4 + 24 * v5;
      v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v79);
      if ( v6 )
      {
        v78 = 0x8000000000000001LL;
        while ( 1 )
        {
          uu_sort::open(&v81, v6);
          if ( v81.m256i_i64[0] )
            break;
          std::io::buffered::bufreader::BufReader<R>::with_capacity(v97, 0x2000LL, v81.m256i_i64[1], v81.m256i_i64[2]);
          v86 = v98;
          v85 = v97[2];
          v84 = v97[1];
          v83 = v97[0];
          v81.m256i_i64[0] = v78;
          v81.m256i_i64[3] = v78;
          v87 = 0;
          while ( 1 )
          {
            <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(
              &v62,
              &v81);
            if ( (_QWORD)v62 == 0x8000000000000000LL )
              break;
            v54.m256i_i64[2] = v63;
            *(_OWORD *)v54.m256i_i8 = v62;
            core::str::converts::from_utf8(&v48, *((_QWORD *)&v62 + 1));
            v7 = core::result::Result<T,E>::expect(&v48);
            std::sys::os_str::bytes::Slice::to_owned(&v48, v7);
            *(_QWORD *)&v77[16] = v48.m256i_i64[2];
            *(_OWORD *)v77 = *(_OWORD *)v48.m256i_i8;
            alloc::vec::Vec<T,A>::push(&v60, v77);
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v54);
          }
          core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<std::io::Split<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>>>>(&v81);
          v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v79);
          if ( !v6 )
            goto LABEL_20;
        }
        v3 = v81.m256i_i64[1];
        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v60);
        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v58);
        goto LABEL_108;
      }
LABEL_20:
      *(_OWORD *)v57 = v60;
      *(_QWORD *)&v57[16] = v61;
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v58);
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v81, &v51, aFiles, 5LL);
      clap_builder::parser::error::MatchesError::unwrap(&v48, aFiles, 5LL, &v81);
      if ( v48.m256i_i64[0]
        && (v83 = v50,
            v82 = v49,
            v81 = v48,
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v77, &v81),
            *(_OWORD *)v81.m256i_i8 = *(_OWORD *)&v77[8],
            *(_QWORD *)v77 != 0x8000000000000000LL) )
      {
        *(_OWORD *)&v57[8] = *(_OWORD *)v81.m256i_i8;
        *(_QWORD *)v57 = *(_QWORD *)v77;
      }
      else
      {
        *(_QWORD *)v57 = 0LL;
        *(_QWORD *)&v57[8] = 8LL;
        *(_QWORD *)&v57[16] = 0LL;
      }
    }
    v8 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v51, aHumanNumericSo, 18LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aSort, 4LL);
      v9 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v81);
      if ( !v9
        || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                               *(_QWORD *)(v9 + 8),
                               *(_QWORD *)(v9 + 16),
                               aHumanNumeric,
                               13LL) )
      {
        v8 = 3;
        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v51, aMonthSort, 10LL) )
        {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aSort, 4LL);
          v10 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v81);
          if ( !v10
            || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                   *(_QWORD *)(v10 + 8),
                                   *(_QWORD *)(v10 + 16),
                                   aMonth,
                                   5LL) )
          {
            v8 = 2;
            if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                     &v51,
                                     aGeneralNumeric,
                                     20LL) )
            {
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aSort, 4LL);
              v11 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v81);
              if ( !v11
                || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                       *(_QWORD *)(v11 + 8),
                                       *(_QWORD *)(v11 + 16),
                                       aGeneralNumeric_0,
                                       15LL) )
              {
                if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                        &v51,
                                        aNumericSort,
                                        12LL)
                  || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aSort, 4LL),
                      (v12 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v81)) != 0)
                  && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                        *(_QWORD *)(v12 + 8),
                                        *(_QWORD *)(v12 + 16),
                                        aNumeric,
                                        7LL) )
                {
                  v8 = 0;
                }
                else
                {
                  v8 = 4;
                  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                           &v51,
                                           aVersionSort,
                                           12LL) )
                  {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aSort, 4LL);
                    v13 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v81);
                    if ( !v13
                      || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                             *(_QWORD *)(v13 + 8),
                                             *(_QWORD *)(v13 + 16),
                                             aVersion,
                                             7LL) )
                    {
                      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                              &v51,
                                              aRandomSort,
                                              11LL)
                        || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aSort, 4LL),
                            v14 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v81),
                            v8 = 6,
                            v14)
                        && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                              *(_QWORD *)(v14 + 8),
                                              *(_QWORD *)(v14 + 16),
                                              aRandom,
                                              6LL) )
                      {
                        uu_sort::get_rand_string((__int64)&v81);
                        v75 = *(_OWORD *)v81.m256i_i8;
                        HIBYTE(v74) = 1;
                        v8 = 5;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    LOBYTE(v76) = v8;
    BYTE3(v73) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v51, aDictionaryOrde, 16LL);
    BYTE4(v73) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v51, aIgnoreNonprint, 18LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v51, aParallel, 8LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aParallel, 8LL);
      v15 = clap_builder::parser::error::MatchesError::unwrap(aParallel, 8LL, &v81);
      if ( v15
        && (core::ops::function::FnOnce::call_once(&v81, v15),
            v16 = v81.m256i_i64[0],
            *(_OWORD *)v48.m256i_i8 = *(_OWORD *)&v81.m256i_u64[1],
            v81.m256i_i64[0] != 0x8000000000000000LL) )
      {
        v17 = *(_OWORD *)v48.m256i_i8;
      }
      else
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v81, a0_0, 1LL);
        v16 = v81.m256i_i64[0];
        v17 = *(_OWORD *)&v81.m256i_u64[1];
      }
      *(_OWORD *)v77 = v17;
      core::ptr::drop_in_place<alloc::string::String>((char *)&v65 + 8);
      *((_QWORD *)&v65 + 1) = v16;
      v66 = *(_OWORD *)v77;
      std::env::set_var(aRayonNumThread, 17LL, (char *)&v65 + 8);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aBufferSize, 11LL);
    v18 = clap_builder::parser::error::MatchesError::unwrap(aBufferSize, 11LL, &v81);
    v81.m256i_i64[1] = 1000000000LL;
    v81.m256i_i64[0] = 0LL;
    core::option::Option<T>::map_or(&v48, v18, &v81);
    v3 = v48.m256i_i64[0];
    if ( v48.m256i_i64[0] )
    {
LABEL_107:
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v57);
LABEL_108:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v51);
      goto LABEL_109;
    }
    v70 = v48.m256i_i64[1];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aTemporaryDirec, 19LL);
    v19 = clap_builder::parser::error::MatchesError::unwrap(aTemporaryDirec, 19LL, &v81);
    if ( v19
      && (core::ops::function::FnOnce::call_once(&v81, *(_QWORD *)(v19 + 8), *(_QWORD *)(v19 + 16)),
          *(_OWORD *)v48.m256i_i8 = *(_OWORD *)&v81.m256i_u64[1],
          v81.m256i_i64[0] != 0x8000000000000000LL) )
    {
      *(_OWORD *)&v81.m256i_u64[1] = *(_OWORD *)v48.m256i_i8;
    }
    else
    {
      core::ops::function::FnOnce::call_once(&v81);
    }
    uu_sort::tmp_dir::TmpDirWrapper::new((__int64)v77, (__int128 *)v81.m256i_i8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aCompressProgra, 16LL);
    v20 = clap_builder::parser::error::MatchesError::unwrap(aCompressProgra, 16LL, &v81);
    v21 = 0x8000000000000000LL;
    if ( v20 )
    {
      core::ops::function::FnOnce::call_once(&v81, v20);
      v21 = v81.m256i_i64[0];
      *(_OWORD *)v48.m256i_i8 = *(_OWORD *)&v81.m256i_u64[1];
    }
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v67);
    v67 = v21;
    v68 = *(_OWORD *)v48.m256i_i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aBatchSize, 10LL);
    v22 = clap_builder::parser::error::MatchesError::unwrap(aBatchSize, 10LL, &v81);
    v23 = v22;
    if ( v22 )
    {
      v80 = v22;
      core::num::<impl core::str::traits::FromStr for usize>::from_str(
        &v62,
        *(_QWORD *)(v22 + 8),
        *(_QWORD *)(v22 + 16));
      if ( (_BYTE)v62 )
      {
        if ( BYTE1(v62) == 2 )
        {
          *(_QWORD *)&v24 = uucore::util_name();
          *(_OWORD *)v48.m256i_i8 = v24;
          v54.m256i_i64[0] = (__int64)&v48;
          v54.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          v81.m256i_i64[0] = (__int64)&unk_1FC050;
          v81.m256i_i64[1] = 2LL;
          *(_QWORD *)&v82 = 0LL;
          v81.m256i_i64[2] = (__int64)&v54;
          v81.m256i_i64[3] = 1LL;
          std::io::stdio::_eprint(&v81);
          v25 = *(_OWORD *)(v23 + 8);
          v48.m256i_i64[0] = 0LL;
          *(_OWORD *)&v48.m256i_u64[1] = v25;
          v48.m256i_i8[24] = 1;
          v54.m256i_i64[0] = (__int64)&v48;
          v54.m256i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
          v81.m256i_i64[0] = (__int64)&off_1FC0E8;
          v81.m256i_i64[1] = 2LL;
          *(_QWORD *)&v82 = 0LL;
          v81.m256i_i64[2] = (__int64)&v54;
          v81.m256i_i64[3] = 1LL;
          std::io::stdio::_eprint(&v81);
          uu_sort::get_rlimit(v48.m256i_i64);
          v3 = v48.m256i_i64[0];
          if ( v48.m256i_i64[0] )
          {
LABEL_106:
            core::ptr::drop_in_place<uu_sort::tmp_dir::TmpDirWrapper>(v77);
            goto LABEL_107;
          }
          *(_QWORD *)&v60 = v48.m256i_i64[1];
          v54.m256i_i64[0] = (__int64)&v60;
          v54.m256i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v81.m256i_i64[0] = (__int64)&off_1FC108;
          v81.m256i_i64[1] = 1LL;
          *(_QWORD *)&v82 = 0LL;
          v81.m256i_i64[2] = (__int64)&v54;
          v81.m256i_i64[3] = 1LL;
          v26 = v101;
          core::option::Option<T>::map_or_else(v101, &v81);
        }
        else
        {
          v29 = *(_OWORD *)(v23 + 8);
          v48.m256i_i64[0] = 0LL;
          *(_OWORD *)&v48.m256i_u64[1] = v29;
          v48.m256i_i8[24] = 1;
          v54.m256i_i64[0] = (__int64)&v48;
          v54.m256i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
          v81.m256i_i64[0] = (__int64)&off_1FC118;
          v81.m256i_i64[1] = 1LL;
          *(_QWORD *)&v82 = 0LL;
          v81.m256i_i64[2] = (__int64)&v54;
          v81.m256i_i64[3] = 1LL;
          v26 = v102;
          core::option::Option<T>::map_or_else(v102, &v81);
        }
        v100 = *((_QWORD *)v26 + 2);
        v99 = *(_OWORD *)v26;
        v81.m256i_i32[6] = 2;
        *(_OWORD *)v81.m256i_i8 = v99;
        v81.m256i_i64[2] = v100;
        v28 = alloc::boxed::Box<T>::new(&v81);
LABEL_105:
        v3 = v28;
        goto LABEL_106;
      }
      if ( *((_QWORD *)&v62 + 1) < 2uLL )
      {
        *(_QWORD *)&v27 = uucore::util_name();
        *(_OWORD *)v48.m256i_i8 = v27;
        v54.m256i_i64[0] = (__int64)&v48;
        v54.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        v81.m256i_i64[0] = (__int64)&unk_1FC050;
        v81.m256i_i64[1] = 2LL;
        *(_QWORD *)&v82 = 0LL;
        v81.m256i_i64[2] = (__int64)&v54;
        v81.m256i_i64[3] = 1LL;
        std::io::stdio::_eprint(&v81);
        v48.m256i_i64[0] = (__int64)&v80;
        v48.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        v81.m256i_i64[0] = (__int64)&off_1FC0C8;
        v81.m256i_i64[1] = 2LL;
        *(_QWORD *)&v82 = 0LL;
        v81.m256i_i64[2] = (__int64)&v48;
        v81.m256i_i64[3] = 1LL;
        std::io::stdio::_eprint(&v81);
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v48, aMinimumBatchSi, 36LL);
        v81.m256i_i64[2] = v48.m256i_i64[2];
        *(_OWORD *)v81.m256i_i8 = *(_OWORD *)v48.m256i_i8;
        v81.m256i_i32[6] = 2;
        v28 = alloc::boxed::Box<T>::new(&v81);
        goto LABEL_105;
      }
      v71 = *((_QWORD *)&v62 + 1);
    }
    v30 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v51, aZeroTerminated, 15LL) == 0;
    v31 = 10;
    if ( !v30 )
      v31 = 0;
    BYTE1(v76) = v31;
    BYTE5(v73) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v51, aMerge, 5LL);
    BYTE1(v74) = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v51, aCheck, 5LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v51, aCheckSilent, 12LL)
      || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aCheck, 5LL),
          (v32 = clap_builder::parser::error::MatchesError::unwrap(aCheck, 5LL, &v81)) != 0)
      && ((v33 = *(_QWORD *)(v32 + 8),
           v34 = *(_QWORD *)(v32 + 16),
           (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v34, aSilent, 6LL))
       || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v34, aQuiet, 5LL)) )
    {
      *(_WORD *)((char *)&v74 + 1) = 257;
    }
    BYTE2(v73) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v51, aIgnoreCase, 11LL);
    BYTE1(v73) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v51, aIgnoreLeadingB, 21LL);
    BYTE6(v73) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v51, aReverse, 7LL);
    HIBYTE(v73) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v51, aStable, 6LL);
    LOBYTE(v74) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v51, aUnique, 6LL);
    if ( *(_QWORD *)&v57[16] )
    {
      if ( *(_QWORD *)&v57[16] != 1LL && BYTE1(v74) )
      {
        v35 = *(_OWORD *)(*(_QWORD *)&v57[8] + 32LL);
        v48.m256i_i64[0] = 1LL;
        *(_OWORD *)&v48.m256i_u64[1] = v35;
        v48.m256i_i8[24] = 1;
        v54.m256i_i64[0] = (__int64)&v48;
        v54.m256i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
        v81.m256i_i64[0] = (__int64)&off_1FC128;
        v81.m256i_i64[1] = 2LL;
        *(_QWORD *)&v82 = 0LL;
        v81.m256i_i64[2] = (__int64)&v54;
        v81.m256i_i64[3] = 1LL;
        core::option::Option<T>::map_or_else(&v88, &v81);
        v81.m256i_i32[6] = 2;
        *(_OWORD *)v81.m256i_i8 = v88;
        v81.m256i_i64[2] = v89;
        v28 = alloc::boxed::Box<T>::new(&v81);
        goto LABEL_105;
      }
    }
    else
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v92, asc_2494D, 1LL);
      v81.m256i_i64[2] = v93;
      *(_OWORD *)v81.m256i_i8 = v92;
      alloc::vec::Vec<T,A>::push(v57, &v81);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aFieldSeparator, 15LL);
    v36 = clap_builder::parser::error::MatchesError::unwrap(aFieldSeparator, 15LL, &v81);
    v37 = v36;
    if ( v36 )
    {
      std::sys::os_str::bytes::Slice::to_str(&v81, *(_QWORD *)(v36 + 8), *(_QWORD *)(v36 + 16));
      if ( v81.m256i_i64[0] )
      {
        v28 = uu_sort::uumain::uumain::{{closure}}(*(_QWORD *)(v37 + 8), *(_QWORD *)(v37 + 16));
        goto LABEL_105;
      }
      v39 = v81.m256i_i64[2];
      v38 = (char *)v81.m256i_i64[1];
      v40 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v81.m256i_i64[1], v81.m256i_i64[2], a0_1, 2LL);
      if ( v40 )
        v38 = &byte_25069;
      if ( (v40 | (v39 == 1)) != 1 )
      {
        v48.m256i_i64[0] = 0LL;
        v48.m256i_i64[1] = (__int64)v38;
        v48.m256i_i64[2] = v39;
        v48.m256i_i8[24] = 1;
        v54.m256i_i64[0] = (__int64)&v48;
        v54.m256i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
        v81.m256i_i64[0] = (__int64)&off_1FC148;
        v81.m256i_i64[1] = 1LL;
        *(_QWORD *)&v82 = 0LL;
        v81.m256i_i64[2] = (__int64)&v54;
        v81.m256i_i64[3] = 1LL;
        core::option::Option<T>::map_or_else(&v90, &v81);
        v81.m256i_i32[6] = 2;
        *(_OWORD *)v81.m256i_i8 = v90;
        v81.m256i_i64[2] = v91;
        v28 = alloc::boxed::Box<T>::new(&v81);
        goto LABEL_105;
      }
      v81.m256i_i64[0] = (__int64)v38;
      v81.m256i_i64[1] = (__int64)(v38 + 1);
      if ( !(unsigned int)core::str::validations::next_code_point(&v81) || v41 == 1114112 )
        core::option::unwrap_failed(&off_1FC1E8);
      v72 = v41;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v81, &v51, aKey, 3LL);
    clap_builder::parser::error::MatchesError::unwrap(&v48, aKey, 3LL, &v81);
    if ( v48.m256i_i64[0] )
    {
      v83 = v50;
      v82 = v49;
      v81 = v48;
      while ( 1 )
      {
        v42 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v81);
        if ( !v42 )
          break;
        uu_sort::FieldSelector::parse((__int64)&v54, *(_QWORD *)(v42 + 8), *(_QWORD *)(v42 + 16), (__int64)v64);
        if ( v56 == 2 )
        {
          v3 = v54.m256i_i64[0];
          goto LABEL_106;
        }
        *(_QWORD *)&v95[15] = *(_QWORD *)&v55[15];
        *(_OWORD *)v95 = *(_OWORD *)v55;
        v94 = v54;
        v96 = v56;
        if ( v55[21] == 5 && !HIBYTE(v74) )
        {
          uu_sort::get_rand_string((__int64)&v54);
          v75 = *(_OWORD *)v54.m256i_i8;
          HIBYTE(v74) = 1;
        }
        alloc::vec::Vec<T,A>::push(v64, &v94);
      }
    }
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v51, aKey, 3LL) )
    {
      v54.m256i_i64[0] = 1LL;
      v54.m256i_i64[1] = 1LL;
      v54.m256i_i8[16] = BYTE1(v73);
      v48.m256i_i8[16] = 2;
      uu_sort::FieldSelector::new(
        (__int64)&v81,
        (__int128 *)v54.m256i_i8,
        (__int128 *)v48.m256i_i8,
        ((unsigned __int64)BYTE6(v73) << 32) | *(unsigned int *)((char *)&v73 + 1) | ((unsigned __int64)v76 << 40));
      core::result::Result<T,E>::unwrap(&v48, &v81);
      alloc::vec::Vec<T,A>::push(v64, &v48);
    }
    v48.m256i_i64[0] = *(_QWORD *)&v57[8];
    v48.m256i_i64[1] = *(_QWORD *)&v57[8] + 24LL * *(_QWORD *)&v57[16];
    while ( 1 )
    {
      v43 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v48);
      if ( !v43 )
        break;
      uu_sort::open(&v81, v43);
      v3 = v81.m256i_i64[1];
      if ( v81.m256i_i64[0] )
        goto LABEL_106;
      core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
        v81.m256i_i64[1],
        v81.m256i_i64[2]);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, &v51, aOutput, 6LL);
    v44 = clap_builder::parser::error::MatchesError::unwrap(aOutput, 6LL, &v81);
    if ( v44 )
    {
      v46 = *(_QWORD *)(v44 + 8);
      v45 = *(_QWORD *)(v44 + 16);
    }
    else
    {
      v46 = 0LL;
    }
    uu_sort::Output::new((__int64)&v48, v46, v45);
    v3 = v48.m256i_i64[1];
    if ( v48.m256i_i64[0] != 0x8000000000000001LL )
    {
      v54 = v48;
      uu_sort::GlobalSettings::init_precomputed((__int64)v64);
      v81 = v54;
      v3 = uu_sort::exec(*(__int64 *)&v57[8], *(unsigned __int64 *)&v57[16], (__int64)v64, &v81, (__int64)v77);
      uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal((__int64)v77);
      core::ptr::drop_in_place<uu_sort::tmp_dir::TmpDirWrapper>(v77);
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v57);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v51);
      goto LABEL_109;
    }
    goto LABEL_106;
  }
  v81.m256i_i64[0] = v48.m256i_i64[1];
  v2 = clap_builder::error::Error<F>::print(&v81);
  core::result::Result<T,E>::unwrap(v2);
  if ( (*(_BYTE *)(v81.m256i_i64[0] + 213) & 0x1D) != 0xC )
    uucore::mods::error::set_exit_code(2LL);
  core::ptr::drop_in_place<clap_builder::error::Error>();
  v3 = 0LL;
LABEL_109:
  core::ptr::drop_in_place<uu_sort::GlobalSettings>(v64);
  return v3;
}
