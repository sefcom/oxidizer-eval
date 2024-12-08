_QWORD *__fastcall uu_ls::Config::from(_QWORD *a1, __int64 a2)
{
  char flag; // r13
  char v3; // bp
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  char v9; // al
  char v10; // cl
  char sort; // bp
  int v12; // eax
  int v13; // r12d
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int8 v17; // bp
  int v18; // ebx
  unsigned __int8 v19; // r13
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rax
  bool v23; // zf
  int v24; // ebp
  char v25; // r13
  __int64 v26; // rax
  unsigned __int8 v27; // al
  __int64 v28; // rax
  char v29; // cl
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r12
  __int128 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // r12
  __int128 v37; // rax
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rdx
  int v40; // ebp
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rdx
  bool v43; // r14
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rdx
  char v46; // cl
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rdx
  bool v49; // cc
  char v50; // bl
  char v51; // r12
  char is_dired_arg_present; // al
  int v53; // ecx
  char v54; // r15
  char v55; // r13
  char v56; // bl
  char v57; // r12
  char v58; // r13
  char v59; // r15
  unsigned __int8 v61; // [rsp+4h] [rbp-454h]
  char v62; // [rsp+4h] [rbp-454h]
  unsigned __int8 v63; // [rsp+5h] [rbp-453h]
  char indicator_style; // [rsp+6h] [rbp-452h]
  char files; // [rsp+7h] [rbp-451h]
  char v66; // [rsp+1Ch] [rbp-43Ch]
  char v67; // [rsp+24h] [rbp-434h]
  char v68; // [rsp+25h] [rbp-433h]
  char v69; // [rsp+26h] [rbp-432h]
  char v70; // [rsp+27h] [rbp-431h]
  char hyperlink; // [rsp+28h] [rbp-430h]
  char v72; // [rsp+29h] [rbp-42Fh]
  char v73; // [rsp+2Ah] [rbp-42Eh]
  char v74; // [rsp+2Bh] [rbp-42Dh]
  char v75; // [rsp+2Ch] [rbp-42Ch]
  char v76; // [rsp+30h] [rbp-428h]
  char v77; // [rsp+34h] [rbp-424h]
  char v78; // [rsp+34h] [rbp-424h]
  char v79; // [rsp+34h] [rbp-424h]
  unsigned int quoting_style; // [rsp+38h] [rbp-420h]
  char v81; // [rsp+38h] [rbp-420h]
  char v82; // [rsp+3Ch] [rbp-41Ch]
  unsigned __int8 color; // [rsp+40h] [rbp-418h]
  char v84; // [rsp+40h] [rbp-418h]
  __int16 v85; // [rsp+46h] [rbp-412h]
  __int128 v86; // [rsp+50h] [rbp-408h] BYREF
  __int64 v87; // [rsp+60h] [rbp-3F8h]
  char v88; // [rsp+68h] [rbp-3F0h]
  __int128 v89; // [rsp+70h] [rbp-3E8h] BYREF
  __int64 v90; // [rsp+80h] [rbp-3D8h]
  _OWORD src[13]; // [rsp+90h] [rbp-3C8h] BYREF
  __int128 v92; // [rsp+160h] [rbp-2F8h] BYREF
  __int64 v93; // [rsp+170h] [rbp-2E8h]
  int v94; // [rsp+178h] [rbp-2E0h]
  unsigned int v95; // [rsp+17Ch] [rbp-2DCh]
  int v96; // [rsp+180h] [rbp-2D8h]
  int v97; // [rsp+184h] [rbp-2D4h]
  __int128 v98; // [rsp+188h] [rbp-2D0h] BYREF
  __int64 v99; // [rsp+198h] [rbp-2C0h]
  _OWORD dest[10]; // [rsp+1A0h] [rbp-2B8h] BYREF
  __int128 v101; // [rsp+240h] [rbp-218h] BYREF
  __int64 v102; // [rsp+250h] [rbp-208h]
  __int128 v103; // [rsp+258h] [rbp-200h] BYREF
  __int64 v104; // [rsp+268h] [rbp-1F0h]
  __int128 v105; // [rsp+270h] [rbp-1E8h] BYREF
  __int64 v106; // [rsp+280h] [rbp-1D8h]
  __int64 v107; // [rsp+288h] [rbp-1D0h]
  __int128 v108; // [rsp+290h] [rbp-1C8h] BYREF
  __int64 v109; // [rsp+2A0h] [rbp-1B8h]
  __int128 v110; // [rsp+2B0h] [rbp-1A8h]
  __int128 v111; // [rsp+2C0h] [rbp-198h]
  __int128 v112; // [rsp+2D0h] [rbp-188h]
  unsigned __int64 v113; // [rsp+2E0h] [rbp-178h]
  __int64 v114; // [rsp+2E8h] [rbp-170h]
  _OWORD v115[10]; // [rsp+2F0h] [rbp-168h] BYREF
  _QWORD v116[3]; // [rsp+398h] [rbp-C0h] BYREF
  _OWORD v117[3]; // [rsp+3B0h] [rbp-A8h] BYREF
  __int64 v118; // [rsp+3E0h] [rbp-78h]
  _OWORD v119[3]; // [rsp+3F0h] [rbp-68h] BYREF
  __int64 v120; // [rsp+420h] [rbp-38h]

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_34cd953b2c946f74a585889e96ce9d7a_42_llvm_16853030268703478466,
           7LL);
  uu_ls::extract_format((__int64)src, a2);
  v3 = src[0];
  v4 = *((_QWORD *)&src[0] + 1);
  v5 = *(_QWORD *)&src[1];
  files = uu_ls::extract_files(a2);
  v61 = 1;
  if ( v3 != 1 )
  {
    if ( !v4 || !uu_ls::Config::from::{{closure}}(a2, v4, v5) )
      v6 = 0LL;
    *(_QWORD *)&v115[0] = v6;
    *(_QWORD *)&dest[0] = anon_93c251adab0f837eec2f5865e5b29e23_31_llvm_10262286748963977039;
    *((_QWORD *)&dest[0] + 1) = 1LL;
    *(_QWORD *)&dest[1] = anon_93c251adab0f837eec2f5865e5b29e23_32_llvm_10262286748963977039;
    *((_QWORD *)&dest[1] + 1) = 1LL;
    *(_QWORD *)&dest[2] = anon_93c251adab0f837eec2f5865e5b29e23_33_llvm_10262286748963977039;
    *((_QWORD *)&dest[2] + 1) = 15LL;
    *(_QWORD *)&dest[3] = anon_34cd953b2c946f74a585889e96ce9d7a_39_llvm_16853030268703478466;
    *((_QWORD *)&dest[3] + 1) = 9LL;
    *(_QWORD *)&src[0] = dest;
    *((_QWORD *)&src[0] + 1) = &dest[4];
    src[1] = (unsigned __int64)a2;
    *(_QWORD *)&src[3] = 0LL;
    v7 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_try_fold(src, v115);
    v61 = 1;
    if ( !(unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v7) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(
        dest,
        a2,
        anon_93c251adab0f837eec2f5865e5b29e23_25_llvm_10262286748963977039,
        1LL);
      if ( *(_QWORD *)&dest[0] )
      {
        *(_QWORD *)&src[1] = *(_QWORD *)&dest[1];
        src[0] = dest[0];
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
                                a2,
                                anon_93c251adab0f837eec2f5865e5b29e23_25_llvm_10262286748963977039,
                                1LL) == 2 )
        {
          v8 = core::iter::traits::iterator::Iterator::try_fold(src, v115);
          v9 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v8);
          v10 = v3;
          v3 = 2;
          if ( !v9 )
            v3 = v10;
        }
      }
      v61 = v3;
    }
  }
  sort = uu_ls::extract_sort(a2);
  LOBYTE(v12) = uu_ls::extract_time(a2);
  v13 = v12;
  color = uu_ls::extract_color(a2);
  hyperlink = uu_ls::extract_hyperlink(a2);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    src,
    a2,
    anon_1ee88fda822c10878a738d2784ca6dcb_20_llvm_3648300969967796025,
    10LL);
  v14 = clap_builder::parser::error::MatchesError::unwrap(
          anon_1ee88fda822c10878a738d2784ca6dcb_20_llvm_3648300969967796025,
          10LL,
          src);
  v74 = flag;
  v73 = sort;
  v72 = v13;
  if ( v14 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      src,
      a2,
      anon_1ee88fda822c10878a738d2784ca6dcb_20_llvm_3648300969967796025,
      10LL);
    v15 = clap_builder::parser::error::MatchesError::unwrap(
            anon_1ee88fda822c10878a738d2784ca6dcb_20_llvm_3648300969967796025,
            10LL,
            src);
    if ( !v15 )
      core::option::unwrap_failed(&off_2125B8);
    LOBYTE(v13) = 1;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                             *(_QWORD *)(v15 + 8),
                             *(_QWORD *)(v15 + 16),
                             aSi,
                             2LL) )
      v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              a2,
              anon_1ee88fda822c10878a738d2784ca6dcb_22_llvm_3648300969967796025,
              2LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      src,
      a2,
      anon_1ee88fda822c10878a738d2784ca6dcb_20_llvm_3648300969967796025,
      10LL);
    v16 = clap_builder::parser::error::MatchesError::unwrap(
            anon_1ee88fda822c10878a738d2784ca6dcb_20_llvm_3648300969967796025,
            10LL,
            src);
    if ( !v16 )
      core::option::unwrap_failed(&off_2125D0);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(v16 + 8),
                            *(_QWORD *)(v16 + 16),
                            aHumanReadable,
                            14LL) )
    {
      v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              a2,
              anon_1ee88fda822c10878a738d2784ca6dcb_23_llvm_3648300969967796025,
              9LL);
      v18 = v13 + 1;
      v19 = 1;
      goto LABEL_21;
    }
  }
  else
  {
    LOBYTE(v13) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                    a2,
                    anon_1ee88fda822c10878a738d2784ca6dcb_22_llvm_3648300969967796025,
                    2LL);
  }
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_1ee88fda822c10878a738d2784ca6dcb_21_llvm_3648300969967796025,
          14LL);
  v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_1ee88fda822c10878a738d2784ca6dcb_23_llvm_3648300969967796025,
          9LL);
  v18 = 2;
  if ( !(_BYTE)v13 )
    v18 = v19;
