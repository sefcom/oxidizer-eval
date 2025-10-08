__int64 __fastcall bat::app::App::config(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int8 count; // bp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r13
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  int flag; // eax
  __int64 v20; // rdi
  unsigned __int8 v21; // cl
  unsigned __int64 v22; // rdx
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // r15
  __int128 v29; // kr00_16
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbp
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // r14
  unsigned __int8 v45; // r13
  char v46; // al
  int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rbx
  char v50; // al
  int v51; // ecx
  char v52; // al
  int v53; // ecx
  int v54; // eax
  char v55; // al
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm2
  __int64 v63; // rcx
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm2
  char v67; // al
  int v68; // edx
  __int64 v69; // rax
  __int64 v70; // r15
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rax
  char v75; // bl
  __int64 v76; // rdx
  __int64 v77; // r13
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // r14
  char v81; // al
  int v82; // ecx
  char v83; // al
  int v84; // ecx
  __int64 v85; // rax
  __int64 v86; // rax
  const char *v87; // rsi
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rdx
  char v90; // al
  int v91; // edx
  __int64 v92; // rdi
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int64 is_terminal; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  char v98; // bl
  const char *v99; // rsi
  __int64 v100; // rcx
  unsigned __int64 v101; // rdx
  char v102; // al
  int v103; // edx
  __int64 v104; // rdi
  __int128 v105; // xmm0
  __int128 v106; // xmm1
  char v107; // r12
  char v108; // bp
  __int64 v109; // rax
  __int64 *v110; // rax
  __int64 v111; // rcx
  __int128 v112; // xmm0
  __int64 v113; // rsi
  __int128 v114; // xmm0
  __int128 v115; // xmm1
  __int128 v116; // xmm2
  __int128 v117; // xmm1
  __int128 v118; // xmm2
  char **v119; // rsi
  _BYTE v121[4]; // [rsp+10h] [rbp-438h] BYREF
  char v122; // [rsp+14h] [rbp-434h]
  char v123; // [rsp+15h] [rbp-433h]
  char v124; // [rsp+16h] [rbp-432h]
  char is_truecolor_terminal; // [rsp+17h] [rbp-431h]
  int v126; // [rsp+18h] [rbp-430h]
  int v127; // [rsp+1Ch] [rbp-42Ch]
  __int64 v128; // [rsp+20h] [rbp-428h]
  __int64 v129; // [rsp+28h] [rbp-420h]
  _BYTE v130[80]; // [rsp+30h] [rbp-418h] BYREF
  char v131; // [rsp+81h] [rbp-3C7h]
  __int64 v132; // [rsp+88h] [rbp-3C0h]
  char v133; // [rsp+90h] [rbp-3B8h]
  __int64 v134; // [rsp+98h] [rbp-3B0h]
  __int64 v135; // [rsp+A0h] [rbp-3A8h]
  __int128 v136; // [rsp+A8h] [rbp-3A0h]
  int v137; // [rsp+C4h] [rbp-384h]
  __int64 v138; // [rsp+C8h] [rbp-380h]
  unsigned __int64 v139; // [rsp+D0h] [rbp-378h]
  __int64 v140; // [rsp+D8h] [rbp-370h]
  __int128 v141; // [rsp+E0h] [rbp-368h]
  __int128 v142; // [rsp+F0h] [rbp-358h] BYREF
  __int128 v143; // [rsp+100h] [rbp-348h]
  __m256i v144; // [rsp+110h] [rbp-338h]
  _DWORD v145[2]; // [rsp+138h] [rbp-310h]
  __int128 v146; // [rsp+140h] [rbp-308h]
  __int128 v147; // [rsp+150h] [rbp-2F8h] BYREF
  __int128 v148; // [rsp+160h] [rbp-2E8h]
  __int64 v149; // [rsp+170h] [rbp-2D8h]
  __int128 v150; // [rsp+180h] [rbp-2C8h] BYREF
  __int128 v151; // [rsp+190h] [rbp-2B8h]
  __int128 v152; // [rsp+1A0h] [rbp-2A8h]
  _BYTE v153[48]; // [rsp+1B0h] [rbp-298h] BYREF
  __int64 v154; // [rsp+1E0h] [rbp-268h]
  __int128 v155; // [rsp+1E8h] [rbp-260h] BYREF
  __int64 v156; // [rsp+1F8h] [rbp-250h]
  _BYTE v157[64]; // [rsp+200h] [rbp-248h] BYREF
  _BYTE v158[16]; // [rsp+240h] [rbp-208h] BYREF
  __int128 v159; // [rsp+250h] [rbp-1F8h]
  __int128 v160; // [rsp+260h] [rbp-1E8h]
  __int128 v161; // [rsp+270h] [rbp-1D8h]
  __int64 v162; // [rsp+280h] [rbp-1C8h]
  __int64 v163; // [rsp+288h] [rbp-1C0h]
  __int64 v164; // [rsp+290h] [rbp-1B8h]
  _OWORD v165[3]; // [rsp+298h] [rbp-1B0h] BYREF
  __int64 v166; // [rsp+2C8h] [rbp-180h]
  __int128 v167; // [rsp+2D0h] [rbp-178h]
  __int128 v168; // [rsp+2E0h] [rbp-168h]
  __int128 v169; // [rsp+2F0h] [rbp-158h]
  __int128 v170; // [rsp+300h] [rbp-148h]
  _BYTE v171[32]; // [rsp+310h] [rbp-138h] BYREF
  __int128 v172; // [rsp+330h] [rbp-118h] BYREF
  __int64 v173; // [rsp+340h] [rbp-108h]
  __int128 v174; // [rsp+350h] [rbp-F8h] BYREF
  __int64 v175; // [rsp+360h] [rbp-E8h]
  unsigned __int64 v176; // [rsp+368h] [rbp-E0h] BYREF
  __int128 v177; // [rsp+370h] [rbp-D8h]
  unsigned __int64 v178; // [rsp+380h] [rbp-C8h] BYREF
  __int128 v179; // [rsp+388h] [rbp-C0h]
  _QWORD v180[8]; // [rsp+398h] [rbp-B0h] BYREF
  _QWORD v181[14]; // [rsp+3D8h] [rbp-70h] BYREF

  bat::app::App::style_components(v130);
  result = v130[0];
  if ( v130[0] != 13 )
  {
    *(__int64 *)((char *)&v144.m256i_i64[1] + 7) = *(_QWORD *)&v130[48];
    *(_OWORD *)v144.m256i_i8 = *(_OWORD *)&v130[33];
    v143 = *(_OWORD *)&v130[17];
    v142 = *(_OWORD *)&v130[1];
    *(_QWORD *)(a1 + 80) = *(_QWORD *)&v130[72];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v130[56];
    *(_QWORD *)(a1 + 56) = *(__int64 *)((char *)&v144.m256i_i64[1] + 7);
    v10 = v142;
    v11 = v143;
    *(_OWORD *)(a1 + 41) = *(_OWORD *)v144.m256i_i8;
    *(_OWORD *)(a1 + 25) = v11;
    *(_OWORD *)(a1 + 9) = v10;
    *(_BYTE *)(a1 + 8) = result;
    *(_QWORD *)a1 = 2LL;
    return result;
  }
  v128 = a4;
  v140 = a1;
  v150 = *(_OWORD *)&v130[8];
  v151 = *(_OWORD *)&v130[24];
  v152 = *(_OWORD *)&v130[40];
  count = clap_builder::parser::matches::arg_matches::ArgMatches::get_count(a2, aPlain, 5LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(v130, a2, aPlain, 5LL);
  if ( *(_QWORD *)v130 )
  {
    v173 = *(_QWORD *)&v130[16];
    v172 = *(_OWORD *)v130;
    v9 = 0LL;
    if ( (core::iter::traits::iterator::Iterator::reduce(&v172) & 1) != 0 )
      v9 = v8;
  }
  else
  {
    v9 = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(v130, a2, aPaging_0, 6LL);
  if ( *(_QWORD *)v130 )
  {
    v175 = *(_QWORD *)&v130[16];
    v174 = *(_OWORD *)v130;
    v13 = 0LL;
    if ( (core::iter::traits::iterator::Iterator::reduce(&v174) & 1) != 0 )
      v13 = v12;
  }
  else
  {
    v13 = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, a2, aPaging_0, 6LL);
  v14 = clap_builder::parser::error::MatchesError::unwrap(aPaging_0, 6LL, v130);
  if ( v14 )
  {
    v15 = *(_QWORD *)(v14 + 8);
    v16 = *(_QWORD *)(v14 + 16);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v15, v16, aAlways_0, 6LL) )
    {
      LOBYTE(v17) = count >= 2u && v9 > v13;
      v129 = v17;
      v127 = 2 * v17;
      goto LABEL_24;
    }
    v18 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v15, v16, aNever, 5LL);
    if ( (_BYTE)v18 )
    {
      LOBYTE(v18) = 2;
      v127 = v18;
      LOBYTE(v18) = 1;
      v129 = v18;
      goto LABEL_24;
    }
    v14 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v15, v16, aAuto_0, 4LL);
    if ( !(_BYTE)v14 )
    {
      *(_QWORD *)v130 = &off_6C8300;
      *(_QWORD *)&v130[8] = 1LL;
      *(_QWORD *)&v130[16] = v121;
      *(_OWORD *)&v130[24] = 0LL;
      core::panicking::panic_fmt(v130, &off_6C8360);
    }
  }
  LOBYTE(v14) = 2;
  v127 = v14;
  LOBYTE(v14) = 1;
  v129 = v14;
  if ( count <= 1u
    && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoPaging, 9LL) )
  {
    *(_QWORD *)v130 = a3;
    *(_QWORD *)&v130[8] = a3 + 160 * v128;
    flag = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v130);
    v20 = a2;
    if ( (_BYTE)flag
      && (flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aListThemes, 11LL),
          v20 = a2,
          !(_BYTE)flag) )
    {
      if ( *(_BYTE *)(a2 + 56) == 1 )
      {
        std::io::stdio::stdin(a2);
        is_terminal = std::sys::io::is_terminal::isatty::is_terminal();
        v129 = is_terminal;
        LOBYTE(is_terminal) = is_terminal + 1;
        v127 = is_terminal;
      }
    }
    else
    {
      v21 = *(_BYTE *)(v20 + 56);
      LOBYTE(flag) = 2 - v21;
      v127 = flag;
      v129 = v21 ^ 1u;
    }
  }
