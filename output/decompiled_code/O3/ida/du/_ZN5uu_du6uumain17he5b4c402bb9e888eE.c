__int64 __fastcall uu_du::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r14
  __m128i v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 (__fastcall **v16)(); // rdx
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i *v19; // r12
  char v20; // al
  __int32 v21; // ecx
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r12
  char v25; // al
  __int32 v26; // ecx
  char v27; // al
  __int32 v28; // ecx
  __int64 v29; // r12
  char flag; // al
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // rdx
  __m128i *v34; // rsi
  __int64 v35; // rdx
  char v36; // r13
  char v37; // bl
  char v38; // r12
  __int64 v39; // rdi
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  char v43; // bp
  __int8 v44; // r12
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rbx
  __m128i v48; // xmm0
  char v49; // r13
  bool v50; // zf
  char v51; // al
  __m128i v52; // rax
  __m128i v53; // xmm1
  __m128i v54; // xmm0
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // r13
  char v59; // al
  __m128i v60; // xmm0
  __int64 v61; // rax
  __m128i v62; // xmm0
  __m128i v63; // xmm0
  __m128i v64; // xmm0
  __m128i v65; // xmm0
  __int64 v66; // rax
  __m128i v67; // xmm0
  __m128i *v68; // rax
  __m128i v69; // xmm0
  __int64 v70; // r14
  __m128i *v71; // rax
  __m128i v72; // xmm0
  __m128i *v73; // rax
  __m128i v74; // xmm0
  __m128i v75; // rax
  __m128i v76; // rax
  unsigned int v77; // ebx
  __m128i v78; // kr00_16
  __int64 v79; // rsi
  char v81; // al
  __int32 v82; // ecx
  char **v83; // rdi
  _BYTE v84[7]; // [rsp+8h] [rbp-780h] BYREF
  __int8 v85; // [rsp+Fh] [rbp-779h]
  __m128i v86; // [rsp+10h] [rbp-778h]
  _OWORD v87[3]; // [rsp+20h] [rbp-768h] BYREF
  __int64 v88; // [rsp+50h] [rbp-738h]
  __int64 v89; // [rsp+58h] [rbp-730h]
  __int64 v90; // [rsp+60h] [rbp-728h] BYREF
  __m128i v91; // [rsp+68h] [rbp-720h]
  __m128i v92; // [rsp+78h] [rbp-710h] BYREF
  __int64 v93; // [rsp+88h] [rbp-700h]
  __m128i v94; // [rsp+90h] [rbp-6F8h] BYREF
  __m128i v95; // [rsp+A0h] [rbp-6E8h]
  __m128i v96; // [rsp+B0h] [rbp-6D8h] BYREF
  __int64 v97; // [rsp+C0h] [rbp-6C8h]
  __m128i v98; // [rsp+C8h] [rbp-6C0h] BYREF
  __int64 v99; // [rsp+D8h] [rbp-6B0h]
  __m128i v100[10]; // [rsp+E0h] [rbp-6A8h] BYREF
  __m128i v101; // [rsp+180h] [rbp-608h] BYREF
  __m128i v102; // [rsp+190h] [rbp-5F8h] BYREF
  __m128i v103; // [rsp+1A0h] [rbp-5E8h]
  __m128i v104; // [rsp+1B0h] [rbp-5D8h]
  __m256i v105; // [rsp+1C0h] [rbp-5C8h] BYREF
  __m128i *v106; // [rsp+1E0h] [rbp-5A8h]
  __int64 (__fastcall **v107)(); // [rsp+1E8h] [rbp-5A0h]
  __int64 v108; // [rsp+1F0h] [rbp-598h]
  char v109; // [rsp+1F8h] [rbp-590h]
  __m128i v110; // [rsp+208h] [rbp-580h] BYREF
  __m128i v111; // [rsp+218h] [rbp-570h]
  __m128i v112; // [rsp+228h] [rbp-560h]
  __m128i v113; // [rsp+238h] [rbp-550h]
  __m128i v114; // [rsp+248h] [rbp-540h]
  __m128i v115; // [rsp+258h] [rbp-530h] BYREF
  __int64 v116; // [rsp+268h] [rbp-520h]
  __m128i si128; // [rsp+270h] [rbp-518h]
  __int64 v118; // [rsp+280h] [rbp-508h]
  char v119; // [rsp+288h] [rbp-500h]
  __int8 v120; // [rsp+289h] [rbp-4FFh]
  __int8 v121; // [rsp+28Ah] [rbp-4FEh]
  char v122; // [rsp+28Bh] [rbp-4FDh]
  char v123; // [rsp+28Ch] [rbp-4FCh]
  __m128i dest[9]; // [rsp+290h] [rbp-4F8h] BYREF
  __m128i v125; // [rsp+320h] [rbp-468h]
  __int64 v126; // [rsp+330h] [rbp-458h] BYREF
  __int64 v127; // [rsp+338h] [rbp-450h]
  __int64 v128; // [rsp+340h] [rbp-448h]
  __int64 v129; // [rsp+348h] [rbp-440h]
  __m128i v130; // [rsp+350h] [rbp-438h] BYREF
  __int64 v131; // [rsp+360h] [rbp-428h]
  __int64 v132; // [rsp+368h] [rbp-420h]
  __m128i v133[45]; // [rsp+370h] [rbp-418h] BYREF
  __m128i src[9]; // [rsp+640h] [rbp-148h] BYREF
  __m128i v135; // [rsp+6D0h] [rbp-B8h] BYREF
  __m128i v136; // [rsp+6E0h] [rbp-A8h] BYREF
  __int64 v137; // [rsp+6F0h] [rbp-98h]
  _BYTE v138[24]; // [rsp+6F8h] [rbp-90h] BYREF
  _OWORD v139[7]; // [rsp+710h] [rbp-78h] BYREF

  uu_du::uu_app(v133);
  clap_builder::builder::command::Command::try_get_matches_from(v100, v133, a1, a2);
  if ( v100[0].m128i_i64[0] != 0x8000000000000000LL )
  {
    v88 = v100[3].m128i_i64[0];
    v5 = _mm_loadu_si128(&v100[1]);
    v87[2] = v100[2];
    v87[1] = v5;
    v87[0] = v100[0];
    v86.m128i_i8[0] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aS, 1LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v133, v87, aD, 1LL);
    v6 = clap_builder::parser::error::MatchesError::unwrap(aD, 1LL, v133);
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 8);
      v7 = *(_QWORD *)(v6 + 16);
    }
    else
    {
      v8 = 0LL;
    }
    uu_du::parse_depth(v133, v8, v7, v86.m128i_u8[0]);
    v2 = v133[0].m128i_i64[1];
    v4 = (__int64 (__fastcall **)())v133[1].m128i_i64[0];
    if ( v133[0].m128i_i64[0] )
    {
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v87);
      if ( !v2 )
        return (unsigned int)uucore::mods::error::get_exit_code();
      goto LABEL_127;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v133, v87, aFiles0From, 11LL);
    v9 = clap_builder::parser::error::MatchesError::unwrap(aFiles0From, 11LL, v133);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 8);
      v11 = *(_QWORD *)(v9 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, asc_16993, 1LL) )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v133, v87, aFile, 4LL);
        if ( clap_builder::parser::error::MatchesError::unwrap(aFile, 4LL, v133) )
        {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v133, v87, aFile, 4LL);
          v12 = clap_builder::parser::error::MatchesError::unwrap(aFile, 4LL, v133);
          if ( v12 )
          {
            v13 = _mm_loadu_si128((const __m128i *)(v12 + 8));
            v100[0].m128i_i64[0] = 0LL;
            *(__m128i *)((char *)v100 + 8) = v13;
            v100[1].m128i_i8[8] = 1;
            dest[0].m128i_i64[0] = (__int64)v100;
            dest[0].m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
            v133[0].m128i_i64[0] = (__int64)&off_130F18;
            v133[0].m128i_i64[1] = 2LL;
            v133[2].m128i_i64[0] = 0LL;
            v133[1].m128i_i64[0] = (__int64)dest;
            v133[1].m128i_i64[1] = 1LL;
            alloc::fmt::format::format_inner(v138, v133);
            v14 = std::io::error::Error::new(39LL, v138);
LABEL_16:
            v15 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
            v4 = v16;
            goto LABEL_126;
          }
          v83 = &off_130F00;