LABEL_21:
  std::env::var_os(&v101, aBlocksize, 9LL);
  std::env::var_os(&v103, aBlockSize, 10LL);
  std::env::var_os(&v105, aLsBlockSize, 13LL);
  std::env::var_os(v116, aPosixlyCorrect, 15LL);
  if ( v14 )
  {
    std::sys::os_str::bytes::Slice::to_owned(src, *(_QWORD *)(v14 + 8), *(_QWORD *)(v14 + 16));
  }
  else
  {
    if ( (_QWORD)v105 != 0x8000000000000000LL )
    {
      v93 = v106;
      v92 = v105;
      v76 = 1;
      goto LABEL_29;
    }
    if ( (_QWORD)v103 != 0x8000000000000000LL )
    {
      v93 = v104;
      v92 = v103;
      v76 = 0;
      v75 = 1;
      goto LABEL_30;
    }
    if ( (_QWORD)v101 != 0x8000000000000000LL )
    {
      v93 = v102;
      v92 = v101;
      v76 = 0;
      v75 = 0;
      v66 = 1;
      goto LABEL_31;
    }
    std::sys::os_str::bytes::Slice::to_owned(src, 1LL, 0LL);
  }
  v93 = *(_QWORD *)&src[1];
  v92 = src[0];
  v76 = 0;
