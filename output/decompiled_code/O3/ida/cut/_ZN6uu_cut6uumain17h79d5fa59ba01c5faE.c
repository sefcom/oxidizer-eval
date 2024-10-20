__int64 __fastcall uu_cut::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  unsigned __int8 v4; // r15
  __int64 v5; // r15
  __int64 (__fastcall **v6)(); // rdx
  __int64 (__fastcall **v7)(); // rbx
  __int128 v8; // rax
  __int128 v9; // rax
  unsigned int v10; // ebx
  __int128 v11; // kr00_16
  __int64 v12; // rsi
  __int8 v13; // r14
  _BYTE *v14; // rdx
  const char *v15; // rax
  __int64 v16; // r12
  const char *v17; // rax
  const char *v18; // rax
  __int64 v19; // r13
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  char v25; // bl
  const char *v26; // rsi
  void (__fastcall __noreturn *v27)(); // rax
  const char *v28; // rcx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int64 v31; // rdx
  _OWORD *v32; // rax
  __int128 v33; // xmm0
  __int64 v35; // rdi
  void *v36; // rax
  void *v37; // rax
  unsigned __int8 flag; // [rsp+Eh] [rbp-4DAh]
  char v39; // [rsp+Fh] [rbp-4D9h]
  _BYTE v40[48]; // [rsp+10h] [rbp-4D8h] BYREF
  __m256i v41; // [rsp+40h] [rbp-4A8h]
  __m256i v42; // [rsp+60h] [rbp-488h] BYREF
  __int128 v43; // [rsp+80h] [rbp-468h]
  __m256i v44; // [rsp+90h] [rbp-458h]
  __m256i v45; // [rsp+B0h] [rbp-438h] BYREF
  __int128 v46; // [rsp+D0h] [rbp-418h]
  __m256i v47; // [rsp+E0h] [rbp-408h]
  __int128 v48; // [rsp+100h] [rbp-3E8h] BYREF
  __int128 v49; // [rsp+110h] [rbp-3D8h]
  __int128 v50; // [rsp+120h] [rbp-3C8h]
  const char *v51; // [rsp+130h] [rbp-3B8h]
  __int64 v52; // [rsp+138h] [rbp-3B0h]
  __int128 v53; // [rsp+140h] [rbp-3A8h]
  _OWORD v54[3]; // [rsp+150h] [rbp-398h] BYREF
  __int64 v55; // [rsp+180h] [rbp-368h]
  __int128 v56; // [rsp+188h] [rbp-360h] BYREF
  __int64 v57; // [rsp+198h] [rbp-350h]
  __int64 v58; // [rsp+1A0h] [rbp-348h]
  __int128 v59; // [rsp+1A8h] [rbp-340h] BYREF
  __int64 v60; // [rsp+1B8h] [rbp-330h]
  __int128 v61; // [rsp+1C0h] [rbp-328h] BYREF
  __int64 v62; // [rsp+1D0h] [rbp-318h]
  __int128 v63; // [rsp+1D8h] [rbp-310h] BYREF
  __int64 v64; // [rsp+1E8h] [rbp-300h]
  __int128 v65; // [rsp+1F0h] [rbp-2F8h] BYREF
  _BYTE v66[24]; // [rsp+200h] [rbp-2E8h]
  _BYTE v67[24]; // [rsp+218h] [rbp-2D0h]
  _BYTE v68[24]; // [rsp+230h] [rbp-2B8h]

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v59, a1, a2);
  v2 = *((_QWORD *)&v59 + 1);
  v3 = v60;
  std::sys::os_str::bytes::Slice::to_owned(&v65, aD, 3LL);
  *(_QWORD *)&v40[16] = *(_QWORD *)v66;
  *(_OWORD *)v40 = v65;
  v4 = <T as core::slice::cmp::SliceContains>::slice_contains(v40, v2, v3);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v40);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v40);
  uu_cut::uu_app(&v65);
  v45.m256i_i64[2] = v60;
  *(_OWORD *)v45.m256i_i8 = v59;
  clap_builder::builder::command::Command::try_get_matches_from(v40, &v65, &v45);
  if ( *(_QWORD *)v40 != 0x8000000000000000LL )
  {
    v55 = v41.m256i_i64[0];
    v54[2] = *(_OWORD *)&v40[32];
    v54[1] = *(_OWORD *)&v40[16];
    v54[0] = *(_OWORD *)v40;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v54, aComplement, 10LL);
    v39 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v54, aOnlyDelimited, 14LL);
    uu_cut::get_delimiters(&v65, v54, v4);
    v5 = *((_QWORD *)&v65 + 1);
    if ( (_QWORD)v65 )
    {
      v7 = *(__int64 (__fastcall ***)())v66;
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v54);
      goto LABEL_64;
    }
    v53 = *(_OWORD *)&v66[8];
    v58 = *(_QWORD *)v66;
    v13 = 10;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v54, aZeroTerminated, 15LL) )
      v13 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v42, v54, aBytes, 5LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v45, v54, aCharacters, 10LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v65, v54, aFields, 6LL);
    *(_QWORD *)&v40[16] = v42.m256i_i64[2];
    *(_OWORD *)v40 = *(_OWORD *)v42.m256i_i8;
    *(_QWORD *)&v40[40] = v45.m256i_i64[2];
    *(_OWORD *)&v40[24] = *(_OWORD *)v45.m256i_i8;
    *(_OWORD *)v41.m256i_i8 = v65;
    v41.m256i_i64[2] = *(_QWORD *)v66;
    *(_OWORD *)v66 = *(_OWORD *)v42.m256i_i8;
    *(_OWORD *)v68 = v65;
    *(_QWORD *)&v68[16] = v41.m256i_i64[2];
    *(_QWORD *)&v66[16] = v42.m256i_i64[2];
    *(_OWORD *)v67 = *(_OWORD *)v45.m256i_i8;
    *(_QWORD *)&v67[16] = v45.m256i_i64[2];
    *(_QWORD *)&v65 = 0LL;
    *((_QWORD *)&v65 + 1) = 3LL;
    v14 = &v40[8];
    v15 = (const char *)v42.m256i_i64[0];
    if ( v42.m256i_i64[0] )
    {
      *(_QWORD *)&v40[8] = *(_QWORD *)&v66[8];
      *(_QWORD *)&v40[16] = *(_QWORD *)&v66[16];
    }
    else
    {
      v15 = "&";
      *(_QWORD *)&v40[8] = "&";
      *(_QWORD *)&v40[16] = 0LL;
    }
    *(_QWORD *)v40 = v15;
    v16 = -3LL;
    do
      ++v16;
    while ( <clap_builder::parser::matches::arg_matches::Indices as core::iter::traits::iterator::Iterator>::next(
              v40,
              v54,
              v14) == 1 );
    v17 = *(const char **)v67;
    if ( *(_QWORD *)v67 )
    {
      *(_OWORD *)&v40[8] = *(_OWORD *)&v67[8];
    }
    else
    {
      v17 = "&";
      *(_QWORD *)&v40[8] = "&";
      *(_QWORD *)&v40[16] = 0LL;
    }
    *(_QWORD *)v40 = v17;
    do
      ++v16;
    while ( <clap_builder::parser::matches::arg_matches::Indices as core::iter::traits::iterator::Iterator>::next(
              v40,
              v54,
              v14) == 1 );
    v18 = *(const char **)v68;
    if ( *(_QWORD *)v68 )
    {
      *(_OWORD *)&v40[8] = *(_OWORD *)&v68[8];
    }
    else
    {
      v18 = "&";
      *(_QWORD *)&v40[8] = "&";
      *(_QWORD *)&v40[16] = 0LL;
    }
    *(_QWORD *)v40 = v18;
    do
      ++v16;
    while ( <clap_builder::parser::matches::arg_matches::Indices as core::iter::traits::iterator::Iterator>::next(
              v40,
              v54,
              v14) == 1 );
    *(_QWORD *)&v65 = 3LL;
    <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v65);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v40, v54, aBytes, 5LL);
    v19 = clap_builder::parser::error::MatchesError::unwrap(aBytes, 5LL, v40);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v40, v54, aCharacters, 10LL);
    v20 = clap_builder::parser::error::MatchesError::unwrap(aCharacters, 10LL, v40);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v40, v54, aFields, 6LL);
    v21 = clap_builder::parser::error::MatchesError::unwrap(aFields, 6LL, v40);
    if ( !v16 )
      goto LABEL_50;
    if ( v16 != 1 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(v40, 86LL, 0LL);
      v22 = *(_QWORD *)&v40[8];
      if ( !*(_QWORD *)v40 )
      {
        v23 = *(_QWORD *)&v40[16];
        *(_OWORD *)(*(_QWORD *)&v40[16] + 64LL) = xmmword_1170F;
        qmemcpy((void *)v23, "invalid usage: expects no more than one of --fields (-f), --char", 64);
        *(_QWORD *)(v23 + 78) = 0x29622D2820736574LL;
        v24 = 86LL;
LABEL_52:
        v42.m256i_i64[1] = v22;
        v42.m256i_i64[2] = v23;
        v42.m256i_i64[3] = v24;
        v42.m256i_i64[0] = 3LL;
        goto LABEL_53;
      }
LABEL_79:
      alloc::raw_vec::handle_error(v22, *(_QWORD *)&v40[16]);
    }
    if ( v19 )
    {
      if ( !(v21 | v20) )
      {
        uu_cut::list_to_ranges(v40, *(_QWORD *)(v19 + 8), *(_QWORD *)(v19 + 16), flag);
        if ( !*(_QWORD *)v40 )
        {
          v44.m256i_i64[3] = *(_QWORD *)&v40[24];
          *(_OWORD *)&v44.m256i_u64[1] = *(_OWORD *)&v40[8];
          *(_OWORD *)&v42.m256i_u64[1] = v53;
          BYTE8(v43) = 2;
          v44.m256i_i8[0] = v13;
          v42.m256i_i64[0] = 0LL;
          goto LABEL_45;
        }
        goto LABEL_44;
      }
LABEL_50:
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(v40, 73LL, 0LL);
      v22 = *(_QWORD *)&v40[8];
      if ( !*(_QWORD *)v40 )
      {
        v23 = *(_QWORD *)&v40[16];
        *(_OWORD *)(*(_QWORD *)&v40[16] + 57LL) = *(__int128 *)((char *)&xmmword_116B6 + 9);
        qmemcpy((void *)v23, "invalid usage: expects one of --fields (-f), --chars (-c) or --b", 64);
        v24 = 73LL;
        goto LABEL_52;
      }
      goto LABEL_79;
    }
    if ( v20 )
    {
      if ( v21 )
        goto LABEL_50;
      uu_cut::list_to_ranges(v40, *(_QWORD *)(v20 + 8), *(_QWORD *)(v20 + 16), flag);
      if ( !*(_QWORD *)v40 )
      {
        v44.m256i_i64[3] = *(_QWORD *)&v40[24];
        *(_OWORD *)&v44.m256i_u64[1] = *(_OWORD *)&v40[8];
        *(_OWORD *)&v42.m256i_u64[1] = v53;
        BYTE8(v43) = 2;
        v44.m256i_i8[0] = v13;
        v42.m256i_i64[0] = 1LL;
        goto LABEL_45;
      }
    }
    else
    {
      if ( !v21 )
        goto LABEL_50;
      uu_cut::list_to_ranges(v40, *(_QWORD *)(v21 + 8), *(_QWORD *)(v21 + 16), flag);
      if ( !*(_QWORD *)v40 )
      {
        v44.m256i_i64[3] = *(_QWORD *)&v40[24];
        *(_OWORD *)&v44.m256i_u64[1] = *(_OWORD *)&v40[8];
        *(_OWORD *)&v42.m256i_u64[1] = v53;
        v42.m256i_i64[3] = v5;
        *(_QWORD *)&v43 = v58;
        BYTE8(v43) = v39;
        v44.m256i_i8[0] = v13;
        v42.m256i_i64[0] = 2LL;
LABEL_45:
        *(__m256i *)v40 = v42;
        v41 = v44;
        *(_OWORD *)&v40[32] = v43;
        if ( v42.m256i_i64[0] )
        {
          if ( v42.m256i_i32[0] != 1 )
            goto LABEL_77;
          if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                                   v54,
                                   aDelimiter,
                                   9LL) )
          {
            if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                     v54,
                                     aWhitespaceDeli,
                                     20LL) )
            {
LABEL_74:
              if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                      v54,
                                      aOnlyDelimited,
                                      14LL) )
              {
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v48, aInvalidInputTh, 96LL);
                v45.m256i_i64[3] = v49;
                *(_OWORD *)&v45.m256i_u64[1] = v48;
                goto LABEL_76;
              }