LABEL_143:
          core::option::unwrap_failed(v83);
        }
      }
      uu_du::read_files_from(v133, v10, v11);
      v14 = v133[0].m128i_i64[1];
      if ( v133[0].m128i_i64[0] == 0x8000000000000000LL )
        goto LABEL_16;
      v92 = v133[0];
      v93 = v133[1].m128i_i64[0];
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v133, v87, aFile, 4LL);
      if ( clap_builder::parser::error::MatchesError::unwrap(aFile, 4LL, v133) )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v133, v87, aFile, 4LL);
        clap_builder::parser::error::MatchesError::unwrap(v100, aFile, 4LL, v133);
        if ( !v100[0].m128i_i64[0] )
        {
          v83 = &off_130F38;
          goto LABEL_143;
        }
        v17 = _mm_loadu_si128(v100);
        v139[3] = v100[3];
        v139[2] = v100[2];
        v139[1] = v100[1];
        v139[0] = v17;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v92, v139);
      }
      else
      {
        v18 = _rust_alloc(24LL, 8LL);
        if ( !v18 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        v19 = (__m128i *)v18;
        std::sys::os_str::bytes::Slice::to_owned(v133, asc_16B01, 1LL);
        v19[1].m128i_i64[0] = v133[1].m128i_i64[0];
        *v19 = _mm_loadu_si128(v133);
        alloc::slice::hack::into_vec(&v92, v19, 1LL);
      }
    }
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v87, aTime, 4LL);
    LOBYTE(v21) = 3;
    v86.m128i_i32[2] = v21;
    if ( v20 )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v133, v87, aTime, 4LL);
      v22 = clap_builder::parser::error::MatchesError::unwrap(aTime, 4LL, v133);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 8);
        v24 = *(_QWORD *)(v22 + 16);
        v25 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, aCtime, 5LL);
        LOBYTE(v26) = 1;
        v86.m128i_i32[2] = v26;
        if ( !v25 )
        {
          v27 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, aStatus, 6LL);
          LOBYTE(v28) = 1;
          v86.m128i_i32[2] = v28;
          if ( !v27 )
          {
            if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, aAccess, 6LL)
              || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, aAtime, 5LL)
              || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, aUse, 3LL) )
            {
              v86.m128i_i32[2] = 0;
            }
            else
            {
              v81 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, aBirth, 5LL);
              LOBYTE(v82) = 2;
              v86.m128i_i32[2] = v82;
              if ( !v81
                && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, aCreation, 8LL) )
              {
                v133[0].m128i_i64[0] = (__int64)&off_131080;
                v133[0].m128i_i64[1] = 1LL;
                v133[1].m128i_i64[0] = (__int64)v84;
                *(__m128i *)((char *)&v133[1] + 8) = 0LL;
                core::panicking::panic_fmt(v133, &off_131090);
              }
            }
          }
        }
      }
      else
      {
        v86.m128i_i32[2] = 1;
      }
    }
    v29 = 1LL;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, asc_16B02, 1LL) )
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aSi, 2LL) )
      {
        v29 = 0LL;
      }
      else
      {
        v89 = 1LL;
        v29 = 2LL;
        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aB, 1LL) )
        {
          flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aK, 1LL);
          v89 = 1024LL;
          if ( !flag )
          {
            v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aM, 1LL);
            v89 = 0x100000LL;
            if ( !v31 )
            {
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v133, v87, aBlockSize, 10LL);
              v32 = clap_builder::parser::error::MatchesError::unwrap(aBlockSize, 10LL, v133);
              if ( v32 )
              {
                v34 = *(__m128i **)(v32 + 8);
                v33 = *(_QWORD *)(v32 + 16);
              }
              else
              {
                v34 = 0LL;
              }
              uu_du::read_block_size(v133, v34, v33);
              v15 = v133[0].m128i_i64[0];
              if ( v133[0].m128i_i64[0] )
              {
                v4 = (__int64 (__fastcall **)())v133[0].m128i_i64[1];
LABEL_125:
                <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v92, v34, v35);
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v92);
LABEL_126:
                v2 = v15;
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v87);
                if ( v15 )
                  goto LABEL_127;
                return (unsigned int)uucore::mods::error::get_exit_code();
              }
              v89 = v133[0].m128i_i64[1];
              v29 = 2LL;
            }
          }
        }
      }
    }
    v36 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aAll, 3LL);
    v85 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aS_0, 1LL);
    v125.m128i_i8[0] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aOneFileSystem, 15LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aDereference, 11LL) )
    {
      v100[0].m128i_i64[0] = 0x8000000000000000LL;
    }
    else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                 v87,
                                 "dereference-argsConnection resetentity not foundk",
                                 16LL) )
    {
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v133, &v92);
      v100[1].m128i_i64[0] = v133[1].m128i_i64[0];
      v100[0] = _mm_loadu_si128(v133);
    }
    else
    {
      v100[0].m128i_i64[0] = 0x8000000000000002LL;
    }
    v132 = v29;
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, asc_16B30, 1LL);
    v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aVerbose, 7LL);
    uu_du::build_exclude_patterns(v133, v87);
    v34 = (__m128i *)v133[0].m128i_i64[1];
    v35 = v133[1].m128i_i64[0];
    if ( v133[0].m128i_i64[0] == 0x8000000000000000LL )
    {
      v4 = (__int64 (__fastcall **)())v133[1].m128i_i64[0];
      v15 = v133[0].m128i_i64[1];
      if ( (v100[0].m128i_i64[0] ^ 0x8000000000000000LL) > 2 || (v100[0].m128i_i64[0] ^ 0x8000000000000000LL) == 1 )
      {
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v100, v133[0].m128i_i64[1], v133[1].m128i_i64[0]);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v100);
      }
      goto LABEL_125;
    }
    v119 = v36;
    v120 = v85;
    v121 = v125.m128i_i8[0];
    si128 = _mm_load_si128(v100);
    v118 = v100[1].m128i_i64[0];
    v122 = v37;
    v123 = v38;
    v115 = v133[0];
    v116 = v133[1].m128i_i64[0];
    if ( v86.m128i_i8[8] == 3 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(v133, 14LL, 0LL);
      v39 = v133[0].m128i_i64[1];
      if ( v133[0].m128i_i64[0] )
        alloc::raw_vec::handle_error(v133[0].m128i_i64[1], v133[1].m128i_i64[0]);
      v40 = (_QWORD *)v133[1].m128i_i64[0];
      *(_QWORD *)(v133[1].m128i_i64[0] + 6) = 0x4D253A4825206425LL;
      *v40 = 0x64252D6D252D5925LL;
      v96.m128i_i64[0] = v39;
      v96.m128i_i64[1] = (__int64)v40;
      v97 = 14LL;
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v133, v87, aTimeStyle, 10LL);
      v41 = clap_builder::parser::error::MatchesError::unwrap(aTimeStyle, 10LL, v133);
      if ( v41 )
      {
        v34 = *(__m128i **)(v41 + 8);
        v42 = *(_QWORD *)(v41 + 16);
      }
      else
      {
        v34 = 0LL;
      }
      uu_du::parse_time_style(v133, v34, v42);
      v15 = v133[0].m128i_i64[1];
      if ( v133[0].m128i_i64[0] )
      {
        v43 = 0;
        v4 = (__int64 (__fastcall **)())v133[1].m128i_i64[0];
        goto LABEL_124;
      }
      <T as alloc::slice::hack::ConvertVec>::to_vec(v133, v133[0].m128i_i64[1], v133[1].m128i_i64[0]);
      v97 = v133[1].m128i_i64[0];
      v96 = _mm_loadu_si128(v133);
    }
    v85 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aC, 1LL);
    v44 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aInodes, 6LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v133, v87, aThreshold, 9LL);
    v45 = clap_builder::parser::error::MatchesError::unwrap(aThreshold, 9LL, v133);
    if ( v45 )
    {
      v46 = *(_QWORD *)(v45 + 8);
      v47 = *(_QWORD *)(v45 + 16);
      <uu_du::Threshold as core::str::traits::FromStr>::from_str(dest, v46, v47);
      if ( dest[0].m128i_i32[0] != 3 )
      {
        v65 = _mm_loadu_si128(dest);
        v100[1] = dest[1];
        v100[0] = v65;
        uu_du::format_error_message(src, v100, v46, v47, aThreshold, 9LL);
        v133[1].m128i_i32[2] = 1;
        v133[0] = _mm_loadu_si128(src);
        v133[1].m128i_i64[0] = src[1].m128i_i64[0];
        v34 = (__m128i *)&byte_8;
        v66 = _rust_alloc(32LL, 8LL);
        if ( !v66 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v15 = v66;
        v67 = _mm_load_si128(v133);
        *(__m128i *)(v66 + 16) = v133[1];
        *(__m128i *)v66 = v67;
        core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(v100);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v96);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v96);
        v4 = &off_130FF0;
        v43 = 0;
        goto LABEL_124;
      }
      v48 = _mm_loadu_si128((const __m128i *)&dest[0].m128i_u64[1]);
    }
    else
    {
      v48 = (__m128i)2uLL;
    }
    v125 = v48;
    v49 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aApparentSize, 13LL) )
      v49 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aB, 1LL);
    v133[1].m128i_i64[0] = v97;
    v133[0] = _mm_load_si128(&v96);
    v50 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, a0, 1LL) == 0;
    v51 = 10;
    if ( !v50 )
      v51 = 0;
    v114.m128i_i8[8] = v85;
    v114.m128i_i8[9] = v44;
    v110.m128i_i64[0] = v2;
    v110.m128i_i64[1] = (__int64)v4;
    v111 = v125;
    v114.m128i_i8[10] = v49;
    v112.m128i_i64[0] = v132;
    v112.m128i_i64[1] = v89;
    v114.m128i_i8[12] = v86.m128i_i8[8];
    v113 = _mm_load_si128(v133);
    v114.m128i_i64[0] = v133[1].m128i_i64[0];
    v114.m128i_i8[13] = v51;
    v114.m128i_i8[11] = v86.m128i_i8[0];
    if ( v44
      && ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aApparentSize, 13LL)
       || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v87, aB, 1LL)) )
    {
      v52.m128i_i64[0] = uucore::util_name();
      v100[0] = v52;
      dest[0].m128i_i64[0] = (__int64)v100;
      dest[0].m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v133[0].m128i_i64[0] = (__int64)&unk_130F50;
      v133[0].m128i_i64[1] = 2LL;
      v133[2].m128i_i64[0] = 0LL;
      v133[1].m128i_i64[0] = (__int64)dest;
      v133[1].m128i_i64[1] = 1LL;
      std::io::stdio::_eprint(v133);
      v133[0].m128i_i64[0] = (__int64)&off_130F70;
      v133[0].m128i_i64[1] = 1LL;
      v133[1].m128i_i64[0] = 8LL;
      *(__m128i *)((char *)&v133[1] + 8) = 0LL;
      std::io::stdio::_eprint(v133);
    }
    std::sync::mpmc::channel(v133);
    v53 = v133[1];
    v101 = v133[0];
    v133[4] = v114;
    v54 = _mm_loadu_si128(&v110);
    v133[3] = v113;
    v133[2] = v112;
    v133[1] = v111;
    v133[0] = v54;
    v133[5] = v53;
    v100[1].m128i_i64[0] = 0x8000000000000000LL;
    v100[0].m128i_i64[0] = 0LL;
    std::thread::Builder::spawn_unchecked(dest, v100, v133);
    if ( !dest[0].m128i_i64[0] )
    {
      v100[0].m128i_i64[0] = dest[0].m128i_i64[1];
      core::result::unwrap_failed(aFailedToSpawnT, 22LL, v100, &off_130E80, &off_130F80);
    }
    v131 = dest[1].m128i_i64[0];
    v130 = _mm_loadu_si128(dest);
    v55 = v92.m128i_i64[1];
    v126 = v92.m128i_i64[1];
    v127 = v92.m128i_i64[1];
    v128 = v92.m128i_i64[0];
    v129 = v92.m128i_i64[1] + 24 * v93;
    if ( v93 )
    {
      while ( 1 )
      {
        v127 = v55 + 24;
        v56 = *(_QWORD *)v55;
        v135 = *(__m128i *)(v55 + 8);
        if ( v56 == 0x8000000000000000LL )
          goto LABEL_104;
        v90 = v56;
        v91 = _mm_load_si128(&v135);
        if ( v116 )
        {
          std::sys::os_str::bytes::Slice::to_string_lossy(dest, v91.m128i_i64[0], v91.m128i_i64[1]);
          v57 = v115.m128i_i64[1];
          v58 = 56 * v116;
          while ( v58 )
          {
            v59 = glob::Pattern::matches(v57, dest[0].m128i_i64[1], dest[1].m128i_i64[0]);
            v57 += 56LL;
            v58 -= 56LL;
            if ( v59 )
            {
              if ( v123 )
              {
                v60 = _mm_loadu_si128((const __m128i *)&dest[0].m128i_u64[1]);
                v100[0].m128i_i64[0] = 0LL;
                *(__m128i *)((char *)v100 + 8) = v60;
                v100[1].m128i_i8[8] = 1;
                src[0].m128i_i64[0] = (__int64)v100;
                src[0].m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
                v133[0].m128i_i64[0] = (__int64)&unk_131060;
                v133[0].m128i_i64[1] = 2LL;
                v133[2].m128i_i64[0] = 0LL;
                v133[1].m128i_i64[0] = (__int64)src;
                v133[1].m128i_i64[1] = 1LL;
                std::io::stdio::_print(v133);
              }
              if ( dest[0].m128i_i64[0] != 0x8000000000000000LL )
              {
                <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(dest);
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(dest);
              }
              goto LABEL_87;
            }
          }
          if ( dest[0].m128i_i64[0] != 0x8000000000000000LL )
          {
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(dest);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(dest);
          }
        }
        uu_du::Stat::new(src, v91.m128i_i64[0], v91.m128i_i64[1], &v115);
        v86 = src[0];
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(src), (__m128i)xmmword_165C0)) == 0xFFFF )
          break;
        memcpy(dest, src, sizeof(dest));
        <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v133);
        v63 = _mm_loadu_si128(v133);
        v104 = v133[2];
        v103 = v133[1];
        v102 = v63;
        if ( *(_OWORD *)dest != 0LL )
          hashbrown::map::HashMap<K,V,S,A>::insert(
            &v102,
            dest[1].m128i_i64[0],
            dest[1].m128i_i64[1],
            dest[2].m128i_i64[0]);
        memcpy(v133, dest, 0x90uLL);
        uu_du::du(v100, v133, &v115, 0LL, &v102, &v101);
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v100), (__m128i)xmmword_165C0)) == 0xFFFF )
        {
          v98.m128i_i64[0] = v100[1].m128i_i64[0];
          v94.m128i_i64[0] = 0LL;
          v94.m128i_i64[1] = 1LL;
          v95.m128i_i64[0] = 0LL;
          v133[3].m128i_i64[0] = 32LL;
          v133[3].m128i_i8[8] = 3;
          v133[0].m128i_i64[0] = 0LL;
          v133[1].m128i_i64[0] = 0LL;
          v133[2].m128i_i64[0] = (__int64)&v94;
          v133[2].m128i_i64[1] = (__int64)&off_130E18;
          if ( (unsigned __int8)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt(&v98, v133) )
            core::result::unwrap_failed(aADisplayImplem, 55LL, v84, &unk_130E60, &off_130E48);
          v105.m256i_i64[2] = v95.m128i_i64[0];
          *(__m128i *)v105.m256i_i8 = _mm_loadu_si128(&v94);
          v105.m256i_i32[6] = 1;
          v68 = (__m128i *)_rust_alloc(32LL, 8LL);
          if ( !v68 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v15 = (__int64)v68;
          v69 = _mm_load_si128((const __m128i *)&v105);
          v68[1] = *(__m128i *)&v105.m256i_u64[2];
          *v68 = v69;
          v70 = v98.m128i_i64[0];
          core::ptr::drop_in_place<std::sync::mpsc::SendError<core::result::Result<uu_du::StatPrintInfo,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(v98.m128i_i64[0]);
          v34 = (__m128i *)&qword_A0;
          _rust_dealloc(v70, 160LL, 16LL);
          v4 = &off_130FF0;
LABEL_120:
          <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(&v102);
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(src), (__m128i)xmmword_165C0)) == 0xFFFF )
LABEL_121:
            core::ptr::drop_in_place<core::result::Result<uu_du::Stat,std::io::error::Error>>(src);