LABEL_29:
  v75 = 0;
LABEL_30:
  v66 = 0;
LABEL_31:
  v97 = v18;
  if ( (unsigned __int8)v13 | v19 || !v93 )
  {
    if ( v116[0] == 0x8000000000000000LL )
    {
      v21 = 1024LL;
      if ( (_BYTE)v13 )
        v21 = 1000LL;
    }
    else
    {
      v21 = (v17 << 9) + 512LL;
    }
    v20 = 1LL;
  }
  else
  {
    std::sys::os_str::bytes::Slice::to_string_lossy(&v86, *((_QWORD *)&v92 + 1));
    uucore::parser::parse_size::parse_size_u64(dest, *((_QWORD *)&v86 + 1), v87);
    if ( LODWORD(dest[0]) == 3 )
    {
      v20 = *((_QWORD *)&dest[0] + 1);
      if ( v66 )
      {
        v21 = *((_QWORD *)&dest[0] + 1);
        if ( v17 )
          v21 = 1024LL;
        v20 = 1LL;
      }
      else
      {
        v22 = 1024LL;
        if ( !v17 )
          v22 = *((_QWORD *)&dest[0] + 1);
        v23 = v14 == 0;
        v21 = v22;
        if ( !v23 )
          v21 = *((_QWORD *)&dest[0] + 1);
      }
    }
    else
    {
      if ( v14 )
      {
        <alloc::string::String as core::clone::Clone>::clone(v115, v14);
        *((_QWORD *)&src[1] + 1) = *(_QWORD *)&v115[1];
        *(_OWORD *)((char *)src + 8) = v115[0];
        LOBYTE(src[0]) = 3;
        a1[1] = alloc::boxed::Box<T>::new(src);
        a1[2] = &off_212620;
        *a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>(dest);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v86);
        goto LABEL_63;
      }
      v20 = 1LL;
      v21 = 1024LL;
      if ( !v66 )
        v20 = 1024LL;
    }
    core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>(dest);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v86);
  }
  v70 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_34cd953b2c946f74a585889e96ce9d7a_25_llvm_16853030268703478466,
          6LL);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_34cd953b2c946f74a585889e96ce9d7a_26_llvm_16853030268703478466,
                          8LL) )
  {
    v24 = 0;
  }
  else
  {
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            a2,
            anon_93c251adab0f837eec2f5865e5b29e23_32_llvm_10262286748963977039,
            1LL);
    LOBYTE(v24) = v24 ^ 1;
  }
  v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_93c251adab0f837eec2f5865e5b29e23_31_llvm_10262286748963977039,
          1LL);
  v69 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_93c251adab0f837eec2f5865e5b29e23_33_llvm_10262286748963977039,
          15LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    src,
    a2,
    anon_34cd953b2c946f74a585889e96ce9d7a_24_llvm_16853030268703478466,
    5LL);
  v26 = clap_builder::parser::error::MatchesError::unwrap(
          anon_34cd953b2c946f74a585889e96ce9d7a_24_llvm_16853030268703478466,
          5LL,
          src);
  uu_ls::parse_width((__int64)dest, v26);
  if ( LOBYTE(dest[0]) != 7 )
  {
    DWORD1(src[3]) = DWORD1(dest[3]);
    *(_OWORD *)((char *)&src[2] + 4) = *(_OWORD *)((char *)&dest[2] + 4);
    *(_OWORD *)((char *)&src[1] + 4) = *(_OWORD *)((char *)&dest[1] + 4);
    *(_OWORD *)((char *)src + 4) = *(_OWORD *)((char *)dest + 4);
    LODWORD(src[0]) = dest[0];
    v28 = alloc::boxed::Box<T>::new(src);
    goto LABEL_62;
  }
  v85 = WORD1(dest[0]);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_34cd953b2c946f74a585889e96ce9d7a_22_llvm_16853030268703478466,
                          18LL) )
  {
    v27 = 0;
  }
  else
  {
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            a2,
            anon_34cd953b2c946f74a585889e96ce9d7a_23_llvm_16853030268703478466,
            18LL);
    v27 = 1;
    if ( !v29 )
    {
      *(_QWORD *)&src[0] = std::io::stdio::stdout();
      v27 = std::sys::pal::unix::io::is_terminal(src) ^ 1;
    }
  }
  v77 = v27;
  quoting_style = uu_ls::extract_quoting_style(a2, v27);
  indicator_style = uu_ls::extract_indicator_style(a2);
  v63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_34cd953b2c946f74a585889e96ce9d7a_45_llvm_16853030268703478466,
          5LL);
  if ( ((v63 ^ 1) & (v61 != 1)) == 0 )
  {
    uu_ls::parse_time_style((__int64)dest, a2);
    if ( LOBYTE(dest[0]) == 7 )
    {
      v107 = v21;
      v108 = *(_OWORD *)((char *)dest + 8);
      v109 = *((_QWORD *)&dest[1] + 1);
      goto LABEL_73;
    }
    *(_OWORD *)((char *)v115 + 15) = dest[1];
    v115[0] = *(_OWORD *)((char *)dest + 1);
    *(_QWORD *)&src[3] = *(_QWORD *)&dest[3];
    src[2] = dest[2];
    *(_OWORD *)((char *)src + 1) = *(_OWORD *)((char *)dest + 1);
    src[1] = *(_OWORD *)((char *)v115 + 15);
    LOBYTE(src[0]) = dest[0];
    v28 = alloc::boxed::Box<T>::new(src);
LABEL_62:
    a1[1] = v28;
    a1[2] = &off_212620;
    *a1 = 0x8000000000000000LL;
    goto LABEL_63;
  }
  v107 = v21;
  *(_QWORD *)&v108 = 0x8000000000000002LL;
