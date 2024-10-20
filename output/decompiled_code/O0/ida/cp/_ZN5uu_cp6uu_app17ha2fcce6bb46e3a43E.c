void *__fastcall uu_cp::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rbp
  __int64 v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // rbx
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r14
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rbx
  __int64 v56; // rbx
  __int64 v57; // rbx
  __int64 v58; // rbx
  __int64 v59; // rbx
  __int64 v60; // rbx
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rbx
  void *v65; // r15
  __int64 v66; // rbx
  __int64 v67; // rbx
  __int128 v69; // [rsp-E000h] [rbp-F358h] BYREF
  __int64 v70; // [rsp-DFF0h] [rbp-F348h]
  _OWORD v71[37]; // [rsp-DFE0h] [rbp-F338h] BYREF
  void *v72; // [rsp-DD88h] [rbp-F0E0h]
  _OWORD v73[35]; // [rsp-DD80h] [rbp-F0D8h] BYREF
  __int128 v74; // [rsp-DB50h] [rbp-EEA8h]
  __int128 v75; // [rsp-DB40h] [rbp-EE98h]
  _QWORD v76[4]; // [rsp-DB30h] [rbp-EE88h] BYREF
  __int128 v77; // [rsp-DB10h] [rbp-EE68h] BYREF
  __int64 v78; // [rsp-DB00h] [rbp-EE58h]
  __int128 v79; // [rsp-DAF0h] [rbp-EE48h] BYREF
  __int64 v80; // [rsp-DAE0h] [rbp-EE38h]
  __int128 v81; // [rsp-DAD0h] [rbp-EE28h] BYREF
  __int64 v82; // [rsp-DAC0h] [rbp-EE18h]
  __int128 v83; // [rsp-DAB0h] [rbp-EE08h] BYREF
  __int64 v84; // [rsp-DAA0h] [rbp-EDF8h]
  __int64 v85; // [rsp-DA90h] [rbp-EDE8h] BYREF
  __int128 v86; // [rsp-DA88h] [rbp-EDE0h]
  __int64 v87; // [rsp-DA78h] [rbp-EDD0h] BYREF
  __int128 v88; // [rsp-DA70h] [rbp-EDC8h]
  _BYTE v89[588]; // [rsp-DA60h] [rbp-EDB8h] BYREF
  int v90; // [rsp-D814h] [rbp-EB6Ch]
  _BYTE v91[588]; // [rsp-D810h] [rbp-EB68h] BYREF
  int v92; // [rsp-D5C4h] [rbp-E91Ch]
  _BYTE v93[588]; // [rsp-D5C0h] [rbp-E918h] BYREF
  int v94; // [rsp-D374h] [rbp-E6CCh]
  _BYTE v95[588]; // [rsp-D370h] [rbp-E6C8h] BYREF
  int v96; // [rsp-D124h] [rbp-E47Ch]
  _BYTE v97[588]; // [rsp-D120h] [rbp-E478h] BYREF
  int v98; // [rsp-CED4h] [rbp-E22Ch]
  _OWORD v99[37]; // [rsp-CED0h] [rbp-E228h] BYREF
  _BYTE v100[592]; // [rsp-CC80h] [rbp-DFD8h] BYREF
  _BYTE v101[592]; // [rsp-CA30h] [rbp-DD88h] BYREF
  _BYTE v102[592]; // [rsp-C7E0h] [rbp-DB38h] BYREF
  _OWORD v103[37]; // [rsp-C590h] [rbp-D8E8h] BYREF
  _OWORD v104[37]; // [rsp-C340h] [rbp-D698h] BYREF
  _OWORD v105[37]; // [rsp-C0F0h] [rbp-D448h] BYREF
  _OWORD v106[37]; // [rsp-BEA0h] [rbp-D1F8h] BYREF
  _OWORD v107[37]; // [rsp-BC50h] [rbp-CFA8h] BYREF
  _OWORD v108[37]; // [rsp-BA00h] [rbp-CD58h] BYREF
  _BYTE v109[588]; // [rsp-B7B0h] [rbp-CB08h] BYREF
  int v110; // [rsp-B564h] [rbp-C8BCh]
  _BYTE v111[588]; // [rsp-B560h] [rbp-C8B8h] BYREF
  int v112; // [rsp-B314h] [rbp-C66Ch]
  _OWORD v113[37]; // [rsp-B310h] [rbp-C668h] BYREF
  _OWORD v114[36]; // [rsp-B0B8h] [rbp-C410h] BYREF
  __int128 v115; // [rsp-AE78h] [rbp-C1D0h]
  _OWORD v116[36]; // [rsp-AE68h] [rbp-C1C0h] BYREF
  __int128 v117; // [rsp-AC28h] [rbp-BF80h]
  _OWORD v118[37]; // [rsp-AC18h] [rbp-BF70h] BYREF
  _OWORD v119[37]; // [rsp-A9C8h] [rbp-BD20h] BYREF
  _OWORD v120[37]; // [rsp-A778h] [rbp-BAD0h] BYREF
  _OWORD v121[37]; // [rsp-A528h] [rbp-B880h] BYREF
  _OWORD v122[37]; // [rsp-A2D8h] [rbp-B630h] BYREF
  _OWORD v123[37]; // [rsp-A088h] [rbp-B3E0h] BYREF
  _OWORD v124[37]; // [rsp-9E38h] [rbp-B190h] BYREF
  _OWORD v125[37]; // [rsp-9BE8h] [rbp-AF40h] BYREF
  _OWORD v126[37]; // [rsp-9998h] [rbp-ACF0h] BYREF
  _OWORD v127[37]; // [rsp-9748h] [rbp-AAA0h] BYREF
  _OWORD v128[37]; // [rsp-94F8h] [rbp-A850h] BYREF
  _OWORD v129[37]; // [rsp-92A8h] [rbp-A600h] BYREF
  _OWORD v130[37]; // [rsp-9058h] [rbp-A3B0h] BYREF
  _OWORD v131[37]; // [rsp-8E08h] [rbp-A160h] BYREF
  _OWORD v132[37]; // [rsp-8BB8h] [rbp-9F10h] BYREF
  _OWORD v133[37]; // [rsp-8968h] [rbp-9CC0h] BYREF
  _OWORD v134[37]; // [rsp-8718h] [rbp-9A70h] BYREF
  _OWORD v135[37]; // [rsp-84C8h] [rbp-9820h] BYREF
  _OWORD v136[37]; // [rsp-8278h] [rbp-95D0h] BYREF
  _OWORD v137[37]; // [rsp-8028h] [rbp-9380h] BYREF
  _OWORD v138[37]; // [rsp-7DD8h] [rbp-9130h] BYREF
  _QWORD v139[89]; // [rsp-7B88h] [rbp-8EE0h] BYREF
  _OWORD v140[37]; // [rsp-78C0h] [rbp-8C18h] BYREF
  _OWORD v141[37]; // [rsp-7670h] [rbp-89C8h] BYREF
  _OWORD v142[37]; // [rsp-7420h] [rbp-8778h] BYREF
  _OWORD v143[37]; // [rsp-71D0h] [rbp-8528h] BYREF
  _QWORD v144[74]; // [rsp-6F80h] [rbp-82D8h] BYREF
  _OWORD v145[37]; // [rsp-6D30h] [rbp-8088h] BYREF
  _QWORD v146[89]; // [rsp-6AE0h] [rbp-7E38h] BYREF
  _OWORD v147[37]; // [rsp-6818h] [rbp-7B70h] BYREF
  _QWORD v148[74]; // [rsp-65C8h] [rbp-7920h] BYREF
  _BYTE v149[584]; // [rsp-6378h] [rbp-76D0h] BYREF
  __int64 v150; // [rsp-6130h] [rbp-7488h]
  _DWORD v151[178]; // [rsp-6128h] [rbp-7480h] BYREF
  _BYTE v152[712]; // [rsp-5E60h] [rbp-71B8h] BYREF
  _BYTE v153[712]; // [rsp-5B98h] [rbp-6EF0h] BYREF
  _BYTE v154[712]; // [rsp-58D0h] [rbp-6C28h] BYREF
  _BYTE v155[712]; // [rsp-5608h] [rbp-6960h] BYREF
  _BYTE v156[712]; // [rsp-5340h] [rbp-6698h] BYREF
  _BYTE v157[712]; // [rsp-5078h] [rbp-63D0h] BYREF
  _BYTE v158[712]; // [rsp-4DB0h] [rbp-6108h] BYREF
  _BYTE v159[712]; // [rsp-4AE8h] [rbp-5E40h] BYREF
  _BYTE v160[712]; // [rsp-4820h] [rbp-5B78h] BYREF
  _BYTE v161[712]; // [rsp-4558h] [rbp-58B0h] BYREF
  _BYTE v162[712]; // [rsp-4290h] [rbp-55E8h] BYREF
  _BYTE v163[712]; // [rsp-3FC8h] [rbp-5320h] BYREF
  _BYTE v164[712]; // [rsp-3D00h] [rbp-5058h] BYREF
  _BYTE v165[712]; // [rsp-3A38h] [rbp-4D90h] BYREF
  _BYTE v166[712]; // [rsp-3770h] [rbp-4AC8h] BYREF
  _BYTE v167[712]; // [rsp-34A8h] [rbp-4800h] BYREF
  _BYTE v168[712]; // [rsp-31E0h] [rbp-4538h] BYREF
  _BYTE v169[712]; // [rsp-2F18h] [rbp-4270h] BYREF
  _BYTE v170[712]; // [rsp-2C50h] [rbp-3FA8h] BYREF
  _BYTE v171[712]; // [rsp-2988h] [rbp-3CE0h] BYREF
  _BYTE v172[712]; // [rsp-26C0h] [rbp-3A18h] BYREF
  _BYTE v173[712]; // [rsp-23F8h] [rbp-3750h] BYREF
  _BYTE v174[712]; // [rsp-2130h] [rbp-3488h] BYREF
  _BYTE v175[712]; // [rsp-1E68h] [rbp-31C0h] BYREF
  _BYTE v176[712]; // [rsp-1BA0h] [rbp-2EF8h] BYREF
  _BYTE v177[712]; // [rsp-18D8h] [rbp-2C30h] BYREF
  _BYTE v178[712]; // [rsp-1610h] [rbp-2968h] BYREF
  _BYTE v179[712]; // [rsp-1348h] [rbp-26A0h] BYREF
  _BYTE v180[712]; // [rsp-1080h] [rbp-23D8h] BYREF
  _BYTE v181[712]; // [rsp-DB8h] [rbp-2110h] BYREF
  _BYTE v182[712]; // [rsp-AF0h] [rbp-1E48h] BYREF
  _BYTE v183[712]; // [rsp-828h] [rbp-1B80h] BYREF
  _BYTE v184[712]; // [rsp-560h] [rbp-18B8h] BYREF
  _BYTE v185[592]; // [rsp-298h] [rbp-15F0h] BYREF
  _QWORD v186[89]; // [rsp-48h] [rbp-13A0h] BYREF
  _OWORD v187[37]; // [rsp+280h] [rbp-10D8h] BYREF
  _OWORD v188[37]; // [rsp+4D0h] [rbp-E88h] BYREF
  _OWORD v189[37]; // [rsp+720h] [rbp-C38h] BYREF
  _OWORD v190[37]; // [rsp+970h] [rbp-9E8h] BYREF
  _OWORD v191[37]; // [rsp+BC0h] [rbp-798h] BYREF
  _OWORD v192[37]; // [rsp+E10h] [rbp-548h] BYREF
  _OWORD v193[47]; // [rsp+1060h] [rbp-2F8h] BYREF

  do
    *((_QWORD *)&v73[10] + 1) = 0LL;
  while ( (char *)&v73[10] + 8 != (char *)&v99[-3809] + 8 );
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
    v186,
    v2,
    v3);
  v186[76] = a0027;
  v186[77] = 6LL;
  memcpy(v193, v186, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v146, v193);
  uucore::format_usage((unsigned int)&v85);
  v4 = v85;
  if ( v85 != 0x8000000000000000LL )
    v71[0] = v86;
  if ( v146[58] != 0x8000000000000000LL )
    ((void (__fastcall *)(_QWORD *, const char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(
      &v146[58],
      aOptionTSourceD);
  v146[58] = v4;
  *(_OWORD *)&v146[59] = v71[0];
  memcpy(v139, v146, sizeof(v139));
  v76[0] = &off_181C90;
  v76[1] = <&T as core::fmt::Display>::fmt;
  v76[2] = &off_181C80;
  v76[3] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v71[0] = &unk_181C60;
  *((_QWORD *)&v71[0] + 1) = 2LL;
  *(_QWORD *)&v71[1] = v76;
  *((_QWORD *)&v71[1] + 1) = 2LL;
  *(_QWORD *)&v71[2] = 0LL;
  ((void (__fastcall *)(__int64 *, _OWORD *))alloc::fmt::format::format_inner)(&v87, v71);
  v5 = v87;
  if ( v87 != 0x8000000000000000LL )
    v71[0] = v88;
  if ( v139[52] != 0x8000000000000000LL )
    ((void (__fastcall *)(_QWORD *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v139[52]);
  v139[52] = v5;
  *(_OWORD *)&v139[53] = v71[0];
  memcpy(v151, v139, 0x2BCuLL);
  *(_QWORD *)&v151[175] = *(_QWORD *)((char *)&v139[87] + 4) | 0x8800000088LL;
  v151[177] = HIDWORD(v139[88]);
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aTargetDirector;
  *((_QWORD *)&v71[33] + 1) = 16LL;
  memcpy(v114, v71, sizeof(v114));
  *(_QWORD *)((char *)&v115 + 4) = *(_QWORD *)((char *)&v71[36] + 4);
  HIDWORD(v115) = HIDWORD(v71[36]);
  LODWORD(v115) = 116;
  v6 = *((_QWORD *)&v114[7] + 1);
  if ( *((_QWORD *)&v114[7] + 1) == *((_QWORD *)&v114[6] + 1) )
    ((void (__fastcall *)(char *))alloc::raw_vec::RawVec<T,A>::grow_one)((char *)&v114[6] + 8);
  v7 = *(_QWORD *)&v114[7];
  v8 = 16 * v6;
  *(_QWORD *)(*(_QWORD *)&v114[7] + v8) = aNoTargetDirect;
  *(_QWORD *)(v7 + v8 + 8) = 19LL;
  *((_QWORD *)&v114[7] + 1) = v6 + 1;
  memcpy(v71, v114, 0x220uLL);
  v71[35] = v114[35];
  v71[36] = v115;
  *(_QWORD *)&v71[34] = aTargetDirector;
  *((_QWORD *)&v71[34] + 1) = 16LL;
  *(_QWORD *)&v73[0] = aTargetDirector;
  *((_QWORD *)&v73[0] + 1) = 16LL;
  clap_builder::builder::arg::Arg::value_names(v185, v71);
  v185[589] = 4;
  memcpy(v148, v185, sizeof(v148));
  if ( v148[10] >= 4uLL && v148[10] != 5LL )
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)(&v148[11]);
  v148[10] = 3LL;
  memcpy(v140, v148, sizeof(v140));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aCopyAllSourceA, 47LL);
  v9 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v140[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v140[27] + 8);
  *((_QWORD *)&v140[27] + 1) = v9;
  v140[28] = v69;
  memcpy(v71, v140, sizeof(v71));
  ((void (__fastcall *)(_DWORD *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v151, v71);
  memcpy(v184, v151, sizeof(v184));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aNoTargetDirect;
  *((_QWORD *)&v71[33] + 1) = 19LL;
  memcpy(v104, v71, 0x220uLL);
  v104[35] = v71[35];
  *(_QWORD *)((char *)&v104[36] + 4) = *(_QWORD *)((char *)&v71[36] + 4);
  HIDWORD(v104[36]) = HIDWORD(v71[36]);
  *(_QWORD *)&v104[34] = aNoTargetDirect;
  *((_QWORD *)&v104[34] + 1) = 19LL;
  LODWORD(v104[36]) = 84;
  v10 = *((_QWORD *)&v104[7] + 1);
  if ( *((_QWORD *)&v104[7] + 1) == *((_QWORD *)&v104[6] + 1) )
    ((void (__fastcall *)(char *))alloc::raw_vec::RawVec<T,A>::grow_one)((char *)&v104[6] + 8);
  v11 = *(_QWORD *)&v104[7];
  v12 = 16 * v10;
  *(_QWORD *)(*(_QWORD *)&v104[7] + v12) = aTargetDirector;
  *(_QWORD *)(v11 + v12 + 8) = 16LL;
  *((_QWORD *)&v104[7] + 1) = v10 + 1;
  memcpy(v123, v104, sizeof(v123));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aTreatDestAsARe, 48LL);
  v13 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v123[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v123[27] + 8);
  *((_QWORD *)&v123[27] + 1) = v13;
  v123[28] = v69;
  memcpy(v71, v123, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v123[36] + 13);
  HIBYTE(v71[36]) = HIBYTE(v123[36]);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v184, v71);
  memcpy(v183, v184, sizeof(v183));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aInteractive;
  *((_QWORD *)&v71[33] + 1) = 11LL;
  memcpy(v105, v71, 0x220uLL);
  v105[35] = v71[35];
  *(_QWORD *)((char *)&v105[36] + 4) = *(_QWORD *)((char *)&v71[36] + 4);
  HIDWORD(v105[36]) = HIDWORD(v71[36]);
  *(_QWORD *)&v105[34] = aInteractive;
  *((_QWORD *)&v105[34] + 1) = 11LL;
  LODWORD(v105[36]) = 105;
  v14 = *(_QWORD *)&v105[9];
  if ( *(_QWORD *)&v105[9] == *(_QWORD *)&v105[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v105[8]);
  v15 = *((_QWORD *)&v105[8] + 1);
  v16 = 16 * v14;
  *(_QWORD *)(*((_QWORD *)&v105[8] + 1) + v16) = aNoClobber;
  *(_QWORD *)(v15 + v16 + 8) = 10LL;
  *(_QWORD *)&v105[9] = v14 + 1;
  memcpy(v124, v105, sizeof(v124));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aAskBeforeOverw, 28LL);
  v17 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v124[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v124[27] + 8);
  *((_QWORD *)&v124[27] + 1) = v17;
  v124[28] = v69;
  memcpy(v71, v124, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v124[36] + 13);
  HIBYTE(v71[36]) = HIBYTE(v124[36]);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v183, v71);
  memcpy(v182, v183, sizeof(v182));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = &unk_210E0;
  *((_QWORD *)&v71[33] + 1) = 4LL;
  memcpy(v136, v71, 0x220uLL);
  v136[35] = v71[35];
  *(_QWORD *)((char *)&v136[36] + 4) = *(_QWORD *)((char *)&v71[36] + 4);
  HIDWORD(v136[36]) = HIDWORD(v71[36]);
  *(_QWORD *)&v136[34] = &unk_210E0;
  *((_QWORD *)&v136[34] + 1) = 4LL;
  LODWORD(v136[36]) = 108;
  ((void (__fastcall *)(_OWORD *, _UNKNOWN **, char **))alloc::vec::Vec<T,A>::extend_trusted)(
    &v136[8],
    &off_181CA0,
    &off_181CF0);
  memcpy(v125, v136, sizeof(v125));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aHardLinkFilesI, 34LL);
  v18 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v125[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v125[27] + 8);
  *((_QWORD *)&v125[27] + 1) = v18;
  v125[28] = v69;
  memcpy(v71, v125, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v125[36] + 13);
  HIBYTE(v71[36]) = HIBYTE(v125[36]);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v182, v71);
  memcpy(v181, v182, sizeof(v181));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aNoClobber;
  *((_QWORD *)&v71[33] + 1) = 10LL;
  memcpy(v106, v71, 0x220uLL);
  v106[35] = v71[35];
  *(_QWORD *)((char *)&v106[36] + 4) = *(_QWORD *)((char *)&v71[36] + 4);
  HIDWORD(v106[36]) = HIDWORD(v71[36]);
  *(_QWORD *)&v106[34] = aNoClobber;
  *((_QWORD *)&v106[34] + 1) = 10LL;
  LODWORD(v106[36]) = 110;
  v19 = *(_QWORD *)&v106[9];
  if ( *(_QWORD *)&v106[9] == *(_QWORD *)&v106[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v106[8]);
  v20 = *((_QWORD *)&v106[8] + 1);
  v21 = 16 * v19;
  *(_QWORD *)(*((_QWORD *)&v106[8] + 1) + v21) = aInteractive;
  *(_QWORD *)(v20 + v21 + 8) = 11LL;
  *(_QWORD *)&v106[9] = v19 + 1;
  memcpy(v126, v106, sizeof(v126));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aDonTOverwriteA, 42LL);
  v22 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v126[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v126[27] + 8);
  *((_QWORD *)&v126[27] + 1) = v22;
  v126[28] = v69;
  memcpy(v71, v126, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v126[36] + 13);
  HIBYTE(v71[36]) = HIBYTE(v126[36]);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v181, v71);
  memcpy(v180, v181, sizeof(v180));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aRecursive;
  *((_QWORD *)&v71[33] + 1) = 9LL;
  memcpy(v116, v71, sizeof(v116));
  *(_QWORD *)((char *)&v117 + 4) = *(_QWORD *)((char *)&v71[36] + 4);
  HIDWORD(v117) = HIDWORD(v71[36]);
  LODWORD(v117) = 82;
  v23 = *(_QWORD *)&v116[21];
  if ( *(_QWORD *)&v116[21] == *(_QWORD *)&v116[20] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v116[20]);
  v24 = *((_QWORD *)&v116[20] + 1);
  *(_DWORD *)(*((_QWORD *)&v116[20] + 1) + 8 * v23) = 114;
  *(_BYTE *)(v24 + 8 * v23 + 4) = 1;
  *(_QWORD *)&v116[21] = v23 + 1;
  memcpy(v100, v116, 0x220uLL);
  *(_OWORD *)&v100[560] = v116[35];
  *(_OWORD *)&v100[576] = v117;
  *(_QWORD *)&v100[544] = aRecursive;
  *(_QWORD *)&v100[552] = 9LL;
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aCopyDirectorie, 28LL);
  v25 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *(_QWORD *)&v100[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v100[440]);
  *(_QWORD *)&v100[440] = v25;
  *(_OWORD *)&v100[448] = v69;
  memcpy(v71, v100, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)&v100[589];
  HIBYTE(v71[36]) = v100[591];
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v180, v71);
  memcpy(v179, v180, sizeof(v179));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aStripTrailingS;
  *((_QWORD *)&v71[33] + 1) = 22LL;
  memcpy(v101, v71, 0x220uLL);
  *(_OWORD *)&v101[560] = v71[35];
  *(_OWORD *)&v101[576] = v71[36];
  *(_QWORD *)&v101[544] = aStripTrailingS;
  *(_QWORD *)&v101[552] = 22LL;
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aRemoveAnyTrail, 53LL);
  v26 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *(_QWORD *)&v101[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v101[440]);
  *(_QWORD *)&v101[440] = v26;
  *(_OWORD *)&v101[448] = v69;
  memcpy(v71, v101, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)&v101[589];
  HIBYTE(v71[36]) = v101[591];
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v179, v71);
  memcpy(v178, v179, sizeof(v178));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aDebug;
  *((_QWORD *)&v71[33] + 1) = 5LL;
  memcpy(v102, v71, 0x220uLL);
  *(_OWORD *)&v102[560] = v71[35];
  *(_OWORD *)&v102[576] = v71[36];
  *(_QWORD *)&v102[544] = aDebug;
  *(_QWORD *)&v102[552] = 5LL;
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aExplainHowAFil, 40LL);
  v27 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *(_QWORD *)&v102[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v102[440]);
  *(_QWORD *)&v102[440] = v27;
  *(_OWORD *)&v102[448] = v69;
  memcpy(v71, v102, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)&v102[589];
  HIBYTE(v71[36]) = v102[591];
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v178, v71);
  memcpy(v177, v178, sizeof(v177));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aVerbose;
  *((_QWORD *)&v71[33] + 1) = 7LL;
  memcpy(v89, v71, 0x220uLL);
  *(_OWORD *)&v89[560] = v71[35];
  *(_QWORD *)&v89[580] = *(_QWORD *)((char *)&v71[36] + 4);
  v90 = HIDWORD(v71[36]);
  *(_QWORD *)&v89[544] = aVerbose;
  *(_QWORD *)&v89[552] = 7LL;
  *(_DWORD *)&v89[576] = 118;
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aExplicitlyStat, 35LL);
  v28 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *(_QWORD *)&v89[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v89[440]);
  *(_QWORD *)&v89[440] = v28;
  *(_OWORD *)&v89[448] = v69;
  memcpy(v71, v89, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v90 + 1);
  HIBYTE(v71[36]) = HIBYTE(v90);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v177, v71);
  memcpy(v176, v177, sizeof(v176));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aSymbolicLink;
  *((_QWORD *)&v71[33] + 1) = 13LL;
  memcpy(v137, v71, 0x220uLL);
  v137[35] = v71[35];
  *(_QWORD *)((char *)&v137[36] + 4) = *(_QWORD *)((char *)&v71[36] + 4);
  HIDWORD(v137[36]) = HIDWORD(v71[36]);
  *(_QWORD *)&v137[34] = aSymbolicLink;
  *((_QWORD *)&v137[34] + 1) = 13LL;
  LODWORD(v137[36]) = 115;
  ((void (__fastcall *)(_OWORD *, _UNKNOWN **, char **))alloc::vec::Vec<T,A>::extend_trusted)(
    &v137[8],
    &off_181CA0,
    &off_181CF0);
  memcpy(v127, v137, sizeof(v127));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aMakeSymbolicLi, 38LL);
  v29 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v127[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v127[27] + 8);
  *((_QWORD *)&v127[27] + 1) = v29;
  v127[28] = v69;
  memcpy(v71, v127, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v127[36] + 13);
  HIBYTE(v71[36]) = HIBYTE(v127[36]);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v176, v71);
  memcpy(v175, v176, sizeof(v175));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aForce;
  *((_QWORD *)&v71[33] + 1) = 5LL;
  memcpy(v91, v71, 0x220uLL);
  *(_OWORD *)&v91[560] = v71[35];
  *(_QWORD *)&v91[580] = *(_QWORD *)((char *)&v71[36] + 4);
  v92 = HIDWORD(v71[36]);
  *(_QWORD *)&v91[544] = aForce;
  *(_QWORD *)&v91[552] = 5LL;
  *(_DWORD *)&v91[576] = 102;
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aIfAnExistingDe, 170LL);
  v30 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *(_QWORD *)&v91[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v91[440]);
  *(_QWORD *)&v91[440] = v30;
  *(_OWORD *)&v91[448] = v69;
  memcpy(v71, v91, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v92 + 1);
  HIBYTE(v71[36]) = HIBYTE(v92);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v175, v71);
  memcpy(v174, v175, sizeof(v174));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aRemoveDestinat;
  *((_QWORD *)&v71[33] + 1) = 18LL;
  memcpy(v118, v71, 0x220uLL);
  v118[35] = v71[35];
  v118[36] = v71[36];
  *(_QWORD *)&v118[34] = aRemoveDestinat;
  *((_QWORD *)&v118[34] + 1) = 18LL;
  v31 = *(_QWORD *)&v118[9];
  if ( *(_QWORD *)&v118[9] == *(_QWORD *)&v118[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v118[8]);
  v32 = *((_QWORD *)&v118[8] + 1);
  v33 = 16 * v31;
  *(_QWORD *)(*((_QWORD *)&v118[8] + 1) + v33) = aForce;
  *(_QWORD *)(v32 + v33 + 8) = 5LL;
  *(_QWORD *)&v118[9] = v31 + 1;
  memcpy(v128, v118, sizeof(v128));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aRemoveEachExis, 145LL);
  v34 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v128[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v128[27] + 8);
  *((_QWORD *)&v128[27] + 1) = v34;
  v128[28] = v69;
  memcpy(v71, v128, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v128[36] + 13);
  HIBYTE(v71[36]) = HIBYTE(v128[36]);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v174, v71);
  memcpy(v173, v174, sizeof(v173));
  uucore::features::backup_control::arguments::backup(v187);
  memcpy(v71, v187, sizeof(v71));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v173, v71);
  memcpy(v172, v173, sizeof(v172));
  uucore::features::backup_control::arguments::backup_no_args(v188);
  memcpy(v71, v188, sizeof(v71));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v172, v71);
  memcpy(v171, v172, sizeof(v171));
  uucore::features::backup_control::arguments::suffix(v189);
  memcpy(v71, v189, sizeof(v71));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v171, v71);
  memcpy(v170, v171, sizeof(v170));
  uucore::features::update_control::arguments::update(v190);
  memcpy(v71, v190, sizeof(v71));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v170, v71);
  memcpy(v169, v170, sizeof(v169));
  uucore::features::update_control::arguments::update_no_args(v191);
  memcpy(v71, v191, sizeof(v71));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v169, v71);
  memcpy(v168, v169, sizeof(v168));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v73);
  *(_QWORD *)&v73[33] = aReflink_0;
  *((_QWORD *)&v73[33] + 1) = 7LL;
  memcpy(v71, v73, 0x220uLL);
  v71[35] = v74;
  v71[36] = v75;
  *(_QWORD *)&v71[34] = aReflink_0;
  *((_QWORD *)&v71[34] + 1) = 7LL;
  *(_QWORD *)&v73[0] = aWhen;
  *((_QWORD *)&v73[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v149, v71);
  ((void (__fastcall *)(_BYTE *, _UNKNOWN **, char **))alloc::vec::Vec<T,A>::extend_trusted)(
    &v149[128],
    &off_181CA0,
    &off_181CF0);
  memcpy(v71, v149, 0x248uLL);
  *((_QWORD *)&v71[36] + 1) = v150 | 0x80;
  *(_QWORD *)&v73[0] = aAlways;
  *((_QWORD *)&v73[0] + 1) = 6LL;
  *(_QWORD *)&v73[1] = 0LL;
  *((_QWORD *)&v73[1] + 1) = 1LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v69,
    v73);
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::raw_vec::RawVec<T,A>::current_memory)(v73, &v71[26]);
  if ( *((_QWORD *)&v73[0] + 1) )
    ((void (__fastcall *)(_OWORD *, _QWORD, _QWORD, _QWORD))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
      &v71[27],
      *(_QWORD *)&v73[0],
      *((_QWORD *)&v73[0] + 1),
      *(_QWORD *)&v73[1]);
  *(_QWORD *)&v71[27] = v70;
  v71[26] = v69;
  memcpy(v138, v71, sizeof(v138));
  *(_QWORD *)&v71[0] = "auto";
  *((_QWORD *)&v71[0] + 1) = 4LL;
  *(_QWORD *)&v71[1] = aAlways;
  *((_QWORD *)&v71[1] + 1) = 6LL;
  *(_QWORD *)&v71[2] = aNever;
  *((_QWORD *)&v71[2] + 1) = 5LL;
  *(_QWORD *)&v71[3] = 0LL;
  *((_QWORD *)&v71[3] + 1) = 3LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v73,
    v71);
  v72 = a1;
  v77 = v73[0];
  v78 = *(_QWORD *)&v73[1];
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v71, &v77);
  v35 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 5LL )
    v71[0] = v73[0];
  if ( *(_QWORD *)&v138[5] >= 4uLL && *(_QWORD *)&v138[5] != 5LL )
    ((void (__fastcall *)(char *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)((char *)&v138[5] + 8);
  *(_QWORD *)&v138[5] = v35;
  *(_OWORD *)((char *)&v138[5] + 8) = v71[0];
  v113[0] = v138[0];
  memcpy((char *)&v113[2] + 8, (char *)&v138[2] + 8, 0x228uLL);
  v113[1] = 1uLL;
  *(_QWORD *)&v113[2] = 1LL;
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aControlCloneCo, 35LL);
  v36 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v113[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v113[27] + 8);
  *((_QWORD *)&v113[27] + 1) = v36;
  v113[28] = v69;
  memcpy(v71, v113, sizeof(v71));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v168, v71);
  memcpy(v167, v168, sizeof(v167));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aAttributesOnly;
  *((_QWORD *)&v71[33] + 1) = 15LL;
  memcpy(v147, v71, 0x220uLL);
  v147[35] = v71[35];
  v147[36] = v71[36];
  *(_QWORD *)&v147[34] = aAttributesOnly;
  *((_QWORD *)&v147[34] + 1) = 15LL;
  ((void (__fastcall *)(_OWORD *, _UNKNOWN **, char **))alloc::vec::Vec<T,A>::extend_trusted)(
    &v147[8],
    &off_181CA0,
    &off_181CF0);
  memcpy(v129, v147, sizeof(v129));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aDonTCopyTheFil, 45LL);
  v37 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v129[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v129[27] + 8);
  *((_QWORD *)&v129[27] + 1) = v37;
  v129[28] = v69;
  memcpy(v71, v129, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v129[36] + 13);
  HIBYTE(v71[36]) = HIBYTE(v129[36]);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v167, v71);
  memcpy(v166, v167, sizeof(v166));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aPreserve;
  *((_QWORD *)&v71[33] + 1) = 8LL;
  memcpy(v130, v71, 0x220uLL);
  v130[35] = v71[35];
  *(_OWORD *)((char *)&v130[35] + 12) = *(_OWORD *)((char *)&v71[35] + 12);
  *(_WORD *)((char *)&v130[36] + 13) = *(_WORD *)((char *)&v71[36] + 13);
  HIBYTE(v130[36]) = HIBYTE(v71[36]);
  *(_QWORD *)&v130[34] = aPreserve;
  *((_QWORD *)&v130[34] + 1) = 8LL;
  BYTE12(v130[36]) = 1;
  ((void (__fastcall *)(char *, __int64))core::option::Option<T>::get_or_insert)((char *)&v130[36] + 4, 44LL);
  memcpy(v119, v130, sizeof(v119));
  ((void (__fastcall *)(_OWORD *, char **, void *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v71,
    &off_181BF0,
    &unk_181C60);
  v80 = *(_QWORD *)&v71[1];
  v79 = v71[0];
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v71, &v79);
  v38 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 5LL )
    v69 = v73[0];
  if ( *(_QWORD *)&v119[5] >= 4uLL && *(_QWORD *)&v119[5] != 5LL )
    ((void (__fastcall *)(char *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)((char *)&v119[5] + 8);
  *(_QWORD *)&v119[5] = v38;
  *(_OWORD *)((char *)&v119[5] + 8) = v69;
  v71[0] = v119[0];
  memcpy((char *)&v71[2] + 8, (char *)&v119[2] + 8, 0x220uLL);
  v71[1] = 1uLL;
  *(_QWORD *)&v71[2] = -1LL;
  *((_QWORD *)&v71[36] + 1) = *((_QWORD *)&v119[36] + 1) | 0x80LL;
  *(_QWORD *)&v73[0] = aAttrList;
  *((_QWORD *)&v73[0] + 1) = 9LL;
  clap_builder::builder::arg::Arg::value_names(v192, v71);
  memcpy(v71, v192, sizeof(v71));
  *(_QWORD *)&v73[0] = aModeOwnershipT;
  *((_QWORD *)&v73[0] + 1) = 24LL;
  *(_QWORD *)&v73[1] = 0LL;
  *((_QWORD *)&v73[1] + 1) = 1LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v69,
    v73);
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::raw_vec::RawVec<T,A>::current_memory)(v73, &v71[26]);
  if ( *((_QWORD *)&v73[0] + 1) )
    ((void (__fastcall *)(_OWORD *, _QWORD, _QWORD, _QWORD))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
      &v71[27],
      *(_QWORD *)&v73[0],
      *((_QWORD *)&v73[0] + 1),
      *(_QWORD *)&v73[1]);
  *(_QWORD *)&v71[27] = v70;
  v71[26] = v69;
  memcpy(v141, v71, sizeof(v141));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aPreserveTheSpe, 147LL);
  v39 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v141[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v141[27] + 8);
  *((_QWORD *)&v141[27] + 1) = v39;
  v141[28] = v69;
  memcpy(v71, v141, sizeof(v71));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v166, v71);
  memcpy(v165, v166, sizeof(v165));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aPreserveDefaul;
  *((_QWORD *)&v71[33] + 1) = 27LL;
  memcpy(v93, v71, 0x220uLL);
  *(_OWORD *)&v93[560] = v71[35];
  *(_QWORD *)&v93[580] = *(_QWORD *)((char *)&v71[36] + 4);
  v94 = HIDWORD(v71[36]);
  *(_QWORD *)&v93[544] = aPreserveDefaul;
  *(_QWORD *)&v93[552] = 27LL;
  *(_DWORD *)&v93[576] = 112;
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aSameAsPreserve, 55LL);
  v40 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *(_QWORD *)&v93[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v93[440]);
  *(_QWORD *)&v93[440] = v40;
  *(_OWORD *)&v93[448] = v69;
  memcpy(v71, v93, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v94 + 1);
  HIBYTE(v71[36]) = HIBYTE(v94);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v165, v71);
  memcpy(v164, v165, sizeof(v164));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aNoPreserve;
  *((_QWORD *)&v71[33] + 1) = 11LL;
  memcpy(v131, v71, 0x220uLL);
  v131[35] = v71[35];
  *(_OWORD *)((char *)&v131[35] + 12) = *(_OWORD *)((char *)&v71[35] + 12);
  *(_WORD *)((char *)&v131[36] + 13) = *(_WORD *)((char *)&v71[36] + 13);
  HIBYTE(v131[36]) = HIBYTE(v71[36]);
  *(_QWORD *)&v131[34] = aNoPreserve;
  *((_QWORD *)&v131[34] + 1) = 11LL;
  BYTE12(v131[36]) = 1;
  ((void (__fastcall *)(char *, __int64))core::option::Option<T>::get_or_insert)((char *)&v131[36] + 4, 44LL);
  memcpy(v120, v131, sizeof(v120));
  ((void (__fastcall *)(_OWORD *, char **, void *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v71,
    &off_181BF0,
    &unk_181C60);
  v82 = *(_QWORD *)&v71[1];
  v81 = v71[0];
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v71, &v81);
  v41 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 5LL )
    v69 = v73[0];
  if ( *(_QWORD *)&v120[5] >= 4uLL && *(_QWORD *)&v120[5] != 5LL )
    ((void (__fastcall *)(char *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)((char *)&v120[5] + 8);
  *(_QWORD *)&v120[5] = v41;
  *(_OWORD *)((char *)&v120[5] + 8) = v69;
  v71[0] = v120[0];
  memcpy((char *)&v71[2] + 8, (char *)&v120[2] + 8, 0x220uLL);
  v71[1] = 1uLL;
  *(_QWORD *)&v71[2] = -1LL;
  *((_QWORD *)&v71[36] + 1) = *((_QWORD *)&v120[36] + 1) | 0x80LL;
  *(_QWORD *)&v73[0] = aAttrList;
  *((_QWORD *)&v73[0] + 1) = 9LL;
  clap_builder::builder::arg::Arg::value_names(v142, v71);
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aDonTPreserveTh, 39LL);
  v42 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v142[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v142[27] + 8);
  *((_QWORD *)&v142[27] + 1) = v42;
  v142[28] = v69;
  memcpy(v71, v142, sizeof(v71));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v164, v71);
  memcpy(v163, v164, sizeof(v163));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aParents;
  *((_QWORD *)&v71[33] + 1) = 7LL;
  memcpy(v121, v71, 0x220uLL);
  v121[35] = v71[35];
  v121[36] = v71[36];
  *(_QWORD *)&v121[34] = aParents;
  *((_QWORD *)&v121[34] + 1) = 7LL;
  v43 = *((_QWORD *)&v121[19] + 1);
  if ( *((_QWORD *)&v121[19] + 1) == *((_QWORD *)&v121[18] + 1) )
    ((void (__fastcall *)(char *))alloc::raw_vec::RawVec<T,A>::grow_one)((char *)&v121[18] + 8);
  v44 = *(_QWORD *)&v121[19];
  v45 = 3 * v43;
  *(_QWORD *)(*(_QWORD *)&v121[19] + 8 * v45) = &unk_2E76B;
  *(_QWORD *)(v44 + 8 * v45 + 8) = 6LL;
  *(_BYTE *)(v44 + 8 * v45 + 16) = 0;
  *((_QWORD *)&v121[19] + 1) = v43 + 1;
  memcpy(v132, v121, sizeof(v132));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aUseFullSourceF, 41LL);
  v46 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v132[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v132[27] + 8);
  *((_QWORD *)&v132[27] + 1) = v46;
  v132[28] = v69;
  memcpy(v71, v132, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v132[36] + 13);
  HIBYTE(v71[36]) = HIBYTE(v132[36]);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v163, v71);
  memcpy(v162, v163, sizeof(v162));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aNoDereference;
  *((_QWORD *)&v71[33] + 1) = 14LL;
  memcpy(v107, v71, 0x220uLL);
  v107[35] = v71[35];
  *(_QWORD *)((char *)&v107[36] + 4) = *(_QWORD *)((char *)&v71[36] + 4);
  HIDWORD(v107[36]) = HIDWORD(v71[36]);
  *(_QWORD *)&v107[34] = aNoDereference;
  *((_QWORD *)&v107[34] + 1) = 14LL;
  LODWORD(v107[36]) = 80;
  v47 = *(_QWORD *)&v107[9];
  if ( *(_QWORD *)&v107[9] == *(_QWORD *)&v107[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v107[8]);
  v48 = *((_QWORD *)&v107[8] + 1);
  v49 = 16 * v47;
  *(_QWORD *)(*((_QWORD *)&v107[8] + 1) + v49) = aDereference;
  *(_QWORD *)(v48 + v49 + 8) = 11LL;
  *(_QWORD *)&v107[9] = v47 + 1;
  memcpy(v133, v107, sizeof(v133));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aNeverFollowSym, 37LL);
  v50 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v133[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v133[27] + 8);
  *((_QWORD *)&v133[27] + 1) = v50;
  v133[28] = v69;
  memcpy(v71, v133, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v133[36] + 13);
  HIBYTE(v71[36]) = HIBYTE(v133[36]);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v162, v71);
  memcpy(v161, v162, sizeof(v161));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aDereference;
  *((_QWORD *)&v71[33] + 1) = 11LL;
  memcpy(v108, v71, 0x220uLL);
  v108[35] = v71[35];
  *(_QWORD *)((char *)&v108[36] + 4) = *(_QWORD *)((char *)&v71[36] + 4);
  HIDWORD(v108[36]) = HIDWORD(v71[36]);
  *(_QWORD *)&v108[34] = aDereference;
  *((_QWORD *)&v108[34] + 1) = 11LL;
  LODWORD(v108[36]) = 76;
  v51 = *(_QWORD *)&v108[9];
  if ( *(_QWORD *)&v108[9] == *(_QWORD *)&v108[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v108[8]);
  v52 = *((_QWORD *)&v108[8] + 1);
  v53 = 16 * v51;
  *(_QWORD *)(*((_QWORD *)&v108[8] + 1) + v53) = aNoDereference;
  *(_QWORD *)(v52 + v53 + 8) = 14LL;
  *(_QWORD *)&v108[9] = v51 + 1;
  memcpy(v134, v108, sizeof(v134));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aAlwaysFollowSy, 38LL);
  v54 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v134[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v134[27] + 8);
  *((_QWORD *)&v134[27] + 1) = v54;
  v134[28] = v69;
  memcpy(v71, v134, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v134[36] + 13);
  HIBYTE(v71[36]) = HIBYTE(v134[36]);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v161, v71);
  memcpy(v160, v161, sizeof(v160));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aCliSymbolicLin;
  *((_QWORD *)&v71[33] + 1) = 18LL;
  memcpy(v109, v71, 0x240uLL);
  *(_QWORD *)&v109[580] = *(_QWORD *)((char *)&v71[36] + 4);
  v110 = HIDWORD(v71[36]);
  *(_DWORD *)&v109[576] = 72;
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aFollowCommandL, 44LL);
  v55 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *(_QWORD *)&v109[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v109[440]);
  *(_QWORD *)&v109[440] = v55;
  *(_OWORD *)&v109[448] = v69;
  memcpy(v71, v109, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v110 + 1);
  HIBYTE(v71[36]) = HIBYTE(v110);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v160, v71);
  memcpy(v159, v160, sizeof(v159));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aArchive;
  *((_QWORD *)&v71[33] + 1) = 7LL;
  memcpy(v95, v71, 0x220uLL);
  *(_OWORD *)&v95[560] = v71[35];
  *(_QWORD *)&v95[580] = *(_QWORD *)((char *)&v71[36] + 4);
  v96 = HIDWORD(v71[36]);
  *(_QWORD *)&v95[544] = aArchive;
  *(_QWORD *)&v95[552] = 7LL;
  *(_DWORD *)&v95[576] = 97;
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aSameAsDrPreser, 26LL);
  v56 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *(_QWORD *)&v95[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v95[440]);
  *(_QWORD *)&v95[440] = v56;
  *(_OWORD *)&v95[448] = v69;
  memcpy(v71, v95, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v96 + 1);
  HIBYTE(v71[36]) = HIBYTE(v96);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v159, v71);
  memcpy(v158, v159, sizeof(v158));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aNoDereferenceP;
  *((_QWORD *)&v71[33] + 1) = 29LL;
  memcpy(v111, v71, 0x240uLL);
  *(_QWORD *)&v111[580] = *(_QWORD *)((char *)&v71[36] + 4);
  v112 = HIDWORD(v71[36]);
  *(_DWORD *)&v111[576] = 100;
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aSameAsNoDerefe, 41LL);
  v57 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *(_QWORD *)&v111[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v111[440]);
  *(_QWORD *)&v111[440] = v57;
  *(_OWORD *)&v111[448] = v69;
  memcpy(v71, v111, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v112 + 1);
  HIBYTE(v71[36]) = HIBYTE(v112);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v158, v71);
  memcpy(v157, v158, sizeof(v157));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aOneFileSystem;
  *((_QWORD *)&v71[33] + 1) = 15LL;
  memcpy(v97, v71, 0x220uLL);
  *(_OWORD *)&v97[560] = v71[35];
  *(_QWORD *)&v97[580] = *(_QWORD *)((char *)&v71[36] + 4);
  v98 = HIDWORD(v71[36]);
  *(_QWORD *)&v97[544] = aOneFileSystem;
  *(_QWORD *)&v97[552] = 15LL;
  *(_DWORD *)&v97[576] = 120;
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aStayOnThisFile, 24LL);
  v58 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *(_QWORD *)&v97[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v97[440]);
  *(_QWORD *)&v97[440] = v58;
  *(_OWORD *)&v97[448] = v69;
  memcpy(v71, v97, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v98 + 1);
  HIBYTE(v71[36]) = HIBYTE(v98);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v157, v71);
  memcpy(v156, v157, sizeof(v156));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v73);
  *(_QWORD *)&v73[33] = aSparse;
  *((_QWORD *)&v73[33] + 1) = 6LL;
  memcpy(v71, v73, 0x220uLL);
  v71[35] = v74;
  v71[36] = v75;
  *(_QWORD *)&v71[34] = aSparse;
  *((_QWORD *)&v71[34] + 1) = 6LL;
  *(_QWORD *)&v73[0] = aWhen;
  *((_QWORD *)&v73[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v144, v71);
  *(_QWORD *)&v71[0] = aNever;
  *((_QWORD *)&v71[0] + 1) = 5LL;
  *(_QWORD *)&v71[1] = "auto";
  *((_QWORD *)&v71[1] + 1) = 4LL;
  *(_QWORD *)&v71[2] = aAlways;
  *((_QWORD *)&v71[2] + 1) = 6LL;
  *(_QWORD *)&v71[3] = 0LL;
  *((_QWORD *)&v71[3] + 1) = 3LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v73,
    v71);
  v83 = v73[0];
  v84 = *(_QWORD *)&v73[1];
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v71, &v83);
  v59 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 5LL )
    v71[0] = v73[0];
  if ( v144[10] >= 4uLL && v144[10] != 5LL )
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)(&v144[11]);
  v144[10] = v59;
  *(_OWORD *)&v144[11] = v71[0];
  memcpy(v143, v144, sizeof(v143));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aControlCreatio, 43LL);
  v60 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v143[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v143[27] + 8);
  *((_QWORD *)&v143[27] + 1) = v60;
  v143[28] = v69;
  memcpy(v71, v143, sizeof(v71));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v156, v71);
  memcpy(v155, v156, sizeof(v155));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aCopyContents;
  *((_QWORD *)&v71[33] + 1) = 13LL;
  memcpy(v122, v71, 0x220uLL);
  v122[35] = v71[35];
  v122[36] = v71[36];
  *(_QWORD *)&v122[34] = aCopyContents;
  *((_QWORD *)&v122[34] + 1) = 13LL;
  v61 = *(_QWORD *)&v122[9];
  if ( *(_QWORD *)&v122[9] == *(_QWORD *)&v122[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v122[8]);
  v62 = *((_QWORD *)&v122[8] + 1);
  v63 = 16 * v61;
  *(_QWORD *)(*((_QWORD *)&v122[8] + 1) + v63) = aAttributesOnly;
  *(_QWORD *)(v62 + v63 + 8) = 15LL;
  *(_QWORD *)&v122[9] = v61 + 1;
  memcpy(v135, v122, sizeof(v135));
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aNotimplemented_0, 61LL);
  v64 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  v65 = v72;
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v135[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v135[27] + 8);
  *((_QWORD *)&v135[27] + 1) = v64;
  v135[28] = v69;
  memcpy(v71, v135, 0x24CuLL);
  *(_WORD *)((char *)&v71[36] + 13) = *(_WORD *)((char *)&v135[36] + 13);
  HIBYTE(v71[36]) = HIBYTE(v135[36]);
  BYTE12(v71[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v155, v71);
  memcpy(v154, v155, sizeof(v154));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v73);
  *(_QWORD *)&v73[33] = aContext;
  *((_QWORD *)&v73[33] + 1) = 7LL;
  memcpy(v71, v73, 0x220uLL);
  v71[35] = v74;
  v71[36] = v75;
  *(_QWORD *)&v71[34] = aContext;
  *((_QWORD *)&v71[34] + 1) = 7LL;
  *(_QWORD *)&v73[0] = aCtx;
  *((_QWORD *)&v73[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v145, v71);
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aNotimplemented_1, 80LL);
  v66 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v145[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v145[27] + 8);
  *((_QWORD *)&v145[27] + 1) = v66;
  v145[28] = v69;
  memcpy(v71, v145, sizeof(v71));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v154, v71);
  memcpy(v153, v154, sizeof(v153));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = "progressAltStyle";
  *((_QWORD *)&v71[33] + 1) = 8LL;
  memcpy(v99, v71, 0x220uLL);
  v99[35] = v71[35];
  *(_WORD *)((char *)&v99[36] + 13) = *(_WORD *)((char *)&v71[36] + 13);
  HIBYTE(v99[36]) = HIBYTE(v71[36]);
  *(_QWORD *)&v99[34] = "progressAltStyle";
  *((_QWORD *)&v99[34] + 1) = 8LL;
  LODWORD(v99[36]) = 103;
  *(_QWORD *)((char *)&v99[36] + 4) = *(_QWORD *)((char *)&v71[36] + 4);
  BYTE12(v99[36]) = 2;
  *(_QWORD *)&v71[0] = 0LL;
  *((_QWORD *)&v71[0] + 1) = 1LL;
  *(_QWORD *)&v71[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v71, aDisplayAProgre, 78LL);
  v67 = *(_QWORD *)&v71[0];
  v73[0] = *(_OWORD *)((char *)v71 + 8);
  if ( *(_QWORD *)&v71[0] != 0x8000000000000000LL )
    v69 = v73[0];
  if ( *((_QWORD *)&v99[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v99[27] + 8);
  *((_QWORD *)&v99[27] + 1) = v67;
  v99[28] = v69;
  memcpy(v71, v99, sizeof(v71));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v153, v71);
  memcpy(v152, v153, sizeof(v152));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v71);
  *(_QWORD *)&v71[33] = aPaths_0;
  *((_QWORD *)&v71[33] + 1) = 5LL;
  v103[0] = v71[0];
  memcpy((char *)&v103[2] + 8, (char *)&v71[2] + 8, 0x220uLL);
  *(_QWORD *)&v103[1] = 1LL;
  *((_QWORD *)&v103[1] + 1) = 1LL;
  *(_QWORD *)&v103[2] = -1LL;
  DWORD2(v103[36]) = DWORD2(v71[36]) | 1;
  WORD6(v103[36]) = 513;
  HIWORD(v103[36]) = HIWORD(v71[36]);
  if ( *(_QWORD *)&v103[5] >= 4uLL && *(_QWORD *)&v103[5] != 5LL )
    ((void (__fastcall *)(char *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)((char *)&v103[5] + 8);
  *(_QWORD *)&v103[5] = 2LL;
  memcpy(v71, v103, sizeof(v71));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v152, v71);
  memcpy(v65, v152, 0x2C8uLL);
  return v65;
}