LABEL_24:
  bat::syntax_mapping::SyntaxMapping::new(v165);
  v23 = a2;
  if ( (std::thread::available_parallelism() & 1) != 0 )
  {
    v24 = (_QWORD *)v140;
    *(_BYTE *)(v140 + 8) = 0;
    v24[2] = v22;
    *v24 = 2LL;
    goto LABEL_69;
  }
  if ( v22 >= 2 )
    bat::syntax_mapping::SyntaxMapping::start_offload_build_all(v165);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v130, a2, aIgnoredSuffix, 14LL);
  clap_builder::parser::error::MatchesError::unwrap(&v142, aIgnoredSuffix, 14LL, v130);
  if ( (_QWORD)v142 )
  {
    *(__m256i *)&v130[32] = v144;
    *(_OWORD *)&v130[16] = v143;
    *(_OWORD *)v130 = v142;
    while ( 1 )
    {
      v25 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v130);
      if ( !v25 )
        break;
      bat::syntax_mapping::SyntaxMapping::insert_ignored_suffix(v165, *(_QWORD *)(v25 + 8), *(_QWORD *)(v25 + 16));
    }
    v23 = a2;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v130, v23, aMapSyntax, 10LL);
  clap_builder::parser::error::MatchesError::unwrap(v157, aMapSyntax, 10LL, v130);
  if ( !*(_QWORD *)v157 )
  {
LABEL_40:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, v23, aTerminalWidth, 14LL);
    v31 = clap_builder::parser::error::MatchesError::unwrap(aTerminalWidth, 14LL, v130);
    if ( v31 )
    {
      v32 = bat::app::App::config::{{closure}}(*(_QWORD *)(v31 + 8), *(_QWORD *)(v31 + 16));
      v128 = v33;
      v34 = v32;
    }
    else
    {
      v34 = 0LL;
    }
    is_truecolor_terminal = bat::app::is_truecolor_terminal();
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, v23, aLanguage, 8LL);
    v35 = 8LL;
    v36 = clap_builder::parser::error::MatchesError::unwrap(aLanguage, 8LL, v130);
    if ( v36 )
    {
      v37 = *(_QWORD *)(v36 + 8);
      v35 = *(_QWORD *)(v36 + 16);
    }
    else
    {
      v37 = 0LL;
    }
    v164 = core::option::Option<T>::or_else(v37, v35, v23);
    v163 = v38;
    v124 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v23, aShowAll, 8LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, v23, aNonprintableNo, 21LL);
    v39 = clap_builder::parser::error::MatchesError::unwrap(aNonprintableNo, 21LL, v130);
    if ( !v39
      || (v40 = *(_QWORD *)(v39 + 8),
          v41 = *(_QWORD *)(v39 + 16),
          (v123 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v40, v41, aUnicode, 7LL)) == 0)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v40, v41, aCaret, 5LL) )
    {
      *(_QWORD *)v130 = &off_6C8310;
      v119 = &off_6C83D8;
      goto LABEL_143;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, a2, aBinary_0, 6LL);
    v42 = clap_builder::parser::error::MatchesError::unwrap(aBinary_0, 6LL, v130);
    if ( !v42
      || (v43 = *(_QWORD *)(v42 + 8),
          v44 = *(_QWORD *)(v42 + 16),
          (v122 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v43, v44, aAsText, 7LL)) == 0)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v43, v44, aNoPrinting, 11LL) )
    {
      *(_QWORD *)v130 = &off_6C8320;
      v119 = &off_6C83C0;
      goto LABEL_143;
    }
    v45 = *(_BYTE *)(a2 + 56);
    if ( v45 || v34 == 1 )
    {
      v46 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aChopLongLines, 15LL);
      LOBYTE(v47) = 1;
      v126 = v47;
      if ( !v46 )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, a2, aWrap, 4LL);
        v48 = clap_builder::parser::error::MatchesError::unwrap(aWrap, 4LL, v130);
        if ( v48 )
        {
          v49 = *(_QWORD *)(v48 + 8);
          v44 = *(_QWORD *)(v48 + 16);
          v50 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v49, v44, aCharacter, 9LL);
          LOBYTE(v51) = 2;
          v126 = v51;
          if ( v50 )
            goto LABEL_61;
          v52 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v49, v44, aNever, 5LL);
          LOBYTE(v53) = 1;
          v126 = v53;
          if ( v52 )
            goto LABEL_61;
          if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v49, v44, aAuto_0, 4LL) )
          {
            *(_QWORD *)v130 = &off_6C8330;
            v119 = &off_6C8378;
            goto LABEL_143;
          }
        }
        v54 = bat::style::StyleComponents::plain(&v150);
        LOBYTE(v54) = 2 * (v54 ^ 1);
        v126 = v54;
      }
    }
    else
    {
      v126 = 0;
    }
