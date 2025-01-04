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
  __int64 v23; // rsi
  char v24; // bp
  char v25; // r14
  char v26; // r12
  __int64 v27; // rax
  char v28; // bp
  char v29; // bl
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rsi
  char v34; // bl
  __int8 v35; // bp
  __int64 v36; // rax
  char v37; // bl
  bool v38; // zf
  char v39; // al
  __m128i v40; // rax
  __m128i v41; // xmm1
  __m128i v42; // xmm0
  __int64 v43; // rax
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  char **v49; // rdi
  __int8 v50; // [rsp+8h] [rbp-730h]
  char v51; // [rsp+Dh] [rbp-72Bh]
  char v52; // [rsp+Eh] [rbp-72Ah]
  char v53; // [rsp+Fh] [rbp-729h]
  char v54; // [rsp+10h] [rbp-728h]
  _OWORD v55[3]; // [rsp+18h] [rbp-720h] BYREF
  __int64 v56; // [rsp+48h] [rbp-6F0h]
  void *v57; // [rsp+50h] [rbp-6E8h]
  __int64 v58; // [rsp+58h] [rbp-6E0h]
  __m128i v59; // [rsp+60h] [rbp-6D8h] BYREF
  __int64 v60; // [rsp+70h] [rbp-6C8h]
  __m128i v61; // [rsp+80h] [rbp-6B8h] BYREF
  __m128i v62; // [rsp+90h] [rbp-6A8h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-698h]
  __m128i v64; // [rsp+A8h] [rbp-690h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-680h]
  __m128i si128; // [rsp+C0h] [rbp-678h]
  __int64 v67; // [rsp+D0h] [rbp-668h]
  char v68; // [rsp+D8h] [rbp-660h]
  char v69; // [rsp+D9h] [rbp-65Fh]
  char v70; // [rsp+DAh] [rbp-65Eh]
  char v71; // [rsp+DBh] [rbp-65Dh]
  char v72; // [rsp+DCh] [rbp-65Ch]
  __m128i v73; // [rsp+E0h] [rbp-658h] BYREF
  __int64 v74; // [rsp+F0h] [rbp-648h]
  __m128i src[10]; // [rsp+100h] [rbp-638h] BYREF
  __int64 v76; // [rsp+1A0h] [rbp-598h]
  __m128i v77; // [rsp+1A8h] [rbp-590h] BYREF
  __m128i v78; // [rsp+1B8h] [rbp-580h]
  __m128i v79; // [rsp+1C8h] [rbp-570h]
  __m128i v80; // [rsp+1D8h] [rbp-560h]
  __m128i v81; // [rsp+1E8h] [rbp-550h]
  __m128i v82; // [rsp+1F8h] [rbp-540h] BYREF
  __int64 v83; // [rsp+208h] [rbp-530h]
  _OWORD v84[3]; // [rsp+210h] [rbp-528h] BYREF
  __m128i v85; // [rsp+248h] [rbp-4F0h] BYREF
  __int64 v86; // [rsp+258h] [rbp-4E0h]
  _OWORD v87[9]; // [rsp+260h] [rbp-4D8h] BYREF
  _QWORD v88[2]; // [rsp+2F8h] [rbp-440h] BYREF
  __m128i v89; // [rsp+308h] [rbp-430h] BYREF
  __int64 v90; // [rsp+318h] [rbp-420h]
  __m128i dest[45]; // [rsp+320h] [rbp-418h] BYREF
  _BYTE v92[32]; // [rsp+5F0h] [rbp-148h] BYREF
  __m128i v93; // [rsp+610h] [rbp-128h] BYREF
  _BYTE v94[24]; // [rsp+6A8h] [rbp-90h] BYREF
  _OWORD v95[7]; // [rsp+6C0h] [rbp-78h] BYREF

  uu_du::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(src, dest, a1, a2);
  if ( src[0].m128i_i64[0] != 0x8000000000000000LL )
  {
    v56 = src[3].m128i_i64[0];
    v3 = _mm_loadu_si128(&src[1]);
    v55[2] = src[2];
    v55[1] = v3;
    v55[0] = src[0];
    LOBYTE(v58) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aS, 1LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v55, aD, 1LL);
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
    uu_du::parse_depth(dest, v6, v5, (unsigned __int8)v58);
    v2 = dest[0].m128i_i64[1];
    v7 = dest[1].m128i_i64[0];
    if ( dest[0].m128i_i64[0] )
      goto LABEL_103;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v55, aFiles0From, 11LL);
    v8 = clap_builder::parser::error::MatchesError::unwrap(aFiles0From, 11LL, dest);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      v10 = *(_QWORD *)(v8 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, asc_F773, 1LL) )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v55, aFile, 4LL);
        if ( clap_builder::parser::error::MatchesError::unwrap(aFile, 4LL, dest) )
        {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v55, aFile, 4LL);
          v11 = clap_builder::parser::error::MatchesError::unwrap(aFile, 4LL, dest);
          if ( v11 )
          {
            v12 = _mm_loadu_si128((const __m128i *)(v11 + 8));
            src[0].m128i_i64[0] = 0LL;
            *(__m128i *)((char *)src + 8) = v12;
            src[1].m128i_i8[8] = 1;
            *(_QWORD *)&v87[0] = src;
            *((_QWORD *)&v87[0] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
            dest[0].m128i_i64[0] = (__int64)&off_180820;
            dest[0].m128i_i64[1] = 2LL;
            dest[2].m128i_i64[0] = 0LL;
            dest[1].m128i_i64[0] = (__int64)v87;
            dest[1].m128i_i64[1] = 1LL;
            core::option::Option<T>::map_or_else(v94, dest);
            v13 = std::io::error::Error::new(39LL, v94);
LABEL_13:
            v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
LABEL_102:
            v2 = v14;
LABEL_103:
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v55);
            return v2;
          }
          v49 = &off_1808B0;
