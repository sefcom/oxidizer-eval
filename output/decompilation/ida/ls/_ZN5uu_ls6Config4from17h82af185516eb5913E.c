void *__fastcall uu_ls::Config::from(void *a1, __int64 a2)
{
  int v2; // r12d
  char flag; // r13
  char v4; // bp
  __int64 v5; // rbx
  __int64 v6; // r14
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  char v12; // al
  char v13; // cl
  char sort; // bp
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int8 v18; // r13
  int v19; // ebx
  unsigned __int8 v20; // bp
  __int64 v21; // r15
  __int64 v22; // rdx
  char v23; // bl
  __int64 v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  unsigned __int8 v32; // bp
  __int64 v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r15
  __int128 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r15
  __int128 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rsi
  char v49; // bp
  unsigned __int64 v50; // rbx
  char v51; // al
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  bool v54; // r14
  unsigned __int64 v55; // rbx
  char v56; // al
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  bool v59; // r15
  unsigned __int64 v60; // rbx
  char v61; // al
  unsigned __int64 v62; // rdx
  char v63; // r14
  unsigned __int8 v64; // si
  unsigned __int64 v65; // rcx
  int v66; // r15d
  int v67; // r13d
  __int64 v68; // rax
  _QWORD *v69; // rcx
  bool v70; // zf
  char v71; // al
  __int64 v72; // rbp
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rdx
  char v77; // bl
  char v78; // r12
  char v79; // r13
  _QWORD *v80; // r15
  char v82; // [rsp+2h] [rbp-416h]
  char v83; // [rsp+2h] [rbp-416h]
  unsigned __int8 v84; // [rsp+3h] [rbp-415h]
  char v85; // [rsp+4h] [rbp-414h]
  char v86; // [rsp+8h] [rbp-410h]
  char indicator_style; // [rsp+Dh] [rbp-40Bh]
  char v88; // [rsp+Eh] [rbp-40Ah]
  char v89; // [rsp+Eh] [rbp-40Ah]
  char files; // [rsp+Fh] [rbp-409h]
  char v91; // [rsp+10h] [rbp-408h]
  char v92; // [rsp+15h] [rbp-403h]
  char v93; // [rsp+16h] [rbp-402h]
  char v94; // [rsp+17h] [rbp-401h]
  char hyperlink; // [rsp+18h] [rbp-400h]
  char time; // [rsp+19h] [rbp-3FFh]
  char v97; // [rsp+1Ah] [rbp-3FEh]
  char v98; // [rsp+1Bh] [rbp-3FDh]
  char color; // [rsp+1Ch] [rbp-3FCh]
  char v100; // [rsp+1Ch] [rbp-3FCh]
  unsigned __int8 v102; // [rsp+2Ch] [rbp-3ECh]
  char v103; // [rsp+2Ch] [rbp-3ECh]
  unsigned int quoting_style; // [rsp+30h] [rbp-3E8h]
  char v105; // [rsp+30h] [rbp-3E8h]
  char v106; // [rsp+34h] [rbp-3E4h]
  __int64 v107; // [rsp+38h] [rbp-3E0h]
  __int64 v108; // [rsp+40h] [rbp-3D8h]
  char v109; // [rsp+48h] [rbp-3D0h]
  __int16 v110; // [rsp+4Eh] [rbp-3CAh]
  __int128 v111; // [rsp+50h] [rbp-3C8h] BYREF
  __int64 v112; // [rsp+60h] [rbp-3B8h]
  void *v113; // [rsp+68h] [rbp-3B0h]
  __int64 v114; // [rsp+70h] [rbp-3A8h]
  __int64 v115; // [rsp+78h] [rbp-3A0h]
  _OWORD src[13]; // [rsp+80h] [rbp-398h] BYREF
  int v117; // [rsp+150h] [rbp-2C8h]
  int v118; // [rsp+154h] [rbp-2C4h]
  unsigned int v119; // [rsp+158h] [rbp-2C0h]
  int v120; // [rsp+15Ch] [rbp-2BCh]
  __int128 v121; // [rsp+160h] [rbp-2B8h] BYREF
  __int64 v122; // [rsp+170h] [rbp-2A8h]
  _OWORD dest[10]; // [rsp+178h] [rbp-2A0h] BYREF
  __int64 v124; // [rsp+218h] [rbp-200h] BYREF
  __int64 v125; // [rsp+220h] [rbp-1F8h]
  __int64 v126; // [rsp+228h] [rbp-1F0h]
  __int64 v127; // [rsp+230h] [rbp-1E8h] BYREF
  __int64 v128; // [rsp+238h] [rbp-1E0h]
  __int64 v129; // [rsp+240h] [rbp-1D8h]
  __int64 v130; // [rsp+248h] [rbp-1D0h] BYREF
  __int64 v131; // [rsp+250h] [rbp-1C8h]
  __int64 v132; // [rsp+258h] [rbp-1C0h]
  __int128 v133; // [rsp+260h] [rbp-1B8h] BYREF
  __int64 v134; // [rsp+270h] [rbp-1A8h]
  __int64 v135; // [rsp+280h] [rbp-198h] BYREF
  __int64 v136; // [rsp+288h] [rbp-190h]
  __int128 v137; // [rsp+298h] [rbp-180h]
  __int128 v138; // [rsp+2A8h] [rbp-170h]
  __int128 v139; // [rsp+2B8h] [rbp-160h]
  unsigned __int64 v140; // [rsp+2C8h] [rbp-150h]
  _OWORD v141[10]; // [rsp+2D0h] [rbp-148h] BYREF
  _QWORD v142[7]; // [rsp+378h] [rbp-A0h] BYREF
  _QWORD v143[13]; // [rsp+3B0h] [rbp-68h] BYREF

  v2 = a2;
  v113 = a1;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aContext, 7LL);
  uu_ls::extract_format((__int64)src, a2);
  v4 = src[0];
  v5 = *((_QWORD *)&src[0] + 1);
  v6 = *(_QWORD *)&src[1];
  files = uu_ls::extract_files(a2);
  v82 = 1;
  if ( v4 != 1 )
  {
    if ( v5 )
    {
      v7 = uu_ls::Config::from::{{closure}}(a2, v5, v6);
      v9 = 0LL;
      if ( (v7 & 1) != 0 )
        v9 = v8;
    }
    else
    {
      v9 = 0LL;
    }
    *(_QWORD *)&v141[0] = v9;
    *(_QWORD *)&dest[0] = aG;
    *((_QWORD *)&dest[0] + 1) = 1LL;
    *(_QWORD *)&dest[1] = aO;
    *((_QWORD *)&dest[1] + 1) = 1LL;
    *(_QWORD *)&dest[2] = aNumericUidGid;
    *((_QWORD *)&dest[2] + 1) = 15LL;
    *(_QWORD *)&dest[3] = aFullTime;
    *((_QWORD *)&dest[3] + 1) = 9LL;
    *(_QWORD *)&src[0] = dest;
    *((_QWORD *)&src[0] + 1) = &dest[4];
    src[1] = (unsigned __int64)a2;
    *(_QWORD *)&src[3] = 0LL;
    v10 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_try_fold(src, v141);
    v82 = 1;
    if ( !(unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v10) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(dest, a2, ::a1, 1LL);
      if ( *(_QWORD *)&dest[0] )
      {
        *(_QWORD *)&src[1] = *(_QWORD *)&dest[1];
        src[0] = dest[0];
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, ::a1, 1LL) == 2 )
        {
          v11 = core::iter::traits::iterator::Iterator::try_fold(src, v141);
          v12 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v11);
          v13 = v4;
          v4 = 2;
          if ( !v12 )
            v4 = v13;
        }
      }
      v82 = v4;
    }
  }
  sort = uu_ls::extract_sort(a2);
  time = uu_ls::extract_time(a2);
  color = uu_ls::extract_color(a2);
  hyperlink = uu_ls::extract_hyperlink(a2);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aBlockSize, 10LL);
  v15 = clap_builder::parser::error::MatchesError::unwrap(aBlockSize, 10LL, src);
  v98 = flag;
  v97 = sort;
  if ( v15 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aBlockSize, 10LL);
    v16 = clap_builder::parser::error::MatchesError::unwrap(aBlockSize, 10LL, src);
    if ( !v16 )
      core::option::unwrap_failed(&off_286998);
    LOBYTE(v2) = 1;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                             *(_QWORD *)(v16 + 8),
                             *(_QWORD *)(v16 + 16),
                             aSi,
                             2LL) )
      v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSi, 2LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aBlockSize, 10LL);
    v17 = clap_builder::parser::error::MatchesError::unwrap(aBlockSize, 10LL, src);
    if ( !v17 )
      core::option::unwrap_failed(&off_2869B0);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(v17 + 8),
                            *(_QWORD *)(v17 + 16),
                            aHumanReadable,
                            14LL) )
    {
      v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aKibibytes, 9LL);
      v19 = v2 + 1;
      v20 = 1;
      goto LABEL_24;
    }
    v21 = a2;
  }
  else
  {
    v21 = a2;
    LOBYTE(v2) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSi, 2LL);
  }
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v21, aHumanReadable, 14LL);
  v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v21, aKibibytes, 9LL);
  v19 = 2;
  if ( !(_BYTE)v2 )
    v19 = v20;