LABEL_61:
    v55 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aForceColorizat, 18LL);
    LOBYTE(v56) = 1;
    v137 = v56;
    if ( v55 )
      goto LABEL_74;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, a2, aColor, 5LL);
    v57 = clap_builder::parser::error::MatchesError::unwrap(aColor, 5LL, v130);
    if ( v57 )
    {
      v58 = *(_QWORD *)(v57 + 8);
      v44 = *(_QWORD *)(v57 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v58, v44, aAlways_0, 6LL) )
        goto LABEL_74;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v58, v44, aNever, 5LL) )
      {
        v137 = 0;
        goto LABEL_74;
      }
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v58, v44, aAuto_0, 4LL) )
      {
        v67 = bat::app::env_no_color();
        v68 = 0;
        if ( !v67 )
          v68 = v45;
        v137 = v68;
LABEL_74:
        v131 = 2;
        *(_QWORD *)v130 = 0LL;
        v132 = 0LL;
        v133 = 0;
        v134 = 0LL;
        v135 = 1LL;
        v136 = 0LL;
        console::term::Term::with_inner(v158, v130);
        v69 = console::unix_term::terminal_size(v158);
        v70 = 80LL;
        if ( (v69 & 1) != 0 )
          v70 = WORD2(v69);
        if ( (v34 & 1) != 0 )
          v70 = v128;
        if ( v45
          || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, a2, aColor, 5LL),
              (v71 = clap_builder::parser::error::MatchesError::unwrap(aColor, 5LL, v130)) != 0)
          && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                *(_QWORD *)(v71 + 8),
                                *(_QWORD *)(v71 + 16),
                                aAlways_0,
                                6LL)
          || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, a2, aDecorations, 11LL),
              (v72 = clap_builder::parser::error::MatchesError::unwrap(aDecorations, 11LL, v130)) != 0)
          && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                *(_QWORD *)(v72 + 8),
                                *(_QWORD *)(v72 + 16),
                                aAlways_0,
                                6LL) )
        {
          LODWORD(v128) = 0;
        }
        else
        {
          v73 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aForceColorizat, 18LL);
          LOBYTE(v73) = v73 ^ 1;
          LODWORD(v128) = v73;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, a2, aTabs, 4LL);
        v74 = clap_builder::parser::error::MatchesError::unwrap(aTabs, 4LL, v130);
        if ( v74
          && (<alloc::string::String as core::clone::Clone>::clone(v130, v74),
              v142 = *(_OWORD *)&v130[8],
              *(_QWORD *)v130 != 0x8000000000000000LL) )
        {
          *(_OWORD *)&v130[8] = v142;
          v75 = bat::app::App::config::{{closure}}(v130);
          v44 = v76;
        }
        else
        {
          v75 = 0;
        }
        v77 = 4 * ((unsigned __int8)(v129 & bat::style::StyleComponents::plain(&v150)) ^ 1u);
        if ( (v75 & 1) != 0 )
          v77 = v44;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, a2, aStripAnsi, 10LL);
        v78 = clap_builder::parser::error::MatchesError::unwrap(aStripAnsi, 10LL, v130);
        if ( v78 )
        {
          v79 = *(_QWORD *)(v78 + 8);
          v80 = *(_QWORD *)(v78 + 16);
          if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v79, v80, aNever, 5LL) )
          {
            LODWORD(v129) = 0;
            goto LABEL_96;
          }
          v81 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v79, v80, aAlways_0, 6LL);
          LOBYTE(v82) = 1;
          LODWORD(v129) = v82;
          if ( v81
            || (v83 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v79, v80, aAuto_0, 4LL),
                LOBYTE(v84) = 2,
                LODWORD(v129) = v84,
                v83) )
          {
LABEL_96:
            bat::app::App::theme_options(v130, a2);
            bat::theme::theme(v171, v130);
            <T as alloc::string::SpecToString>::spec_to_string(&v155, v171);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
              v130,
              a2,
              "diff\x1B[4mmost─ full]",
              4LL);
            if ( (unsigned __int8)core::result::Result<T,E>::unwrap_or_default(
                                    *(_QWORD *)v130,
                                    *(unsigned int *)&v130[8])
              && (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                    a2,
                                    "diff\x1B[4mmost─ full]",
                                    4LL) )
            {
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, a2, aDiffContext_0, 12LL);
              v85 = clap_builder::parser::error::MatchesError::unwrap(aDiffContext_0, 12LL, v130);
              if ( v85 )
              {
                core::num::<impl usize>::from_ascii_radix(v130, *(_QWORD *)(v85 + 8), *(_QWORD *)(v85 + 16));
                v86 = 2LL;
                if ( !v130[0] )
                  v86 = *(_QWORD *)&v130[8];
              }
              else
              {
                v86 = 2LL;
              }
              v138 = v86;
              v139 = 0x8000000000000000LL;
            }
            else
            {
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v130, a2, aLineRange, 10LL);
              v87 = aLineRange;
              clap_builder::parser::error::MatchesError::unwrap(v180, aLineRange, 10LL, v130);
              v89 = 0x8000000000000000LL;
              if ( v180[0] )
              {
                v87 = (const char *)v180;
                core::iter::traits::iterator::Iterator::collect(v130, v180, 0x8000000000000000LL);
                v90 = v130[0];
                LODWORD(v146) = *(_DWORD *)&v130[1];
                *(_DWORD *)((char *)&v146 + 3) = *(_DWORD *)&v130[4];
                v88 = *(_QWORD *)&v130[8];
                v147 = *(_OWORD *)&v130[16];
                v142 = *(_OWORD *)&v130[32];
                v143 = *(_OWORD *)&v130[48];
                *(_OWORD *)v144.m256i_i8 = *(_OWORD *)&v130[64];
                v89 = 0x8000000000000000LL;
                if ( v130[0] != 14 )
                {
                  if ( v130[0] != 13 )
                  {
                    v91 = v146;
                    v92 = v140;
                    *(_DWORD *)(v140 + 12) = *(_DWORD *)((char *)&v146 + 3);
                    *(_DWORD *)(v92 + 9) = v91;
                    v159 = v147;
                    v93 = v142;
                    v94 = v143;
                    *(_OWORD *)(v92 + 72) = *(_OWORD *)v144.m256i_i8;
                    *(_OWORD *)(v92 + 56) = v94;
                    *(_OWORD *)(v92 + 40) = v93;
                    v167 = v159;
                    *(_OWORD *)(v92 + 24) = v159;
                    *(_BYTE *)(v92 + 8) = v90;
                    *(_QWORD *)(v92 + 16) = v88;
                    *(_QWORD *)v92 = 2LL;
                    core::ptr::drop_in_place<alloc::string::String>(&v155);
                    core::ptr::drop_in_place<bat::syntax_mapping::SyntaxMapping>(v165);
                    core::ptr::drop_in_place<bat::style::StyleComponents>(v150, *((_QWORD *)&v150 + 1));
                    goto LABEL_136;
                  }
                  v159 = v147;
                  v89 = *(_QWORD *)&v130[8];
                }
              }
              v167 = v159;
              if ( v89 == 0x8000000000000000LL )
                goto LABEL_107;
              v176 = v89;
              v177 = v167;
              v87 = (const char *)&v176;
              bat::line_range::LineRanges::from(v130, &v176, v89, v88);
              v88 = *(_QWORD *)v130;
              *(_OWORD *)v153 = *(_OWORD *)&v130[8];
              *(_OWORD *)&v153[16] = *(_OWORD *)&v130[24];
              *(_QWORD *)&v153[32] = *(_QWORD *)&v130[40];
              if ( *(_QWORD *)v130 == 0x8000000000000000LL )
              {
LABEL_107:
                <bat::line_range::LineRanges as core::default::Default>::default(v157, v87, v89, v88);
                v88 = *(_QWORD *)v157;
              }
              else
              {
                *(_QWORD *)&v157[40] = *(_QWORD *)&v153[32];
                *(_OWORD *)&v157[24] = *(_OWORD *)&v153[16];
                *(_OWORD *)&v157[8] = *(_OWORD *)v153;
              }
              v139 = v88;
              v138 = *(_QWORD *)&v157[8];
              v169 = *(_OWORD *)&v157[16];
              v170 = *(_OWORD *)&v157[32];
            }
            v141 = v150;
            v159 = v151;
            v160 = v152;
            v144.m256i_i64[2] = v166;
            *(_OWORD *)v144.m256i_i8 = v165[2];
            v143 = v165[1];
            v142 = v165[0];
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, a2, aPager, 5LL);
            v96 = clap_builder::parser::error::MatchesError::unwrap(aPager, 5LL, v130);
            if ( v96 )
            {
              v154 = *(_QWORD *)(v96 + 8);
              v162 = *(_QWORD *)(v96 + 16);
            }
            else
            {
              v154 = 0LL;
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, a2, aItalicText, 11LL);
            v97 = clap_builder::parser::error::MatchesError::unwrap(aItalicText, 11LL, v130);
            if ( v97 )
              v98 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                      *(_QWORD *)(v97 + 8),
                      *(_QWORD *)(v97 + 16),
                      aAlways_0,
                      6LL);
            else
              v98 = 0;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v130, a2, aHighlightLine, 14LL);
            v99 = aHighlightLine;
            clap_builder::parser::error::MatchesError::unwrap(v181, aHighlightLine, 14LL, v130);
            v101 = 0x8000000000000000LL;
            if ( !v181[0] )
              goto LABEL_125;
            v99 = (const char *)v181;
            core::iter::traits::iterator::Iterator::collect(v130, v181, 0x8000000000000000LL);
            v102 = v130[0];
            v145[0] = *(_DWORD *)&v130[1];
            *(_DWORD *)((char *)v145 + 3) = *(_DWORD *)&v130[4];
            v100 = *(_QWORD *)&v130[8];
            v146 = *(_OWORD *)&v130[16];
            *(_OWORD *)v157 = *(_OWORD *)&v130[32];
            *(_OWORD *)&v157[16] = *(_OWORD *)&v130[48];
            *(_OWORD *)&v157[32] = *(_OWORD *)&v130[64];
            v101 = 0x8000000000000000LL;
            if ( v130[0] == 14 )
            {
LABEL_125:
              v168 = v161;
              if ( v101 == 0x8000000000000000LL )
                goto LABEL_127;
              v178 = v101;
              v179 = v168;
              v99 = (const char *)&v178;
              bat::line_range::LineRanges::from(v130, &v178, v101, v100);
              v147 = *(_OWORD *)&v130[8];
              v148 = *(_OWORD *)&v130[24];
              v100 = *(_QWORD *)&v130[40];
              v149 = *(_QWORD *)&v130[40];
              if ( *(_QWORD *)v130 == 0x8000000000000000LL )
              {
LABEL_127:
                <bat::line_range::HighlightedLineRanges as core::default::Default>::default(v153, v99, v101, v100);
              }
              else
              {
                *(_QWORD *)&v153[40] = v149;
                *(_OWORD *)&v153[24] = v148;
                *(_OWORD *)&v153[8] = v147;
                *(_QWORD *)v153 = *(_QWORD *)v130;
              }
              v107 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoCustomAssets, 16LL);
              v108 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSetTerminalTit, 18LL);
              v109 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSqueezeBlank, 13LL);
              if ( (_BYTE)v109 )
              {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v130, a2);
                v110 = (__int64 *)clap_builder::parser::error::MatchesError::unwrap(v130);
                v111 = 1LL;
                if ( v110 )
                  v109 = *v110;
                else
                  v109 = 1LL;
              }
              else
              {
                v111 = 0LL;
              }
              v112 = v159;
              v113 = v140;
              *(_OWORD *)(v140 + 224) = v160;
              *(_OWORD *)(v113 + 208) = v112;
              v114 = v169;
              *(_OWORD *)(v113 + 176) = v170;
              *(_OWORD *)(v113 + 160) = v114;
              *(_QWORD *)(v113 + 32) = v156;
              *(_OWORD *)(v113 + 16) = v155;
              *(_QWORD *)(v113 + 88) = v144.m256i_i64[2];
              v115 = v143;
              v116 = *(_OWORD *)v144.m256i_i8;
              *(_OWORD *)(v113 + 40) = v142;
              *(_OWORD *)(v113 + 56) = v115;
              *(_OWORD *)(v113 + 72) = v116;
              v117 = *(_OWORD *)&v153[16];
              v118 = *(_OWORD *)&v153[32];
              *(_OWORD *)(v113 + 96) = *(_OWORD *)v153;
              *(_OWORD *)(v113 + 112) = v117;
              *(_OWORD *)(v113 + 128) = v118;
              *(_QWORD *)v113 = v111;
              *(_QWORD *)(v113 + 8) = v109;
              *(_QWORD *)(v113 + 144) = v139;
              *(_QWORD *)(v113 + 152) = v138;
              *(_OWORD *)(v113 + 192) = v141;
              *(_QWORD *)(v113 + 240) = v164;
              *(_QWORD *)(v113 + 248) = v163;
              *(_QWORD *)(v113 + 256) = v70;
              *(_QWORD *)(v113 + 264) = v77;
              *(_QWORD *)(v113 + 272) = v154;
              *(_QWORD *)(v113 + 280) = v162;
              *(_BYTE *)(v113 + 288) = v124;
              *(_BYTE *)(v113 + 289) = v123;
              *(_BYTE *)(v113 + 290) = v122;
              *(_BYTE *)(v113 + 291) = v128;
              *(_BYTE *)(v113 + 292) = v137;
              *(_BYTE *)(v113 + 293) = is_truecolor_terminal;
              *(_BYTE *)(v113 + 294) = v98;
              *(_BYTE *)(v113 + 295) = v107 ^ 1;
              *(_BYTE *)(v113 + 296) = v108;
              *(_BYTE *)(v113 + 297) = v126;
              *(_BYTE *)(v113 + 298) = v127;
              *(_BYTE *)(v113 + 299) = v129;
              goto LABEL_136;
            }
            if ( v130[0] == 13 )
            {
              v161 = v146;
              v101 = *(_QWORD *)&v130[8];
              goto LABEL_125;
            }
            v103 = v145[0];
            v104 = v140;
            *(_DWORD *)(v140 + 12) = *(_DWORD *)((char *)v145 + 3);
            *(_DWORD *)(v104 + 9) = v103;
            v161 = v146;
            v105 = *(_OWORD *)v157;
            v106 = *(_OWORD *)&v157[16];
            *(_OWORD *)(v104 + 72) = *(_OWORD *)&v157[32];
            *(_OWORD *)(v104 + 56) = v106;
            *(_OWORD *)(v104 + 40) = v105;
            v168 = v161;
            *(_OWORD *)(v104 + 24) = v161;
            *(_BYTE *)(v104 + 8) = v102;
            *(_QWORD *)(v104 + 16) = v100;
            *(_QWORD *)v104 = 2LL;
            core::ptr::drop_in_place<bat::syntax_mapping::SyntaxMapping>(&v142);
            core::ptr::drop_in_place<bat::style::StyleComponents>(v141, *((_QWORD *)&v141 + 1));
            core::ptr::drop_in_place<bat::config::VisibleLines>(v139, v138);
            core::ptr::drop_in_place<alloc::string::String>(&v155);
