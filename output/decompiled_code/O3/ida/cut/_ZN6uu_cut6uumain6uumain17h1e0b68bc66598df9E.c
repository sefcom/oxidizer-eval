__int64 __fastcall uu_cut::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  unsigned __int8 v4; // r14
  unsigned __int8 flag; // bl
  __int64 v7; // rbp
  __int8 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  char v13; // r14
  const char *v14; // rsi
  void (__fastcall __noreturn *v15)(); // rax
  const char *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rbx
  char v21; // [rsp+Fh] [rbp-4F9h]
  __m256i v22; // [rsp+10h] [rbp-4F8h] BYREF
  __int128 v23; // [rsp+30h] [rbp-4D8h]
  __m256i v24; // [rsp+40h] [rbp-4C8h]
  __m256i v25; // [rsp+60h] [rbp-4A8h] BYREF
  __int128 v26; // [rsp+80h] [rbp-488h]
  __m256i v27; // [rsp+90h] [rbp-478h]
  __int128 v28; // [rsp+B8h] [rbp-450h]
  __m256i v29; // [rsp+C8h] [rbp-440h] BYREF
  __int128 v30; // [rsp+E8h] [rbp-420h]
  __int64 v31; // [rsp+F8h] [rbp-410h]
  __int128 v32; // [rsp+100h] [rbp-408h] BYREF
  __int128 v33; // [rsp+110h] [rbp-3F8h]
  __int128 v34; // [rsp+120h] [rbp-3E8h]
  const char *v35; // [rsp+130h] [rbp-3D8h]
  __int64 v36; // [rsp+138h] [rbp-3D0h]
  __int64 v37; // [rsp+140h] [rbp-3C8h]
  __int128 v38; // [rsp+148h] [rbp-3C0h] BYREF
  __int64 v39; // [rsp+158h] [rbp-3B0h]
  __int128 v40; // [rsp+160h] [rbp-3A8h] BYREF
  __int64 v41; // [rsp+170h] [rbp-398h]
  _QWORD v42[2]; // [rsp+178h] [rbp-390h] BYREF
  __int128 v43; // [rsp+188h] [rbp-380h]
  __int64 v44; // [rsp+198h] [rbp-370h]
  __int128 v45; // [rsp+1A0h] [rbp-368h]
  __int64 v46; // [rsp+1B0h] [rbp-358h]
  __int128 v47; // [rsp+1B8h] [rbp-350h]
  __int64 v48; // [rsp+1C8h] [rbp-340h]
  _QWORD v49[2]; // [rsp+1D0h] [rbp-338h] BYREF
  __int128 v50; // [rsp+1E0h] [rbp-328h]
  __int128 v51; // [rsp+1F0h] [rbp-318h]
  const char *v52; // [rsp+200h] [rbp-308h]
  __int64 v53; // [rsp+208h] [rbp-300h]
  _BYTE v54[48]; // [rsp+210h] [rbp-2F8h] BYREF
  __m256i v55; // [rsp+240h] [rbp-2C8h]

  core::iter::traits::iterator::Iterator::collect(&v38, a1, a2);
  v2 = *((_QWORD *)&v38 + 1);
  v3 = v39;
  std::sys::os_str::bytes::Slice::to_owned(
    v54,
    "-d=complementonly-delimitedzero-terminatedbytescharactersfieldsinvalid usage: expects one of --fields (-f), --chars "
    "(-c) or --bytes (-b)invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)delimiterw"
    "hitespace-delimitedinvalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fieldsi"
    "nvalid input: The '-w' option only usable if printing a sequence of fieldsinvalid input: The '--delimiter' ('-d') op"
    "tion only usable if printing a sequence of fieldsUSimpleErrormessage",
    3LL);
  v25.m256i_i64[2] = *(_QWORD *)&v54[16];
  *(_OWORD *)v25.m256i_i8 = *(_OWORD *)v54;
  v4 = <T as core::slice::cmp::SliceContains>::slice_contains(&v25, v2, v3);
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v25);
  uu_cut::uu_app(v54);
  v22.m256i_i64[2] = v39;
  *(_OWORD *)v22.m256i_i8 = v38;
  clap_builder::builder::command::Command::try_get_matches_from(&v25, v54, &v22);
  if ( v25.m256i_i64[0] == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25.m256i_i64[1]);
  v31 = v27.m256i_i64[0];
  v30 = v26;
  v29 = v25;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           &v29,
           "complementonly-delimitedzero-terminatedbytescharactersfieldsinvalid usage: expects one of --fields (-f), --ch"
           "ars (-c) or --bytes (-b)invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b"
           ")delimiterwhitespace-delimitedinvalid input: The '--only-delimited' ('-s') option only usable if printing a s"
           "equence of fieldsinvalid input: The '-w' option only usable if printing a sequence of fieldsinvalid input: Th"
           "e '--delimiter' ('-d') option only usable if printing a sequence of fieldsUSimpleErrormessage",
           10LL);
  v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          &v29,
          "only-delimitedzero-terminatedbytescharactersfieldsinvalid usage: expects one of --fields (-f), --chars (-c) or"
          " --bytes (-b)invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)delimiterwh"
          "itespace-delimitedinvalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fi"
          "eldsinvalid input: The '-w' option only usable if printing a sequence of fieldsinvalid input: The '--delimiter"
          "' ('-d') option only usable if printing a sequence of fieldsUSimpleErrormessage",
          14LL);
  uu_cut::get_delimiters(v54, &v29, v4);
  v7 = *(_QWORD *)&v54[8];
  if ( *(_QWORD *)v54 )
  {
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v29);
    return v7;
  }
  v28 = *(_OWORD *)&v54[24];
  v37 = *(_QWORD *)&v54[16];
  v8 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          &v29,
                          "zero-terminatedbytescharactersfieldsinvalid usage: expects one of --fields (-f), --chars (-c) "
                          "or --bytes (-b)invalid usage: expects no more than one of --fields (-f), --chars (-c) or --byt"
                          "es (-b)delimiterwhitespace-delimitedinvalid input: The '--only-delimited' ('-s') option only u"
                          "sable if printing a sequence of fieldsinvalid input: The '-w' option only usable if printing a"
                          " sequence of fieldsinvalid input: The '--delimiter' ('-d') option only usable if printing a se"
                          "quence of fieldsUSimpleErrormessage",
                          15LL) )
    v8 = 0;
  clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(
    &v32,
    &v29,
    "bytescharactersfieldsinvalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)invalid usage: expects"
    " no more than one of --fields (-f), --chars (-c) or --bytes (-b)delimiterwhitespace-delimitedinvalid input: The '--o"
    "nly-delimited' ('-s') option only usable if printing a sequence of fieldsinvalid input: The '-w' option only usable "
    "if printing a sequence of fieldsinvalid input: The '--delimiter' ('-d') option only usable if printing a sequence of"
    " fieldsUSimpleErrormessage",
    5LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(
    &v22,
    &v29,
    "charactersfieldsinvalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)invalid usage: expects no m"
    "ore than one of --fields (-f), --chars (-c) or --bytes (-b)delimiterwhitespace-delimitedinvalid input: The '--only-d"
    "elimited' ('-s') option only usable if printing a sequence of fieldsinvalid input: The '-w' option only usable if pr"
    "inting a sequence of fieldsinvalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fiel"
    "dsUSimpleErrormessage",
    10LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(
    &v25,
    &v29,
    "fieldsinvalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)invalid usage: expects no more than o"
    "ne of --fields (-f), --chars (-c) or --bytes (-b)delimiterwhitespace-delimitedinvalid input: The '--only-delimited' "
    "('-s') option only usable if printing a sequence of fieldsinvalid input: The '-w' option only usable if printing a s"
    "equence of fieldsinvalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fieldsUSimpleErrormessage",
    6LL);
  *(_QWORD *)&v54[16] = v33;
  *(_OWORD *)v54 = v32;
  *(_OWORD *)&v54[24] = *(_OWORD *)v22.m256i_i8;
  *(_QWORD *)&v54[40] = v22.m256i_i64[2];
  *(_OWORD *)v55.m256i_i8 = *(_OWORD *)v25.m256i_i8;
  v55.m256i_i64[2] = v25.m256i_i64[2];
  v43 = v32;
  v47 = *(_OWORD *)v25.m256i_i8;
  v48 = v25.m256i_i64[2];
  v44 = v33;
  v45 = *(_OWORD *)v22.m256i_i8;
  v46 = v22.m256i_i64[2];
  v42[0] = 0LL;
  v42[1] = 3LL;
  v9 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold(v42);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v54,
    &v29,
    "bytescharactersfieldsinvalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)invalid usage: expects"
    " no more than one of --fields (-f), --chars (-c) or --bytes (-b)delimiterwhitespace-delimitedinvalid input: The '--o"
    "nly-delimited' ('-s') option only usable if printing a sequence of fieldsinvalid input: The '-w' option only usable "
    "if printing a sequence of fieldsinvalid input: The '--delimiter' ('-d') option only usable if printing a sequence of"
    " fieldsUSimpleErrormessage",
    5LL);
  v10 = clap_builder::parser::error::MatchesError::unwrap(
          "bytescharactersfieldsinvalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)invalid usage: e"
          "xpects no more than one of --fields (-f), --chars (-c) or --bytes (-b)delimiterwhitespace-delimitedinvalid inp"
          "ut: The '--only-delimited' ('-s') option only usable if printing a sequence of fieldsinvalid input: The '-w' o"
          "ption only usable if printing a sequence of fieldsinvalid input: The '--delimiter' ('-d') option only usable i"
          "f printing a sequence of fieldsUSimpleErrormessage",
          5LL,
          v54);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v54,
    &v29,
    "charactersfieldsinvalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)invalid usage: expects no m"
    "ore than one of --fields (-f), --chars (-c) or --bytes (-b)delimiterwhitespace-delimitedinvalid input: The '--only-d"
    "elimited' ('-s') option only usable if printing a sequence of fieldsinvalid input: The '-w' option only usable if pr"
    "inting a sequence of fieldsinvalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fiel"
    "dsUSimpleErrormessage",
    10LL);
  v11 = clap_builder::parser::error::MatchesError::unwrap(
          "charactersfieldsinvalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)invalid usage: expect"
          "s no more than one of --fields (-f), --chars (-c) or --bytes (-b)delimiterwhitespace-delimitedinvalid input: T"
          "he '--only-delimited' ('-s') option only usable if printing a sequence of fieldsinvalid input: The '-w' option"
          " only usable if printing a sequence of fieldsinvalid input: The '--delimiter' ('-d') option only usable if pri"
          "nting a sequence of fieldsUSimpleErrormessage",
          10LL,
          v54);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v54,
    &v29,
    "fieldsinvalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)invalid usage: expects no more than o"
    "ne of --fields (-f), --chars (-c) or --bytes (-b)delimiterwhitespace-delimitedinvalid input: The '--only-delimited' "
    "('-s') option only usable if printing a sequence of fieldsinvalid input: The '-w' option only usable if printing a s"
    "equence of fieldsinvalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fieldsUSimpleErrormessage",
    6LL);
  v12 = clap_builder::parser::error::MatchesError::unwrap(
          "fieldsinvalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)invalid usage: expects no more "
          "than one of --fields (-f), --chars (-c) or --bytes (-b)delimiterwhitespace-delimitedinvalid input: The '--only"
          "-delimited' ('-s') option only usable if printing a sequence of fieldsinvalid input: The '-w' option only usab"
          "le if printing a sequence of fieldsinvalid input: The '--delimiter' ('-d') option only usable if printing a se"
          "quence of fieldsUSimpleErrormessage",
          6LL,
          v54);
  if ( !v9 )
    goto LABEL_26;
  if ( v9 != 1 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(
      v54,
      "invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)delimiterwhitespace-delimite"
      "dinvalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fieldsinvalid input: Th"
      "e '-w' option only usable if printing a sequence of fieldsinvalid input: The '--delimiter' ('-d') option only usab"
      "le if printing a sequence of fieldsUSimpleErrormessage",
      86LL);
LABEL_27:
    v22.m256i_i64[3] = *(_QWORD *)&v54[16];
    *(_OWORD *)&v22.m256i_u64[1] = *(_OWORD *)v54;
    v22.m256i_i64[0] = 3LL;
    goto LABEL_28;
  }
  if ( v10 )
  {
    if ( !(v12 | v11) )
    {
      uu_cut::list_to_ranges(v54, *(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16), flag);
      if ( !*(_QWORD *)v54 )
      {
        v24.m256i_i64[3] = *(_QWORD *)&v54[24];
        *(_OWORD *)&v24.m256i_u64[1] = *(_OWORD *)&v54[8];
        *(_OWORD *)&v22.m256i_u64[1] = v28;
        BYTE8(v23) = 2;
        v24.m256i_i8[0] = v8;
        v22.m256i_i64[0] = 0LL;
        goto LABEL_21;
      }
      goto LABEL_20;
    }
    goto LABEL_26;
  }
  if ( v11 )
  {
    if ( !v12 )
    {
      uu_cut::list_to_ranges(v54, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16), flag);
      if ( !*(_QWORD *)v54 )
      {
        v24.m256i_i64[3] = *(_QWORD *)&v54[24];
        *(_OWORD *)&v24.m256i_u64[1] = *(_OWORD *)&v54[8];
        *(_OWORD *)&v22.m256i_u64[1] = v28;
        BYTE8(v23) = 2;
        v24.m256i_i8[0] = v8;
        v22.m256i_i64[0] = 1LL;
        goto LABEL_21;
      }
LABEL_20:
      v22.m256i_i64[3] = *(_QWORD *)&v54[24];
      *(_OWORD *)&v22.m256i_u64[1] = *(_OWORD *)&v54[8];
      v22.m256i_i64[0] = 3LL;
LABEL_28:
      v27 = v24;
      v26 = v23;
      v25 = v22;
      v13 = 0;
      goto LABEL_29;
    }
