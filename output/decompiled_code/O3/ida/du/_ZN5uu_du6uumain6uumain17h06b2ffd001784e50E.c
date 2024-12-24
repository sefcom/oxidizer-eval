__int64 __fastcall uu_du::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // r14
  __m128i v15; // xmm0
  __int64 v16; // rax
  __m128i *v17; // r14
  __m128i v18; // xmm0
  __int64 v19; // rbx
  char flag; // al
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  char v25; // bp
  char v26; // r14
  char v27; // r12
  __int64 v28; // rax
  char v29; // bp
  char v30; // bl
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rsi
  char v35; // bl
  __int8 v36; // bp
  __int64 v37; // rax
  char v38; // bl
  bool v39; // zf
  char v40; // al
  const char *v41; // rsi
  __m128i v42; // rax
  __m128i v43; // xmm1
  __m128i v44; // xmm0
  __int64 v45; // rax
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  char **v51; // rdi
  __int8 v52; // [rsp+8h] [rbp-730h]
  char v53; // [rsp+Dh] [rbp-72Bh]
  char v54; // [rsp+Eh] [rbp-72Ah]
  char v55; // [rsp+Fh] [rbp-729h]
  char v56; // [rsp+10h] [rbp-728h]
  _OWORD v57[3]; // [rsp+18h] [rbp-720h] BYREF
  __int64 v58; // [rsp+48h] [rbp-6F0h]
  __int64 v59; // [rsp+50h] [rbp-6E8h]
  __int64 v60; // [rsp+58h] [rbp-6E0h]
  __m128i v61; // [rsp+60h] [rbp-6D8h] BYREF
  __int64 v62; // [rsp+70h] [rbp-6C8h]
  __m128i v63; // [rsp+80h] [rbp-6B8h] BYREF
  __m128i v64; // [rsp+90h] [rbp-6A8h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-698h]
  __m128i v66; // [rsp+A8h] [rbp-690h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-680h]
  __m128i si128; // [rsp+C0h] [rbp-678h]
  __int64 v69; // [rsp+D0h] [rbp-668h]
  char v70; // [rsp+D8h] [rbp-660h]
  char v71; // [rsp+D9h] [rbp-65Fh]
  char v72; // [rsp+DAh] [rbp-65Eh]
  char v73; // [rsp+DBh] [rbp-65Dh]
  char v74; // [rsp+DCh] [rbp-65Ch]
  __m128i v75; // [rsp+E0h] [rbp-658h] BYREF
  __int64 v76; // [rsp+F0h] [rbp-648h]
  __m128i src[10]; // [rsp+100h] [rbp-638h] BYREF
  __int64 v78; // [rsp+1A0h] [rbp-598h]
  __m128i v79; // [rsp+1A8h] [rbp-590h] BYREF
  __m128i v80; // [rsp+1B8h] [rbp-580h]
  __m128i v81; // [rsp+1C8h] [rbp-570h]
  __m128i v82; // [rsp+1D8h] [rbp-560h]
  __m128i v83; // [rsp+1E8h] [rbp-550h]
  __m128i v84; // [rsp+1F8h] [rbp-540h] BYREF
  __int64 v85; // [rsp+208h] [rbp-530h]
  _OWORD v86[3]; // [rsp+210h] [rbp-528h] BYREF
  __m128i v87; // [rsp+248h] [rbp-4F0h] BYREF
  __int64 v88; // [rsp+258h] [rbp-4E0h]
  _OWORD v89[9]; // [rsp+260h] [rbp-4D8h] BYREF
  _QWORD v90[2]; // [rsp+2F8h] [rbp-440h] BYREF
  __m128i v91; // [rsp+308h] [rbp-430h] BYREF
  __int64 v92; // [rsp+318h] [rbp-420h]
  __m128i dest[45]; // [rsp+320h] [rbp-418h] BYREF
  _BYTE v94[32]; // [rsp+5F0h] [rbp-148h] BYREF
  __m128i v95[9]; // [rsp+610h] [rbp-128h] BYREF
  _BYTE v96[24]; // [rsp+6A8h] [rbp-90h] BYREF
  _OWORD v97[7]; // [rsp+6C0h] [rbp-78h] BYREF

  uu_du::uu_app(dest, a2);
  clap_builder::builder::command::Command::try_get_matches_from(src, dest, a1, a2);
  if ( src[0].m128i_i64[0] != 0x8000000000000000LL )
  {
    v58 = src[3].m128i_i64[0];
    v3 = _mm_loadu_si128(&src[1]);
    v57[2] = src[2];
    v57[1] = v3;
    v57[0] = src[0];
    LOBYTE(v60) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aS, 1LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v57, aD, 1LL);
    v4 = clap_builder::parser::error::MatchesError::unwrap(aD, 1LL, dest);
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 8);
      v5 = *(_QWORD *)(v4 + 16);
    }
    else
    {
      v6 = 0LL;
    }
    uu_du::parse_depth(dest[0].m128i_i64, v6, v5, v60);
    v2 = dest[0].m128i_i64[1];
    v7 = dest[1].m128i_i64[0];
    if ( dest[0].m128i_i64[0] )
      goto LABEL_103;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v57, aFiles0From, 11LL);
    v8 = clap_builder::parser::error::MatchesError::unwrap(aFiles0From, 11LL, dest);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      v10 = *(_QWORD *)(v8 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, asc_F423, 1LL) )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v57, aFile, 4LL);
        if ( clap_builder::parser::error::MatchesError::unwrap(aFile, 4LL, dest) )
        {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v57, aFile, 4LL);
          v11 = clap_builder::parser::error::MatchesError::unwrap(aFile, 4LL, dest);
          if ( v11 )
          {
            v12 = _mm_loadu_si128((const __m128i *)(v11 + 8));
            src[0].m128i_i64[0] = 0LL;
            *(__m128i *)((char *)src + 8) = v12;
            src[1].m128i_i8[8] = 1;
            *(_QWORD *)&v89[0] = src;
            *((_QWORD *)&v89[0] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
            dest[0].m128i_i64[0] = (__int64)&off_1802D8;
            dest[0].m128i_i64[1] = 2LL;
            dest[2].m128i_i64[0] = 0LL;
            dest[1].m128i_i64[0] = (__int64)v89;
            dest[1].m128i_i64[1] = 1LL;
            core::option::Option<T>::map_or_else(v96, dest);
            v13 = std::io::error::Error::new(39LL, v96);
LABEL_13:
            v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
LABEL_102:
            v2 = v14;
LABEL_103:
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v57);
            return v2;
          }
          v51 = &off_1802C0;