LABEL_24:
  std::env::var_os(&v130, aBlocksize, 9LL);
  std::env::var_os(&v124, aBlockSize_0, 10LL);
  std::env::var_os(&v127, aLsBlockSize, 13LL);
  std::env::var_os(&v135, aPosixlyCorrect, 15LL);
  v120 = v19;
  if ( v15 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, *(_QWORD *)(v15 + 8), *(_QWORD *)(v15 + 16));
    goto LABEL_26;
  }
  if ( v127 != 0x8000000000000000LL )
  {
    v108 = v127;
    v107 = v128;
    v22 = v129;
    v91 = 1;
    v86 = 0;
    goto LABEL_34;
  }
  if ( v124 != 0x8000000000000000LL )
  {
    v108 = v124;
    v107 = v125;
    v22 = v126;
    v86 = 1;
    v91 = 0;
LABEL_34:
    v85 = 1;
    v23 = 0;
    if ( (unsigned __int8)v2 | v20 )
    {
LABEL_53:
      if ( v135 == 0x8000000000000000LL )
      {
        v30 = 1024LL;
        if ( (_BYTE)v2 )
          v30 = 1000LL;
        v115 = v30;
      }
      else
      {
        v115 = (v18 << 9) + 512LL;
      }
      v114 = 1LL;
      v24 = a2;
      goto LABEL_59;
    }
    goto LABEL_35;
  }
  if ( v130 == 0x8000000000000000LL )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, 1LL, 0LL);
