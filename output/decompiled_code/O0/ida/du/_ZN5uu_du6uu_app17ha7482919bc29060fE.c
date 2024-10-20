void *__fastcall uu_du::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // r14
  __int64 v26; // r14
  __int64 v27; // r14
  __int64 v28; // r14
  __int64 v29; // r14
  __int64 v30; // r14
  __int64 v31; // r14
  __int64 v32; // r14
  __int64 v33; // r14
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbp
  __int64 v40; // r14
  void *v41; // rbx
  __int64 v42; // r14
  __int128 v44; // [rsp-9000h] [rbp-AF68h]
  _OWORD v45[37]; // [rsp-8FF0h] [rbp-AF58h] BYREF
  __int128 v46; // [rsp-8DA0h] [rbp-AD08h] BYREF
  __int64 v47; // [rsp-8D90h] [rbp-ACF8h]
  unsigned __int64 v48; // [rsp-8D88h] [rbp-ACF0h]
  __int128 v49; // [rsp-8D80h] [rbp-ACE8h]
  __int128 v50; // [rsp-8D70h] [rbp-ACD8h]
  __int64 v51; // [rsp-8D60h] [rbp-ACC8h]
  void *v52; // [rsp-8D58h] [rbp-ACC0h]
  _BYTE v53[592]; // [rsp-8D50h] [rbp-ACB8h] BYREF
  __int128 v54; // [rsp-8AF8h] [rbp-AA60h] BYREF
  __int64 v55; // [rsp-8AE8h] [rbp-AA50h]
  unsigned __int64 v56; // [rsp-8AE0h] [rbp-AA48h]
  __int128 v57; // [rsp-8AD8h] [rbp-AA40h]
  __int128 v58; // [rsp-8AC8h] [rbp-AA30h]
  __int64 v59; // [rsp-8AB8h] [rbp-AA20h]
  __int128 v60; // [rsp-8AB0h] [rbp-AA18h] BYREF
  __int64 v61; // [rsp-8AA0h] [rbp-AA08h]
  unsigned __int64 v62; // [rsp-8A98h] [rbp-AA00h]
  __int128 v63; // [rsp-8A90h] [rbp-A9F8h]
  __int128 v64; // [rsp-8A80h] [rbp-A9E8h]
  __int64 v65; // [rsp-8A70h] [rbp-A9D8h]
  __int128 v66; // [rsp-8A68h] [rbp-A9D0h] BYREF
  __int64 v67; // [rsp-8A58h] [rbp-A9C0h]
  unsigned __int64 v68; // [rsp-8A50h] [rbp-A9B8h]
  __int128 v69; // [rsp-8A48h] [rbp-A9B0h]
  __int128 v70; // [rsp-8A38h] [rbp-A9A0h]
  __int64 v71; // [rsp-8A28h] [rbp-A990h]
  __int128 v72; // [rsp-8A20h] [rbp-A988h]
  unsigned __int128 v73; // [rsp-8A10h] [rbp-A978h]
  __int128 v74; // [rsp-8A00h] [rbp-A968h]
  __int128 v75; // [rsp-89F0h] [rbp-A958h]
  __int64 v76; // [rsp-89E0h] [rbp-A948h]
  __int128 v77; // [rsp-89D0h] [rbp-A938h]
  unsigned __int128 v78; // [rsp-89C0h] [rbp-A928h]
  __int128 v79; // [rsp-89B0h] [rbp-A918h]
  __int128 v80; // [rsp-89A0h] [rbp-A908h]
  __int64 v81; // [rsp-8990h] [rbp-A8F8h]
  __int128 v82; // [rsp-8980h] [rbp-A8E8h] BYREF
  __int64 v83; // [rsp-8970h] [rbp-A8D8h]
  __int64 v84; // [rsp-8968h] [rbp-A8D0h] BYREF
  __int128 v85; // [rsp-8960h] [rbp-A8C8h]
  _OWORD v86[14]; // [rsp-8950h] [rbp-A8B8h] BYREF
  _BYTE v87[588]; // [rsp-8870h] [rbp-A7D8h] BYREF
  int v88; // [rsp-8624h] [rbp-A58Ch]
  _BYTE v89[588]; // [rsp-8620h] [rbp-A588h] BYREF
  int v90; // [rsp-83D4h] [rbp-A33Ch]
  _BYTE v91[588]; // [rsp-83D0h] [rbp-A338h] BYREF
  int v92; // [rsp-8184h] [rbp-A0ECh]
  _BYTE v93[588]; // [rsp-8180h] [rbp-A0E8h] BYREF
  int v94; // [rsp-7F34h] [rbp-9E9Ch]
  _BYTE v95[588]; // [rsp-7F30h] [rbp-9E98h] BYREF
  int v96; // [rsp-7CE4h] [rbp-9C4Ch]
  _BYTE v97[588]; // [rsp-7CE0h] [rbp-9C48h] BYREF
  int v98; // [rsp-7A94h] [rbp-99FCh]
  _BYTE v99[588]; // [rsp-7A90h] [rbp-99F8h] BYREF
  int v100; // [rsp-7844h] [rbp-97ACh]
  _BYTE v101[588]; // [rsp-7840h] [rbp-97A8h] BYREF
  int v102; // [rsp-75F4h] [rbp-955Ch]
  _BYTE v103[588]; // [rsp-75F0h] [rbp-9558h] BYREF
  int v104; // [rsp-73A4h] [rbp-930Ch]
  _BYTE v105[588]; // [rsp-73A0h] [rbp-9308h] BYREF
  int v106; // [rsp-7154h] [rbp-90BCh]
  _BYTE v107[588]; // [rsp-7150h] [rbp-90B8h] BYREF
  int v108; // [rsp-6F04h] [rbp-8E6Ch]
  _BYTE v109[592]; // [rsp-6F00h] [rbp-8E68h] BYREF
  _BYTE v110[592]; // [rsp-6CB0h] [rbp-8C18h] BYREF
  _BYTE v111[592]; // [rsp-6A60h] [rbp-89C8h] BYREF
  _BYTE v112[592]; // [rsp-6810h] [rbp-8778h] BYREF
  _OWORD v113[37]; // [rsp-65C0h] [rbp-8528h] BYREF
  _BYTE v114[592]; // [rsp-6370h] [rbp-82D8h] BYREF
  _BYTE v115[588]; // [rsp-6120h] [rbp-8088h] BYREF
  int v116; // [rsp-5ED4h] [rbp-7E3Ch]
  _BYTE v117[588]; // [rsp-5ED0h] [rbp-7E38h] BYREF
  int v118; // [rsp-5C84h] [rbp-7BECh]
  _OWORD v119[37]; // [rsp-5C80h] [rbp-7BE8h] BYREF
  _OWORD v120[36]; // [rsp-5A28h] [rbp-7990h] BYREF
  __int128 v121; // [rsp-57E8h] [rbp-7750h]
  _OWORD v122[37]; // [rsp-57D8h] [rbp-7740h] BYREF
  _BYTE v123[588]; // [rsp-5588h] [rbp-74F0h] BYREF
  __int16 v124; // [rsp-533Bh] [rbp-72A3h]
  char v125; // [rsp-5339h] [rbp-72A1h]
  _OWORD v126[37]; // [rsp-5338h] [rbp-72A0h] BYREF
  _OWORD v127[37]; // [rsp-50E8h] [rbp-7050h] BYREF
  _QWORD v128[74]; // [rsp-4E98h] [rbp-6E00h] BYREF
  _DWORD v129[178]; // [rsp-4C48h] [rbp-6BB0h] BYREF
  _OWORD v130[37]; // [rsp-4980h] [rbp-68E8h] BYREF
  _OWORD v131[37]; // [rsp-4730h] [rbp-6698h] BYREF
  _OWORD v132[37]; // [rsp-44E0h] [rbp-6448h] BYREF
  _OWORD v133[37]; // [rsp-4290h] [rbp-61F8h] BYREF
  _QWORD v134[74]; // [rsp-4040h] [rbp-5FA8h] BYREF
  _DWORD v135[178]; // [rsp-3DF0h] [rbp-5D58h] BYREF
  _BYTE v136[712]; // [rsp-3B28h] [rbp-5A90h] BYREF
  _BYTE v137[712]; // [rsp-3860h] [rbp-57C8h] BYREF
  _BYTE v138[712]; // [rsp-3598h] [rbp-5500h] BYREF
  _BYTE v139[712]; // [rsp-32D0h] [rbp-5238h] BYREF
  _BYTE v140[712]; // [rsp-3008h] [rbp-4F70h] BYREF
  _BYTE v141[712]; // [rsp-2D40h] [rbp-4CA8h] BYREF
  _BYTE v142[712]; // [rsp-2A78h] [rbp-49E0h] BYREF
  _BYTE v143[712]; // [rsp-27B0h] [rbp-4718h] BYREF
  _BYTE v144[712]; // [rsp-24E8h] [rbp-4450h] BYREF
  _BYTE v145[712]; // [rsp-2220h] [rbp-4188h] BYREF
  _BYTE v146[712]; // [rsp-1F58h] [rbp-3EC0h] BYREF
  _BYTE v147[712]; // [rsp-1C90h] [rbp-3BF8h] BYREF
  _BYTE v148[712]; // [rsp-19C8h] [rbp-3930h] BYREF
  _BYTE v149[712]; // [rsp-1700h] [rbp-3668h] BYREF
  _BYTE v150[712]; // [rsp-1438h] [rbp-33A0h] BYREF
  _BYTE v151[712]; // [rsp-1170h] [rbp-30D8h] BYREF
  _BYTE v152[712]; // [rsp-EA8h] [rbp-2E10h] BYREF
  _BYTE v153[712]; // [rsp-BE0h] [rbp-2B48h] BYREF
  _BYTE v154[712]; // [rsp-918h] [rbp-2880h] BYREF
  _BYTE v155[712]; // [rsp-650h] [rbp-25B8h] BYREF
  _BYTE v156[712]; // [rsp-388h] [rbp-22F0h] BYREF
  _BYTE v157[712]; // [rsp-C0h] [rbp-2028h] BYREF
  void *v158[89]; // [rsp+208h] [rbp-1D60h] BYREF
  _BYTE v159[712]; // [rsp+4D0h] [rbp-1A98h] BYREF
  _QWORD v160[89]; // [rsp+798h] [rbp-17D0h] BYREF
  _BYTE v161[712]; // [rsp+A60h] [rbp-1508h] BYREF
  _QWORD v162[89]; // [rsp+D28h] [rbp-1240h] BYREF
  __int128 v163; // [rsp+FF0h] [rbp-F78h] BYREF
  _QWORD v164[69]; // [rsp+1018h] [rbp-F50h] BYREF
  _OWORD v165[37]; // [rsp+1240h] [rbp-D28h] BYREF
  _OWORD v166[37]; // [rsp+1490h] [rbp-AD8h] BYREF
  _BYTE v167[712]; // [rsp+16E0h] [rbp-888h] BYREF
  _BYTE v168[56]; // [rsp+19A8h] [rbp-5C0h] BYREF
  _OWORD v169[47]; // [rsp+1C70h] [rbp-2F8h] BYREF

  do
    *(_QWORD *)&v93[184] = 0LL;
  while ( &v93[184] != &v107[-40824] );
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  ((void (__fastcall *)(_BYTE *, __int64, __int64))clap_builder::builder::command::Command::new::new_inner)(
    v167,
    v2,
    v3);
  *(_QWORD *)&v167[608] = a0027;
  *(_QWORD *)&v167[616] = 6LL;
  memcpy(v169, v167, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v168, v169);
  clap_builder::builder::command::Command::after_help(v129, v168);
  uucore::format_usage((unsigned int)&v84);
  v4 = v84;
  if ( v84 != 0x8000000000000000LL )
    v45[0] = v85;
  if ( *(_QWORD *)&v129[116] != 0x8000000000000000LL )
    ((void (__fastcall *)(_DWORD *, const char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(
      &v129[116],
      aOptionFileOpti);
  *(_QWORD *)&v129[116] = v4;
  *(_OWORD *)&v129[118] = v45[0];
  memcpy(v135, v129, 0x2BCuLL);
  *(_QWORD *)&v135[175] = *(_QWORD *)&v129[175] | 0x4008000040080LL;
  v135[177] = v129[177];
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *((_QWORD *)&v45[33] + 1) = 4LL;
  memcpy(v109, v45, 0x220uLL);
  *(_OWORD *)&v109[560] = v45[35];
  *(_OWORD *)&v109[576] = v45[36];
  *(_QWORD *)&v109[544] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *(_QWORD *)&v109[552] = 4LL;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aPrintHelpInfor, 23LL);
  v5 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v109[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v109[440]);
  *(_QWORD *)&v109[440] = v5;
  *(_OWORD *)&v109[448] = v44;
  memcpy(v45, v109, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)&v109[589];
  HIBYTE(v45[36]) = v109[591];
  BYTE12(v45[36]) = 5;
  ((void (__fastcall *)(_DWORD *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v135, v45);
  memcpy(v162, v135, sizeof(v162));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aAll_0;
  *((_QWORD *)&v45[33] + 1) = 3LL;
  memcpy(v87, v45, 0x220uLL);
  *(_OWORD *)&v87[560] = v45[35];
  *(_QWORD *)&v87[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v88 = HIDWORD(v45[36]);
  *(_QWORD *)&v87[544] = aAll_0;
  *(_QWORD *)&v87[552] = 3LL;
  *(_DWORD *)&v87[576] = 97;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aWriteCountsFor, 48LL);
  v6 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v87[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v87[440]);
  *(_QWORD *)&v87[440] = v6;
  *(_OWORD *)&v87[448] = v44;
  memcpy(v45, v87, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v88 + 1);
  HIBYTE(v45[36]) = HIBYTE(v88);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_QWORD *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v162, v45);
  memcpy(v161, v162, sizeof(v161));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aApparentSize_0;
  *((_QWORD *)&v45[33] + 1) = 13LL;
  memcpy(v110, v45, 0x220uLL);
  *(_OWORD *)&v110[560] = v45[35];
  *(_OWORD *)&v110[576] = v45[36];
  *(_QWORD *)&v110[544] = aApparentSize_0;
  *(_QWORD *)&v110[552] = 13LL;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aPrintApparentS, 196LL);
  v7 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v110[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v110[440]);
  *(_QWORD *)&v110[440] = v7;
  *(_OWORD *)&v110[448] = v44;
  memcpy(v45, v110, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)&v110[589];
  HIBYTE(v45[36]) = v110[591];
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v161, v45);
  memcpy(v160, v161, sizeof(v160));
  ((void (__fastcall *)(_BYTE *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v53);
  *(_QWORD *)&v53[528] = anon_b877040be6323add0ac9264ba73403e3_22_llvm_12520490929008774313;
  *(_QWORD *)&v53[536] = 10LL;
  memcpy(v45, v53, 0x220uLL);
  v45[35] = *(_OWORD *)&v53[560];
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)&v53[580];
  HIDWORD(v45[36]) = *(_DWORD *)&v53[588];
  *(_QWORD *)&v45[34] = anon_b877040be6323add0ac9264ba73403e3_22_llvm_12520490929008774313;
  *((_QWORD *)&v45[34] + 1) = 10LL;
  LODWORD(v45[36]) = 66;
  *(_QWORD *)v53 = aSize;
  *(_QWORD *)&v53[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v130, v45);
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aScaleSizesBySi, 118LL);
  v8 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *((_QWORD *)&v130[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v130[27] + 8);
  *((_QWORD *)&v130[27] + 1) = v8;
  v130[28] = v44;
  memcpy(v45, v130, sizeof(v45));
  ((void (__fastcall *)(_QWORD *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v160, v45);
  memcpy(v159, v160, sizeof(v159));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aB_0;
  *((_QWORD *)&v45[33] + 1) = 1LL;
  memcpy(v89, v45, 0x220uLL);
  *(_OWORD *)&v89[560] = v45[35];
  *(_QWORD *)&v89[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v90 = HIDWORD(v45[36]);
  *(_QWORD *)&v89[544] = aBytes_0;
  *(_QWORD *)&v89[552] = 5LL;
  *(_DWORD *)&v89[576] = 98;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aEquivalentToAp, 46LL);
  v9 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v89[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v89[440]);
  *(_QWORD *)&v89[440] = v9;
  *(_OWORD *)&v89[448] = v44;
  memcpy(v45, v89, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v90 + 1);
  HIBYTE(v45[36]) = HIBYTE(v90);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v159, v45);
  memcpy(v158, v159, sizeof(v158));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aC_0;
  *((_QWORD *)&v45[33] + 1) = 1LL;
  memcpy(v91, v45, 0x220uLL);
  *(_OWORD *)&v91[560] = v45[35];
  *(_QWORD *)&v91[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v92 = HIDWORD(v45[36]);
  *(_QWORD *)&v91[544] = aTotal_0;
  *(_QWORD *)&v91[552] = 5LL;
  *(_DWORD *)&v91[576] = 99;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aProduceAGrandT, 21LL);
  v10 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v91[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v91[440]);
  *(_QWORD *)&v91[440] = v10;
  *(_OWORD *)&v91[448] = v44;
  memcpy(v45, v91, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v92 + 1);
  HIBYTE(v45[36]) = HIBYTE(v92);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(void **, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v158, v45);
  memcpy(v157, v158, sizeof(v157));
  ((void (__fastcall *)(_BYTE *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v53);
  *(_QWORD *)&v53[528] = aD_1;
  *(_QWORD *)&v53[536] = 1LL;
  memcpy(v45, v53, 0x220uLL);
  v45[35] = *(_OWORD *)&v53[560];
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)&v53[580];
  HIDWORD(v45[36]) = *(_DWORD *)&v53[588];
  *(_QWORD *)&v45[34] = aMaxDepth;
  *((_QWORD *)&v45[34] + 1) = 9LL;
  LODWORD(v45[36]) = 100;
  *(_QWORD *)v53 = aN;
  *(_QWORD *)&v53[8] = 1LL;
  clap_builder::builder::arg::Arg::value_names(v131, v45);
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aPrintTheTotalF, 160LL);
  v11 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *((_QWORD *)&v131[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v131[27] + 8);
  *((_QWORD *)&v131[27] + 1) = v11;
  v131[28] = v44;
  memcpy(v45, v131, sizeof(v45));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v157, v45);
  memcpy(v156, v157, sizeof(v156));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = asc_2E56E;
  *((_QWORD *)&v45[33] + 1) = 1LL;
  memcpy(v93, v45, 0x220uLL);
  *(_OWORD *)&v93[560] = v45[35];
  *(_QWORD *)&v93[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v94 = HIDWORD(v45[36]);
  *(_QWORD *)&v93[544] = aHumanReadable;
  *(_QWORD *)&v93[552] = 14LL;
  *(_DWORD *)&v93[576] = 104;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aPrintSizesInHu, 55LL);
  v12 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v93[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v93[440]);
  *(_QWORD *)&v93[440] = v12;
  *(_OWORD *)&v93[448] = v44;
  memcpy(v45, v93, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v94 + 1);
  HIBYTE(v45[36]) = HIBYTE(v94);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v156, v45);
  memcpy(v155, v156, sizeof(v155));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aInodes_0;
  *((_QWORD *)&v45[33] + 1) = 6LL;
  memcpy(v111, v45, 0x220uLL);
  *(_OWORD *)&v111[560] = v45[35];
  *(_OWORD *)&v111[576] = v45[36];
  *(_QWORD *)&v111[544] = aInodes_0;
  *(_QWORD *)&v111[552] = 6LL;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aListInodeUsage, 72LL);
  v13 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v111[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v111[440]);
  *(_QWORD *)&v111[440] = v13;
  *(_OWORD *)&v111[448] = v44;
  memcpy(v45, v111, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)&v111[589];
  HIBYTE(v45[36]) = v111[591];
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v155, v45);
  memcpy(v154, v155, sizeof(v154));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aK_0;
  *((_QWORD *)&v45[33] + 1) = 1LL;
  memcpy(v115, v45, 0x240uLL);
  *(_QWORD *)&v115[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v116 = HIDWORD(v45[36]);
  *(_DWORD *)&v115[576] = 107;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aLikeBlockSize1, 20LL);
  v14 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v115[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v115[440]);
  *(_QWORD *)&v115[440] = v14;
  *(_OWORD *)&v115[448] = v44;
  memcpy(v45, v115, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v116 + 1);
  HIBYTE(v45[36]) = HIBYTE(v116);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v154, v45);
  memcpy(v153, v154, sizeof(v153));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = asc_2E617;
  *((_QWORD *)&v45[33] + 1) = 1LL;
  memcpy(v95, v45, 0x220uLL);
  *(_OWORD *)&v95[560] = v45[35];
  *(_QWORD *)&v95[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v96 = HIDWORD(v45[36]);
  *(_QWORD *)&v95[544] = aCountLinks;
  *(_QWORD *)&v95[552] = 11LL;
  *(_DWORD *)&v95[576] = 108;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aCountSizesMany, 37LL);
  v15 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v95[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v95[440]);
  *(_QWORD *)&v95[440] = v15;
  *(_OWORD *)&v95[448] = v44;
  memcpy(v45, v95, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v96 + 1);
  HIBYTE(v45[36]) = HIBYTE(v96);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v153, v45);
  v52 = a1;
  memcpy(v152, v153, sizeof(v152));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aDereference_0;
  *((_QWORD *)&v45[33] + 1) = 11LL;
  memcpy(v97, v45, 0x220uLL);
  *(_OWORD *)&v97[560] = v45[35];
  *(_QWORD *)&v97[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v98 = HIDWORD(v45[36]);
  *(_QWORD *)&v97[544] = aDereference_0;
  *(_QWORD *)&v97[552] = 11LL;
  *(_DWORD *)&v97[576] = 76;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aFollowAllSymbo, 25LL);
  v16 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v97[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v97[440]);
  *(_QWORD *)&v97[440] = v16;
  *(_OWORD *)&v97[448] = v44;
  memcpy(v45, v97, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v98 + 1);
  HIBYTE(v45[36]) = HIBYTE(v98);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v152, v45);
  memcpy(v151, v152, sizeof(v151));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = "dereference-argsConnection resetentity not foundk";
  *((_QWORD *)&v45[33] + 1) = 16LL;
  memcpy(v120, v45, sizeof(v120));
  *(_QWORD *)((char *)&v121 + 4) = *(_QWORD *)((char *)&v45[36] + 4);
  HIDWORD(v121) = HIDWORD(v45[36]);
  LODWORD(v121) = 68;
  v17 = *(_QWORD *)&v120[21];
  if ( *(_QWORD *)&v120[21] == *(_QWORD *)&v120[20] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v120[20]);
  v18 = *((_QWORD *)&v120[20] + 1);
  *(_DWORD *)(*((_QWORD *)&v120[20] + 1) + 8 * v17) = 72;
  *(_BYTE *)(v18 + 8 * v17 + 4) = 1;
  *(_QWORD *)&v120[21] = v17 + 1;
  memcpy(v112, v120, 0x220uLL);
  *(_OWORD *)&v112[560] = v120[35];
  *(_OWORD *)&v112[576] = v121;
  *(_QWORD *)&v112[544] = "dereference-argsConnection resetentity not foundk";
  *(_QWORD *)&v112[552] = 16LL;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aFollowOnlySyml, 56LL);
  v19 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v112[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v112[440]);
  *(_QWORD *)&v112[440] = v19;
  *(_OWORD *)&v112[448] = v44;
  memcpy(v45, v112, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)&v112[589];
  HIBYTE(v45[36]) = v112[591];
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v151, v45);
  memcpy(v150, v151, sizeof(v150));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aNoDereference;
  *((_QWORD *)&v45[33] + 1) = 14LL;
  memcpy(v113, v45, 0x220uLL);
  v113[35] = v45[35];
  *(_QWORD *)((char *)&v113[36] + 4) = *(_QWORD *)((char *)&v45[36] + 4);
  HIDWORD(v113[36]) = HIDWORD(v45[36]);
  *(_QWORD *)&v113[34] = aNoDereference;
  *((_QWORD *)&v113[34] + 1) = 14LL;
  LODWORD(v113[36]) = 80;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aDonTFollowAnyS, 53LL);
  v20 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = *(_OWORD *)v53;
  if ( *((_QWORD *)&v113[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v113[27] + 8);
  *((_QWORD *)&v113[27] + 1) = v20;
  v113[28] = v45[0];
  memcpy(v128, v113, sizeof(v128));
  v21 = v128[18];
  if ( v128[18] == v128[16] )
    ((void (__fastcall *)(_QWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v128[16]);
  v22 = v128[17];
  v23 = 16 * v21;
  *(_QWORD *)(v128[17] + v23) = aDereference_0;
  *(_QWORD *)(v22 + v23 + 8) = 11LL;
  v128[18] = v21 + 1;
  memcpy(v45, v128, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v128[73] + 5);
  HIBYTE(v45[36]) = HIBYTE(v128[73]);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v150, v45);
  memcpy(v149, v150, sizeof(v149));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aM_0;
  *((_QWORD *)&v45[33] + 1) = 1LL;
  memcpy(v117, v45, 0x240uLL);
  *(_QWORD *)&v117[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v118 = HIDWORD(v45[36]);
  *(_DWORD *)&v117[576] = 109;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aLikeBlockSize1_0, 20LL);
  v24 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v117[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v117[440]);
  *(_QWORD *)&v117[440] = v24;
  *(_OWORD *)&v117[448] = v44;
  memcpy(v45, v117, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v118 + 1);
  HIBYTE(v45[36]) = HIBYTE(v118);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v149, v45);
  memcpy(v148, v149, sizeof(v148));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = a0_3;
  *((_QWORD *)&v45[33] + 1) = 1LL;
  memcpy(v99, v45, 0x220uLL);
  *(_OWORD *)&v99[560] = v45[35];
  *(_QWORD *)&v99[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v100 = HIDWORD(v45[36]);
  *(_QWORD *)&v99[544] = &unk_1DE5C;
  *(_QWORD *)&v99[552] = 4LL;
  *(_DWORD *)&v99[576] = 48;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aEndEachOutputL, 52LL);
  v25 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v99[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v99[440]);
  *(_QWORD *)&v99[440] = v25;
  *(_OWORD *)&v99[448] = v44;
  memcpy(v45, v99, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v100 + 1);
  HIBYTE(v45[36]) = HIBYTE(v100);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v148, v45);
  memcpy(v147, v148, sizeof(v147));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aS_1;
  *((_QWORD *)&v45[33] + 1) = 1LL;
  memcpy(v101, v45, 0x220uLL);
  *(_OWORD *)&v101[560] = v45[35];
  *(_QWORD *)&v101[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v102 = HIDWORD(v45[36]);
  *(_QWORD *)&v101[544] = aSeparateDirs;
  *(_QWORD *)&v101[552] = 13LL;
  *(_DWORD *)&v101[576] = 83;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aDoNotIncludeSi, 37LL);
  v26 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v101[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v101[440]);
  *(_QWORD *)&v101[440] = v26;
  *(_OWORD *)&v101[448] = v44;
  memcpy(v45, v101, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v102 + 1);
  HIBYTE(v45[36]) = HIBYTE(v102);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v147, v45);
  memcpy(v146, v147, sizeof(v146));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aS_2;
  *((_QWORD *)&v45[33] + 1) = 1LL;
  memcpy(v103, v45, 0x220uLL);
  *(_OWORD *)&v103[560] = v45[35];
  *(_QWORD *)&v103[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v104 = HIDWORD(v45[36]);
  *(_QWORD *)&v103[544] = aSummarize;
  *(_QWORD *)&v103[552] = 9LL;
  *(_DWORD *)&v103[576] = 115;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aDisplayOnlyATo, 38LL);
  v27 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v103[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v103[440]);
  *(_QWORD *)&v103[440] = v27;
  *(_OWORD *)&v103[448] = v44;
  memcpy(v45, v103, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v104 + 1);
  HIBYTE(v45[36]) = HIBYTE(v104);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v146, v45);
  memcpy(v145, v146, sizeof(v145));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aSi_0;
  *((_QWORD *)&v45[33] + 1) = 2LL;
  memcpy(v114, v45, 0x220uLL);
  *(_OWORD *)&v114[560] = v45[35];
  *(_OWORD *)&v114[576] = v45[36];
  *(_QWORD *)&v114[544] = aSi_0;
  *(_QWORD *)&v114[552] = 2LL;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aLikeHButUsePow, 40LL);
  v28 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v114[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v114[440]);
  *(_QWORD *)&v114[440] = v28;
  *(_OWORD *)&v114[448] = v44;
  memcpy(v45, v114, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)&v114[589];
  HIBYTE(v45[36]) = v114[591];
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v145, v45);
  memcpy(v144, v145, sizeof(v144));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aOneFileSystem_0;
  *((_QWORD *)&v45[33] + 1) = 15LL;
  memcpy(v105, v45, 0x220uLL);
  *(_OWORD *)&v105[560] = v45[35];
  *(_QWORD *)&v105[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v106 = HIDWORD(v45[36]);
  *(_QWORD *)&v105[544] = aOneFileSystem_0;
  *(_QWORD *)&v105[552] = 15LL;
  *(_DWORD *)&v105[576] = 120;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aSkipDirectorie, 42LL);
  v29 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v105[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v105[440]);
  *(_QWORD *)&v105[440] = v29;
  *(_OWORD *)&v105[448] = v44;
  memcpy(v45, v105, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v106 + 1);
  HIBYTE(v45[36]) = HIBYTE(v106);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v144, v45);
  memcpy(v143, v144, sizeof(v143));
  ((void (__fastcall *)(_BYTE *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v53);
  *(_QWORD *)&v53[528] = aThreshold_0;
  *(_QWORD *)&v53[536] = 9LL;
  memcpy(v45, v53, 0x220uLL);
  v45[35] = *(_OWORD *)&v53[560];
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)&v53[580];
  HIDWORD(v45[36]) = *(_DWORD *)&v53[588];
  *(_QWORD *)&v45[34] = aThreshold_0;
  *((_QWORD *)&v45[34] + 1) = 9LL;
  LODWORD(v45[36]) = 116;
  *(_QWORD *)v53 = aSize;
  *(_QWORD *)&v53[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v134, v45);
  v134[2] = 1LL;
  v134[3] = 1LL;
  v134[4] = 1LL;
  memcpy(v122, v134, 0x248uLL);
  *((_QWORD *)&v122[36] + 1) = v134[73] | 0x20LL;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aExcludeEntries, 87LL);
  v30 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *((_QWORD *)&v122[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v122[27] + 8);
  *((_QWORD *)&v122[27] + 1) = v30;
  v122[28] = v44;
  memcpy(v45, v122, sizeof(v45));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v143, v45);
  memcpy(v142, v143, sizeof(v142));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v45);
  *(_QWORD *)&v45[33] = aVerbose_0;
  *((_QWORD *)&v45[33] + 1) = 7LL;
  memcpy(v107, v45, 0x220uLL);
  *(_OWORD *)&v107[560] = v45[35];
  *(_QWORD *)&v107[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v108 = HIDWORD(v45[36]);
  *(_QWORD *)&v107[544] = aVerbose_0;
  *(_QWORD *)&v107[552] = 7LL;
  *(_DWORD *)&v107[576] = 118;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aVerboseModeOpt, 50LL);
  v31 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v107[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v107[440]);
  *(_QWORD *)&v107[440] = v31;
  *(_OWORD *)&v107[448] = v44;
  memcpy(v45, v107, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v108 + 1);
  HIBYTE(v45[36]) = HIBYTE(v108);
  BYTE12(v45[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v142, v45);
  memcpy(v141, v142, sizeof(v141));
  ((void (__fastcall *)(_BYTE *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v53);
  *(_QWORD *)&v53[528] = aExclude;
  *(_QWORD *)&v53[536] = 7LL;
  memcpy(v45, v53, 0x220uLL);
  v45[35] = *(_OWORD *)&v53[560];
  v45[36] = *(_OWORD *)&v53[576];
  *(_QWORD *)&v45[34] = aExclude;
  *((_QWORD *)&v45[34] + 1) = 7LL;
  *(_QWORD *)v53 = aPattern;
  *(_QWORD *)&v53[8] = 7LL;
  clap_builder::builder::arg::Arg::value_names(v123, v45);
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aExcludeFilesTh, 32LL);
  v32 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *(_QWORD *)&v123[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v123[440]);
  *(_QWORD *)&v123[440] = v32;
  *(_OWORD *)&v123[448] = v44;
  memcpy(v45, v123, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = v124;
  HIBYTE(v45[36]) = v125;
  BYTE12(v45[36]) = 1;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v141, v45);
  memcpy(v140, v141, sizeof(v140));
  ((void (__fastcall *)(_BYTE *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v53);
  *(_QWORD *)&v53[528] = aExcludeFrom;
  *(_QWORD *)&v53[536] = 12LL;
  memcpy(v45, v53, 0x220uLL);
  v45[35] = *(_OWORD *)&v53[560];
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)&v53[580];
  HIDWORD(v45[36]) = *(_DWORD *)&v53[588];
  *(_QWORD *)&v45[34] = aExcludeFrom;
  *((_QWORD *)&v45[34] + 1) = 12LL;
  LODWORD(v45[36]) = 88;
  *(_QWORD *)v53 = aFile;
  *(_QWORD *)&v53[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v165, v45);
  BYTE13(v165[36]) = 3;
  memcpy(v126, v165, sizeof(v126));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aExcludeFilesTh_0, 44LL);
  v33 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *((_QWORD *)&v126[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v126[27] + 8);
  *((_QWORD *)&v126[27] + 1) = v33;
  v126[28] = v44;
  memcpy(v45, v126, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v126[36] + 13);
  HIBYTE(v45[36]) = HIBYTE(v126[36]);
  BYTE12(v45[36]) = 1;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v140, v45);
  memcpy(v139, v140, sizeof(v139));
  ((void (__fastcall *)(_BYTE *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v53);
  *(_QWORD *)&v53[528] = aFiles0From_0;
  *(_QWORD *)&v53[536] = 11LL;
  memcpy(v45, v53, 0x220uLL);
  v45[35] = *(_OWORD *)&v53[560];
  v45[36] = *(_OWORD *)&v53[576];
  *(_QWORD *)&v45[34] = aFiles0From_0;
  *((_QWORD *)&v45[34] + 1) = 11LL;
  *(_QWORD *)v53 = aFile;
  *(_QWORD *)&v53[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v166, v45);
  BYTE13(v166[36]) = 3;
  memcpy(v127, v166, sizeof(v127));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aSummarizeDevic, 123LL);
  v34 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *((_QWORD *)&v127[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v127[27] + 8);
  *((_QWORD *)&v127[27] + 1) = v34;
  v127[28] = v44;
  memcpy(v45, v127, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v127[36] + 13);
  HIBYTE(v45[36]) = HIBYTE(v127[36]);
  BYTE12(v45[36]) = 1;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v139, v45);
  memcpy(v138, v139, sizeof(v138));
  ((void (__fastcall *)(_BYTE *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v53);
  *(_QWORD *)&v53[528] = aTime;
  *(_QWORD *)&v53[536] = 4LL;
  memcpy(v45, v53, 0x220uLL);
  v45[35] = *(_OWORD *)&v53[560];
  v45[36] = *(_OWORD *)&v53[576];
  *(_QWORD *)&v45[34] = aTime;
  *((_QWORD *)&v45[34] + 1) = 4LL;
  *(_QWORD *)v53 = aWord;
  *(_QWORD *)&v53[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(&v163, v45);
  LOBYTE(v164[68]) |= 0x80u;
  v119[0] = v163;
  memcpy((char *)&v119[2] + 8, v164, 0x228uLL);
  v119[1] = 1uLL;
  *(_QWORD *)&v119[2] = -1LL;
  *(_QWORD *)&v58 = aAtime_0;
  *((_QWORD *)&v58 + 1) = 5LL;
  v56 = 0x8000000000000000LL;
  *(_QWORD *)&v54 = 0LL;
  *((_QWORD *)&v54 + 1) = 8LL;
  v55 = 0LL;
  LOBYTE(v59) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v54);
  v35 = *((_QWORD *)&v54 + 1);
  **((_QWORD **)&v54 + 1) = aAccess_0;
  *(_QWORD *)(v35 + 8) = 6LL;
  v55 = 1LL;
  v47 = 1LL;
  v48 = v56;
  v46 = v54;
  v49 = v57;
  v50 = v58;
  v51 = v59;
  if ( (_QWORD)v54 == 1LL )
    ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v46);
  v36 = *((_QWORD *)&v46 + 1);
  *(_QWORD *)(*((_QWORD *)&v46 + 1) + 16LL) = &unk_2E94D;
  *(_QWORD *)(v36 + 24) = 3LL;
  v47 = 2LL;
  v72 = v46;
  v74 = v49;
  v75 = v50;
  v76 = v51;
  v73 = __PAIR128__(v48, 2LL);
  *(_QWORD *)&v64 = aCtime_0;
  *((_QWORD *)&v64 + 1) = 5LL;
  v62 = 0x8000000000000000LL;
  *(_QWORD *)&v60 = 0LL;
  *((_QWORD *)&v60 + 1) = 8LL;
  v61 = 0LL;
  LOBYTE(v65) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v60);
  v37 = *((_QWORD *)&v60 + 1);
  **((_QWORD **)&v60 + 1) = aStatus_0;
  *(_QWORD *)(v37 + 8) = 6LL;
  v61 = 1LL;
  v77 = v60;
  v79 = v63;
  v80 = v64;
  v81 = v65;
  v78 = __PAIR128__(v62, 1LL);
  *(_QWORD *)&v70 = "creationUIoErrorinternal error: entered unreachable code: should be caught by clapPrinting thread pa"
                    "nicked./home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_lex-0.5.0/src/lib.rs"
                    "/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/mod.rsfailed to spawn threadmain";
  *((_QWORD *)&v70 + 1) = 8LL;
  v68 = 0x8000000000000000LL;
  *(_QWORD *)&v66 = 0LL;
  *((_QWORD *)&v66 + 1) = 8LL;
  v67 = 0LL;
  LOBYTE(v71) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v66);
  v38 = *((_QWORD *)&v66 + 1);
  **((_QWORD **)&v66 + 1) = aBirth_0;
  *(_QWORD *)(v38 + 8) = 5LL;
  v67 = 1LL;
  v86[9] = v66;
  v86[11] = v69;
  v86[12] = v70;
  *(_QWORD *)&v86[13] = v71;
  v86[10] = __PAIR128__(v68, 1LL);
  v86[0] = v72;
  v86[1] = v73;
  v86[2] = v74;
  v86[3] = v75;
  *(_QWORD *)&v86[4] = v76;
  *((_QWORD *)&v86[8] + 1) = v81;
  *(_OWORD *)((char *)&v86[7] + 8) = v80;
  *(_OWORD *)((char *)&v86[6] + 8) = v79;
  *(_OWORD *)((char *)&v86[5] + 8) = v78;
  *(_OWORD *)((char *)&v86[4] + 8) = v77;
  memcpy(&v45[1], v86, 0xD8uLL);
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 3LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v53,
    v45);
  v82 = *(_OWORD *)v53;
  v83 = *(_QWORD *)&v53[16];
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v45, &v82);
  v39 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 5LL )
    v45[0] = *(_OWORD *)v53;
  if ( *(_QWORD *)&v119[5] >= 4uLL && *(_QWORD *)&v119[5] != 5LL )
    ((void (__fastcall *)(char *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)((char *)&v119[5] + 8);
  *(_QWORD *)&v119[5] = v39;
  *(_OWORD *)((char *)&v119[5] + 8) = v45[0];
  memcpy(v132, v119, sizeof(v132));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aShowTimeOfTheL, 213LL);
  v40 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *((_QWORD *)&v132[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v132[27] + 8);
  *((_QWORD *)&v132[27] + 1) = v40;
  v132[28] = v44;
  memcpy(v45, v132, sizeof(v45));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v138, v45);
  memcpy(v137, v138, sizeof(v137));
  ((void (__fastcall *)(_BYTE *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v53);
  *(_QWORD *)&v53[528] = aTimeStyle_0;
  *(_QWORD *)&v53[536] = 10LL;
  memcpy(v45, v53, 0x220uLL);
  v45[35] = *(_OWORD *)&v53[560];
  v45[36] = *(_OWORD *)&v53[576];
  *(_QWORD *)&v45[34] = aTimeStyle_0;
  *((_QWORD *)&v45[34] + 1) = 10LL;
  *(_QWORD *)v53 = aStyle;
  *(_QWORD *)&v53[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v133, v45);
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v45, aShowTimesUsing, 96LL);
  v41 = v52;
  v42 = *(_QWORD *)&v45[0];
  *(_OWORD *)v53 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = *(_OWORD *)v53;
  if ( *((_QWORD *)&v133[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v133[27] + 8);
  *((_QWORD *)&v133[27] + 1) = v42;
  v133[28] = v44;
  memcpy(v45, v133, sizeof(v45));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v137, v45);
  memcpy(v136, v137, sizeof(v136));
  ((void (__fastcall *)(_BYTE *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v53);
  *(_QWORD *)&v53[528] = aFile;
  *(_QWORD *)&v53[536] = 4LL;
  memcpy(v45, v53, 0x248uLL);
  DWORD2(v45[36]) = *(_DWORD *)&v53[584] | 4;
  WORD6(v45[36]) = 513;
  HIWORD(v45[36]) = *(_WORD *)&v53[590];
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v136, v45);
  memcpy(v41, v136, 0x2C8uLL);
  return v41;
}