LABEL_107:
          core::option::unwrap_failed(v51);
        }
      }
      uu_du::read_files_from(dest, v9, v10);
      v13 = dest[0].m128i_i64[1];
      if ( dest[0].m128i_i64[0] == 0x8000000000000000LL )
        goto LABEL_13;
      v64 = dest[0];
      v65 = dest[1].m128i_i64[0];
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v57, aFile, 4LL);
      if ( clap_builder::parser::error::MatchesError::unwrap(aFile, 4LL, dest) )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v57, aFile, 4LL);
        clap_builder::parser::error::MatchesError::unwrap(src, aFile, 4LL, dest);
        if ( !src[0].m128i_i64[0] )
        {
          v51 = &off_1802F8;
          goto LABEL_107;
        }
        v15 = _mm_loadu_si128(src);
        v97[3] = src[3];
        v97[2] = src[2];
        v97[1] = src[1];
        v97[0] = v15;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v64, v97);
      }
      else
      {
        v16 = alloc::alloc::Global::alloc_impl(24LL);
        if ( !v16 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        v17 = (__m128i *)v16;
        std::sys::os_str::bytes::Slice::to_owned(dest, asc_F556, 1LL);
        src[1].m128i_i64[0] = dest[1].m128i_i64[0];
        v18 = _mm_loadu_si128(dest);
        src[0] = v18;
        v17[1].m128i_i64[0] = dest[1].m128i_i64[0];
        *v17 = v18;
        alloc::slice::hack::into_vec(&v64, v17, 1LL);
      }
    }
    v56 = 3;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v57, aTime, 4LL) )
      v56 = uu_du::uumain::uumain::{{closure}}(v57);
    v19 = 1LL;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, asc_F557, 1LL) )
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aSi, 2LL) )
      {
        v19 = 0LL;
      }
      else
      {
        v59 = 1LL;
        v19 = 2LL;
        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aB, 1LL) )
        {
          flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aK, 1LL);
          v59 = 1024LL;
          if ( !flag )
          {
            v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aM, 1LL);
            v59 = 0x100000LL;
            if ( !v21 )
            {
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v57, aBlockSize, 10LL);
              v22 = clap_builder::parser::error::MatchesError::unwrap(aBlockSize, 10LL, dest);
              if ( v22 )
                v24 = core::ops::function::FnOnce::call_once(*(_QWORD *)(v22 + 8), *(_QWORD *)(v22 + 16));
              else
                v24 = 0LL;
              uu_du::read_block_size(dest[0].m128i_i64, v24, v23);
              v14 = dest[0].m128i_i64[0];
              if ( dest[0].m128i_i64[0] )
                goto LABEL_101;
              v59 = dest[0].m128i_i64[1];
            }
          }
        }
      }
    }
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aAll, 3LL);
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aS_0, 1LL);
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aOneFileSystem, 15LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aDereference, 11LL) )
    {
      v28 = 0x8000000000000000LL;
    }
    else
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                              v57,
                              "dereference-argsConnection resetentity not foundk",
                              16LL) )
      {
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(dest, &v64);
        src[1].m128i_i64[0] = dest[1].m128i_i64[0];
        src[0] = _mm_loadu_si128(dest);
LABEL_39:
        v53 = v27;
        v54 = v26;
        v55 = v25;
        v78 = v19;
        v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, asc_F585, 1LL);
        v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aVerbose, 7LL);
        uu_du::build_exclude_patterns((__int64)dest, (__int64)v57);
        v14 = dest[0].m128i_i64[1];
        v31 = dest[1].m128i_i64[0];
        if ( dest[0].m128i_i64[0] == 0x8000000000000000LL )
        {
          core::ptr::drop_in_place<uu_du::Deref>(src);
          goto LABEL_101;
        }
        v70 = v55;
        v71 = v54;
        v72 = v53;
        si128 = _mm_load_si128(src);
        v69 = src[1].m128i_i64[0];
        v73 = v29;
        v74 = v30;
        v66 = dest[0];
        v67 = dest[1].m128i_i64[0];
        if ( v56 == 3 )
        {
          <T as alloc::slice::hack::ConvertVec>::to_vec(dest, aYMDHM, 14LL);
        }
        else
        {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v57, aTimeStyle, 10LL);
          v32 = clap_builder::parser::error::MatchesError::unwrap(aTimeStyle, 10LL, dest);
          if ( v32 )
          {
            v34 = *(_QWORD *)(v32 + 8);
            v33 = *(_QWORD *)(v32 + 16);
          }
          else
          {
            v34 = 0LL;
          }
          uu_du::parse_time_style(dest[0].m128i_i64, v34, v33);
          v14 = dest[0].m128i_i64[1];
          v31 = dest[1].m128i_i64[0];
          if ( dest[0].m128i_i64[0] )
          {
            v35 = 0;
            goto LABEL_100;
          }
          <T as alloc::slice::hack::ConvertVec>::to_vec(dest, dest[0].m128i_i64[1], dest[1].m128i_i64[0]);
        }
        v76 = dest[1].m128i_i64[0];
        v75 = _mm_loadu_si128(dest);
        v52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aC, 1LL);
        v36 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aInodes, 6LL);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v57, aThreshold, 9LL);
        v37 = clap_builder::parser::error::MatchesError::unwrap(aThreshold, 9LL, dest);
        if ( v37 )
        {
          uu_du::uumain::uumain::{{closure}}(dest, *(_QWORD *)(v37 + 8), *(_QWORD *)(v37 + 16));
          v31 = dest[1].m128i_i64[0];
          if ( dest[0].m128i_i64[0] == 2 )
          {
            v14 = 2LL;
          }
          else
          {
            v14 = dest[0].m128i_i64[1];
            if ( dest[0].m128i_i64[0] == 1 )
            {
              core::ptr::drop_in_place<alloc::string::String>(&v75);
              v35 = 0;
              goto LABEL_100;
            }
          }
        }
        else
        {
          v14 = 2LL;
        }
        v38 = 1;
        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                 v57,
                                 aApparentSize,
                                 13LL) )
          v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aB, 1LL);
        dest[1].m128i_i64[0] = v76;
        dest[0] = _mm_load_si128(&v75);
        v39 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, a0, 1LL) == 0;
        v40 = 10;
        if ( !v39 )
          v40 = 0;
        v83.m128i_i8[8] = v52;
        v83.m128i_i8[9] = v36;
        v79.m128i_i64[0] = v2;
        v79.m128i_i64[1] = v7;
        v80.m128i_i64[0] = v14;
        v80.m128i_i64[1] = v31;
        v83.m128i_i8[10] = v38;
        v81.m128i_i64[0] = v78;
        v81.m128i_i64[1] = v59;
        v83.m128i_i8[12] = v56;
        v82 = _mm_load_si128(dest);
        v83.m128i_i64[0] = dest[1].m128i_i64[0];
        v83.m128i_i8[13] = v40;
        v83.m128i_i8[11] = v60;
        if ( v36 )
        {
          v41 = aApparentSize;
          if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                  v57,
                                  aApparentSize,
                                  13LL)
            || (v41 = aB, (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                             v57,
                                             aB,
                                             1LL)) )
          {
            v42.m128i_i64[0] = uucore::util_name(v57, v41);
            src[0] = v42;
            *(_QWORD *)&v89[0] = src;
            *((_QWORD *)&v89[0] + 1) = <&T as core::fmt::Display>::fmt;
            dest[0].m128i_i64[0] = (__int64)&unk_180310;
            dest[0].m128i_i64[1] = 2LL;
            dest[2].m128i_i64[0] = 0LL;
            dest[1].m128i_i64[0] = (__int64)v89;
            dest[1].m128i_i64[1] = 1LL;
            std::io::stdio::_eprint(dest);
            dest[0].m128i_i64[0] = (__int64)&off_180330;
            dest[0].m128i_i64[1] = 1LL;
            dest[1].m128i_i64[0] = 8LL;
            *(__m128i *)((char *)&dest[1] + 8) = 0LL;
            std::io::stdio::_eprint(dest);
          }
        }
        std::sync::mpmc::channel(dest);
        v43 = dest[1];
        v63 = dest[0];
        dest[4] = v83;
        v44 = _mm_loadu_si128(&v79);
        dest[3] = v82;
        dest[2] = v81;
        dest[1] = v80;
        dest[0] = v44;
        dest[5] = v43;
        src[1].m128i_i64[0] = 0x8000000000000000LL;
        src[0].m128i_i64[0] = 0LL;
        std::thread::Builder::spawn_unchecked(v89, src, dest);
        core::result::Result<T,E>::expect(&v87, v89);
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v94, &v64);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v84, v94);
        if ( v84.m128i_i64[0] == 0x8000000000000000LL )
        {
LABEL_64:
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(v94);
          dest[0] = _mm_loadu_si128(&v63);
          core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<uu_du::StatPrintInfo,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(dest);
          dest[1].m128i_i64[0] = v88;
          dest[0] = _mm_loadu_si128(&v87);
          std::thread::JoinInner<T>::join(src, dest);
          v14 = src[0].m128i_i64[1];
          if ( src[0].m128i_i64[0] )
          {
            v14 = uu_du::uumain::uumain::{{closure}}(src[0].m128i_i64[1], src[1].m128i_i64[0]);
            goto LABEL_99;
          }
          if ( !src[0].m128i_i64[1] )
          {
            core::ptr::drop_in_place<uu_du::TraversalOptions>(&v66);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v57);
            return 0LL;
          }