LABEL_26:
    <T as alloc::slice::hack::ConvertVec>::to_vec(
      v54,
      "invalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)invalid usage: expects no more than one o"
      "f --fields (-f), --chars (-c) or --bytes (-b)delimiterwhitespace-delimitedinvalid input: The '--only-delimited' ('"
      "-s') option only usable if printing a sequence of fieldsinvalid input: The '-w' option only usable if printing a s"
      "equence of fieldsinvalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fieldsUSimpleErrormessage",
      73LL);
    goto LABEL_27;
  }
  if ( !v12 )
    goto LABEL_26;
  uu_cut::list_to_ranges(v54, *(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16), flag);
  if ( *(_QWORD *)v54 )
    goto LABEL_20;
  v24.m256i_i64[3] = *(_QWORD *)&v54[24];
  *(_OWORD *)&v24.m256i_u64[1] = *(_OWORD *)&v54[8];
  *(_OWORD *)&v22.m256i_u64[1] = v28;
  v22.m256i_i64[3] = v7;
  *(_QWORD *)&v23 = v37;
  BYTE8(v23) = v21;
  v24.m256i_i8[0] = v8;
  v22.m256i_i64[0] = 2LL;
LABEL_21:
  *(__m256i *)v54 = v22;
  v55 = v24;
  *(_OWORD *)&v54[32] = v23;
  if ( v22.m256i_i64[0] )
  {
    if ( v22.m256i_i32[0] != 1 )
      goto LABEL_46;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                             &v29,
                             "delimiterwhitespace-delimitedinvalid input: The '--only-delimited' ('-s') option only usabl"
                             "e if printing a sequence of fieldsinvalid input: The '-w' option only usable if printing a "
                             "sequence of fieldsinvalid input: The '--delimiter' ('-d') option only usable if printing a "
                             "sequence of fieldsUSimpleErrormessage",
                             9LL) )
    {
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               &v29,
                               "whitespace-delimitedinvalid input: The '--only-delimited' ('-s') option only usable if pr"
                               "inting a sequence of fieldsinvalid input: The '-w' option only usable if printing a seque"
                               "nce of fieldsinvalid input: The '--delimiter' ('-d') option only usable if printing a seq"
                               "uence of fieldsUSimpleErrormessage",
                               20LL) )
      {
LABEL_43:
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                &v29,
                                "only-delimitedzero-terminatedbytescharactersfieldsinvalid usage: expects one of --fields"
                                " (-f), --chars (-c) or --bytes (-b)invalid usage: expects no more than one of --fields ("
                                "-f), --chars (-c) or --bytes (-b)delimiterwhitespace-delimitedinvalid input: The '--only"
                                "-delimited' ('-s') option only usable if printing a sequence of fieldsinvalid input: The"
                                " '-w' option only usable if printing a sequence of fieldsinvalid input: The '--delimiter"
                                "' ('-d') option only usable if printing a sequence of fieldsUSimpleErrormessage",
                                14LL) )
        {
          <T as alloc::slice::hack::ConvertVec>::to_vec(
            &v32,
            "invalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fieldsinvalid inpu"
            "t: The '-w' option only usable if printing a sequence of fieldsinvalid input: The '--delimiter' ('-d') optio"
            "n only usable if printing a sequence of fieldsUSimpleErrormessage",
            96LL);
          goto LABEL_45;
        }