LABEL_73:
  *(_QWORD *)&v98 = 0LL;
  *((_QWORD *)&v98 + 1) = 8LL;
  v99 = 0LL;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_34cd953b2c946f74a585889e96ce9d7a_30_llvm_16853030268703478466,
                          14LL) )
  {
    glob::Pattern::new(src, asc_34FB8, 2LL);
    core::result::Result<T,E>::unwrap(dest, src, &off_212690);
    alloc::vec::Vec<T,A>::push(&v98, dest);
    glob::Pattern::new(src, asc_34FBA, 3LL);
    core::result::Result<T,E>::unwrap(dest, src, &off_2126A8);
    alloc::vec::Vec<T,A>::push(&v98, dest);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    src,
    a2,
    anon_34cd953b2c946f74a585889e96ce9d7a_41_llvm_16853030268703478466,
    6LL);
  clap_builder::parser::error::MatchesError::unwrap(
    dest,
    anon_34cd953b2c946f74a585889e96ce9d7a_41_llvm_16853030268703478466,
    6LL,
    src);
  v96 = v24;
  v114 = v20;
  v68 = v25 ^ 1;
  v95 = quoting_style >> 8;
  *(_OWORD *)((char *)&src[3] + 8) = dest[3];
  *(_OWORD *)((char *)&src[2] + 8) = dest[2];
  *(_OWORD *)((char *)&src[1] + 8) = dest[1];
  *(_OWORD *)((char *)src + 8) = dest[0];
  src[5] = v110;
  src[6] = v111;
  src[7] = v112;
  src[8] = v113;
  src[9] = v110;
  src[10] = v111;
  src[11] = v112;
  *(_QWORD *)&src[12] = v113;
  *(_QWORD *)&src[0] = 1LL;
  *((_QWORD *)&src[4] + 1) = 0LL;
  while ( 1 )
  {
    v30 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(src);
    if ( !v30 )
      break;
    v31 = *(_QWORD *)(v30 + 8);
    v32 = *(_QWORD *)(v30 + 16);
    uucore::parser::parse_glob::from_str(dest, v31, v32);
    if ( *(_QWORD *)&dest[0] == 0x8000000000000000LL )
    {
      *(_QWORD *)&v33 = uucore::util_name();
      v86 = v33;
      *(_QWORD *)&v89 = &v86;
      *((_QWORD *)&v89 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v115[0] = &unk_2126C0;
      *((_QWORD *)&v115[0] + 1) = 2LL;
      *(_QWORD *)&v115[2] = 0LL;
      *(_QWORD *)&v115[1] = &v89;
      *((_QWORD *)&v115[1] + 1) = 1LL;
      std::io::stdio::_eprint(v115);
      *(_QWORD *)&v86 = 0LL;
      *((_QWORD *)&v86 + 1) = v31;
      v87 = v32;
      v88 = 1;
      *(_QWORD *)&v89 = &v86;
      *((_QWORD *)&v89 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v115[0] = &off_212700;
      *((_QWORD *)&v115[0] + 1) = 2LL;
      *(_QWORD *)&v115[2] = 0LL;
      *(_QWORD *)&v115[1] = &v89;
      *((_QWORD *)&v115[1] + 1) = 1LL;
      std::io::stdio::_eprint(v115);
    }
    else
    {
      v118 = *(_QWORD *)&dest[3];
      v117[2] = dest[2];
      v117[1] = dest[1];
      v117[0] = dest[0];
      alloc::vec::Vec<T,A>::push(&v98, v117);
    }
  }
  if ( files == 2 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
      src,
      a2,
      anon_34cd953b2c946f74a585889e96ce9d7a_40_llvm_16853030268703478466,
      4LL);
    clap_builder::parser::error::MatchesError::unwrap(
      dest,
      anon_34cd953b2c946f74a585889e96ce9d7a_40_llvm_16853030268703478466,
      4LL,
      src);
    *(_OWORD *)((char *)&src[3] + 8) = dest[3];
    *(_OWORD *)((char *)&src[2] + 8) = dest[2];
    *(_OWORD *)((char *)&src[1] + 8) = dest[1];
    *(_OWORD *)((char *)src + 8) = dest[0];
    src[5] = v110;
    src[6] = v111;
    src[7] = v112;
    src[8] = v113;
    src[9] = v110;
    src[10] = v111;
    src[11] = v112;
    *(_QWORD *)&src[12] = v113;
    *(_QWORD *)&src[0] = 1LL;
    *((_QWORD *)&src[4] + 1) = 0LL;
    while ( 1 )
    {
      v34 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(src);
      if ( !v34 )
        break;
      v35 = *(_QWORD *)(v34 + 8);
      v36 = *(_QWORD *)(v34 + 16);
      uucore::parser::parse_glob::from_str(dest, v35, v36);
      if ( *(_QWORD *)&dest[0] == 0x8000000000000000LL )
      {
        *(_QWORD *)&v37 = uucore::util_name();
        v86 = v37;
        *(_QWORD *)&v89 = &v86;
        *((_QWORD *)&v89 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v115[0] = &unk_2126C0;
        *((_QWORD *)&v115[0] + 1) = 2LL;
        *(_QWORD *)&v115[2] = 0LL;
        *(_QWORD *)&v115[1] = &v89;
        *((_QWORD *)&v115[1] + 1) = 1LL;
        std::io::stdio::_eprint(v115);
        *(_QWORD *)&v86 = 0LL;
        *((_QWORD *)&v86 + 1) = v35;
        v87 = v36;
        v88 = 1;
        *(_QWORD *)&v89 = &v86;
        *((_QWORD *)&v89 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v115[0] = &off_2126E0;
        *((_QWORD *)&v115[0] + 1) = 2LL;
        *(_QWORD *)&v115[2] = 0LL;
        *(_QWORD *)&v115[1] = &v89;
        *((_QWORD *)&v115[1] + 1) = 1LL;
        std::io::stdio::_eprint(v115);
      }
      else
      {
        v120 = *(_QWORD *)&dest[3];
        v119[2] = dest[2];
        v119[1] = dest[1];
        v119[0] = dest[0];
        alloc::vec::Vec<T,A>::push(&v98, v119);
      }
    }
  }
  v38 = uu_ls::Config::from::{{closure}}(a2, anon_34cd953b2c946f74a585889e96ce9d7a_44_llvm_16853030268703478466, 4LL);
  *((_QWORD *)&src[0] + 1) = anon_93c251adab0f837eec2f5865e5b29e23_28_llvm_10262286748963977039;
  *(_QWORD *)&src[1] = 1LL;
  *((_QWORD *)&src[1] + 1) = anon_93c251adab0f837eec2f5865e5b29e23_27_llvm_10262286748963977039;
  *(_QWORD *)&src[2] = 1LL;
  *((_QWORD *)&src[2] + 1) = anon_93c251adab0f837eec2f5865e5b29e23_30_llvm_10262286748963977039;
  *(_QWORD *)&src[3] = 1LL;
  *((_QWORD *)&src[3] + 1) = anon_93c251adab0f837eec2f5865e5b29e23_26_llvm_10262286748963977039;
  *(_QWORD *)&src[4] = 4LL;
  *((_QWORD *)&src[4] + 1) = anon_93c251adab0f837eec2f5865e5b29e23_32_llvm_10262286748963977039;
  *(_QWORD *)&src[5] = 1LL;
  *((_QWORD *)&src[5] + 1) = anon_93c251adab0f837eec2f5865e5b29e23_31_llvm_10262286748963977039;
  *(_QWORD *)&src[6] = 1LL;
  *((_QWORD *)&src[6] + 1) = anon_93c251adab0f837eec2f5865e5b29e23_33_llvm_10262286748963977039;
  *(_QWORD *)&src[7] = 15LL;
  *((_QWORD *)&src[7] + 1) = anon_93c251adab0f837eec2f5865e5b29e23_25_llvm_10262286748963977039;
  *(_QWORD *)&src[8] = 1LL;
  *((_QWORD *)&src[8] + 1) = anon_34cd953b2c946f74a585889e96ce9d7a_27_llvm_16853030268703478466;
  src[9] = 6uLL;
  *(_QWORD *)&src[10] = 9LL;
  *(_QWORD *)&src[0] = a2;
  if ( !core::iter::traits::iterator::Iterator::reduce(src) )
    v39 = 0LL;
  v40 = v61;
  if ( v38 > v39 )
    v40 = (unsigned __int8)(2 - (v61 == 1));
  v41 = uu_ls::Config::from::{{closure}}(a2, anon_34cd953b2c946f74a585889e96ce9d7a_44_llvm_16853030268703478466, 4LL);
  *((_QWORD *)&src[0] + 1) = anon_34cd953b2c946f74a585889e96ce9d7a_35_llvm_16853030268703478466;
  src[1] = 5uLL;
  *(_QWORD *)&src[2] = 1LL;
  *(_QWORD *)&src[0] = a2;
  if ( !core::iter::traits::iterator::Iterator::reduce(src) )
    v42 = 0LL;
  v43 = v41 <= v42;
  v44 = uu_ls::Config::from::{{closure}}(a2, anon_34cd953b2c946f74a585889e96ce9d7a_44_llvm_16853030268703478466, 4LL);
  *((_QWORD *)&src[0] + 1) = anon_34cd953b2c946f74a585889e96ce9d7a_22_llvm_16853030268703478466;
  *(_QWORD *)&src[1] = 18LL;
  *((_QWORD *)&src[1] + 1) = anon_34cd953b2c946f74a585889e96ce9d7a_23_llvm_16853030268703478466;
  src[2] = 0x12uLL;
  *(_QWORD *)&src[3] = 2LL;
  *(_QWORD *)&src[0] = a2;
  if ( !core::iter::traits::iterator::Iterator::reduce(src) )
    v45 = 0LL;
  v46 = v77;
  if ( v44 > v45 )
    v46 = 1;
  v78 = v46;
  v47 = uu_ls::Config::from::{{closure}}(a2, anon_34cd953b2c946f74a585889e96ce9d7a_44_llvm_16853030268703478466, 4LL);
  *((_QWORD *)&src[0] + 1) = anon_34cd953b2c946f74a585889e96ce9d7a_21_llvm_16853030268703478466;
  *(_QWORD *)&src[1] = 13LL;
  *((_QWORD *)&src[1] + 1) = anon_fab34c35a86c36917711c18ae4d7480d_2_llvm_13771626934311262642;
  *(_QWORD *)&src[2] = 10LL;
  *((_QWORD *)&src[2] + 1) = anon_fab34c35a86c36917711c18ae4d7480d_0_llvm_13771626934311262642;
  *(_QWORD *)&src[3] = 6LL;
  *((_QWORD *)&src[3] + 1) = anon_fab34c35a86c36917711c18ae4d7480d_1_llvm_13771626934311262642;
  src[4] = 7uLL;
  *(_QWORD *)&src[5] = 4LL;
  *(_QWORD *)&src[0] = a2;
  if ( !core::iter::traits::iterator::Iterator::reduce(src) )
    v48 = 0LL;
  v49 = v47 <= v48;
  v50 = quoting_style;
  if ( !v49 )
    v50 = v78;
  v51 = 3;
  if ( v49 )
    v51 = BYTE2(quoting_style);
  if ( (v43 & color) == 0 )
  {
    *(_QWORD *)&v115[0] = 0x8000000000000000LL;
    if ( !v63 )
      goto LABEL_111;
    goto LABEL_106;
  }
  lscolors::LsColors::from_env(src);
  if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
    <lscolors::LsColors as core::default::Default>::default(dest);
  else
    memcpy(dest, src, sizeof(dest));
  memcpy(v115, dest, sizeof(v115));
  if ( v63 )
  {
LABEL_106:
    LOBYTE(v40) = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a2,
                             anon_34cd953b2c946f74a585889e96ce9d7a_44_llvm_16853030268703478466,
                             4LL) )
      goto LABEL_113;
    LOBYTE(src[0]) = 4;
    a1[1] = alloc::boxed::Box<T>::new(src);
    a1[2] = &off_212620;
    *a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<core::option::Option<lscolors::LsColors>>(v115);
    core::ptr::drop_in_place<alloc::vec::Vec<glob::Pattern>>(&v98);
    core::ptr::drop_in_place<uu_ls::TimeStyle>(&v108);
LABEL_63:
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v92);
    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v116);
    if ( (((_QWORD)v105 != 0x8000000000000000LL) & (unsigned __int8)~v76) != 0 )
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v105);
    if ( !(((_QWORD)v103 == 0x8000000000000000LL) | (unsigned __int8)v75) )
      goto LABEL_122;
    goto LABEL_123;
  }