LABEL_99:
          v35 = 1;
LABEL_100:
          core::ptr::drop_in_place<uu_du::TraversalOptions>(&v66);
          if ( v35 )
            goto LABEL_102;
LABEL_101:
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v64);
          goto LABEL_102;
        }
        while ( 1 )
        {
          v62 = v85;
          v61 = _mm_loadu_si128(&v84);
          if ( v67 )
          {
            std::sys::os_str::bytes::Slice::to_string_lossy(v89, v61.m128i_i64[1], v62);
            *(_QWORD *)&v86[0] = v66.m128i_i64[1];
            *((_QWORD *)&v86[0] + 1) = v66.m128i_i64[1] + 56 * v67;
            do
            {
              v45 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v86);
              if ( !v45 )
              {
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v89);
                goto LABEL_78;
              }
            }
            while ( !(unsigned __int8)glob::Pattern::matches(v45, *((_QWORD *)&v89[0] + 1), *(_QWORD *)&v89[1]) );
            if ( v74 )
            {
              v46 = _mm_loadu_si128((const __m128i *)((char *)v89 + 8));
              src[0].m128i_i64[0] = 0LL;
              *(__m128i *)((char *)src + 8) = v46;
              src[1].m128i_i8[8] = 1;
              v95[0].m128i_i64[0] = (__int64)src;
              v95[0].m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
              dest[0].m128i_i64[0] = (__int64)&unk_180420;
              dest[0].m128i_i64[1] = 2LL;
              dest[2].m128i_i64[0] = 0LL;
              dest[1].m128i_i64[0] = (__int64)v95;
              dest[1].m128i_i64[1] = 1LL;
              std::io::stdio::_print(dest);
            }
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v89);
            core::ptr::drop_in_place<std::path::PathBuf>(&v61);
            goto LABEL_69;
          }
