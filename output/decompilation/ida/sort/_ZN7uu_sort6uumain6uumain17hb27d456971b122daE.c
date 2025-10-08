__int64 __fastcall uu_sort::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rax
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // r12
  __int128 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int128 v32; // rax
  __int64 v33; // rax
  bool v34; // zf
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r14
  __int128 v43; // kr00_16
  unsigned __int8 v44; // al
  char *v45; // rcx
  int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rsi
  __m256i v54; // [rsp+0h] [rbp-658h] BYREF
  __int128 v55; // [rsp+20h] [rbp-638h]
  __int128 v56; // [rsp+30h] [rbp-628h]
  __m256i v57; // [rsp+40h] [rbp-618h] BYREF
  __int128 v58; // [rsp+60h] [rbp-5F8h]
  __int64 v59; // [rsp+70h] [rbp-5E8h]
  __int64 v60; // [rsp+80h] [rbp-5D8h] BYREF
  __int128 v61; // [rsp+88h] [rbp-5D0h]
  __m256i *v62; // [rsp+98h] [rbp-5C0h] BYREF
  __int128 v63; // [rsp+A0h] [rbp-5B8h]
  __m256i v64; // [rsp+B0h] [rbp-5A8h] BYREF
  _BYTE v65[23]; // [rsp+D0h] [rbp-588h]
  char v66; // [rsp+E7h] [rbp-571h]
  __int64 v67; // [rsp+E8h] [rbp-570h] BYREF
  __int128 v68; // [rsp+F0h] [rbp-568h]
  _QWORD v69[2]; // [rsp+100h] [rbp-558h] BYREF
  __int128 v70; // [rsp+110h] [rbp-548h] BYREF
  __int128 v71; // [rsp+120h] [rbp-538h]
  unsigned __int64 v72; // [rsp+130h] [rbp-528h] BYREF
  __int128 v73; // [rsp+138h] [rbp-520h]
  _BYTE v74[25]; // [rsp+148h] [rbp-510h] BYREF
  __int64 v75; // [rsp+168h] [rbp-4F0h]
  __int64 v76; // [rsp+170h] [rbp-4E8h]
  int v77; // [rsp+178h] [rbp-4E0h]
  __int64 v78; // [rsp+17Ch] [rbp-4DCh]
  int v79; // [rsp+184h] [rbp-4D4h]
  __int128 v80; // [rsp+188h] [rbp-4D0h]
  unsigned int v81; // [rsp+198h] [rbp-4C0h]
  __int128 v82; // [rsp+1A0h] [rbp-4B8h]
  __int64 v83; // [rsp+1B0h] [rbp-4A8h]
  __int64 v84; // [rsp+1B8h] [rbp-4A0h]
  __int64 v85; // [rsp+1C0h] [rbp-498h]
  __int64 v86; // [rsp+1C8h] [rbp-490h]
  __int64 v87; // [rsp+1D0h] [rbp-488h] BYREF
  __int64 v88; // [rsp+1D8h] [rbp-480h] BYREF
  __m256i v89; // [rsp+1E0h] [rbp-478h] BYREF
  __int128 v90; // [rsp+200h] [rbp-458h]
  __int128 v91; // [rsp+210h] [rbp-448h]
  __int128 v92; // [rsp+220h] [rbp-438h]
  __int128 v93; // [rsp+230h] [rbp-428h]
  __int64 v94; // [rsp+240h] [rbp-418h]
  char v95; // [rsp+248h] [rbp-410h]
  __int128 v96; // [rsp+4B0h] [rbp-1A8h] BYREF
  __int64 v97; // [rsp+4C0h] [rbp-198h]
  __int128 v98; // [rsp+4F0h] [rbp-168h] BYREF
  __int64 v99; // [rsp+500h] [rbp-158h]
  __int128 v100; // [rsp+508h] [rbp-150h] BYREF
  __int64 v101; // [rsp+518h] [rbp-140h]
  __m256i v102; // [rsp+520h] [rbp-138h] BYREF
  _BYTE v103[23]; // [rsp+540h] [rbp-118h]
  char v104; // [rsp+557h] [rbp-101h]
  _OWORD v105[3]; // [rsp+558h] [rbp-100h] BYREF
  __int64 v106; // [rsp+588h] [rbp-D0h]
  _BYTE v107[24]; // [rsp+590h] [rbp-C8h] BYREF
  _QWORD v108[8]; // [rsp+5A8h] [rbp-B0h] BYREF
  _QWORD v109[14]; // [rsp+5E8h] [rbp-70h] BYREF

  LOWORD(v81) = 2566;
  v78 = 0LL;
  v79 = 0;
  v69[0] = 0LL;
  v69[1] = 8LL;
  v70 = 0LL;
  v77 = 1114112;
  v71 = 1uLL;
  v75 = 1000000000LL;
  v72 = 0x8000000000000000LL;
  v76 = 32LL;
  memset(v74, 0, sizeof(v74));
  uu_sort::uu_app(&v89);
  clap_builder::builder::command::Command::try_get_matches_from(&v54, &v89, a1, a2);
  if ( v54.m256i_i64[0] != 0x8000000000000000LL )
  {
    v59 = v56;
    v58 = v55;
    v57 = v54;
    LOBYTE(v78) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v57, aDebug, 5LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v57, aFiles0From, 11LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v89, &v57, aFiles0From, 11LL);
      clap_builder::parser::error::MatchesError::unwrap(v108, aFiles0From, 11LL, &v89);
      if ( v108[0]
        && (core::iter::traits::iterator::Iterator::collect(&v89, v108),
            *(_OWORD *)v54.m256i_i8 = *(_OWORD *)&v89.m256i_u64[1],
            v89.m256i_i64[0] != 0x8000000000000000LL) )
      {
        v68 = *(_OWORD *)v54.m256i_i8;
        v67 = v89.m256i_i64[0];
        v4 = v54.m256i_i64[0];
        v62 = 0LL;
        v63 = 8uLL;
        if ( v54.m256i_i64[1] )
        {
          v84 = v54.m256i_i64[0] + 24 * v54.m256i_i64[1];
          v5 = v54.m256i_i64[0] + 24;
          v85 = 0x8000000000000001LL;
          while ( 1 )
          {
            v86 = v5;
            uu_sort::open(&v89, v4);
            v3 = v89.m256i_i64[1];
            if ( v89.m256i_i32[0] == 1 )
              break;
            std::io::buffered::bufreader::BufReader<R>::with_capacity(v105, v89.m256i_i64[1], v89.m256i_i64[2]);
            v94 = v106;
            v93 = v105[2];
            v92 = v105[1];
            v91 = v105[0];
            v89.m256i_i64[0] = v85;
            v89.m256i_i64[3] = v85;
            v95 = 0;
            while ( 1 )
            {
              <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(
                &v64,
                &v89);
              v6 = v64.m256i_i64[0];
              if ( v64.m256i_i64[0] == 0x8000000000000000LL )
                break;
              v7 = v64.m256i_i64[1];
              core::str::converts::from_utf8(&v54, v64.m256i_i64[1], v64.m256i_i64[2]);
              v8 = core::result::Result<T,E>::expect(&v54);
              <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v54, v8);
              v97 = v54.m256i_i64[2];
              v96 = *(_OWORD *)v54.m256i_i8;
              alloc::vec::Vec<T,A>::push(&v62, &v96, &off_18A658);
              core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v6, v7);
            }
            core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<std::io::Split<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>>>>(&v89);
            v4 = v86;
            v5 = v86 + 24;
            if ( v86 == v84 )
              goto LABEL_9;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v62);
          v14 = &v67;
          goto LABEL_110;
        }
      }
      else
      {
        v67 = 0LL;
        v68 = 8uLL;
        v62 = 0LL;
        v63 = 8uLL;
      }