LABEL_136:
            core::ptr::drop_in_place<bat::theme::ThemeResult>(v171);
            return core::ptr::drop_in_place<console::term::Term>(v158);
          }
        }
        *(_QWORD *)v130 = &off_6C8350;
        *(_QWORD *)&v130[8] = 1LL;
        *(_QWORD *)&v130[16] = v121;
        *(_OWORD *)&v130[24] = 0LL;
        core::panicking::panic_fmt(v130, &off_6C83A8);
      }
    }
    *(_QWORD *)v130 = &off_6C8340;
    v119 = &off_6C8390;
LABEL_143:
    *(_QWORD *)&v130[8] = 1LL;
    *(_QWORD *)&v130[16] = v121;
    *(_OWORD *)&v130[24] = 0LL;
    core::panicking::panic_fmt(v130, v119);
  }
  v144 = *(__m256i *)&v157[32];
  v143 = *(_OWORD *)&v157[16];
  v142 = *(_OWORD *)v157;
  while ( 1 )
  {
    v26 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v142);
    if ( !v26 )
    {
      v23 = a2;
      goto LABEL_40;
    }
    v27 = *(_QWORD *)(v26 + 16);
    <char as core::str::pattern::Pattern>::into_searcher(&v130[16], 58LL, *(_QWORD *)(v26 + 8), v27);
    *(_QWORD *)v130 = 0LL;
    *(_QWORD *)&v130[8] = v27;
    *(_WORD *)&v130[64] = 1;
    core::iter::traits::iterator::Iterator::collect(&v147, v130);
    if ( (_QWORD)v148 != 2LL )
    {
      <bat::error::Error as core::convert::From<&str>>::from(v130, aInvalidSyntaxM, 125LL);
      v59 = v140;
      *(_OWORD *)(v140 + 72) = *(_OWORD *)&v130[64];
      v60 = *(_OWORD *)v130;
      v61 = *(_OWORD *)&v130[16];
      v62 = *(_OWORD *)&v130[32];
      *(_OWORD *)(v59 + 56) = *(_OWORD *)&v130[48];
      *(_OWORD *)(v59 + 40) = v62;
      *(_OWORD *)(v59 + 24) = v61;
      *(_OWORD *)(v59 + 8) = v60;
      *(_QWORD *)v59 = 2LL;
      v28 = *((_QWORD *)&v147 + 1);
      goto LABEL_68;
    }
    v28 = *((_QWORD *)&v147 + 1);
    v29 = **((_OWORD **)&v147 + 1);
    *(_OWORD *)&v153[8] = *(_OWORD *)(*((_QWORD *)&v147 + 1) + 16LL);
    *(_QWORD *)v153 = 0LL;
    bat::syntax_mapping::SyntaxMapping::insert(v130, v165, v29, *((_QWORD *)&v29 + 1), v153);
    v30 = v130[0];
    if ( v130[0] != 13 )
      break;
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v147, v28);
  }
  v63 = v140;
  *(_OWORD *)(v140 + 72) = *(_OWORD *)&v130[64];
  v64 = *(_OWORD *)&v130[1];
  v65 = *(_OWORD *)&v130[17];
  v66 = *(_OWORD *)&v130[33];
  *(_OWORD *)(v63 + 57) = *(_OWORD *)&v130[49];
  *(_OWORD *)(v63 + 41) = v66;
  *(_OWORD *)(v63 + 25) = v65;
  *(_OWORD *)(v63 + 9) = v64;
  *(_BYTE *)(v63 + 8) = v30;
  *(_QWORD *)v63 = 2LL;
LABEL_68:
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v147, v28);
LABEL_69:
  core::ptr::drop_in_place<bat::syntax_mapping::SyntaxMapping>(v165);
  return core::ptr::drop_in_place<bat::style::StyleComponents>(v150, *((_QWORD *)&v150 + 1));
}