LABEL_78:
          uu_du::Stat::new((__int64)v95, v61.m128i_i64[1], v62, 0LL, &v66);
          v60 = v95[0].m128i_i64[1];
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v95), (__m128i)xmmword_EE00)) == 0xFFFF )
          {
            std::sys::os_str::bytes::Slice::to_string_lossy(v86, v61.m128i_i64[1], v62);
            v47 = _mm_loadu_si128((const __m128i *)((char *)v86 + 8));
            *(_QWORD *)&v89[0] = 0LL;
            *(__m128i *)((char *)v89 + 8) = v47;
            BYTE8(v89[1]) = 1;
            v90[0] = v89;
            v90[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            dest[0].m128i_i64[0] = (__int64)&off_180358;
            dest[0].m128i_i64[1] = 2LL;
            dest[2].m128i_i64[0] = 0LL;
            dest[1].m128i_i64[0] = (__int64)v90;
            dest[1].m128i_i64[1] = 1LL;
            core::option::Option<T>::map_or_else(&v91, dest);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v86);
            dest[1].m128i_i64[0] = v92;
            dest[0] = _mm_loadu_si128(&v91);
            dest[1].m128i_i32[2] = 1;
            dest[1].m128i_i64[0] = alloc::boxed::Box<T>::new(dest);
            dest[1].m128i_i64[1] = (__int64)&off_1803B0;
            dest[0] = (__m128i)2uLL;
            std::sync::mpmc::Sender<T>::send(src, &v63, dest);
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(src), (__m128i)xmmword_EF90)) != 0xFFFF )
            {
              memcpy(dest, src, 0xA0uLL);
              v14 = uu_du::uumain::uumain::{{closure}}(dest);
              if ( v14 )
              {
                if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v95), (__m128i)xmmword_EE00)) == 0xFFFF )
                  goto LABEL_96;
                core::ptr::drop_in_place<uu_du::Stat>(v95);