LABEL_107:
          core::option::unwrap_failed(v49);
        }
      }
      uu_du::read_files_from(dest, v9, v10);
      v13 = dest[0].m128i_i64[1];
      if ( dest[0].m128i_i64[0] == 0x8000000000000000LL )
        goto LABEL_13;
      v62 = dest[0];
      v63 = dest[1].m128i_i64[0];
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v55, aFile, 4LL);
      if ( clap_builder::parser::error::MatchesError::unwrap(aFile, 4LL, dest) )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v55, aFile, 4LL);
        clap_builder::parser::error::MatchesError::unwrap(src, aFile, 4LL, dest);
        if ( !src[0].m128i_i64[0] )
        {
          v49 = &off_1808C8;
          goto LABEL_107;
        }
        v15 = _mm_loadu_si128(src);
        v95[3] = src[3];
        v95[2] = src[2];
        v95[1] = src[1];
        v95[0] = v15;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v62, v95);
      }
      else
      {
        v16 = alloc::alloc::Global::alloc_impl(24LL);
        if ( !v16 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        v17 = (__m128i *)v16;
        std::sys::os_str::bytes::Slice::to_owned(dest, asc_F6D6, 1LL);
        src[1].m128i_i64[0] = dest[1].m128i_i64[0];
        v18 = _mm_loadu_si128(dest);
        src[0] = v18;
        v17[1].m128i_i64[0] = dest[1].m128i_i64[0];
        *v17 = v18;
        alloc::slice::hack::into_vec(&v62, v17, 1LL);
      }
    }
    v54 = 3;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v55, aTime, 4LL) )
      v54 = uu_du::uumain::uumain::{{closure}}(v55);
    v19 = 1LL;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, asc_F774, 1LL) )
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aSi, 2LL) )
      {
        v19 = 0LL;
      }
      else
      {
        v57 = &dword_0 + 1;
        v19 = 2LL;
        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aB, 1LL) )
        {
          flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aK, 1LL);
          v57 = &stru_3F8 + 8;
          if ( !flag )
          {
            v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aM, 1LL);
            v57 = &loc_100000;
            if ( !v21 )
            {
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v55, aBlockSize, 10LL);
              v22 = clap_builder::parser::error::MatchesError::unwrap(aBlockSize, 10LL, dest);
              if ( v22 )
                v23 = core::ops::function::FnOnce::call_once(*(_QWORD *)(v22 + 8), *(_QWORD *)(v22 + 16));
              else
                v23 = 0LL;
              uu_du::read_block_size(dest, v23);
              v14 = dest[0].m128i_i64[0];
              if ( dest[0].m128i_i64[0] )
                goto LABEL_101;
              v57 = (void *)dest[0].m128i_i64[1];
            }
          }
        }
      }
    }
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aAll, 3LL);
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aS_0, 1LL);
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aOneFileSystem, 15LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aDereference, 11LL) )
    {
      v27 = 0x8000000000000000LL;
    }
    else
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                              v55,
                              "dereference-argsConnection resetentity not foundk",
                              16LL) )
      {
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(dest, &v62);
        src[1].m128i_i64[0] = dest[1].m128i_i64[0];
        src[0] = _mm_loadu_si128(dest);
LABEL_39:
        v51 = v26;
        v52 = v25;
        v53 = v24;
        v76 = v19;
        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, asc_F798, 1LL);
        v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aVerbose, 7LL);
        uu_du::build_exclude_patterns(dest, v55);
        v14 = dest[0].m128i_i64[1];
        v30 = dest[1].m128i_i64[0];
        if ( dest[0].m128i_i64[0] == 0x8000000000000000LL )
        {
          core::ptr::drop_in_place<uu_du::Deref>(src);
          goto LABEL_101;
        }
        v68 = v53;
        v69 = v52;
        v70 = v51;
        si128 = _mm_load_si128(src);
        v67 = src[1].m128i_i64[0];
        v71 = v28;
        v72 = v29;
        v64 = dest[0];
        v65 = dest[1].m128i_i64[0];
        if ( v54 == 3 )
        {
          <T as alloc::slice::hack::ConvertVec>::to_vec(dest, aYMDHM, 14LL);
        }
        else
        {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v55, aTimeStyle, 10LL);
          v31 = clap_builder::parser::error::MatchesError::unwrap(aTimeStyle, 10LL, dest);
          if ( v31 )
          {
            v33 = *(_QWORD *)(v31 + 8);
            v32 = *(_QWORD *)(v31 + 16);
          }
          else
          {
            v33 = 0LL;
          }
          uu_du::parse_time_style(dest, v33, v32);
          v14 = dest[0].m128i_i64[1];
          v30 = dest[1].m128i_i64[0];
          if ( dest[0].m128i_i64[0] )
          {
            v34 = 0;
            goto LABEL_100;
          }
          <T as alloc::slice::hack::ConvertVec>::to_vec(dest, dest[0].m128i_i64[1], dest[1].m128i_i64[0]);
        }
        v74 = dest[1].m128i_i64[0];
        v73 = _mm_loadu_si128(dest);
        v50 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aC, 1LL);
        v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aInodes, 6LL);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v55, aThreshold, 9LL);
        v36 = clap_builder::parser::error::MatchesError::unwrap(aThreshold, 9LL, dest);
        if ( v36 )
        {
          uu_du::uumain::uumain::{{closure}}(dest, *(_QWORD *)(v36 + 8), *(_QWORD *)(v36 + 16));
          v30 = dest[1].m128i_i64[0];
          if ( dest[0].m128i_i64[0] == 2 )
          {
            v14 = 2LL;
          }
          else
          {
            v14 = dest[0].m128i_i64[1];
            if ( dest[0].m128i_i64[0] == 1 )
            {
              core::ptr::drop_in_place<alloc::string::String>(&v73);
              v34 = 0;
              goto LABEL_100;
            }
          }
        }
        else
        {
          v14 = 2LL;
        }
        v37 = 1;
        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                 v55,
                                 aApparentSize,
                                 13LL) )
          v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aB, 1LL);
        dest[1].m128i_i64[0] = v74;
        dest[0] = _mm_load_si128(&v73);
        v38 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, a0, 1LL) == 0;
        v39 = 10;
        if ( !v38 )
          v39 = 0;
        v81.m128i_i8[8] = v50;
        v81.m128i_i8[9] = v35;
        v77.m128i_i64[0] = v2;
        v77.m128i_i64[1] = v7;
        v78.m128i_i64[0] = v14;
        v78.m128i_i64[1] = v30;
        v81.m128i_i8[10] = v37;
        v79.m128i_i64[0] = v76;
        v79.m128i_i64[1] = (__int64)v57;
        v81.m128i_i8[12] = v54;
        v80 = _mm_load_si128(dest);
        v81.m128i_i64[0] = dest[1].m128i_i64[0];
        v81.m128i_i8[13] = v39;
        v81.m128i_i8[11] = v58;
        if ( v35
          && ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                 v55,
                                 aApparentSize,
                                 13LL)
           || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aB, 1LL)) )
        {
          v40.m128i_i64[0] = uucore::util_name();
          src[0] = v40;
          *(_QWORD *)&v87[0] = src;
          *((_QWORD *)&v87[0] + 1) = <&T as core::fmt::Display>::fmt;
          dest[0].m128i_i64[0] = (__int64)&unk_180840;
          dest[0].m128i_i64[1] = 2LL;
          dest[2].m128i_i64[0] = 0LL;
          dest[1].m128i_i64[0] = (__int64)v87;
          dest[1].m128i_i64[1] = 1LL;
          std::io::stdio::_eprint(dest);
          dest[0].m128i_i64[0] = (__int64)&off_180860;
          dest[0].m128i_i64[1] = 1LL;
          dest[1].m128i_i64[0] = 8LL;
          *(__m128i *)((char *)&dest[1] + 8) = 0LL;
          std::io::stdio::_eprint(dest);
        }
        std::sync::mpmc::channel(dest);
        v41 = dest[1];
        v61 = dest[0];
        dest[4] = v81;
        v42 = _mm_loadu_si128(&v77);
        dest[3] = v80;
        dest[2] = v79;
        dest[1] = v78;
        dest[0] = v42;
        dest[5] = v41;
        src[1].m128i_i64[0] = 0x8000000000000000LL;
        src[0].m128i_i64[0] = 0LL;
        std::thread::Builder::spawn_unchecked(v87, src, dest);
        core::result::Result<T,E>::expect(&v85, v87);
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v92, &v62);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v82, v92);
        if ( v82.m128i_i64[0] == 0x8000000000000000LL )
        {
LABEL_64:
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(v92);
          dest[0] = _mm_loadu_si128(&v61);
          core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<uu_du::StatPrintInfo,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(dest);
          dest[1].m128i_i64[0] = v86;
          dest[0] = _mm_loadu_si128(&v85);
          std::thread::JoinInner<T>::join(src, dest);
          v14 = src[0].m128i_i64[1];
          if ( src[0].m128i_i64[0] )
          {
            v14 = uu_du::uumain::uumain::{{closure}}(src[0].m128i_i64[1], src[1].m128i_i64[0]);
            goto LABEL_99;
          }
          if ( !src[0].m128i_i64[1] )
          {
            core::ptr::drop_in_place<uu_du::TraversalOptions>(&v64);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v55);
            return 0LL;
          }