LABEL_111:
  is_dired_arg_present = uu_ls::dired::is_dired_arg_present();
  v53 = (unsigned __int8)v40;
  v40 = 1;
  if ( !is_dired_arg_present )
    v40 = v53;
LABEL_113:
  v54 = 3;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           a2,
                           anon_34cd953b2c946f74a585889e96ce9d7a_17_llvm_16853030268703478466,
                           11LL) )
  {
    v54 = 2;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a2,
                             anon_34cd953b2c946f74a585889e96ce9d7a_18_llvm_16853030268703478466,
                             24LL) )
    {
      v54 = 1;
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               a2,
                               anon_34cd953b2c946f74a585889e96ce9d7a_19_llvm_16853030268703478466,
                               39LL) )
        v54 = ((_BYTE)v40 != 1) & (indicator_style != 3) & ~(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                                               a2,
                                                                               anon_34cd953b2c946f74a585889e96ce9d7a_31_llvm_16853030268703478466,
                                                                               9LL);
    }
  }
  v55 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_34cd953b2c946f74a585889e96ce9d7a_34_llvm_16853030268703478466,
          9LL);
  v62 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_34cd953b2c946f74a585889e96ce9d7a_33_llvm_16853030268703478466,
          7LL);
  v90 = v99;
  v89 = v98;
  v79 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_34cd953b2c946f74a585889e96ce9d7a_31_llvm_16853030268703478466,
          9LL);
  v82 = v55;
  v81 = v51;
  v84 = v50;
  memcpy(dest, v115, sizeof(dest));
  v67 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_34cd953b2c946f74a585889e96ce9d7a_32_llvm_16853030268703478466,
          5LL);
  v56 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_1ee88fda822c10878a738d2784ca6dcb_19_llvm_3648300969967796025,
          4LL);
  v57 = v54;
  v94 = v40;
  v87 = v109;
  v86 = v108;
  v58 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_34cd953b2c946f74a585889e96ce9d7a_43_llvm_16853030268703478466,
          23LL);
  v59 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_34cd953b2c946f74a585889e96ce9d7a_44_llvm_16853030268703478466,
                          4LL) )
    v59 = 0;
  *(_QWORD *)&src[1] = v90;
  src[0] = v89;
  memcpy((char *)&src[1] + 8, dest, 0xA0uLL);
  *(_OWORD *)((char *)&src[11] + 8) = v86;
  *((_QWORD *)&src[12] + 1) = v87;
  memcpy(a1, src, 0xD0uLL);
  a1[26] = v114;
  a1[27] = v107;
  *((_BYTE *)a1 + 224) = v70;
  *((_BYTE *)a1 + 225) = v96;
  *((_BYTE *)a1 + 226) = v68;
  *((_BYTE *)a1 + 227) = v69;
  *((_WORD *)a1 + 114) = v85;
  *((_BYTE *)a1 + 230) = v82;
  *((_BYTE *)a1 + 231) = v62;
  *((_BYTE *)a1 + 232) = v79;
  *((_BYTE *)a1 + 233) = v67;
  *((_BYTE *)a1 + 234) = v56;
  *((_BYTE *)a1 + 235) = v74;
  *((_BYTE *)a1 + 236) = 0;
  *((_BYTE *)a1 + 237) = v58;
  *((_BYTE *)a1 + 238) = v63;
  *((_BYTE *)a1 + 239) = hyperlink;
  *((_BYTE *)a1 + 240) = files;
  *((_BYTE *)a1 + 241) = v97;
  *((_BYTE *)a1 + 242) = v57;
  *((_BYTE *)a1 + 243) = v72;
  *((_BYTE *)a1 + 244) = indicator_style;
  *((_BYTE *)a1 + 245) = v84;
  *((_BYTE *)a1 + 246) = v95;
  *((_BYTE *)a1 + 247) = v81;
  *((_BYTE *)a1 + 248) = v94;
  *((_BYTE *)a1 + 249) = v73;
  *((_BYTE *)a1 + 250) = v59;
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v92);
  core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v116);
  if ( (((_QWORD)v105 != 0x8000000000000000LL) & (unsigned __int8)~v76) != 0 )
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v105);
  if ( !(((_QWORD)v103 == 0x8000000000000000LL) | (unsigned __int8)v75) )
LABEL_122:
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v103);
LABEL_123:
  if ( !(((_QWORD)v101 == 0x8000000000000000LL) | (unsigned __int8)v66) )
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v101);
  return a1;
}