LABEL_98:
                core::ptr::drop_in_place<std::path::PathBuf>(&v61);
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(v94);
                core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v87);
                core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<uu_du::StatPrintInfo,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v63);
                goto LABEL_99;
              }
            }
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v95), (__m128i)xmmword_EE00)) != 0xFFFF )
            {
              core::ptr::drop_in_place<uu_du::Stat>(v95);
              goto LABEL_68;
            }
          }
          else
          {
            memcpy(v89, v95, sizeof(v89));
            <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(dest);
            v48 = _mm_loadu_si128(dest);
            v86[2] = dest[2];
            v86[1] = dest[1];
            v86[0] = v48;
            if ( v89[0] != 0LL )
              hashbrown::map::HashMap<K,V,S,A>::insert(
                v86,
                *(_QWORD *)&v89[1],
                *((_QWORD *)&v89[1] + 1),
                *(_QWORD *)&v89[2]);
            memcpy(dest, v89, 0x90uLL);
            uu_du::du(src, dest, (__int64)&v66, 0LL, (__int64)v86, (__int64)&v63);
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(src), (__m128i)xmmword_EE00)) == 0xFFFF )
            {
              v14 = uu_du::uumain::uumain::{{closure}}(src[1].m128i_i64[0]);
LABEL_93:
              core::ptr::drop_in_place<std::collections::hash::set::HashSet<uu_du::FileInfo>>(v86);
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v95), (__m128i)xmmword_EE00)) != 0xFFFF )
                goto LABEL_98;
LABEL_96:
              core::ptr::drop_in_place<core::result::Result<uu_du::Stat,std::io::error::Error>>(v95);
              goto LABEL_98;
            }
            dest[8] = src[8];
            dest[7] = src[7];
            dest[6] = src[6];
            v49 = _mm_load_si128(&src[2]);
            dest[5] = src[5];
            dest[4] = src[4];
            dest[3] = src[3];
            dest[2] = v49;
            dest[0] = src[0];
            dest[1] = src[1];
            dest[9].m128i_i64[0] = 0LL;
            std::sync::mpmc::Sender<T>::send(src, &v63, dest);
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(src), (__m128i)xmmword_EF90)) != 0xFFFF )
            {
              memcpy(dest, src, 0xA0uLL);
              v14 = uu_du::uumain::uumain::{{closure}}(dest);
              if ( v14 )
                goto LABEL_93;
            }
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<uu_du::FileInfo>>(v86);
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v95), (__m128i)xmmword_EE00)) != 0xFFFF )
              goto LABEL_68;
          }
          core::ptr::drop_in_place<core::result::Result<uu_du::Stat,std::io::error::Error>>(v95);
LABEL_68:
          core::ptr::drop_in_place<std::path::PathBuf>(&v61);
LABEL_69:
          <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v84, v94);
          if ( v84.m128i_i64[0] == 0x8000000000000000LL )
            goto LABEL_64;
        }
      }
      v28 = 0x8000000000000002LL;
    }
    src[0].m128i_i64[0] = v28;
    goto LABEL_39;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(src[0].m128i_i64[1]);
}