LABEL_99:
          v34 = 1;
LABEL_100:
          core::ptr::drop_in_place<uu_du::TraversalOptions>(&v64);
          if ( v34 )
            goto LABEL_102;
LABEL_101:
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v62);
          goto LABEL_102;
        }
        while ( 1 )
        {
          v60 = v83;
          v59 = _mm_loadu_si128(&v82);
          if ( v65 )
          {
            std::sys::os_str::bytes::Slice::to_string_lossy(v87, v59.m128i_i64[1], v60);
            *(_QWORD *)&v84[0] = v64.m128i_i64[1];
            *((_QWORD *)&v84[0] + 1) = v64.m128i_i64[1] + 56 * v65;
            do
            {
              v43 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v84);
              if ( !v43 )
              {
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v87);
                goto LABEL_78;
              }
            }
            while ( !(unsigned __int8)glob::Pattern::matches(v43, *((_QWORD *)&v87[0] + 1), *(_QWORD *)&v87[1]) );
            if ( v72 )
            {
              v44 = _mm_loadu_si128((const __m128i *)((char *)v87 + 8));
              src[0].m128i_i64[0] = 0LL;
              *(__m128i *)((char *)src + 8) = v44;
              src[1].m128i_i8[8] = 1;
              v93.m128i_i64[0] = (__int64)src;
              v93.m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
              dest[0].m128i_i64[0] = (__int64)&unk_180870;
              dest[0].m128i_i64[1] = 2LL;
              dest[2].m128i_i64[0] = 0LL;
              dest[1].m128i_i64[0] = (__int64)&v93;
              dest[1].m128i_i64[1] = 1LL;
              std::io::stdio::_print(dest);
            }
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v87);
            core::ptr::drop_in_place<std::path::PathBuf>(&v59);
            goto LABEL_69;
          }