LABEL_9:
      v60 = (__int64)v62;
      v61 = v63;
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v67);
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v89, &v57, aFiles, 5LL);
      clap_builder::parser::error::MatchesError::unwrap(v109, aFiles, 5LL, &v89);
      if ( v109[0]
        && (core::iter::traits::iterator::Iterator::collect(&v89, v109),
            *(_OWORD *)v54.m256i_i8 = *(_OWORD *)&v89.m256i_u64[1],
            v89.m256i_i64[0] != 0x8000000000000000LL) )
      {
        v61 = *(_OWORD *)v54.m256i_i8;
        v60 = v89.m256i_i64[0];
      }
      else
      {
        v60 = 0LL;
        v61 = 8uLL;
      }
    }
    v9 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v57, aHumanNumericSo, 18LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57, aSort, 4LL);
      v10 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v89);
      if ( !v10
        || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                               *(_QWORD *)(v10 + 8),
                               *(_QWORD *)(v10 + 16),
                               aHumanNumeric,
                               13LL) )
      {
        v9 = 3;
        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v57, aMonthSort, 10LL) )
        {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57, aSort, 4LL);
          v11 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v89);
          if ( !v11
            || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                   *(_QWORD *)(v11 + 8),
                                   *(_QWORD *)(v11 + 16),
                                   aMonth,
                                   5LL) )
          {
            v9 = 2;
            if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                     &v57,
                                     aGeneralNumeric,
                                     20LL) )
            {
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57, aSort, 4LL);
              v12 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v89);
              if ( !v12
                || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                       *(_QWORD *)(v12 + 8),
                                       *(_QWORD *)(v12 + 16),
                                       aGeneralNumeric_0,
                                       15LL) )
              {
                if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                        &v57,
                                        aNumericSort,
                                        12LL)
                  || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57, aSort, 4LL),
                      (v13 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v89)) != 0)
                  && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                        *(_QWORD *)(v13 + 8),
                                        *(_QWORD *)(v13 + 16),
                                        aNumeric,
                                        7LL) )
                {
                  v9 = 0;
                }
                else
                {
                  v9 = 4;
                  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                           &v57,
                                           aVersionSort,
                                           12LL) )
                  {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57, aSort, 4LL);
                    v15 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v89);
                    if ( !v15
                      || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                             *(_QWORD *)(v15 + 8),
                                             *(_QWORD *)(v15 + 16),
                                             aVersion,
                                             7LL) )
                    {
                      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                              &v57,
                                              aRandomSort,
                                              11LL)
                        || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57, aSort, 4LL),
                            v16 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v89),
                            v9 = 6,
                            v16)
                        && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                              *(_QWORD *)(v16 + 8),
                                              *(_QWORD *)(v16 + 16),
                                              aRandom,
                                              6LL) )
                      {
                        uu_sort::get_rand_string(&v89);
                        v80 = *(_OWORD *)v89.m256i_i8;
                        HIBYTE(v79) = 1;
                        v9 = 5;
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
    LOBYTE(v81) = v9;
    BYTE3(v78) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v57, aDictionaryOrde, 16LL);
    BYTE4(v78) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v57, aIgnoreNonprint, 18LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                            &v57,
                            "parallel' existsDeadlock",
                            8LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57, "parallel' existsDeadlock", 8LL);
      v17 = clap_builder::parser::error::MatchesError::unwrap("parallel' existsDeadlock", 8LL, &v89);
      if ( v17
        && (<alloc::string::String as core::clone::Clone>::clone(&v89, v17),
            v18 = v89.m256i_i64[0],
            *(_OWORD *)v54.m256i_i8 = *(_OWORD *)&v89.m256i_u64[1],
            v89.m256i_i64[0] != 0x8000000000000000LL) )
      {
        v19 = *(_OWORD *)v54.m256i_i8;
      }
      else
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v89, a0_0);
        v18 = v89.m256i_i64[0];
        v19 = *(_OWORD *)&v89.m256i_u64[1];
      }
      v96 = v19;
      core::ptr::drop_in_place<alloc::string::String>((char *)&v70 + 8);
      *((_QWORD *)&v70 + 1) = v18;
      v71 = v96;
      std::env::set_var((char *)&v70 + 8);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57, aBufferSize, 11LL);
    v20 = clap_builder::parser::error::MatchesError::unwrap(aBufferSize, 11LL, &v89);
    v89.m256i_i64[1] = 1000000000LL;
    v89.m256i_i64[0] = 0LL;
    core::option::Option<T>::map_or(&v54, v20, &v89);
    v3 = v54.m256i_i64[0];
    if ( v54.m256i_i64[0] )
    {
LABEL_109:
      v14 = &v60;
LABEL_110:
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v14);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v57);
      goto LABEL_111;
    }
    v75 = v54.m256i_i64[1];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57, aTemporaryDirec, 19LL);
    v21 = clap_builder::parser::error::MatchesError::unwrap(aTemporaryDirec, 19LL, &v89);
    if ( v21
      && (<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v89, *(_QWORD *)(v21 + 8)),
          *(_OWORD *)v54.m256i_i8 = *(_OWORD *)&v89.m256i_u64[1],
          v89.m256i_i64[0] != 0x8000000000000000LL) )
    {
      *(_OWORD *)&v89.m256i_u64[1] = *(_OWORD *)v54.m256i_i8;
    }
    else
    {
      std::env::temp_dir(&v89);
    }
    uu_sort::tmp_dir::TmpDirWrapper::new(&v96, &v89);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57, aCompressProgra, 16LL);
    v22 = clap_builder::parser::error::MatchesError::unwrap(aCompressProgra, 16LL, &v89);
    v23 = 0x8000000000000000LL;
    if ( v22 )
    {
      <alloc::string::String as core::clone::Clone>::clone(&v89, v22);
      v23 = v89.m256i_i64[0];
      *(_OWORD *)v54.m256i_i8 = *(_OWORD *)&v89.m256i_u64[1];
    }
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v72);
    v72 = v23;
    v73 = *(_OWORD *)v54.m256i_i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57, aBatchSize, 10LL);
    v24 = clap_builder::parser::error::MatchesError::unwrap(aBatchSize, 10LL, &v89);
    v25 = v24;
    if ( v24 )
    {
      v87 = v24;
      v26 = *(_QWORD *)(v24 + 8);
      v27 = *(_QWORD *)(v24 + 16);
      core::num::<impl usize>::from_ascii_radix(&v67, v26, v27);
      if ( (_BYTE)v67 == 1 )
      {
        if ( BYTE1(v67) == 2 )
        {
          *(_QWORD *)&v28 = uucore::util_name();
          *(_OWORD *)v54.m256i_i8 = v28;
          v64.m256i_i64[0] = (__int64)&v54;
          v64.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          v89.m256i_i64[0] = (__int64)&unk_18A438;
          v89.m256i_i64[1] = 2LL;
          *(_QWORD *)&v90 = 0LL;
          v89.m256i_i64[2] = (__int64)&v64;
          v89.m256i_i64[3] = 1LL;
          std::io::stdio::_eprint(&v89);
          v29 = *(_QWORD *)(v25 + 8);
          v30 = *(_QWORD *)(v25 + 16);
          v54.m256i_i64[0] = 0LL;
          v54.m256i_i64[1] = v29;
          v54.m256i_i64[2] = v30;
          v54.m256i_i8[24] = 1;
          v64.m256i_i64[0] = (__int64)&v54;
          v64.m256i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
          v89.m256i_i64[0] = (__int64)&off_18A4D0;
          v89.m256i_i64[1] = 2LL;
          *(_QWORD *)&v90 = 0LL;
          v89.m256i_i64[2] = (__int64)&v64;
          v89.m256i_i64[3] = 1LL;
          std::io::stdio::_eprint(&v89);
          uu_sort::get_rlimit(&v64);
          v3 = v64.m256i_i64[0];
          if ( v64.m256i_i64[0] )
          {
LABEL_108:
            core::ptr::drop_in_place<uu_sort::tmp_dir::TmpDirWrapper>(&v96);
            goto LABEL_109;
          }
          v88 = v64.m256i_i64[1];
          v62 = (__m256i *)&v88;
          *(_QWORD *)&v63 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v89.m256i_i64[0] = (__int64)&off_18A4F0;
          v89.m256i_i64[1] = 1LL;
          *(_QWORD *)&v90 = 0LL;
          v89.m256i_i64[2] = (__int64)&v62;
          v89.m256i_i64[3] = 1LL;
          core::option::Option<T>::map_or_else(&v54, &v89);
          v82 = *(_OWORD *)v54.m256i_i8;
          v31 = v54.m256i_i64[2];
        }
        else
        {
          v54.m256i_i64[0] = 0LL;
          v54.m256i_i64[1] = v26;
          v54.m256i_i64[2] = v27;
          v54.m256i_i8[24] = 1;
          v62 = &v54;
          *(_QWORD *)&v63 = <os_display::Quoted as core::fmt::Display>::fmt;
          v89.m256i_i64[0] = (__int64)&off_18A500;
          v89.m256i_i64[1] = 1LL;
          *(_QWORD *)&v90 = 0LL;
          v89.m256i_i64[2] = (__int64)&v62;
          v89.m256i_i64[3] = 1LL;
          core::option::Option<T>::map_or_else(&v64, &v89);
          v82 = *(_OWORD *)v64.m256i_i8;
          v31 = v64.m256i_i64[2];
        }
        v83 = v31;
        v89.m256i_i32[6] = 2;
        *(_OWORD *)v89.m256i_i8 = v82;
        v89.m256i_i64[2] = v31;
        v33 = alloc::boxed::Box<T>::new(&v89);
LABEL_107:
        v3 = v33;
        goto LABEL_108;
      }
      if ( (unsigned __int64)v68 < 2 )
      {
        *(_QWORD *)&v32 = uucore::util_name();
        *(_OWORD *)v54.m256i_i8 = v32;
        v64.m256i_i64[0] = (__int64)&v54;
        v64.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        v89.m256i_i64[0] = (__int64)&unk_18A438;
        v89.m256i_i64[1] = 2LL;
        *(_QWORD *)&v90 = 0LL;
        v89.m256i_i64[2] = (__int64)&v64;
        v89.m256i_i64[3] = 1LL;
        std::io::stdio::_eprint(&v89);
        v54.m256i_i64[0] = (__int64)&v87;
        v54.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        v89.m256i_i64[0] = (__int64)&off_18A4B0;
        v89.m256i_i64[1] = 2LL;
        *(_QWORD *)&v90 = 0LL;
        v89.m256i_i64[2] = (__int64)&v54;
        v89.m256i_i64[3] = 1LL;
        std::io::stdio::_eprint(&v89);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v54, aMinimumBatchSi);
        v89.m256i_i64[2] = v54.m256i_i64[2];
        *(_OWORD *)v89.m256i_i8 = *(_OWORD *)v54.m256i_i8;
        v89.m256i_i32[6] = 2;
        v33 = alloc::boxed::Box<T>::new(&v89);
        goto LABEL_107;
      }
      v76 = v68;
    }
    v34 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v57, aZeroTerminated, 15LL) == 0;
    v35 = 10;
    if ( !v34 )
      v35 = 0;
    BYTE1(v81) = v35;
    BYTE5(v78) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v57, aMerge, 5LL);
    BYTE1(v79) = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v57, aCheck, 5LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v57, aCheckSilent, 12LL)
      || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57, aCheck, 5LL),
          (v36 = clap_builder::parser::error::MatchesError::unwrap(aCheck, 5LL, &v89)) != 0)
      && ((v37 = *(_QWORD *)(v36 + 8),
           v38 = *(_QWORD *)(v36 + 16),
           (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v37, v38, aSilent, 6LL))
       || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v37, v38, aQuiet, 5LL)) )
    {
      *(_WORD *)((char *)&v79 + 1) = 257;
    }
    BYTE2(v78) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v57, aIgnoreCase, 11LL);
    BYTE1(v78) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v57, aIgnoreLeadingB, 21LL);
    BYTE6(v78) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v57, aReverse, 7LL);
    HIBYTE(v78) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v57, aStable, 6LL);
    LOBYTE(v79) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v57, aUnique, 6LL);
    if ( *((_QWORD *)&v61 + 1) )
    {
      if ( *((_QWORD *)&v61 + 1) != 1LL && BYTE1(v79) )
      {
        v39 = *(_QWORD *)(v61 + 32);
        v40 = *(_QWORD *)(v61 + 40);
        v54.m256i_i64[0] = 1LL;
        v54.m256i_i64[1] = v39;
        v54.m256i_i64[2] = v40;
        v54.m256i_i8[24] = 1;
        v64.m256i_i64[0] = (__int64)&v54;
        v64.m256i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
        v89.m256i_i64[0] = (__int64)&off_18A510;
        v89.m256i_i64[1] = 2LL;
        *(_QWORD *)&v90 = 0LL;
        v89.m256i_i64[2] = (__int64)&v64;
        v89.m256i_i64[3] = 1LL;
        core::option::Option<T>::map_or_else(&v98, &v89);
        v89.m256i_i32[6] = 2;
        *(_OWORD *)v89.m256i_i8 = v98;
        v89.m256i_i64[2] = v99;
        v33 = alloc::boxed::Box<T>::new(&v89);
        goto LABEL_107;
      }
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v107, asc_2738C);
      alloc::vec::Vec<T,A>::push(&v60, v107, &off_18A5C8);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57);
    v41 = clap_builder::parser::error::MatchesError::unwrap(&v89);
    v42 = v41;
    if ( v41 )
    {
      core::str::converts::from_utf8(&v89, *(_QWORD *)(v41 + 8), *(_QWORD *)(v41 + 16));
      if ( v89.m256i_i32[0] == 1 )
      {
        v33 = uu_sort::uumain::uumain::{{closure}}(*(_QWORD *)(v42 + 8), *(_QWORD *)(v42 + 16));
        goto LABEL_107;
      }
      v43 = *(_OWORD *)&v89.m256i_u64[1];
      v44 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v89.m256i_i64[1], v89.m256i_i64[2], a0_1, 2LL);
      v45 = &byte_27AF3;
      if ( !v44 )
        v45 = (char *)v43;
      if ( (v44 | (*((_QWORD *)&v43 + 1) == 1LL)) != 1 )
      {
        v54.m256i_i64[0] = 0LL;
        v54.m256i_i64[1] = (__int64)v45;
        v54.m256i_i64[2] = *((_QWORD *)&v43 + 1);
        v54.m256i_i8[24] = 1;
        v64.m256i_i64[0] = (__int64)&v54;
        v64.m256i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
        v89.m256i_i64[0] = (__int64)&off_18A530;
        v89.m256i_i64[1] = 1LL;
        *(_QWORD *)&v90 = 0LL;
        v89.m256i_i64[2] = (__int64)&v64;
        v89.m256i_i64[3] = 1LL;
        core::option::Option<T>::map_or_else(&v100, &v89);
        v89.m256i_i32[6] = 2;
        *(_OWORD *)v89.m256i_i8 = v100;
        v89.m256i_i64[2] = v101;
        v33 = alloc::boxed::Box<T>::new(&v89);
        goto LABEL_107;
      }
      v89.m256i_i64[0] = (__int64)v45;
      v89.m256i_i64[1] = (__int64)(v45 + 1);
      if ( (core::str::validations::next_code_point(&v89) & 1) == 0 || v46 == 1114112 )
        core::option::unwrap_failed(&off_18A5E0);
      v77 = v46;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v89, &v57);
    clap_builder::parser::error::MatchesError::unwrap(&v54, &v89);
    if ( v54.m256i_i64[0] )
    {
      v91 = v56;
      v90 = v55;
      v89 = v54;
      while ( 1 )
      {
        v47 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v89);
        if ( !v47 )
          break;
        uu_sort::FieldSelector::parse(&v64, *(_QWORD *)(v47 + 8), *(_QWORD *)(v47 + 16), v69);
        if ( v66 == 2 )
        {
          v3 = v64.m256i_i64[0];
          goto LABEL_108;
        }
        *(_QWORD *)&v103[15] = *(_QWORD *)&v65[15];
        *(_OWORD *)v103 = *(_OWORD *)v65;
        v102 = v64;
        v104 = v66;
        if ( v65[21] == 5 && !HIBYTE(v79) )
        {
          uu_sort::get_rand_string(&v64);
          v80 = *(_OWORD *)v64.m256i_i8;
          HIBYTE(v79) = 1;
        }
        alloc::vec::Vec<T,A>::push(v69, &v102, &off_18A5F8);
      }
    }
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v57, aKey, 3LL) )
    {
      v64.m256i_i64[0] = 1LL;
      v64.m256i_i64[1] = 1LL;
      v64.m256i_i8[16] = BYTE1(v78);
      v54.m256i_i8[16] = 2;
      uu_sort::FieldSelector::new(
        &v89,
        &v64,
        &v54,
        ((unsigned __int64)BYTE6(v78) << 32) | *(unsigned int *)((char *)&v78 + 1) | ((unsigned __int64)v81 << 40));
      core::result::Result<T,E>::unwrap(&v54, &v89);
      alloc::vec::Vec<T,A>::push(v69, &v54, &off_18A628);
    }
    v48 = v61;
    v49 = v61 + 24LL * *((_QWORD *)&v61 + 1);
    while ( v48 != v49 )
    {
      uu_sort::open(&v89, v48);
      v3 = v89.m256i_i64[1];
      if ( (v89.m256i_i8[0] & 1) != 0 )
        goto LABEL_108;
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
        v89.m256i_i64[1],
        v89.m256i_i64[2]);
      v48 += 24LL;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v89, &v57, aOutput, 6LL);
    v50 = clap_builder::parser::error::MatchesError::unwrap(aOutput, 6LL, &v89);
    if ( v50 )
    {
      v52 = *(_QWORD *)(v50 + 8);
      v51 = *(_QWORD *)(v50 + 16);
    }
    else
    {
      v52 = 0LL;
    }
    uu_sort::Output::new(&v54, v52, v51);
    v3 = v54.m256i_i64[1];
    if ( v54.m256i_i64[0] != 0x8000000000000001LL )
    {
      v64 = v54;
      uu_sort::GlobalSettings::init_precomputed(v69);
      v89 = v64;
      v3 = uu_sort::exec(v61, *((_QWORD *)&v61 + 1), v69, &v89, &v96);
      uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(&v96);
      core::ptr::drop_in_place<uu_sort::tmp_dir::TmpDirWrapper>(&v96);
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v60);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v57);
      goto LABEL_111;
    }
    goto LABEL_108;
  }
  v89.m256i_i64[0] = v54.m256i_i64[1];
  v2 = clap_builder::error::Error<F>::print(&v89);
  core::result::Result<T,E>::unwrap(v2);
  if ( (*(_BYTE *)(v89.m256i_i64[0] + 221) & 0x1D) != 0xC )
    uucore::mods::error::set_exit_code(2LL);
  core::ptr::drop_in_place<clap_builder::error::Error>();
  v3 = 0LL;
LABEL_111:
  core::ptr::drop_in_place<uu_sort::GlobalSettings>(v69);
  return v3;
}