LABEL_46:
        v27 = v55;
        v26 = *(_OWORD *)&v54[32];
        v25 = *(__m256i *)v54;
        goto LABEL_47;
      }
      goto LABEL_41;
    }
  }
  else if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                                &v29,
                                "delimiterwhitespace-delimitedinvalid input: The '--only-delimited' ('-s') option only us"
                                "able if printing a sequence of fieldsinvalid input: The '-w' option only usable if print"
                                "ing a sequence of fieldsinvalid input: The '--delimiter' ('-d') option only usable if pr"
                                "inting a sequence of fieldsUSimpleErrormessage",
                                9LL) )
  {
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             &v29,
                             "whitespace-delimitedinvalid input: The '--only-delimited' ('-s') option only usable if prin"
                             "ting a sequence of fieldsinvalid input: The '-w' option only usable if printing a sequence "
                             "of fieldsinvalid input: The '--delimiter' ('-d') option only usable if printing a sequence "
                             "of fieldsUSimpleErrormessage",
                             20LL) )
      goto LABEL_43;
LABEL_41:
    <T as alloc::slice::hack::ConvertVec>::to_vec(
      &v32,
      "invalid input: The '-w' option only usable if printing a sequence of fieldsinvalid input: The '--delimiter' ('-d')"
      " option only usable if printing a sequence of fieldsUSimpleErrormessage",
      75LL);
    goto LABEL_45;
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(
    &v32,
    "invalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fieldsUSimpleErrormessage",
    91LL);