LABEL_77:
              v47 = v41;
              v46 = *(_OWORD *)&v40[32];
              v45 = *(__m256i *)v40;
              goto LABEL_78;
            }
LABEL_71:
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v48, 75LL, 0LL);
            v35 = *((_QWORD *)&v48 + 1);
            if ( !(_QWORD)v48 )
            {
              v37 = (void *)v49;
              *(_OWORD *)(v49 + 59) = *(__int128 *)((char *)&xmmword_117D2 + 11);
              qmemcpy(v37, "invalid input: The '-w' option only usable if printing a sequenc", 64);
              v45.m256i_i64[1] = v35;
              v45.m256i_i64[2] = (__int64)v37;
              v45.m256i_i64[3] = 75LL;
              goto LABEL_76;
            }
            goto LABEL_81;
          }
        }
        else if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                                      v54,
                                      aDelimiter,
                                      9LL) )
        {
          if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                   v54,
                                   aWhitespaceDeli,
                                   20LL) )
            goto LABEL_74;
          goto LABEL_71;
        }
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v48, 91LL, 0LL);
        v35 = *((_QWORD *)&v48 + 1);
        if ( !(_QWORD)v48 )
        {
          v36 = (void *)v49;
          *(_OWORD *)(v49 + 75) = *(__int128 *)((char *)&xmmword_1182D + 11);
          qmemcpy(v36, "invalid input: The '--delimiter' ('-d') option only usable if printing a sequenc", 80);
          v45.m256i_i64[1] = v35;
          v45.m256i_i64[2] = (__int64)v36;
          v45.m256i_i64[3] = 91LL;
LABEL_76:
          v45.m256i_i64[0] = 3LL;
          core::ptr::drop_in_place<uu_cut::Mode>(v40);
LABEL_78:
          v25 = 1;
LABEL_54:
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v40, v54, aFile, 4LL);
          v26 = aFile;
          clap_builder::parser::error::MatchesError::unwrap(&v48, aFile, 4LL, v40);
          v27 = (void (__fastcall __noreturn *)())v48;
          if ( (_QWORD)v48 )
          {
            v28 = (const char *)*((_QWORD *)&v48 + 1);
            v29 = v49;
            v30 = v50;
            v26 = v51;
            v31 = v52;
          }
          else
          {
            v30 = 0LL;
            v29 = (unsigned __int64)"&";
            v28 = "&";
            v27 = core::ops::function::FnOnce::call_once;
            v31 = 0LL;
          }
          *(_QWORD *)&v48 = v27;
          *((_QWORD *)&v48 + 1) = v28;
          v49 = v29;
          v50 = v30;
          v51 = v26;
          v52 = v31;
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v56, &v48);
          if ( v45.m256i_i32[0] == 3 )
          {
            *(_QWORD *)&v40[16] = v45.m256i_i64[3];
            *(_OWORD *)v40 = *(_OWORD *)&v45.m256i_u64[1];
            *(_DWORD *)&v40[24] = 1;
            v32 = (_OWORD *)_rust_alloc(32LL, 8LL);
            if ( !v32 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            v5 = (__int64)v32;
            v33 = *(_OWORD *)v40;
            v32[1] = *(_OWORD *)&v40[16];
            *v32 = v33;
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v56);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v56);
            if ( ((v42.m256i_i64[0] == 3) & (unsigned __int8)v25) == 0 )
              goto LABEL_63;
          }
          else
          {
            v41 = v47;
            *(_OWORD *)&v40[32] = v46;
            *(__m256i *)v40 = v45;
            v62 = v57;
            v61 = v56;
            uu_cut::cut_files(&v61, v40);
            core::ptr::drop_in_place<uu_cut::Mode>(v40);
            v5 = 0LL;
            if ( ((v42.m256i_i64[0] == 3) & (unsigned __int8)v25) == 0 )
            {
LABEL_63:
              core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v54);
              v7 = &off_EE6C0;
LABEL_64:
              if ( v5 )
                goto LABEL_3;
              return (unsigned int)uucore::mods::error::get_exit_code();
            }
          }
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v42.m256i_u64[1]);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v42.m256i_u64[1]);
          goto LABEL_63;
        }