LABEL_26:
    v107 = *((_QWORD *)&src[0] + 1);
    v108 = *(_QWORD *)&src[0];
    v22 = *(_QWORD *)&src[1];
    v86 = 1;
    v23 = 0;
    v91 = 1;
    v85 = 1;
    if ( (unsigned __int8)v2 | v20 )
      goto LABEL_53;
    goto LABEL_35;
  }
  v108 = v130;
  v107 = v131;
  v22 = v132;
  v86 = 1;
  v85 = 0;
  v91 = 1;
  v23 = 1;
  if ( (unsigned __int8)v2 | v20 )
    goto LABEL_53;
LABEL_35:
  if ( !v22 )
    goto LABEL_53;
  alloc::string::String::from_utf8_lossy(&v111, v107);
  v24 = a2;
  uucore::features::parser::parse_size::parse_size_u64(dest, *((_QWORD *)&v111 + 1), v112);
  if ( LODWORD(dest[0]) == 4 )
  {
    v25 = *((_QWORD *)&dest[0] + 1);
    if ( v23 )
    {
      if ( v18 )
        v25 = 1024LL;
      v115 = v25;
      v114 = 1LL;
    }
    else
    {
      v28 = 1024LL;
      if ( !v18 )
        v28 = *((_QWORD *)&dest[0] + 1);
      v114 = *((_QWORD *)&dest[0] + 1);
      if ( v15 )
        v28 = *((_QWORD *)&dest[0] + 1);
      v115 = v28;
    }
  }
  else
  {
    if ( v15 )
    {
      <alloc::string::String as core::clone::Clone>::clone(v141, v15);
      *((_QWORD *)&src[1] + 1) = *(_QWORD *)&v141[1];
      *(_OWORD *)((char *)src + 8) = v141[0];
      *(_QWORD *)&src[0] = 0x8000000000000003LL;
      v26 = alloc::boxed::Box<T>::new(src);
      v27 = v113;
      *((_QWORD *)v113 + 1) = v26;
      v27[2] = &off_2869E8;
      *v27 = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(dest);
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v111);
      goto LABEL_67;
    }
    v29 = 1LL;
    v115 = 1024LL;
    if ( !v23 )
      v29 = 1024LL;
    v114 = v29;
  }
  core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(dest);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v111);