LABEL_122:
          core::ptr::drop_in_place<std::path::PathBuf>(&v90);
          <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v126);
          core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v130);
          <std::sync::mpmc::Sender<T> as core::ops::drop::Drop>::drop(&v101);
          goto LABEL_123;
        }
        v133[8] = v100[8];
        v133[7] = v100[7];
        v133[6] = v100[6];
        v64 = _mm_load_si128(&v100[2]);
        v133[5] = v100[5];
        v133[4] = v100[4];
        v133[3] = v100[3];
        v133[2] = v64;
        v133[0] = v100[0];
        v133[1] = v100[1];
        v133[9].m128i_i64[0] = 0LL;
        std::sync::mpmc::Sender<T>::send(v100);
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v100), (__m128i)xmmword_167B0)) != 0xFFFF )
        {
          memcpy(v133, v100, 0xA0uLL);
          v98.m128i_i64[0] = 0LL;
          v98.m128i_i64[1] = 1LL;
          v99 = 0LL;
          v108 = 32LL;
          v109 = 3;
          v105.m256i_i64[0] = 0LL;
          v105.m256i_i64[2] = 0LL;
          v106 = &v98;
          v107 = &off_130E18;
          v4 = &off_130FF0;
          if ( (unsigned __int8)<std::sync::mpsc::SendError<T> as core::fmt::Display>::fmt(v133, &v105) )
            core::result::unwrap_failed(aADisplayImplem, 55LL, v84, &unk_130E60, &off_130E48);
          v95.m128i_i64[0] = v99;
          v94 = _mm_loadu_si128(&v98);
          v95.m128i_i32[2] = 1;
          v34 = (__m128i *)&byte_8;
          v73 = (__m128i *)_rust_alloc(32LL, 8LL);
          if ( !v73 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v15 = (__int64)v73;
          v74 = _mm_load_si128(&v94);
          v73[1] = v95;
          *v73 = v74;
          core::ptr::drop_in_place<std::sync::mpsc::SendError<core::result::Result<uu_du::StatPrintInfo,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(v133);
          goto LABEL_120;
        }
        <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(&v102);
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(src), (__m128i)xmmword_165C0)) == 0xFFFF )
          goto LABEL_102;