LABEL_81:
        alloc::raw_vec::handle_error(v35, v49);
      }
    }
LABEL_44:
    v42.m256i_i64[3] = *(_QWORD *)&v40[24];
    *(_OWORD *)&v42.m256i_u64[1] = *(_OWORD *)&v40[8];
    v42.m256i_i64[0] = 3LL;
LABEL_53:
    v47 = v44;
    v46 = v43;
    v45 = v42;
    v25 = 0;
    goto LABEL_54;
  }
  v5 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v40[8]);
  v7 = v6;
  if ( !v5 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_3:
  *(_QWORD *)&v48 = v5;
  *((_QWORD *)&v48 + 1) = v7;
  *(_QWORD *)v40 = &v48;
  *(_QWORD *)&v40[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v65 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&v65 + 1) = 1LL;
  *(_QWORD *)&v66[16] = 0LL;
  *(_QWORD *)v66 = v40;
  *(_QWORD *)&v66[8] = 1LL;
  alloc::fmt::format::format_inner(&v63, &v65);
  *(_OWORD *)v40 = v63;
  *(_QWORD *)&v40[16] = v64;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v63 + 1), v64, 1LL, 0LL) )
  {
    *(_QWORD *)&v8 = uucore::util_name();
    *(_OWORD *)v45.m256i_i8 = v8;
    v42.m256i_i64[0] = (__int64)&v45;
    v42.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v65 = &unk_EE628;
    *((_QWORD *)&v65 + 1) = 2LL;
    *(_QWORD *)&v66[16] = 0LL;
    *(_QWORD *)v66 = &v42;
    *(_QWORD *)&v66[8] = 1LL;
    std::io::stdio::_eprint(&v65);
    v45.m256i_i64[0] = (__int64)v40;
    v45.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v65 = &unk_EE648;
    *((_QWORD *)&v65 + 1) = 2LL;
    *(_QWORD *)&v66[16] = 0LL;
    *(_QWORD *)v66 = &v45;
    *(_QWORD *)&v66[8] = 1LL;
    std::io::stdio::_eprint(&v65);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v48 + 1) + 104LL))(v48) )
  {
    *(_QWORD *)&v9 = uucore::execution_phrase();
    *(_OWORD *)v45.m256i_i8 = v9;
    v42.m256i_i64[0] = (__int64)&v45;
    v42.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v65 = &off_EE668;
    *((_QWORD *)&v65 + 1) = 2LL;
    *(_QWORD *)&v66[16] = 0LL;
    *(_QWORD *)v66 = &v42;
    *(_QWORD *)&v66[8] = 1LL;
    std::io::stdio::_eprint(&v65);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v48 + 1) + 96LL))(v48);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v40);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v40);
  v11 = v48;
  if ( **((_QWORD **)&v48 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v48 + 1))(v48);
  v12 = *(_QWORD *)(*((_QWORD *)&v11 + 1) + 8LL);
  if ( v12 )
    _rust_dealloc(v11, v12, *(_QWORD *)(*((_QWORD *)&v11 + 1) + 16LL));
  return v10;
}
