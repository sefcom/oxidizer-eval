void *__fastcall just::config::Config::app(void *dest)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  _DWORD v196[158]; // [rsp+0h] [rbp-AC8h] BYREF
  int v197; // [rsp+278h] [rbp-850h]
  unsigned int v198; // [rsp+27Ch] [rbp-84Ch]
  _BYTE desta[700]; // [rsp+280h] [rbp-848h] BYREF
  int v200; // [rsp+53Ch] [rbp-58Ch]
  __int64 v201; // [rsp+540h] [rbp-588h]
  __int64 v202; // [rsp+548h] [rbp-580h]
  _DWORD src[176]; // [rsp+560h] [rbp-568h] BYREF
  __int64 v204; // [rsp+820h] [rbp-2A8h]
  _QWORD v205[84]; // [rsp+828h] [rbp-2A0h] BYREF

  clap_builder::builder::command::Command::new(src);
  clap_builder::builder::command::Command::bin_name(desta, src);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::author(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  memcpy(desta, src, sizeof(desta));
  v200 = src[175] | 0x20;
  v201 = v204;
  clap_builder::builder::styling::Styles::styled(src);
  *(_QWORD *)((char *)&src[3] + 2) = 0x300000100LL;
  *(_DWORD *)((char *)&src[5] + 2) = 3;
  HIWORD(src[6]) = 1;
  *(_QWORD *)((char *)&v196[3] + 2) = 0x300000100LL;
  *(_QWORD *)&v196[5] = *(_QWORD *)&src[5];
  *(_OWORD *)((char *)&v196[24] + 2) = *(_OWORD *)((char *)&src[24] + 2);
  *(_OWORD *)((char *)&v196[27] + 2) = *(_OWORD *)((char *)&src[27] + 2);
  LOBYTE(v196[0]) = 0;
  *(_DWORD *)((char *)v196 + 1) = 50331651;
  LOBYTE(v196[2]) = 3;
  LOWORD(v196[3]) = 1;
  LOBYTE(v196[7]) = 0;
  *(_DWORD *)((char *)&v196[7] + 1) = 50331651;
  LOBYTE(v196[9]) = 3;
  LOWORD(v196[10]) = 1;
  BYTE2(v196[10]) = 0;
  *(_DWORD *)((char *)&v196[10] + 3) = 50331650;
  BYTE2(v196[12]) = 3;
  HIWORD(v196[13]) = 0;
  LOBYTE(v196[14]) = 0;
  *(_DWORD *)((char *)&v196[14] + 1) = 50331654;
  LOBYTE(v196[16]) = 3;
  LOWORD(v196[17]) = 0;
  BYTE2(v196[17]) = 0;
  *(_DWORD *)((char *)&v196[17] + 3) = 50331650;
  BYTE2(v196[19]) = 3;
  HIWORD(v196[20]) = 0;
  v196[21] = 256;
  LOBYTE(v196[22]) = 3;
  LOBYTE(v196[23]) = 3;
  LOWORD(v196[24]) = 0;
  clap_builder::builder::command::Command::styles(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  clap_builder::builder::arg::Arg::env(desta, v196);
  ((void (__fastcall *)(_DWORD *, _BYTE *, _QWORD))clap_builder::builder::arg::Arg::action)(v196, desta, 0LL);
  clap_builder::builder::arg::Arg::value_parser(desta, v196);
  clap_builder::builder::arg::Arg::default_value(v196, desta);
  clap_builder::builder::arg::Arg::help(desta, v196);
  clap_builder::builder::arg::Arg::conflicts_with(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::env(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    0LL,
    v1,
    v2,
    v3);
  v202 = 3LL;
  clap_builder::builder::arg::Arg::value_parser(src, v196);
  clap_builder::builder::arg::Arg::help(v196, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    2LL,
    v4,
    v5,
    v6);
  clap_builder::builder::arg::Arg::requires(v196, desta);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::env(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    0LL,
    v7,
    v8,
    v9);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    2LL,
    v10,
    v11,
    v12);
  clap_builder::builder::arg::Arg::overrides_with(v196, desta);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::env(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    0LL,
    v13,
    v14,
    v15);
  clap_builder::builder::arg::Arg::value_parser(src, v196);
  clap_builder::builder::arg::Arg::default_value(v196, src);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  clap_builder::builder::arg::Arg::env(desta, v196);
  ((void (__fastcall *)(_DWORD *, _BYTE *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    desta,
    0LL,
    v16,
    v17,
    v18);
  clap_builder::builder::arg::Arg::value_parser(desta, v196);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::env(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    0LL,
    v19,
    v20,
    v21);
  clap_builder::builder::arg::Arg::value_parser(src, v196);
  clap_builder::builder::arg::Arg::default_value(v196, src);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    0LL,
    v22,
    v23,
    v24);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::arg::Arg::conflicts_with(v205, v196);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64))clap_builder::builder::arg::Arg::short)(v196, src, 69LL);
  clap_builder::builder::arg::Arg::long(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    0LL,
    v25,
    v26,
    v27);
  clap_builder::builder::arg::Arg::value_parser(src, v196);
  clap_builder::builder::arg::Arg::help(v196, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  ((void (__fastcall *)(_DWORD *, _BYTE *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::short)(
    v196,
    desta,
    110LL,
    v28,
    v29,
    v30);
  clap_builder::builder::arg::Arg::long(desta, v196);
  clap_builder::builder::arg::Arg::env(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    2LL,
    v31,
    v32,
    v33);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::arg::Arg::conflicts_with(v205, v196);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::env(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    0LL,
    v34,
    v35,
    v36);
  clap_builder::builder::arg::Arg::value_parser(src, v196);
  clap_builder::builder::arg::Arg::default_value(v196, src);
  clap_builder::builder::arg::Arg::value_name(src, v196);
  clap_builder::builder::arg::Arg::help(v196, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  ((void (__fastcall *)(_DWORD *, _BYTE *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    desta,
    2LL,
    v37,
    v38,
    v39);
  clap_builder::builder::arg::Arg::long(desta, v196);
  clap_builder::builder::arg::Arg::env(v196, desta);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    2LL,
    v40,
    v41,
    v42);
  clap_builder::builder::arg::Arg::long(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::short)(
    v196,
    src,
    103LL,
    v43,
    v44,
    v45);
  clap_builder::builder::arg::Arg::conflicts_with(src, v196);
  clap_builder::builder::arg::Arg::conflicts_with(v196, src);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  clap_builder::builder::arg::Arg::env(desta, v196);
  ((void (__fastcall *)(_DWORD *, _BYTE *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    desta,
    2LL,
    v46,
    v47,
    v48);
  clap_builder::builder::arg::Arg::help(desta, v196);
  clap_builder::builder::arg::Arg::overrides_with(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::short)(
    v196,
    src,
    102LL,
    v49,
    v50,
    v51);
  clap_builder::builder::arg::Arg::long(src, v196);
  clap_builder::builder::arg::Arg::env(v196, src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    src,
    v196,
    0LL,
    v52,
    v53,
    v54);
  clap_builder::builder::arg::Arg::value_parser(v196, src);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  clap_builder::builder::arg::Arg::env(desta, v196);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v196);
  clap_builder::builder::arg::Arg::default_value(v196, desta);
  ((void (__fastcall *)(_QWORD *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v205,
    v196,
    0LL,
    v55,
    v56,
    v57);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::env(src, v196);
  clap_builder::builder::arg::Arg::help(v196, src);
  clap_builder::builder::arg::Arg::value_name(src, v196);
  clap_builder::builder::arg::Arg::default_value(v196, src);
  ((void (__fastcall *)(_QWORD *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v205,
    v196,
    0LL,
    v58,
    v59,
    v60);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  clap_builder::builder::arg::Arg::env(desta, v196);
  clap_builder::builder::arg::Arg::help(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    2LL,
    v61,
    v62,
    v63);
  clap_builder::builder::arg::Arg::requires(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::env(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    2LL,
    v64,
    v65,
    v66);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  clap_builder::builder::arg::Arg::env(desta, v196);
  clap_builder::builder::arg::Arg::alias(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    2LL,
    v67,
    v68,
    v69);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::env(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    2LL,
    v70,
    v71,
    v72);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  clap_builder::builder::arg::Arg::env(desta, v196);
  ((void (__fastcall *)(_DWORD *, _BYTE *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    desta,
    2LL,
    v73,
    v74,
    v75);
  clap_builder::builder::arg::Arg::help(desta, v196);
  clap_builder::builder::arg::Arg::overrides_with(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::env(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    2LL,
    v76,
    v77,
    v78);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  ((void (__fastcall *)(_DWORD *, _BYTE *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::short)(
    v196,
    desta,
    113LL,
    v79,
    v80,
    v81);
  clap_builder::builder::arg::Arg::long(desta, v196);
  clap_builder::builder::arg::Arg::env(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    2LL,
    v82,
    v83,
    v84);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::arg::Arg::conflicts_with(v205, v196);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::env(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    2LL,
    v85,
    v86,
    v87);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    1LL,
    v88,
    v89,
    v90);
  ((void (__fastcall *)(_DWORD *, _BYTE *, __int64))clap_builder::builder::arg::Arg::number_of_values)(v196, desta, 2LL);
  v205[0] = aVariable;
  v205[1] = 8LL;
  v205[2] = aValue;
  v205[3] = 5LL;
  clap_builder::builder::arg::Arg::value_names(desta, v196);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    src,
    v196,
    0LL,
    v91,
    v92,
    v93);
  clap_builder::builder::arg::Arg::help(v196, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    1LL,
    v94,
    v95,
    v96);
  memcpy(v196, desta, sizeof(v196));
  v197 = *(_DWORD *)&desta[632] | 0x20;
  v198 = *(_DWORD *)&desta[636];
  clap_builder::builder::arg::Arg::overrides_with(desta, v196);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::requires(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    2LL,
    v97,
    v98,
    v99);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  ((void (__fastcall *)(_DWORD *, _BYTE *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    desta,
    0LL,
    v100,
    v101,
    v102);
  clap_builder::builder::arg::Arg::env(desta, v196);
  clap_builder::builder::arg::Arg::long(v196, desta);
  clap_builder::builder::arg::Arg::value_parser(desta, v196);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    2LL,
    v103,
    v104,
    v105);
  clap_builder::builder::arg::Arg::long(src, v196);
  clap_builder::builder::arg::Arg::env(v196, src);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  ((void (__fastcall *)(_DWORD *, _BYTE *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    desta,
    0LL,
    v106,
    v107,
    v108);
  clap_builder::builder::arg::Arg::long(desta, v196);
  clap_builder::builder::arg::Arg::env(v196, desta);
  clap_builder::builder::arg::Arg::default_value(desta, v196);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::env(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::short)(
    v196,
    src,
    117LL,
    v109,
    v110,
    v111);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    src,
    v196,
    2LL,
    v112,
    v113,
    v114);
  clap_builder::builder::arg::Arg::help(v196, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  clap_builder::builder::arg::Arg::env(desta, v196);
  ((void (__fastcall *)(_DWORD *, _BYTE *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    desta,
    2LL,
    v115,
    v116,
    v117);
  clap_builder::builder::arg::Arg::value_parser(desta, v196);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::short)(
    v196,
    src,
    118LL,
    v118,
    v119,
    v120);
  clap_builder::builder::arg::Arg::long(src, v196);
  clap_builder::builder::arg::Arg::env(v196, src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    src,
    v196,
    4LL,
    v121,
    v122,
    v123);
  clap_builder::builder::arg::Arg::help(v196, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  ((void (__fastcall *)(_DWORD *, _BYTE *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::short)(
    v196,
    desta,
    100LL,
    v124,
    v125,
    v126);
  clap_builder::builder::arg::Arg::long(desta, v196);
  clap_builder::builder::arg::Arg::env(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    0LL,
    v127,
    v128,
    v129);
  clap_builder::builder::arg::Arg::value_parser(v196, desta);
  clap_builder::builder::arg::Arg::help(desta, v196);
  clap_builder::builder::arg::Arg::requires(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::env(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    2LL,
    v130,
    v131,
    v132);
  clap_builder::builder::arg::Arg::help(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    2LL,
    v133,
    v134,
    v135);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::arg::Arg::help_heading(v205, v196);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    src,
    v196,
    2LL,
    v136,
    v137,
    v138);
  clap_builder::builder::arg::Arg::help(v196, src);
  clap_builder::builder::arg::Arg::help_heading(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::short)(
    desta,
    v196,
    99LL,
    v139,
    v140,
    v141);
  clap_builder::builder::arg::Arg::num_args(v196, desta);
  memcpy(desta, v196, 0x278uLL);
  *(_DWORD *)&desta[632] = v197 | 0x20;
  *(_DWORD *)&desta[636] = v198;
  ((void (__fastcall *)(_DWORD *, _BYTE *, __int64, _QWORD, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    desta,
    1LL,
    v198,
    v142,
    v143);
  v205[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(desta, v196);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::arg::Arg::help_heading(v205, v196);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    src,
    v196,
    0LL,
    v144,
    v145,
    v146);
  clap_builder::builder::arg::Arg::value_name(v196, src);
  clap_builder::builder::arg::Arg::value_parser(src, v196);
  memcpy(v196, src, sizeof(v196));
  v197 = src[158] | 0x800;
  v198 = src[159];
  clap_builder::builder::arg::Arg::help(src, v196);
  clap_builder::builder::arg::Arg::help_heading(v196, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    2LL,
    v147,
    v148,
    v149);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::arg::Arg::help_heading(v205, v196);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::short)(
    v196,
    src,
    101LL,
    v150,
    v151,
    v152);
  clap_builder::builder::arg::Arg::long(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    2LL,
    v153,
    v154,
    v155);
  clap_builder::builder::arg::Arg::help(src, v196);
  clap_builder::builder::arg::Arg::help_heading(v196, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  clap_builder::builder::arg::Arg::alias(desta, v196);
  ((void (__fastcall *)(_DWORD *, _BYTE *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    desta,
    2LL,
    v156,
    v157,
    v158);
  clap_builder::builder::arg::Arg::help(desta, v196);
  clap_builder::builder::arg::Arg::help_heading(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::alias(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    2LL,
    v159,
    v160,
    v161);
  clap_builder::builder::arg::Arg::help(src, v196);
  clap_builder::builder::arg::Arg::help_heading(v196, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    2LL,
    v162,
    v163,
    v164);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::arg::Arg::help_heading(v205, v196);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  clap_builder::builder::arg::Arg::alias(src, v196);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    src,
    2LL,
    v165,
    v166,
    v167);
  clap_builder::builder::arg::Arg::help(src, v196);
  clap_builder::builder::arg::Arg::help_heading(v196, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  ((void (__fastcall *)(_DWORD *, _BYTE *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::short)(
    v196,
    desta,
    108LL,
    v168,
    v169,
    v170);
  clap_builder::builder::arg::Arg::long(desta, v196);
  clap_builder::builder::arg::Arg::num_args(v196, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v196);
  ((void (__fastcall *)(_DWORD *, _BYTE *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    v196,
    desta,
    0LL,
    v171,
    v172,
    v173);
  clap_builder::builder::arg::Arg::conflicts_with(desta, v196);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::arg::Arg::help_heading(v205, v196);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    src,
    v196,
    2LL,
    v174,
    v175,
    v176);
  clap_builder::builder::arg::Arg::help(v196, src);
  clap_builder::builder::arg::Arg::help_heading(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    0LL,
    v177,
    v178,
    v179);
  memcpy(v196, desta, sizeof(v196));
  v197 = *(_DWORD *)&desta[632] | 4;
  v198 = *(_DWORD *)&desta[636];
  clap_builder::builder::arg::Arg::help(desta, v196);
  clap_builder::builder::arg::Arg::help_heading(v196, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::short)(
    v196,
    src,
    115LL,
    v180,
    v181,
    v182);
  clap_builder::builder::arg::Arg::long(src, v196);
  clap_builder::builder::arg::Arg::num_args(v196, src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, _QWORD, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    src,
    v196,
    0LL,
    v183,
    v184,
    v185);
  clap_builder::builder::arg::Arg::value_name(v196, src);
  clap_builder::builder::arg::Arg::conflicts_with(src, v196);
  clap_builder::builder::arg::Arg::help(v196, src);
  clap_builder::builder::arg::Arg::help_heading(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v196, desta);
  ((void (__fastcall *)(_BYTE *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    desta,
    v196,
    2LL,
    v186,
    v187,
    v188);
  clap_builder::builder::arg::Arg::help(v196, desta);
  clap_builder::builder::arg::Arg::help_heading(v205, v196);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v196, src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    src,
    v196,
    2LL,
    v189,
    v190,
    v191);
  clap_builder::builder::arg::Arg::help(v196, src);
  clap_builder::builder::arg::Arg::help_heading(v205, v196);
  clap_builder::builder::command::Command::arg(src, desta);
  *(_QWORD *)&desta[72] = 1LL;
  *(_QWORD *)&desta[80] = 0LL;
  *(_QWORD *)desta = 0LL;
  *(_QWORD *)&desta[8] = 8LL;
  *(_WORD *)&desta[88] = 0;
  *(_OWORD *)&desta[16] = 0LL;
  *(_QWORD *)&desta[32] = 8LL;
  *(_OWORD *)&desta[40] = 0LL;
  *(_QWORD *)&desta[56] = 8LL;
  *(_QWORD *)&desta[64] = 0LL;
  clap_builder::builder::arg_group::ArgGroup::id(v196, desta);
  clap_builder::builder::arg_group::ArgGroup::args(v205, v196);
  clap_builder::builder::command::Command::group(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::num_args(v196, src);
  ((void (__fastcall *)(_DWORD *, _DWORD *, __int64, __int64, __int64, __int64))clap_builder::builder::arg::Arg::action)(
    src,
    v196,
    1LL,
    v192,
    v193,
    v194);
  clap_builder::builder::arg::Arg::help(v196, src);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}