LABEL_78:
          uu_du::Stat::new(&v93, v59.m128i_i64[1], v60, 0LL, &v64);
          v58 = v93.m128i_i64[1];
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v93), (__m128i)xmmword_EF80)) == 0xFFFF )
          {
            std::sys::os_str::bytes::Slice::to_string_lossy(v84, v59.m128i_i64[1], v60);
            v45 = _mm_loadu_si128((const __m128i *)((char *)v84 + 8));
            *(_QWORD *)&v87[0] = 0LL;
            *(__m128i *)((char *)v87 + 8) = v45;
            BYTE8(v87[1]) = 1;
            v88[0] = v87;
            v88[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            dest[0].m128i_i64[0] = (__int64)&off_180890;
            dest[0].m128i_i64[1] = 2LL;
            dest[2].m128i_i64[0] = 0LL;
            dest[1].m128i_i64[0] = (__int64)v88;
            dest[1].m128i_i64[1] = 1LL;
            core::option::Option<T>::map_or_else(&v89, dest);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v84);
            dest[1].m128i_i64[0] = v90;
            dest[0] = _mm_loadu_si128(&v89);
            dest[1].m128i_i32[2] = 1;
            dest[1].m128i_i64[0] = alloc::boxed::Box<T>::new(dest);
            dest[1].m128i_i64[1] = (__int64)&off_180930;
            dest[0] = (__m128i)2uLL;
            std::sync::mpmc::Sender<T>::send(src, &v61, dest);
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(src), (__m128i)xmmword_F110)) != 0xFFFF )
            {
              memcpy(dest, src, 0xA0uLL);
              v14 = uu_du::uumain::uumain::{{closure}}(dest);
              if ( v14 )
              {
                if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v93), (__m128i)xmmword_EF80)) == 0xFFFF )
                  goto LABEL_96;
                core::ptr::drop_in_place<uu_du::Stat>(&v93);