LABEL_45:
  v25.m256i_i64[3] = v33;
  *(_OWORD *)&v25.m256i_u64[1] = v32;
  v25.m256i_i64[0] = 3LL;
  core::ptr::drop_in_place<uu_cut::Mode>(v54);
LABEL_47:
  v13 = 1;
LABEL_29:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v54, &v29, aFile, 4LL);
  v14 = aFile;
  clap_builder::parser::error::MatchesError::unwrap(&v32, aFile, 4LL, v54);
  v15 = (void (__fastcall __noreturn *)())v32;
  if ( (_QWORD)v32 )
  {
    v16 = (const char *)*((_QWORD *)&v32 + 1);
    v17 = v33;
    v18 = v34;
    v14 = v35;
    v19 = v36;
  }
  else
  {
    v18 = 0LL;
    v17 = (unsigned __int64)"&";
    v16 = "&";
    v15 = core::ops::function::FnOnce::call_once;
    v19 = 0LL;
  }
  v49[0] = v15;
  v49[1] = v16;
  v50 = v17;
  v51 = v18;
  v52 = v14;
  v53 = v19;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v40, v49);
  if ( v25.m256i_i32[0] == 3 )
  {
    *(_QWORD *)&v54[16] = v25.m256i_i64[3];
    *(_OWORD *)v54 = *(_OWORD *)&v25.m256i_u64[1];
    *(_DWORD *)&v54[24] = 1;
    v20 = alloc::boxed::Box<T>::new(v54);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v40);
    if ( ((v22.m256i_i64[0] == 3) & (unsigned __int8)v13) == 0 )
      goto LABEL_37;
    goto LABEL_36;
  }
  v55 = v27;
  *(_OWORD *)&v54[32] = v26;
  *(__m256i *)v54 = v25;
  *(_QWORD *)&v33 = v41;
  v32 = v40;
  uu_cut::cut_files(&v32, v54);
  core::ptr::drop_in_place<uu_cut::Mode>(v54);
  v20 = 0LL;
  if ( ((v22.m256i_i64[0] == 3) & (unsigned __int8)v13) != 0 )
LABEL_36:
    core::ptr::drop_in_place<core::result::Result<uu_cut::Mode,alloc::string::String>>(&v22);
LABEL_37:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v29);
  return v20;
}