LABEL_59:
  v94 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v24, aAuthor, 6LL);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v24, aNoGroup, 8LL) )
    v106 = 0;
  else
    v106 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v24, aO, 1LL) ^ 1;
  v88 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v24, aG, 1LL);
  v93 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v24, aNumericUidGid, 15LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v24, aWidth, 5LL);
  v31 = clap_builder::parser::error::MatchesError::unwrap(aWidth, 5LL, src);
  uu_ls::parse_width((__int64)dest, v31);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000006LL )
  {
    *((_QWORD *)&src[2] + 1) = *((_QWORD *)&dest[2] + 1);
    *(_OWORD *)((char *)&src[1] + 10) = *(_OWORD *)((char *)&dest[1] + 10);
    *(_OWORD *)((char *)src + 10) = *(_OWORD *)((char *)dest + 10);
    *(_QWORD *)&src[0] = *(_QWORD *)&dest[0];
    WORD4(src[0]) = WORD4(dest[0]);
    v33 = alloc::boxed::Box<T>::new(src);
    goto LABEL_66;
  }
  v110 = WORD4(dest[0]);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v24, aHideControlCha, 18LL) )
  {
    v32 = 0;
  }
  else
  {
    v32 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v24, aShowControlCha, 18LL) )
    {
      std::io::stdio::stdout();
      v32 = std::sys::io::is_terminal::isatty::is_terminal() ^ 1;
    }
  }
  quoting_style = uu_ls::extract_quoting_style(v24, v32);
  indicator_style = uu_ls::extract_indicator_style(v24);
  v84 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v24, aDired_1, 5LL);
  if ( ((v84 ^ 1) & (v82 != 1)) == 0 )
  {
    uu_ls::parse_time_style(dest, v24);
    v141[0] = *(_OWORD *)((char *)dest + 8);
    *(_QWORD *)&v141[1] = *((_QWORD *)&dest[1] + 1);
    if ( *(_QWORD *)&dest[0] == 0x8000000000000006LL )
    {
      v102 = v32;
      v133 = v141[0];
      v134 = *(_QWORD *)&v141[1];
      goto LABEL_80;
    }
    src[2] = dest[2];
    *(_OWORD *)((char *)src + 8) = v141[0];
    *((_QWORD *)&src[1] + 1) = *(_QWORD *)&v141[1];
    *(_QWORD *)&src[0] = *(_QWORD *)&dest[0];
    v33 = alloc::boxed::Box<T>::new(src);
LABEL_66:
    v34 = v113;
    *((_QWORD *)v113 + 1) = v33;
    v34[2] = &off_2869E8;
    *v34 = 0x8000000000000000LL;
    goto LABEL_67;
  }
  v102 = v32;
  *(_QWORD *)&v133 = 0x8000000000000002LL;