LABEL_98:
                core::ptr::drop_in_place<std::path::PathBuf>(&v59);
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(v92);
                core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v85);
                core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<uu_du::StatPrintInfo,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v61);
                goto LABEL_99;
              }
            }
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v93), (__m128i)xmmword_EF80)) != 0xFFFF )
            {
              core::ptr::drop_in_place<uu_du::Stat>(&v93);
              goto LABEL_68;
            }
          }
          else
          {
            memcpy(v87, &v93, sizeof(v87));
            <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(dest);
            v46 = _mm_loadu_si128(dest);
            v84[2] = dest[2];
            v84[1] = dest[1];
            v84[0] = v46;
            if ( v87[0] != 0LL )
              hashbrown::map::HashMap<K,V,S,A>::insert(
                v84,
                *(_QWORD *)&v87[1],
                *((_QWORD *)&v87[1] + 1),
                *(_QWORD *)&v87[2]);
            memcpy(dest, v87, 0x90uLL);
            uu_du::du(src, dest, &v64, 0LL, v84, &v61);
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(src), (__m128i)xmmword_EF80)) == 0xFFFF )
            {
              v14 = uu_du::uumain::uumain::{{closure}}(src[1].m128i_i64[0]);
LABEL_93:
              core::ptr::drop_in_place<std::collections::hash::set::HashSet<uu_du::FileInfo>>(v84);
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v93), (__m128i)xmmword_EF80)) != 0xFFFF )
                goto LABEL_98;
LABEL_96:
              core::ptr::drop_in_place<core::result::Result<uu_du::Stat,std::io::error::Error>>(&v93);
              goto LABEL_98;
            }
            dest[8] = src[8];
            dest[7] = src[7];
            dest[6] = src[6];
            v47 = _mm_load_si128(&src[2]);
            dest[5] = src[5];
            dest[4] = src[4];
            dest[3] = src[3];
            dest[2] = v47;
            dest[0] = src[0];
            dest[1] = src[1];
            dest[9].m128i_i64[0] = 0LL;
            std::sync::mpmc::Sender<T>::send(src, &v61, dest);
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(src), (__m128i)xmmword_F110)) != 0xFFFF )
            {
              memcpy(dest, src, 0xA0uLL);
              v14 = uu_du::uumain::uumain::{{closure}}(dest);
              if ( v14 )
                goto LABEL_93;
            }
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<uu_du::FileInfo>>(v84);
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v93), (__m128i)xmmword_EF80)) != 0xFFFF )
              goto LABEL_68;
          }
          core::ptr::drop_in_place<core::result::Result<uu_du::Stat,std::io::error::Error>>(&v93);
LABEL_68:
          core::ptr::drop_in_place<std::path::PathBuf>(&v59);
LABEL_69:
          <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v82, v92);
          if ( v82.m128i_i64[0] == 0x8000000000000000LL )
            goto LABEL_64;
        }
      }
      v27 = 0x8000000000000002LL;
    }
    src[0].m128i_i64[0] = v27;
    goto LABEL_39;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(src[0].m128i_i64[1]);
}
