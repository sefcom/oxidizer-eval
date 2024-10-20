void *__fastcall uu_fmt::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  _OWORD v6[37]; // [rsp+8h] [rbp-7E20h] BYREF
  __int64 v7; // [rsp+258h] [rbp-7BD0h] BYREF
  __int128 v8; // [rsp+260h] [rbp-7BC8h]
  _BYTE v9[588]; // [rsp+270h] [rbp-7BB8h] BYREF
  __int16 v10; // [rsp+4BDh] [rbp-796Bh]
  char v11; // [rsp+4BFh] [rbp-7969h]
  _DWORD v12[178]; // [rsp+4C0h] [rbp-7968h] BYREF
  _BYTE v13[544]; // [rsp+788h] [rbp-76A0h] BYREF
  const char *v14; // [rsp+9A8h] [rbp-7480h]
  __int64 v15; // [rsp+9B0h] [rbp-7478h]
  __int128 v16; // [rsp+9B8h] [rbp-7470h]
  int v17; // [rsp+9C8h] [rbp-7460h]
  __int64 v18; // [rsp+9CCh] [rbp-745Ch]
  int v19; // [rsp+9D4h] [rbp-7454h]
  _BYTE v20[544]; // [rsp+9D8h] [rbp-7450h] BYREF
  const char *v21; // [rsp+BF8h] [rbp-7230h]
  __int64 v22; // [rsp+C00h] [rbp-7228h]
  __int128 v23; // [rsp+C08h] [rbp-7220h]
  int v24; // [rsp+C18h] [rbp-7210h]
  __int64 v25; // [rsp+C1Ch] [rbp-720Ch]
  int v26; // [rsp+C24h] [rbp-7204h]
  _QWORD v27[70]; // [rsp+C28h] [rbp-7200h] BYREF
  __int128 v28; // [rsp+E58h] [rbp-6FD0h]
  int v29; // [rsp+E68h] [rbp-6FC0h]
  __int64 v30; // [rsp+E6Ch] [rbp-6FBCh]
  int v31; // [rsp+E74h] [rbp-6FB4h]
  _BYTE v32[544]; // [rsp+E78h] [rbp-6FB0h] BYREF
  const char *v33; // [rsp+1098h] [rbp-6D90h]
  __int64 v34; // [rsp+10A0h] [rbp-6D88h]
  __int128 v35; // [rsp+10A8h] [rbp-6D80h]
  int v36; // [rsp+10B8h] [rbp-6D70h]
  __int64 v37; // [rsp+10BCh] [rbp-6D6Ch]
  int v38; // [rsp+10C4h] [rbp-6D64h]
  _BYTE v39[544]; // [rsp+10C8h] [rbp-6D60h] BYREF
  const char *v40; // [rsp+12E8h] [rbp-6B40h]
  __int64 v41; // [rsp+12F0h] [rbp-6B38h]
  __int128 v42; // [rsp+12F8h] [rbp-6B30h]
  int v43; // [rsp+1308h] [rbp-6B20h]
  __int64 v44; // [rsp+130Ch] [rbp-6B1Ch]
  int v45; // [rsp+1314h] [rbp-6B14h]
  _BYTE v46[544]; // [rsp+1318h] [rbp-6B10h] BYREF
  const char *v47; // [rsp+1538h] [rbp-68F0h]
  __int64 v48; // [rsp+1540h] [rbp-68E8h]
  __int128 v49; // [rsp+1548h] [rbp-68E0h]
  int v50; // [rsp+1558h] [rbp-68D0h]
  __int64 v51; // [rsp+155Ch] [rbp-68CCh]
  int v52; // [rsp+1564h] [rbp-68C4h]
  _BYTE v53[544]; // [rsp+1568h] [rbp-68C0h] BYREF
  const char *v54; // [rsp+1788h] [rbp-66A0h]
  __int64 v55; // [rsp+1790h] [rbp-6698h]
  __int128 v56; // [rsp+1798h] [rbp-6690h]
  int v57; // [rsp+17A8h] [rbp-6680h]
  __int64 v58; // [rsp+17ACh] [rbp-667Ch]
  int v59; // [rsp+17B4h] [rbp-6674h]
  _BYTE v60[544]; // [rsp+17B8h] [rbp-6670h] BYREF
  const char *v61; // [rsp+19D8h] [rbp-6450h]
  __int64 v62; // [rsp+19E0h] [rbp-6448h]
  __int128 v63; // [rsp+19E8h] [rbp-6440h]
  int v64; // [rsp+19F8h] [rbp-6430h]
  __int64 v65; // [rsp+19FCh] [rbp-642Ch]
  int v66; // [rsp+1A04h] [rbp-6424h]
  _BYTE v67[544]; // [rsp+1A08h] [rbp-6420h] BYREF
  const char *v68; // [rsp+1C28h] [rbp-6200h]
  __int64 v69; // [rsp+1C30h] [rbp-61F8h]
  __int128 v70; // [rsp+1C38h] [rbp-61F0h]
  int v71; // [rsp+1C48h] [rbp-61E0h]
  __int64 v72; // [rsp+1C4Ch] [rbp-61DCh]
  int v73; // [rsp+1C54h] [rbp-61D4h]
  _QWORD v74[70]; // [rsp+1C58h] [rbp-61D0h] BYREF
  __int128 v75; // [rsp+1E88h] [rbp-5FA0h]
  int v76; // [rsp+1E98h] [rbp-5F90h]
  __int64 v77; // [rsp+1E9Ch] [rbp-5F8Ch]
  int v78; // [rsp+1EA4h] [rbp-5F84h]
  _BYTE v79[544]; // [rsp+1EA8h] [rbp-5F80h] BYREF
  const char *v80; // [rsp+20C8h] [rbp-5D60h]
  __int64 v81; // [rsp+20D0h] [rbp-5D58h]
  __int128 v82; // [rsp+20D8h] [rbp-5D50h]
  int v83; // [rsp+20E8h] [rbp-5D40h]
  __int64 v84; // [rsp+20ECh] [rbp-5D3Ch]
  int v85; // [rsp+20F4h] [rbp-5D34h]
  _BYTE v86[544]; // [rsp+20F8h] [rbp-5D30h] BYREF
  const char *v87; // [rsp+2318h] [rbp-5B10h]
  __int64 v88; // [rsp+2320h] [rbp-5B08h]
  __int128 v89; // [rsp+2328h] [rbp-5B00h]
  int v90; // [rsp+2338h] [rbp-5AF0h]
  __int64 v91; // [rsp+233Ch] [rbp-5AECh]
  int v92; // [rsp+2344h] [rbp-5AE4h]
  _BYTE v93[544]; // [rsp+2348h] [rbp-5AE0h] BYREF
  const char *v94; // [rsp+2568h] [rbp-58C0h]
  __int64 v95; // [rsp+2570h] [rbp-58B8h]
  __int128 v96; // [rsp+2578h] [rbp-58B0h]
  int v97; // [rsp+2588h] [rbp-58A0h]
  __int64 v98; // [rsp+258Ch] [rbp-589Ch]
  int v99; // [rsp+2594h] [rbp-5894h]
  _DWORD v100[178]; // [rsp+2598h] [rbp-5890h] BYREF
  _BYTE v101[584]; // [rsp+2860h] [rbp-55C8h] BYREF
  __int64 v102; // [rsp+2AA8h] [rbp-5380h]
  _BYTE v103[712]; // [rsp+2AB0h] [rbp-5378h] BYREF
  _QWORD v104[89]; // [rsp+2D78h] [rbp-50B0h] BYREF
  _BYTE v105[712]; // [rsp+3040h] [rbp-4DE8h] BYREF
  _BYTE v106[712]; // [rsp+3308h] [rbp-4B20h] BYREF
  _BYTE v107[712]; // [rsp+35D0h] [rbp-4858h] BYREF
  _BYTE v108[712]; // [rsp+3898h] [rbp-4590h] BYREF
  _QWORD v109[89]; // [rsp+3B60h] [rbp-42C8h] BYREF
  _BYTE v110[712]; // [rsp+3E28h] [rbp-4000h] BYREF
  _BYTE v111[712]; // [rsp+40F0h] [rbp-3D38h] BYREF
  _BYTE v112[712]; // [rsp+43B8h] [rbp-3A70h] BYREF
  _BYTE v113[712]; // [rsp+4680h] [rbp-37A8h] BYREF
  _BYTE v114[712]; // [rsp+4948h] [rbp-34E0h] BYREF
  _QWORD v115[89]; // [rsp+4C10h] [rbp-3218h] BYREF
  _BYTE v116[592]; // [rsp+4ED8h] [rbp-2F50h] BYREF
  _BYTE v117[592]; // [rsp+5128h] [rbp-2D00h] BYREF
  _BYTE v118[592]; // [rsp+5378h] [rbp-2AB0h] BYREF
  _BYTE v119[592]; // [rsp+55C8h] [rbp-2860h] BYREF
  _BYTE v120[592]; // [rsp+5818h] [rbp-2610h] BYREF
  _BYTE v121[592]; // [rsp+5A68h] [rbp-23C0h] BYREF
  _QWORD v122[74]; // [rsp+5CB8h] [rbp-2170h] BYREF
  _BYTE v123[592]; // [rsp+5F08h] [rbp-1F20h] BYREF
  _QWORD src[89]; // [rsp+6158h] [rbp-1CD0h] BYREF
  _BYTE v125[592]; // [rsp+6420h] [rbp-1A08h] BYREF
  _BYTE v126[592]; // [rsp+6670h] [rbp-17B8h] BYREF
  _BYTE v127[592]; // [rsp+68C0h] [rbp-1568h] BYREF
  _BYTE v128[592]; // [rsp+6B10h] [rbp-1318h] BYREF
  _QWORD v129[74]; // [rsp+6D60h] [rbp-10C8h] BYREF
  _BYTE v130[592]; // [rsp+6FB0h] [rbp-E78h] BYREF
  _BYTE v131[592]; // [rsp+7200h] [rbp-C28h] BYREF
  _BYTE v132[592]; // [rsp+7450h] [rbp-9D8h] BYREF
  _BYTE v133[592]; // [rsp+76A0h] [rbp-788h] BYREF
  _BYTE v134[592]; // [rsp+78F0h] [rbp-538h] BYREF
  _BYTE desta[744]; // [rsp+7B40h] [rbp-2E8h] BYREF

  v129[21] = 0LL;
  v122[42] = 0LL;
  v115[63] = 0LL;
  v109[85] = 0LL;
  v104[18] = 0LL;
  v74[54] = 0LL;
  v27[60] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v12, desta);
  uucore::format_usage((unsigned int)&v7);
  v4 = v7;
  if ( v7 != 0x8000000000000000LL )
    *(_OWORD *)v9 = v8;
  if ( *(_QWORD *)&v12[116] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v6, &v12[116]);
    if ( *((_QWORD *)&v6[0] + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        &v12[120],
        *(_QWORD *)&v6[0],
        *((_QWORD *)&v6[0] + 1),
        *(_QWORD *)&v6[1]);
  }
  *(_QWORD *)&v12[116] = v4;
  *(_OWORD *)&v12[118] = *(_OWORD *)v9;
  memcpy(v100, v12, 0x2BCuLL);
  *(_QWORD *)&v100[175] = *(_QWORD *)&v12[175] | 0x8800000088LL;
  v100[177] = v12[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v6);
  *(_QWORD *)&v6[33] = aCrownMargin;
  *((_QWORD *)&v6[33] + 1) = 12LL;
  memcpy(v13, v6, sizeof(v13));
  v16 = v6[35];
  v18 = *(_QWORD *)((char *)&v6[36] + 4);
  v19 = HIDWORD(v6[36]);
  v14 = aCrownMargin;
  v15 = 12LL;
  v17 = 99;
  clap_builder::builder::arg::Arg::help(v116, v13);
  v116[588] = 2;
  memcpy(v6, v116, sizeof(v6));
  clap_builder::builder::command::Command::arg_internal(v100, v6);
  memcpy(v115, v100, sizeof(v115));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v6);
  *(_QWORD *)&v6[33] = aTaggedParagrap;
  *((_QWORD *)&v6[33] + 1) = 16LL;
  memcpy(v20, v6, sizeof(v20));
  v23 = v6[35];
  v25 = *(_QWORD *)((char *)&v6[36] + 4);
  v26 = HIDWORD(v6[36]);
  v21 = aTaggedParagrap;
  v22 = 16LL;
  v24 = 116;
  clap_builder::builder::arg::Arg::help(v117, v20);
  v117[588] = 2;
  memcpy(v6, v117, sizeof(v6));
  clap_builder::builder::command::Command::arg_internal(v115, v6);
  memcpy(v114, v115, sizeof(v114));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v6);
  *(_QWORD *)&v6[33] = aPreserveHeader;
  *((_QWORD *)&v6[33] + 1) = 16LL;
  memcpy(v27, v6, 0x220uLL);
  v28 = v6[35];
  v30 = *(_QWORD *)((char *)&v6[36] + 4);
  v31 = HIDWORD(v6[36]);
  v27[68] = aPreserveHeader;
  v27[69] = 16LL;
  v29 = 109;
  clap_builder::builder::arg::Arg::help(v118, v27);
  v118[588] = 2;
  memcpy(v6, v118, sizeof(v6));
  clap_builder::builder::command::Command::arg_internal(v114, v6);
  memcpy(v113, v114, sizeof(v113));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v6);
  *(_QWORD *)&v6[33] = aSplitOnly;
  *((_QWORD *)&v6[33] + 1) = 10LL;
  memcpy(v32, v6, sizeof(v32));
  v35 = v6[35];
  v37 = *(_QWORD *)((char *)&v6[36] + 4);
  v38 = HIDWORD(v6[36]);
  v33 = aSplitOnly;
  v34 = 10LL;
  v36 = 115;
  clap_builder::builder::arg::Arg::help(v119, v32);
  v119[588] = 2;
  memcpy(v6, v119, sizeof(v6));
  clap_builder::builder::command::Command::arg_internal(v113, v6);
  memcpy(v112, v113, sizeof(v112));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v6);
  *(_QWORD *)&v6[33] = aUniformSpacing;
  *((_QWORD *)&v6[33] + 1) = 15LL;
  memcpy(v39, v6, sizeof(v39));
  v42 = v6[35];
  v44 = *(_QWORD *)((char *)&v6[36] + 4);
  v45 = HIDWORD(v6[36]);
  v40 = aUniformSpacing;
  v41 = 15LL;
  v43 = 117;
  clap_builder::builder::arg::Arg::help(v120, v39);
  v120[588] = 2;
  memcpy(v6, v120, sizeof(v6));
  clap_builder::builder::command::Command::arg_internal(v112, v6);
  memcpy(v111, v112, sizeof(v111));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v6);
  *(_QWORD *)&v6[33] = aPrefix;
  *((_QWORD *)&v6[33] + 1) = 6LL;
  memcpy(v46, v6, sizeof(v46));
  v49 = v6[35];
  v51 = *(_QWORD *)((char *)&v6[36] + 4);
  v52 = HIDWORD(v6[36]);
  v47 = aPrefix;
  v48 = 6LL;
  v50 = 112;
  clap_builder::builder::arg::Arg::help(v126, v46);
  memcpy(v6, v126, sizeof(v6));
  *(_QWORD *)v9 = aPrefix_0;
  *(_QWORD *)&v9[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v125, v6);
  memcpy(v6, v125, sizeof(v6));
  clap_builder::builder::command::Command::arg_internal(v111, v6);
  memcpy(v110, v111, sizeof(v110));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v6);
  *(_QWORD *)&v6[33] = aSkipPrefix;
  *((_QWORD *)&v6[33] + 1) = 11LL;
  memcpy(v53, v6, sizeof(v53));
  v56 = v6[35];
  v58 = *(_QWORD *)((char *)&v6[36] + 4);
  v59 = HIDWORD(v6[36]);
  v54 = aSkipPrefix;
  v55 = 11LL;
  v57 = 80;
  clap_builder::builder::arg::Arg::help(v128, v53);
  memcpy(v6, v128, sizeof(v6));
  *(_QWORD *)v9 = aPskip;
  *(_QWORD *)&v9[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v127, v6);
  memcpy(v6, v127, sizeof(v6));
  clap_builder::builder::command::Command::arg_internal(v110, v6);
  memcpy(v109, v110, sizeof(v109));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v6);
  *(_QWORD *)&v6[33] = aExactPrefix;
  *((_QWORD *)&v6[33] + 1) = 12LL;
  memcpy(v60, v6, sizeof(v60));
  v63 = v6[35];
  v65 = *(_QWORD *)((char *)&v6[36] + 4);
  v66 = HIDWORD(v6[36]);
  v61 = aExactPrefix;
  v62 = 12LL;
  v64 = 120;
  clap_builder::builder::arg::Arg::help(v121, v60);
  v121[588] = 2;
  memcpy(v6, v121, sizeof(v6));
  clap_builder::builder::command::Command::arg_internal(v109, v6);
  memcpy(v108, v109, sizeof(v108));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v6);
  *(_QWORD *)&v6[33] = aExactSkipPrefi;
  *((_QWORD *)&v6[33] + 1) = 17LL;
  memcpy(v67, v6, sizeof(v67));
  v70 = v6[35];
  v72 = *(_QWORD *)((char *)&v6[36] + 4);
  v73 = HIDWORD(v6[36]);
  v68 = aExactSkipPrefi;
  v69 = 17LL;
  v71 = 88;
  clap_builder::builder::arg::Arg::help(v122, v67);
  BYTE4(v122[73]) = 2;
  memcpy(v6, v122, sizeof(v6));
  clap_builder::builder::command::Command::arg_internal(v108, v6);
  memcpy(v107, v108, sizeof(v107));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v6);
  *(_QWORD *)&v6[33] = aWidth;
  *((_QWORD *)&v6[33] + 1) = 5LL;
  memcpy(v74, v6, 0x220uLL);
  v75 = v6[35];
  v77 = *(_QWORD *)((char *)&v6[36] + 4);
  v78 = HIDWORD(v6[36]);
  v74[68] = aWidth;
  v74[69] = 5LL;
  v76 = 119;
  clap_builder::builder::arg::Arg::help(v130, v74);
  memcpy(v6, v130, sizeof(v6));
  *(_QWORD *)v9 = aWidth_0;
  *(_QWORD *)&v9[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v129, v6);
  memcpy(v6, v129, sizeof(v6));
  clap_builder::builder::command::Command::arg_internal(v107, v6);
  memcpy(v106, v107, sizeof(v106));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v6);
  *(_QWORD *)&v6[33] = aGoalblue;
  *((_QWORD *)&v6[33] + 1) = 4LL;
  memcpy(v79, v6, sizeof(v79));
  v82 = v6[35];
  v84 = *(_QWORD *)((char *)&v6[36] + 4);
  v85 = HIDWORD(v6[36]);
  v80 = aGoalblue;
  v81 = 4LL;
  v83 = 103;
  clap_builder::builder::arg::Arg::help(v132, v79);
  memcpy(v6, v132, sizeof(v6));
  *(_QWORD *)v9 = aGoal;
  *(_QWORD *)&v9[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v131, v6);
  memcpy(v6, v131, sizeof(v6));
  clap_builder::builder::command::Command::arg_internal(v106, v6);
  memcpy(v105, v106, sizeof(v105));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v6);
  *(_QWORD *)&v6[33] = aQuick;
  *((_QWORD *)&v6[33] + 1) = 5LL;
  memcpy(v86, v6, sizeof(v86));
  v89 = v6[35];
  v91 = *(_QWORD *)((char *)&v6[36] + 4);
  v92 = HIDWORD(v6[36]);
  v87 = aQuick;
  v88 = 5LL;
  v90 = 113;
  clap_builder::builder::arg::Arg::help(v123, v86);
  v123[588] = 2;
  memcpy(v6, v123, sizeof(v6));
  clap_builder::builder::command::Command::arg_internal(v105, v6);
  memcpy(v104, v105, sizeof(v104));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v6);
  *(_QWORD *)&v6[33] = aTabWidth;
  *((_QWORD *)&v6[33] + 1) = 9LL;
  memcpy(v93, v6, sizeof(v93));
  v96 = v6[35];
  v98 = *(_QWORD *)((char *)&v6[36] + 4);
  v99 = HIDWORD(v6[36]);
  v94 = aTabWidth;
  v95 = 9LL;
  v97 = 84;
  clap_builder::builder::arg::Arg::help(v134, v93);
  memcpy(v6, v134, sizeof(v6));
  *(_QWORD *)v9 = aTabwidth;
  *(_QWORD *)&v9[8] = 8LL;
  clap_builder::builder::arg::Arg::value_names(v133, v6);
  memcpy(v6, v133, sizeof(v6));
  clap_builder::builder::command::Command::arg_internal(v104, v6);
  memcpy(v103, v104, sizeof(v103));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[528] = aFiles;
  *(_QWORD *)&v9[536] = 5LL;
  memcpy(v6, v9, 0x24CuLL);
  *(_WORD *)((char *)&v6[36] + 13) = v10;
  HIBYTE(v6[36]) = v11;
  BYTE12(v6[36]) = 1;
  *(_QWORD *)v9 = aFiles_0;
  *(_QWORD *)&v9[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v101, v6);
  BYTE5(v102) = 3;
  memcpy(v6, v101, 0x248uLL);
  *((_QWORD *)&v6[36] + 1) = v102 | 0x40;
  clap_builder::builder::command::Command::arg_internal(v103, v6);
  memcpy(dest, v103, 0x2C8uLL);
  return dest;
}