LABEL_80:
  *(_QWORD *)&v121 = 0LL;
  *((_QWORD *)&v121 + 1) = 8LL;
  v122 = 0LL;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v24, aIgnoreBackups, 14LL) )
  {
    glob::Pattern::new(src, asc_D2E65, 2LL);
    core::result::Result<T,E>::unwrap(dest, src, &off_286A50);
    alloc::vec::Vec<T,A>::push(&v121, dest, &off_286A68);
    glob::Pattern::new(src, asc_D2E67, 3LL);
    core::result::Result<T,E>::unwrap(dest, src, &off_286A80);
    alloc::vec::Vec<T,A>::push(&v121, dest, &off_286A98);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v24, aIgnore, 6LL);
  clap_builder::parser::error::MatchesError::unwrap(dest, aIgnore, 6LL, src);
  v89 = v88 ^ 1;
  v119 = HIWORD(quoting_style);
  *(_OWORD *)((char *)&src[3] + 8) = dest[3];
  *(_OWORD *)((char *)&src[2] + 8) = dest[2];
  *(_OWORD *)((char *)&src[1] + 8) = dest[1];
  *(_OWORD *)((char *)src + 8) = dest[0];
  src[5] = v137;
  src[6] = v138;
  src[7] = v139;
  src[8] = v140;
  src[9] = v137;
  src[10] = v138;
  src[11] = v139;
  *(_QWORD *)&src[12] = v140;
  *(_QWORD *)&src[0] = 1LL;
  *((_QWORD *)&src[4] + 1) = 0LL;
  while ( 1 )
  {
    v36 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(src);
    v37 = v36;
    if ( !v36 )
      break;
    uucore::features::parser::parse_glob::from_str(v142, *(_QWORD *)(v36 + 8), *(_QWORD *)(v36 + 16));
    if ( v142[0] == 0x8000000000000000LL )
    {
      *(_QWORD *)&v38 = uucore::util_name();
      v141[0] = v38;
      *(_QWORD *)&v111 = v141;
      *((_QWORD *)&v111 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[0] = &unk_286938;
      *((_QWORD *)&dest[0] + 1) = 2LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = &v111;
      *((_QWORD *)&dest[1] + 1) = 1LL;
      std::io::stdio::_eprint(dest);
      v39 = *(_QWORD *)(v37 + 8);
      v40 = *(_QWORD *)(v37 + 16);
      *(_QWORD *)&v141[0] = 0LL;
      *((_QWORD *)&v141[0] + 1) = v39;
      *(_QWORD *)&v141[1] = v40;
      BYTE8(v141[1]) = 1;
      *(_QWORD *)&v111 = v141;
      *((_QWORD *)&v111 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[0] = &off_286958;
      *((_QWORD *)&dest[0] + 1) = 2LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = &v111;
      *((_QWORD *)&dest[1] + 1) = 1LL;
      std::io::stdio::_eprint(dest);
    }
    else
    {
      alloc::vec::Vec<T,A>::push(&v121, v142, &off_286AC8);
    }
  }
  if ( files == 2 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aHide, 4LL);
    clap_builder::parser::error::MatchesError::unwrap(dest, aHide, 4LL, src);
    *(_OWORD *)((char *)&src[3] + 8) = dest[3];
    *(_OWORD *)((char *)&src[2] + 8) = dest[2];
    *(_OWORD *)((char *)&src[1] + 8) = dest[1];
    *(_OWORD *)((char *)src + 8) = dest[0];
    src[5] = v137;
    src[6] = v138;
    src[7] = v139;
    src[8] = v140;
    src[9] = v137;
    src[10] = v138;
    src[11] = v139;
    *(_QWORD *)&src[12] = v140;
    *(_QWORD *)&src[0] = 1LL;
    *((_QWORD *)&src[4] + 1) = 0LL;
    while ( 1 )
    {
      v41 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(src);
      v42 = v41;
      if ( !v41 )
        break;
      uucore::features::parser::parse_glob::from_str(v143, *(_QWORD *)(v41 + 8), *(_QWORD *)(v41 + 16));
      if ( v143[0] == 0x8000000000000000LL )
      {
        *(_QWORD *)&v43 = uucore::util_name();
        v141[0] = v43;
        *(_QWORD *)&v111 = v141;
        *((_QWORD *)&v111 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[0] = &unk_286938;
        *((_QWORD *)&dest[0] + 1) = 2LL;
        *(_QWORD *)&dest[2] = 0LL;
        *(_QWORD *)&dest[1] = &v111;
        *((_QWORD *)&dest[1] + 1) = 1LL;
        std::io::stdio::_eprint(dest);
        v44 = *(_QWORD *)(v42 + 8);
        v45 = *(_QWORD *)(v42 + 16);
        *(_QWORD *)&v141[0] = 0LL;
        *((_QWORD *)&v141[0] + 1) = v44;
        *(_QWORD *)&v141[1] = v45;
        BYTE8(v141[1]) = 1;
        *(_QWORD *)&v111 = v141;
        *((_QWORD *)&v111 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[0] = &off_286978;
        *((_QWORD *)&dest[0] + 1) = 2LL;
        *(_QWORD *)&dest[2] = 0LL;
        *(_QWORD *)&dest[1] = &v111;
        *((_QWORD *)&dest[1] + 1) = 1LL;
        std::io::stdio::_eprint(dest);
      }
      else
      {
        alloc::vec::Vec<T,A>::push(&v121, v143, &off_286AB0);
      }
    }
  }
  v46 = uu_ls::Config::from::{{closure}}(a2, aZero, 4LL);
  *(_QWORD *)&src[1] = 9LL;
  *((_QWORD *)&src[1] + 1) = asc_D289B;
  *(_QWORD *)&src[2] = 1LL;
  *((_QWORD *)&src[2] + 1) = aC;
  *(_QWORD *)&src[3] = 1LL;
  *((_QWORD *)&src[3] + 1) = aM;
  *(_QWORD *)&src[4] = 1LL;
  *((_QWORD *)&src[4] + 1) = aLong;
  *(_QWORD *)&src[5] = 4LL;
  *((_QWORD *)&src[5] + 1) = aO;
  *(_QWORD *)&src[6] = 1LL;
  *((_QWORD *)&src[6] + 1) = aG;
  *(_QWORD *)&src[7] = 1LL;
  *((_QWORD *)&src[7] + 1) = aNumericUidGid;
  *(_QWORD *)&src[8] = 15LL;
  *((_QWORD *)&src[8] + 1) = ::a1;
  *(_QWORD *)&src[9] = 1LL;
  *((_QWORD *)&src[9] + 1) = aFormat;
  *(_QWORD *)&src[10] = 6LL;
  src[0] = (unsigned __int64)a2;
  v48 = 0LL;
  if ( (core::iter::traits::iterator::Iterator::reduce(src) & 1) != 0 )
    v48 = v47;
  v49 = v82;
  if ( v46 > v48 )
    v49 = 2 - (v82 == 1);
  v50 = uu_ls::Config::from::{{closure}}(a2, aZero, 4LL);
  *(_QWORD *)&src[1] = 1LL;
  *((_QWORD *)&src[1] + 1) = aColor;
  *(_QWORD *)&src[2] = 5LL;
  src[0] = (unsigned __int64)a2;
  v51 = core::iter::traits::iterator::Iterator::reduce(src);
  v53 = 0LL;
  if ( (v51 & 1) != 0 )
    v53 = v52;
  v54 = v50 <= v53;
  v55 = uu_ls::Config::from::{{closure}}(a2, aZero, 4LL);
  *(_QWORD *)&src[1] = 2LL;
  *((_QWORD *)&src[1] + 1) = aHideControlCha;
  *(_QWORD *)&src[2] = 18LL;
  *((_QWORD *)&src[2] + 1) = aShowControlCha;
  *(_QWORD *)&src[3] = 18LL;
  src[0] = (unsigned __int64)a2;
  v56 = core::iter::traits::iterator::Iterator::reduce(src);
  v58 = 0LL;
  if ( (v56 & 1) != 0 )
    v58 = v57;
  v59 = v55 > v58;
  v60 = uu_ls::Config::from::{{closure}}(a2, aZero, 4LL);
  *(_QWORD *)&src[1] = 4LL;
  *((_QWORD *)&src[1] + 1) = aQuotingStyle;
  *(_QWORD *)&src[2] = 13LL;
  *((_QWORD *)&src[2] + 1) = aQuoteName;
  *(_QWORD *)&src[3] = 10LL;
  *((_QWORD *)&src[3] + 1) = aEscape;
  *(_QWORD *)&src[4] = 6LL;
  *((_QWORD *)&src[4] + 1) = aLiteral;
  *(_QWORD *)&src[5] = 7LL;
  src[0] = (unsigned __int64)a2;
  v61 = core::iter::traits::iterator::Iterator::reduce(src);
  v63 = v54 & color;
  v64 = v59 | v102;
  v65 = 0LL;
  if ( (v61 & 1) != 0 )
    v65 = v62;
  v66 = 3;
  if ( v60 <= v65 )
    v66 = (unsigned __int8)quoting_style;
  v67 = BYTE1(quoting_style);
  if ( v60 > v65 )
    v67 = v64;
  if ( v63 )
  {
    lscolors::LsColors::from_env(src);
    if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
      <lscolors::LsColors as core::default::Default>::default(dest);
    else
      memcpy(dest, src, sizeof(dest));
    memcpy(v141, dest, sizeof(v141));
    if ( !v84 )
      goto LABEL_116;
    goto LABEL_111;
  }
  *(_QWORD *)&v141[0] = 0x8000000000000000LL;
  if ( v84 )
  {
LABEL_111:
    v100 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZero, 4LL) )
      goto LABEL_119;
    *(_QWORD *)&src[0] = 0x8000000000000004LL;
    v68 = alloc::boxed::Box<T>::new(src);
    v69 = v113;
    *((_QWORD *)v113 + 1) = v68;
    v69[2] = &off_2869E8;
    *v69 = 0x8000000000000000LL;
    core::ptr::drop_in_place<core::option::Option<lscolors::LsColors>>(v141);
    core::ptr::drop_in_place<alloc::vec::Vec<glob::Pattern>>(&v121);
    core::ptr::drop_in_place<uu_ls::TimeStyle>(&v133);
LABEL_67:
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v108, v107);
    core::ptr::drop_in_place<std::env::VarError>(v135, v136);
    if ( ((v127 != 0x8000000000000000LL) & (unsigned __int8)v86) != 0 )
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v127, v128);
    if ( v124 != 0x8000000000000000LL && v91 )
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v124, v125);
    v35 = v130;
    if ( v130 != 0x8000000000000000LL )
      goto LABEL_138;
    return v113;
  }