LABEL_87:
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v90);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v90);
        v55 = v127;
        if ( v127 == v129 )
          goto LABEL_104;
      }
      std::sys::os_str::bytes::Slice::to_string_lossy(&v105, v91.m128i_i64[0], v91.m128i_i64[1]);
      dest[0].m128i_i64[0] = 0LL;
      *(__m128i *)((char *)dest + 8) = *(__m128i *)&v105.m256i_u64[1];
      dest[1].m128i_i8[8] = 1;
      v94.m128i_i64[0] = (__int64)dest;
      v94.m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
      v133[0].m128i_i64[0] = (__int64)&off_130F98;
      v133[0].m128i_i64[1] = 2LL;
      v133[2].m128i_i64[0] = 0LL;
      v133[1].m128i_i64[0] = (__int64)&v94;
      v133[1].m128i_i64[1] = 1LL;
      alloc::fmt::format::format_inner(&v102, v133);
      if ( v105.m256i_i64[0] != 0x8000000000000000LL )
      {
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v105);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v105);
      }
      v133[1].m128i_i64[0] = v103.m128i_i64[0];
      v133[0] = v102;
      v133[1].m128i_i32[2] = 1;
      v61 = _rust_alloc(32LL, 8LL);
      if ( !v61 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v62 = _mm_load_si128(v133);
      *(__m128i *)(v61 + 16) = v133[1];
      *(__m128i *)v61 = v62;
      v133[1].m128i_i64[0] = v61;
      v133[1].m128i_i64[1] = (__int64)&off_130FF0;
      v133[0] = (__m128i)2uLL;
      std::sync::mpmc::Sender<T>::send(v100);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v100), (__m128i)xmmword_167B0)) != 0xFFFF )
      {
        memcpy(v133, v100, 0xA0uLL);
        v102.m128i_i64[0] = 0LL;
        v102.m128i_i64[1] = 1LL;
        v103.m128i_i64[0] = 0LL;
        dest[3].m128i_i64[0] = 32LL;
        dest[3].m128i_i8[8] = 3;
        dest[0].m128i_i64[0] = 0LL;
        dest[1].m128i_i64[0] = 0LL;
        dest[2].m128i_i64[0] = (__int64)&v102;
        dest[2].m128i_i64[1] = (__int64)&off_130E18;
        v4 = &off_130FF0;
        if ( (unsigned __int8)<std::sync::mpsc::SendError<T> as core::fmt::Display>::fmt(v133, dest) )
          core::result::unwrap_failed(aADisplayImplem, 55LL, v84, &unk_130E60, &off_130E48);
        v105.m256i_i64[2] = v103.m128i_i64[0];
        *(__m128i *)v105.m256i_i8 = _mm_loadu_si128(&v102);
        v105.m256i_i32[6] = 1;
        v34 = (__m128i *)&byte_8;
        v71 = (__m128i *)_rust_alloc(32LL, 8LL);
        if ( !v71 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v15 = (__int64)v71;
        v72 = _mm_load_si128((const __m128i *)&v105);
        v71[1] = *(__m128i *)&v105.m256i_u64[2];
        *v71 = v72;
        core::ptr::drop_in_place<std::sync::mpsc::SendError<core::result::Result<uu_du::StatPrintInfo,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(v133);
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(src), (__m128i)xmmword_165C0)) == 0xFFFF )
          goto LABEL_121;
        core::ptr::drop_in_place<uu_du::Stat>(src);
        goto LABEL_122;
      }
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(src), (__m128i)xmmword_165C0)) != 0xFFFF )
      {
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&src[4]);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&src[4]);
        goto LABEL_87;
      }
