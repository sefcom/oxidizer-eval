void *__fastcall uu_pr::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // rax
  _OWORD v8[37]; // [rsp-A000h] [rbp-BB40h] BYREF
  __int64 v9; // [rsp-9DB0h] [rbp-B8F0h] BYREF
  __int128 v10; // [rsp-9DA8h] [rbp-B8E8h]
  _BYTE v11[588]; // [rsp-9D98h] [rbp-B8D8h] BYREF
  __int16 v12; // [rsp-9B4Ah] [rbp-B68Ah]
  _OWORD v13[36]; // [rsp-9B40h] [rbp-B680h] BYREF
  __int128 v14; // [rsp-9900h] [rbp-B440h]
  _DWORD v15[178]; // [rsp-98F0h] [rbp-B430h] BYREF
  _QWORD v16[70]; // [rsp-9628h] [rbp-B168h] BYREF
  __int128 v17; // [rsp-93F8h] [rbp-AF38h]
  int v18; // [rsp-93E8h] [rbp-AF28h]
  __int64 v19; // [rsp-93E4h] [rbp-AF24h]
  int v20; // [rsp-93DCh] [rbp-AF1Ch]
  _BYTE v21[544]; // [rsp-93D8h] [rbp-AF18h] BYREF
  const char *v22; // [rsp-91B8h] [rbp-ACF8h]
  __int64 v23; // [rsp-91B0h] [rbp-ACF0h]
  __int128 v24; // [rsp-91A8h] [rbp-ACE8h]
  int v25; // [rsp-9198h] [rbp-ACD8h]
  __int64 v26; // [rsp-9194h] [rbp-ACD4h]
  int v27; // [rsp-918Ch] [rbp-ACCCh]
  _BYTE v28[544]; // [rsp-9188h] [rbp-ACC8h] BYREF
  const char *v29; // [rsp-8F68h] [rbp-AAA8h]
  __int64 v30; // [rsp-8F60h] [rbp-AAA0h]
  __int128 v31; // [rsp-8F58h] [rbp-AA98h]
  int v32; // [rsp-8F48h] [rbp-AA88h]
  __int64 v33; // [rsp-8F44h] [rbp-AA84h]
  int v34; // [rsp-8F3Ch] [rbp-AA7Ch]
  _BYTE v35[544]; // [rsp-8F38h] [rbp-AA78h] BYREF
  const char *v36; // [rsp-8D18h] [rbp-A858h]
  __int64 v37; // [rsp-8D10h] [rbp-A850h]
  __int128 v38; // [rsp-8D08h] [rbp-A848h]
  int v39; // [rsp-8CF8h] [rbp-A838h]
  __int64 v40; // [rsp-8CF4h] [rbp-A834h]
  int v41; // [rsp-8CECh] [rbp-A82Ch]
  _BYTE v42[544]; // [rsp-8CE8h] [rbp-A828h] BYREF
  const char *v43; // [rsp-8AC8h] [rbp-A608h]
  __int64 v44; // [rsp-8AC0h] [rbp-A600h]
  __int128 v45; // [rsp-8AB8h] [rbp-A5F8h]
  int v46; // [rsp-8AA8h] [rbp-A5E8h]
  __int64 v47; // [rsp-8AA4h] [rbp-A5E4h]
  int v48; // [rsp-8A9Ch] [rbp-A5DCh]
  _BYTE v49[544]; // [rsp-8A98h] [rbp-A5D8h] BYREF
  const char *v50; // [rsp-8878h] [rbp-A3B8h]
  __int64 v51; // [rsp-8870h] [rbp-A3B0h]
  __int128 v52; // [rsp-8868h] [rbp-A3A8h]
  int v53; // [rsp-8858h] [rbp-A398h]
  __int64 v54; // [rsp-8854h] [rbp-A394h]
  int v55; // [rsp-884Ch] [rbp-A38Ch]
  _BYTE v56[544]; // [rsp-8848h] [rbp-A388h] BYREF
  const char *v57; // [rsp-8628h] [rbp-A168h]
  __int64 v58; // [rsp-8620h] [rbp-A160h]
  __int128 v59; // [rsp-8618h] [rbp-A158h]
  int v60; // [rsp-8608h] [rbp-A148h]
  __int64 v61; // [rsp-8604h] [rbp-A144h]
  int v62; // [rsp-85FCh] [rbp-A13Ch]
  _BYTE v63[544]; // [rsp-85F8h] [rbp-A138h] BYREF
  const char *v64; // [rsp-83D8h] [rbp-9F18h]
  __int64 v65; // [rsp-83D0h] [rbp-9F10h]
  __int128 v66; // [rsp-83C8h] [rbp-9F08h]
  int v67; // [rsp-83B8h] [rbp-9EF8h]
  __int64 v68; // [rsp-83B4h] [rbp-9EF4h]
  int v69; // [rsp-83ACh] [rbp-9EECh]
  _BYTE v70[544]; // [rsp-83A8h] [rbp-9EE8h] BYREF
  const char *v71; // [rsp-8188h] [rbp-9CC8h]
  __int64 v72; // [rsp-8180h] [rbp-9CC0h]
  __int128 v73; // [rsp-8178h] [rbp-9CB8h]
  int v74; // [rsp-8168h] [rbp-9CA8h]
  __int64 v75; // [rsp-8164h] [rbp-9CA4h]
  int v76; // [rsp-815Ch] [rbp-9C9Ch]
  _BYTE v77[544]; // [rsp-8158h] [rbp-9C98h] BYREF
  const char *v78; // [rsp-7F38h] [rbp-9A78h]
  __int64 v79; // [rsp-7F30h] [rbp-9A70h]
  __int128 v80; // [rsp-7F28h] [rbp-9A68h]
  int v81; // [rsp-7F18h] [rbp-9A58h]
  __int64 v82; // [rsp-7F14h] [rbp-9A54h]
  int v83; // [rsp-7F0Ch] [rbp-9A4Ch]
  _BYTE v84[544]; // [rsp-7F08h] [rbp-9A48h] BYREF
  const char *v85; // [rsp-7CE8h] [rbp-9828h]
  __int64 v86; // [rsp-7CE0h] [rbp-9820h]
  __int128 v87; // [rsp-7CD8h] [rbp-9818h]
  int v88; // [rsp-7CC8h] [rbp-9808h]
  __int64 v89; // [rsp-7CC4h] [rbp-9804h]
  int v90; // [rsp-7CBCh] [rbp-97FCh]
  _BYTE v91[544]; // [rsp-7CB8h] [rbp-97F8h] BYREF
  const char *v92; // [rsp-7A98h] [rbp-95D8h]
  __int64 v93; // [rsp-7A90h] [rbp-95D0h]
  __int128 v94; // [rsp-7A88h] [rbp-95C8h]
  int v95; // [rsp-7A78h] [rbp-95B8h]
  __int64 v96; // [rsp-7A74h] [rbp-95B4h]
  int v97; // [rsp-7A6Ch] [rbp-95ACh]
  _BYTE v98[544]; // [rsp-7A68h] [rbp-95A8h] BYREF
  const char *v99; // [rsp-7848h] [rbp-9388h]
  __int64 v100; // [rsp-7840h] [rbp-9380h]
  __int128 v101; // [rsp-7838h] [rbp-9378h]
  int v102; // [rsp-7828h] [rbp-9368h]
  __int64 v103; // [rsp-7824h] [rbp-9364h]
  int v104; // [rsp-781Ch] [rbp-935Ch]
  _BYTE v105[544]; // [rsp-7818h] [rbp-9358h] BYREF
  const char *v106; // [rsp-75F8h] [rbp-9138h]
  __int64 v107; // [rsp-75F0h] [rbp-9130h]
  __int128 v108; // [rsp-75E8h] [rbp-9128h]
  int v109; // [rsp-75D8h] [rbp-9118h]
  __int64 v110; // [rsp-75D4h] [rbp-9114h]
  int v111; // [rsp-75CCh] [rbp-910Ch]
  _DWORD v112[178]; // [rsp-75C8h] [rbp-9108h] BYREF
  _BYTE v113[544]; // [rsp-7300h] [rbp-8E40h] BYREF
  const char *v114; // [rsp-70E0h] [rbp-8C20h]
  __int64 v115; // [rsp-70D8h] [rbp-8C18h]
  __int128 v116; // [rsp-70D0h] [rbp-8C10h]
  __int128 v117; // [rsp-70C0h] [rbp-8C00h]
  _BYTE v118[544]; // [rsp-70B0h] [rbp-8BF0h] BYREF
  const char *v119; // [rsp-6E90h] [rbp-89D0h]
  __int64 v120; // [rsp-6E88h] [rbp-89C8h]
  __int128 v121; // [rsp-6E80h] [rbp-89C0h]
  __int128 v122; // [rsp-6E70h] [rbp-89B0h]
  _BYTE v123[544]; // [rsp-6E60h] [rbp-89A0h] BYREF
  const char *v124; // [rsp-6C40h] [rbp-8780h]
  __int64 v125; // [rsp-6C38h] [rbp-8778h]
  __int128 v126; // [rsp-6C30h] [rbp-8770h]
  __int128 v127; // [rsp-6C20h] [rbp-8760h]
  _BYTE v128[544]; // [rsp-6C10h] [rbp-8750h] BYREF
  const char *v129; // [rsp-69F0h] [rbp-8530h]
  __int64 v130; // [rsp-69E8h] [rbp-8528h]
  __int128 v131; // [rsp-69E0h] [rbp-8520h]
  __int128 v132; // [rsp-69D0h] [rbp-8510h]
  _BYTE v133[712]; // [rsp-69C0h] [rbp-8500h] BYREF
  _BYTE v134[712]; // [rsp-66F8h] [rbp-8238h] BYREF
  _BYTE v135[712]; // [rsp-6430h] [rbp-7F70h] BYREF
  _BYTE v136[712]; // [rsp-6168h] [rbp-7CA8h] BYREF
  _BYTE v137[712]; // [rsp-5EA0h] [rbp-79E0h] BYREF
  _BYTE v138[712]; // [rsp-5BD8h] [rbp-7718h] BYREF
  _BYTE v139[712]; // [rsp-5910h] [rbp-7450h] BYREF
  _BYTE v140[712]; // [rsp-5648h] [rbp-7188h] BYREF
  _BYTE v141[712]; // [rsp-5380h] [rbp-6EC0h] BYREF
  _BYTE v142[712]; // [rsp-50B8h] [rbp-6BF8h] BYREF
  _BYTE v143[712]; // [rsp-4DF0h] [rbp-6930h] BYREF
  _BYTE v144[712]; // [rsp-4B28h] [rbp-6668h] BYREF
  _BYTE v145[712]; // [rsp-4860h] [rbp-63A0h] BYREF
  _BYTE v146[712]; // [rsp-4598h] [rbp-60D8h] BYREF
  _BYTE v147[712]; // [rsp-42D0h] [rbp-5E10h] BYREF
  _BYTE v148[712]; // [rsp-4008h] [rbp-5B48h] BYREF
  _BYTE v149[712]; // [rsp-3D40h] [rbp-5880h] BYREF
  _BYTE v150[712]; // [rsp-3A78h] [rbp-55B8h] BYREF
  _BYTE v151[712]; // [rsp-37B0h] [rbp-52F0h] BYREF
  _BYTE v152[576]; // [rsp-34E8h] [rbp-5028h] BYREF
  int v153; // [rsp-32A8h] [rbp-4DE8h]
  __int64 v154; // [rsp-32A4h] [rbp-4DE4h]
  int v155; // [rsp-329Ch] [rbp-4DDCh]
  _BYTE v156[592]; // [rsp-3298h] [rbp-4DD8h] BYREF
  _BYTE v157[592]; // [rsp-3048h] [rbp-4B88h] BYREF
  _BYTE v158[592]; // [rsp-2DF8h] [rbp-4938h] BYREF
  _BYTE v159[592]; // [rsp-2BA8h] [rbp-46E8h] BYREF
  _BYTE v160[592]; // [rsp-2958h] [rbp-4498h] BYREF
  _BYTE v161[592]; // [rsp-2708h] [rbp-4248h] BYREF
  _BYTE v162[592]; // [rsp-24B8h] [rbp-3FF8h] BYREF
  _BYTE v163[592]; // [rsp-2268h] [rbp-3DA8h] BYREF
  _BYTE v164[592]; // [rsp-2018h] [rbp-3B58h] BYREF
  _QWORD v165[89]; // [rsp-1DC8h] [rbp-3908h] BYREF
  _BYTE v166[592]; // [rsp-1B00h] [rbp-3640h] BYREF
  _BYTE v167[592]; // [rsp-18B0h] [rbp-33F0h] BYREF
  _BYTE v168[592]; // [rsp-1660h] [rbp-31A0h] BYREF
  _BYTE v169[592]; // [rsp-1410h] [rbp-2F50h] BYREF
  _BYTE v170[592]; // [rsp-11C0h] [rbp-2D00h] BYREF
  _BYTE v171[592]; // [rsp-F70h] [rbp-2AB0h] BYREF
  _BYTE v172[592]; // [rsp-D20h] [rbp-2860h] BYREF
  _BYTE v173[592]; // [rsp-AD0h] [rbp-2610h] BYREF
  _BYTE v174[592]; // [rsp-880h] [rbp-23C0h] BYREF
  _BYTE v175[592]; // [rsp-630h] [rbp-2170h] BYREF
  _BYTE v176[592]; // [rsp-3E0h] [rbp-1F20h] BYREF
  _QWORD v177[74]; // [rsp-190h] [rbp-1CD0h] BYREF
  _OWORD v178[37]; // [rsp+C0h] [rbp-1A80h] BYREF
  _QWORD v179[74]; // [rsp+310h] [rbp-1830h] BYREF
  _OWORD v180[37]; // [rsp+560h] [rbp-15E0h] BYREF
  _QWORD v181[74]; // [rsp+7B0h] [rbp-1390h] BYREF
  _QWORD v182[74]; // [rsp+A00h] [rbp-1140h] BYREF
  _QWORD v183[74]; // [rsp+C50h] [rbp-EF0h] BYREF
  _QWORD v184[74]; // [rsp+EA0h] [rbp-CA0h] BYREF
  _QWORD v185[74]; // [rsp+10F0h] [rbp-A50h] BYREF
  _QWORD v186[74]; // [rsp+1340h] [rbp-800h] BYREF
  _BYTE v187[504]; // [rsp+1590h] [rbp-5B0h] BYREF
  _OWORD v188[46]; // [rsp+1858h] [rbp-2E8h] BYREF

  do
    v16[41] = 0LL;
  while ( &v16[41] != (_QWORD *)&v63[-44776] );
  v1 = ((__int64 (__fastcall *)(void *, void *))once_cell::sync::OnceCell<T>::get_or_try_init)(
         &uucore::UTIL_NAME,
         &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  ((void (__fastcall *)(__int64, __int64, __int64, __int64))core::slice::raw::from_raw_parts::precondition_check)(
    v2,
    1LL,
    1LL,
    v3);
  ((void (__fastcall *)(_QWORD *, __int64, __int64))clap_builder::builder::command::Command::new::new_inner)(
    v165,
    v2,
    v3);
  v165[76] = a0027;
  v165[77] = 6LL;
  memcpy(v188, v165, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v187, v188);
  clap_builder::builder::command::Command::after_help(v15, v187);
  uucore::format_usage((unsigned int)&v9);
  v4 = v9;
  if ( v9 != 0x8000000000000000LL )
    *(_OWORD *)v11 = v10;
  if ( *(_QWORD *)&v15[116] != 0x8000000000000000LL )
  {
    ((void (__fastcall *)(_OWORD *, _DWORD *))alloc::raw_vec::RawVec<T,A>::current_memory)(v8, &v15[116]);
    if ( *((_QWORD *)&v8[0] + 1) )
      ((void (__fastcall *)(_DWORD *, _QWORD, _QWORD, _QWORD))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
        &v15[120],
        *(_QWORD *)&v8[0],
        *((_QWORD *)&v8[0] + 1),
        *(_QWORD *)&v8[1]);
  }
  *(_QWORD *)&v15[116] = v4;
  *(_OWORD *)&v15[118] = *(_OWORD *)v11;
  memcpy(v112, v15, 0x2BCuLL);
  *(_QWORD *)&v112[175] = *(_QWORD *)&v15[175] | 0x4008800040088LL;
  v112[177] = v15[177];
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = anon_7c75ec29d226220b36fc1f3bbd3b01ef_10_llvm_17389174869910011146;
  *((_QWORD *)&v8[33] + 1) = 5LL;
  memcpy(v113, v8, sizeof(v113));
  v116 = v8[35];
  v117 = v8[36];
  v114 = anon_7c75ec29d226220b36fc1f3bbd3b01ef_10_llvm_17389174869910011146;
  v115 = 5LL;
  clap_builder::builder::arg::Arg::help(v167, v113);
  memcpy(v8, v167, sizeof(v8));
  *(_QWORD *)v11 = aFirstPageLastP;
  *(_QWORD *)&v11[8] = 22LL;
  clap_builder::builder::arg::Arg::value_names(v166, v8);
  memcpy(v8, v166, sizeof(v8));
  ((void (__fastcall *)(_DWORD *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v112, v8);
  memcpy(v151, v112, sizeof(v151));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aHeader;
  *((_QWORD *)&v8[33] + 1) = 6LL;
  memcpy(v16, v8, 0x220uLL);
  v17 = v8[35];
  v19 = *(_QWORD *)((char *)&v8[36] + 4);
  v20 = HIDWORD(v8[36]);
  v16[68] = aHeader;
  v16[69] = 6LL;
  v18 = 104;
  clap_builder::builder::arg::Arg::help(v169, v16);
  memcpy(v8, v169, sizeof(v8));
  *(_QWORD *)v11 = aString;
  *(_QWORD *)&v11[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v168, v8);
  memcpy(v8, v168, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v151, v8);
  memcpy(v150, v151, sizeof(v150));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aDoubleSpace;
  *((_QWORD *)&v8[33] + 1) = 12LL;
  memcpy(v21, v8, sizeof(v21));
  v24 = v8[35];
  v26 = *(_QWORD *)((char *)&v8[36] + 4);
  v27 = HIDWORD(v8[36]);
  v22 = aDoubleSpace;
  v23 = 12LL;
  v25 = 100;
  clap_builder::builder::arg::Arg::help(v156, v21);
  v156[588] = 2;
  memcpy(v8, v156, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v150, v8);
  memcpy(v149, v150, sizeof(v149));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = anon_7c75ec29d226220b36fc1f3bbd3b01ef_18_llvm_17389174869910011146;
  *((_QWORD *)&v8[33] + 1) = 12LL;
  memcpy(v28, v8, sizeof(v28));
  v31 = v8[35];
  v33 = *(_QWORD *)((char *)&v8[36] + 4);
  v34 = HIDWORD(v8[36]);
  v29 = anon_7c75ec29d226220b36fc1f3bbd3b01ef_18_llvm_17389174869910011146;
  v30 = 12LL;
  v32 = 110;
  clap_builder::builder::arg::Arg::help(v157, v28);
  v157[584] |= 0x20u;
  memcpy(v8, v157, sizeof(v8));
  *(_QWORD *)v11 = aCharWidth;
  *(_QWORD *)&v11[8] = 13LL;
  clap_builder::builder::arg::Arg::value_names(v170, v8);
  memcpy(v8, v170, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v149, v8);
  memcpy(v148, v149, sizeof(v148));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aFirstLineNumbe;
  *((_QWORD *)&v8[33] + 1) = 17LL;
  memcpy(v35, v8, sizeof(v35));
  v38 = v8[35];
  v40 = *(_QWORD *)((char *)&v8[36] + 4);
  v41 = HIDWORD(v8[36]);
  v36 = aFirstLineNumbe;
  v37 = 17LL;
  v39 = 78;
  clap_builder::builder::arg::Arg::help(v172, v35);
  memcpy(v8, v172, sizeof(v8));
  *(_QWORD *)v11 = aNumber;
  *(_QWORD *)&v11[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v171, v8);
  memcpy(v8, v171, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v148, v8);
  memcpy(v147, v148, sizeof(v147));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aOmitHeader;
  *((_QWORD *)&v8[33] + 1) = 11LL;
  memcpy(v42, v8, sizeof(v42));
  v45 = v8[35];
  v47 = *(_QWORD *)((char *)&v8[36] + 4);
  v48 = HIDWORD(v8[36]);
  v43 = aOmitHeader;
  v44 = 11LL;
  v46 = 116;
  clap_builder::builder::arg::Arg::help(v158, v42);
  v158[588] = 2;
  memcpy(v8, v158, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v147, v8);
  memcpy(v146, v147, sizeof(v146));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aLength;
  *((_QWORD *)&v8[33] + 1) = 6LL;
  memcpy(v49, v8, sizeof(v49));
  v52 = v8[35];
  v54 = *(_QWORD *)((char *)&v8[36] + 4);
  v55 = HIDWORD(v8[36]);
  v50 = aLength;
  v51 = 6LL;
  v53 = 108;
  clap_builder::builder::arg::Arg::help(v174, v49);
  memcpy(v8, v174, sizeof(v8));
  *(_QWORD *)v11 = aPageLength;
  *(_QWORD *)&v11[8] = 11LL;
  clap_builder::builder::arg::Arg::value_names(v173, v8);
  memcpy(v8, v173, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v146, v8);
  memcpy(v145, v146, sizeof(v145));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aNoFileWarnings;
  *((_QWORD *)&v8[33] + 1) = 16LL;
  memcpy(v56, v8, sizeof(v56));
  v59 = v8[35];
  v61 = *(_QWORD *)((char *)&v8[36] + 4);
  v62 = HIDWORD(v8[36]);
  v57 = aNoFileWarnings;
  v58 = 16LL;
  v60 = 114;
  clap_builder::builder::arg::Arg::help(v159, v56);
  v159[588] = 2;
  memcpy(v8, v159, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v145, v8);
  memcpy(v144, v145, sizeof(v144));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aFormFeed;
  *((_QWORD *)&v8[33] + 1) = 9LL;
  memcpy(v13, v8, sizeof(v13));
  *(_QWORD *)((char *)&v14 + 4) = *(_QWORD *)((char *)&v8[36] + 4);
  HIDWORD(v14) = HIDWORD(v8[36]);
  LODWORD(v14) = 70;
  v5 = *(_QWORD *)&v13[21];
  if ( *(_QWORD *)&v13[21] == *(_QWORD *)&v13[20] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v13[20]);
  v6 = *((_QWORD *)&v13[20] + 1);
  *(_DWORD *)(*((_QWORD *)&v13[20] + 1) + 8 * v5) = 102;
  *(_BYTE *)(v6 + 8 * v5 + 4) = 0;
  *(_QWORD *)&v13[21] = v5 + 1;
  memcpy(v118, v13, sizeof(v118));
  v121 = v13[35];
  v122 = v14;
  v119 = aFormFeed;
  v120 = 9LL;
  clap_builder::builder::arg::Arg::help(v160, v118);
  v160[588] = 2;
  memcpy(v8, v160, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v144, v8);
  memcpy(v143, v144, sizeof(v143));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aWidth;
  *((_QWORD *)&v8[33] + 1) = 5LL;
  memcpy(v63, v8, sizeof(v63));
  v66 = v8[35];
  v68 = *(_QWORD *)((char *)&v8[36] + 4);
  v69 = HIDWORD(v8[36]);
  v64 = aWidth;
  v65 = 5LL;
  v67 = 119;
  clap_builder::builder::arg::Arg::help(v176, v63);
  memcpy(v8, v176, sizeof(v8));
  *(_QWORD *)v11 = aWidth;
  *(_QWORD *)&v11[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v175, v8);
  memcpy(v8, v175, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v143, v8);
  memcpy(v142, v143, sizeof(v142));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aPageWidth;
  *((_QWORD *)&v8[33] + 1) = 10LL;
  memcpy(v70, v8, sizeof(v70));
  v73 = v8[35];
  v75 = *(_QWORD *)((char *)&v8[36] + 4);
  v76 = HIDWORD(v8[36]);
  v71 = aPageWidth;
  v72 = 10LL;
  v74 = 87;
  clap_builder::builder::arg::Arg::help(v178, v70);
  memcpy(v8, v178, sizeof(v8));
  *(_QWORD *)v11 = aWidth;
  *(_QWORD *)&v11[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v177, v8);
  memcpy(v8, v177, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v142, v8);
  memcpy(v141, v142, sizeof(v141));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aAcross;
  *((_QWORD *)&v8[33] + 1) = 6LL;
  memcpy(v77, v8, sizeof(v77));
  v80 = v8[35];
  v82 = *(_QWORD *)((char *)&v8[36] + 4);
  v83 = HIDWORD(v8[36]);
  v78 = aAcross;
  v79 = 6LL;
  v81 = 97;
  clap_builder::builder::arg::Arg::help(v161, v77);
  v161[588] = 2;
  memcpy(v8, v161, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v141, v8);
  memcpy(v140, v141, sizeof(v140));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aColumn;
  *((_QWORD *)&v8[33] + 1) = 6LL;
  memcpy(v123, v8, sizeof(v123));
  v126 = v8[35];
  v127 = v8[36];
  v124 = aColumn;
  v125 = 6LL;
  clap_builder::builder::arg::Arg::help(v180, v123);
  memcpy(v8, v180, sizeof(v8));
  *(_QWORD *)v11 = aColumn;
  *(_QWORD *)&v11[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v179, v8);
  memcpy(v8, v179, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v140, v8);
  memcpy(v139, v140, sizeof(v139));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aSeparator;
  *((_QWORD *)&v8[33] + 1) = 9LL;
  memcpy(v84, v8, sizeof(v84));
  v87 = v8[35];
  v89 = *(_QWORD *)((char *)&v8[36] + 4);
  v90 = HIDWORD(v8[36]);
  v85 = aSeparator;
  v86 = 9LL;
  v88 = 115;
  clap_builder::builder::arg::Arg::help(v182, v84);
  memcpy(v8, v182, sizeof(v8));
  *(_QWORD *)v11 = aChar;
  *(_QWORD *)&v11[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v181, v8);
  memcpy(v8, v181, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v139, v8);
  memcpy(v138, v139, sizeof(v138));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aSepString;
  *((_QWORD *)&v8[33] + 1) = 10LL;
  memcpy(v91, v8, sizeof(v91));
  v94 = v8[35];
  v96 = *(_QWORD *)((char *)&v8[36] + 4);
  v97 = HIDWORD(v8[36]);
  v92 = aSepString;
  v93 = 10LL;
  v95 = 83;
  clap_builder::builder::arg::Arg::help(v184, v91);
  memcpy(v8, v184, sizeof(v8));
  *(_QWORD *)v11 = aString_0;
  *(_QWORD *)&v11[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v183, v8);
  memcpy(v8, v183, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v138, v8);
  memcpy(v137, v138, sizeof(v137));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aMerge_0;
  *((_QWORD *)&v8[33] + 1) = 5LL;
  memcpy(v98, v8, sizeof(v98));
  v101 = v8[35];
  v103 = *(_QWORD *)((char *)&v8[36] + 4);
  v104 = HIDWORD(v8[36]);
  v99 = aMerge_0;
  v100 = 5LL;
  v102 = 109;
  clap_builder::builder::arg::Arg::help(v162, v98);
  v162[588] = 2;
  memcpy(v8, v162, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v137, v8);
  memcpy(v136, v137, sizeof(v136));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aIndent;
  *((_QWORD *)&v8[33] + 1) = 6LL;
  memcpy(v105, v8, sizeof(v105));
  v108 = v8[35];
  v110 = *(_QWORD *)((char *)&v8[36] + 4);
  v111 = HIDWORD(v8[36]);
  v106 = aIndent;
  v107 = 6LL;
  v109 = 111;
  clap_builder::builder::arg::Arg::help(v186, v105);
  memcpy(v8, v186, sizeof(v8));
  *(_QWORD *)v11 = aMargin;
  *(_QWORD *)&v11[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v185, v8);
  memcpy(v8, v185, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v136, v8);
  memcpy(v135, v136, sizeof(v135));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = aJoinLines;
  *((_QWORD *)&v8[33] + 1) = 10LL;
  memcpy(v152, v8, sizeof(v152));
  v154 = *(_QWORD *)((char *)&v8[36] + 4);
  v155 = HIDWORD(v8[36]);
  v153 = 74;
  clap_builder::builder::arg::Arg::help(v163, v152);
  v163[588] = 2;
  memcpy(v8, v163, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v135, v8);
  memcpy(v134, v135, sizeof(v134));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v8);
  *(_QWORD *)&v8[33] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *((_QWORD *)&v8[33] + 1) = 4LL;
  memcpy(v128, v8, sizeof(v128));
  v131 = v8[35];
  v132 = v8[36];
  v129 = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  v130 = 4LL;
  clap_builder::builder::arg::Arg::help(v164, v128);
  v164[588] = 5;
  memcpy(v8, v164, sizeof(v8));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v134, v8);
  memcpy(v133, v134, sizeof(v133));
  ((void (__fastcall *)(_BYTE *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v11);
  *(_QWORD *)&v11[528] = aFiles_0;
  *(_QWORD *)&v11[536] = 5LL;
  memcpy(v8, v11, 0x24CuLL);
  WORD6(v8[36]) = 769;
  HIWORD(v8[36]) = v12;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v133, v8);
  memcpy(a1, v133, 0x2C8uLL);
  return a1;
}