LABEL_116:
  v70 = (unsigned __int8)uu_ls::dired::is_dired_arg_present() == 0;
  v71 = 1;
  if ( v70 )
    v71 = v49;
  v100 = v71;
LABEL_119:
  v83 = 3;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDereference, 11LL) )
  {
    v83 = 2;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDereferenceCom, 24LL) )
    {
      v83 = 1;
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               a2,
                               aDereferenceCom_0,
                               39LL) )
        v83 = (v100 != 1) & (indicator_style != 3) & ~(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                                         a2,
                                                                         aDirectory,
                                                                         9LL);
    }
  }
  if ( v63 )
  {
    v72 = 0LL;
  }
  else
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aTabsize, 7LL);
    v73 = 7LL;
    v74 = clap_builder::parser::error::MatchesError::unwrap(aTabsize, 7LL, src);
    if ( v74 )
    {
      core::num::<impl usize>::from_ascii_radix(src, *(_QWORD *)(v74 + 8), *(_QWORD *)(v74 + 16));
      v73 = *((_QWORD *)&src[0] + 1);
      v75 = LOBYTE(src[0]) ^ 1LL;
    }
    else
    {
      v75 = 0LL;
    }
    v72 = 8LL;
    if ( (core::option::Option<T>::or_else(v75, v73) & 1) != 0 )
      v72 = v76;
  }
  v105 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aRecursive, 9LL);
  v103 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aReverse, 7LL);
  v112 = v122;
  v111 = v121;
  v109 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDirectory, 9LL);
  memcpy(dest, v141, sizeof(dest));
  v92 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aInode, 5LL);
  v77 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSize, 4LL);
  v118 = v67;
  v117 = v66;
  v78 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aGroupDirectori, 23LL);
  v79 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZero, 4LL) )
    v79 = 0;
  *(_QWORD *)&src[1] = v112;
  src[0] = v111;
  memcpy((char *)&src[1] + 8, dest, 0xA0uLL);
  *(_OWORD *)((char *)&src[11] + 8) = v133;
  *((_QWORD *)&src[12] + 1) = v134;
  v80 = v113;
  memcpy(v113, src, 0xD0uLL);
  v80[26] = v114;
  v80[27] = v115;
  v80[28] = v72;
  *((_BYTE *)v80 + 232) = v94;
  *((_BYTE *)v80 + 233) = v106;
  *((_BYTE *)v80 + 234) = v89;
  *((_BYTE *)v80 + 235) = v93;
  *((_WORD *)v80 + 118) = v110;
  *((_BYTE *)v80 + 238) = v105;
  *((_BYTE *)v80 + 239) = v103;
  *((_BYTE *)v80 + 240) = v109;
  *((_BYTE *)v80 + 241) = v92;
  *((_BYTE *)v80 + 242) = v77;
  *((_BYTE *)v80 + 243) = v98;
  *((_BYTE *)v80 + 244) = 0;
  *((_BYTE *)v80 + 245) = v78;
  *((_BYTE *)v80 + 246) = v84;
  *((_BYTE *)v80 + 247) = hyperlink;
  *((_BYTE *)v80 + 248) = files;
  *((_BYTE *)v80 + 249) = v120;
  *((_BYTE *)v80 + 250) = v83;
  *((_BYTE *)v80 + 251) = time;
  *((_BYTE *)v80 + 252) = v117;
  *((_BYTE *)v80 + 253) = v118;
  *((_BYTE *)v80 + 254) = v119;
  *((_BYTE *)v80 + 255) = indicator_style;
  *((_BYTE *)v80 + 256) = v100;
  *((_BYTE *)v80 + 257) = v97;
  *((_BYTE *)v80 + 258) = v79;
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v108, v107);
  core::ptr::drop_in_place<std::env::VarError>(v135, v136);
  if ( ((v127 != 0x8000000000000000LL) & (unsigned __int8)v86) != 0 )
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v127, v128);
  if ( v124 != 0x8000000000000000LL && v91 )
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v124, v125);
  v35 = v130;
  if ( v130 != 0x8000000000000000LL )
  {
LABEL_138:
    if ( v85 )
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v35, v131);
  }
  return v113;
}