LABEL_102:
      core::ptr::drop_in_place<std::io::error::Error>(&src[1], &v101);
      goto LABEL_87;
    }
LABEL_104:
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v126);
    v133[0] = _mm_loadu_si128(&v101);
    <std::sync::mpmc::Sender<T> as core::ops::drop::Drop>::drop(v133);
    v133[1].m128i_i64[0] = v131;
    v133[0] = _mm_load_si128(&v130);
    v34 = v133;
    std::thread::JoinInner<T>::join(v100, v133);
    v15 = v100[0].m128i_i64[1];
    v4 = (__int64 (__fastcall **)())v100[1].m128i_i64[0];
    if ( v100[0].m128i_i64[0] )
    {
      v34 = (__m128i *)v100[1].m128i_i64[0];
      v15 = uu_du::uumain::uumain::{{closure}}(v100[0].m128i_i64[1], v100[1].m128i_i64[0]);
      v4 = &off_130FF0;
    }
    else if ( !v100[0].m128i_i64[1] )
    {
      core::ptr::drop_in_place<uu_du::TraversalOptions>(&v115);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v87);
      return (unsigned int)uucore::mods::error::get_exit_code();
    }
LABEL_123:
    v43 = 1;
LABEL_124:
    core::ptr::drop_in_place<uu_du::TraversalOptions>(&v115);
    if ( v43 )
      goto LABEL_126;
    goto LABEL_125;
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v100[0].m128i_i64[1]);
  v4 = v3;
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_127:
  v110.m128i_i64[0] = v2;
  v110.m128i_i64[1] = (__int64)v4;
  v100[0].m128i_i64[0] = (__int64)&v110;
  v100[0].m128i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v133[0].m128i_i64[0] = (__int64)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  v133[0].m128i_i64[1] = 1LL;
  v133[2].m128i_i64[0] = 0LL;
  v133[1].m128i_i64[0] = (__int64)v100;
  v133[1].m128i_i64[1] = 1LL;
  alloc::fmt::format::format_inner(&v136, v133);
  v100[0] = _mm_loadu_si128(&v136);
  v100[1].m128i_i64[0] = v137;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v100[0].m128i_i64[1], v137, 1LL, 0LL) )
  {
    v75.m128i_i64[0] = uucore::util_name();
    dest[0] = v75;
    src[0].m128i_i64[0] = (__int64)dest;
    src[0].m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v133[0].m128i_i64[0] = (__int64)&unk_130EA0;
    v133[0].m128i_i64[1] = 2LL;
    v133[2].m128i_i64[0] = 0LL;
    v133[1].m128i_i64[0] = (__int64)src;
    v133[1].m128i_i64[1] = 1LL;
    std::io::stdio::_eprint(v133);
    dest[0].m128i_i64[0] = (__int64)v100;
    dest[0].m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    v133[0].m128i_i64[0] = (__int64)&unk_130EC0;
    v133[0].m128i_i64[1] = 2LL;
    v133[2].m128i_i64[0] = 0LL;
    v133[1].m128i_i64[0] = (__int64)dest;
    v133[1].m128i_i64[1] = 1LL;
    std::io::stdio::_eprint(v133);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v110.m128i_i64[1] + 104))(v110.m128i_i64[0]) )
  {
    v76.m128i_i64[0] = uucore::execution_phrase();
    dest[0] = v76;
    src[0].m128i_i64[0] = (__int64)dest;
    src[0].m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v133[0].m128i_i64[0] = (__int64)&off_130EE0;
    v133[0].m128i_i64[1] = 2LL;
    v133[2].m128i_i64[0] = 0LL;
    v133[1].m128i_i64[0] = (__int64)src;
    v133[1].m128i_i64[1] = 1LL;
    std::io::stdio::_eprint(v133);
  }
  v77 = (*(__int64 (__fastcall **)(__int64))(v110.m128i_i64[1] + 96))(v110.m128i_i64[0]);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v100);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v100);
  v78 = v110;
  if ( *(_QWORD *)v110.m128i_i64[1] )
    (*(void (__fastcall **)(__int64))v110.m128i_i64[1])(v110.m128i_i64[0]);
  v79 = *(_QWORD *)(v78.m128i_i64[1] + 8);
  if ( v79 )
    _rust_dealloc(v78.m128i_i64[0], v79, *(_QWORD *)(v78.m128i_i64[1] + 16));
  return v77;
}
