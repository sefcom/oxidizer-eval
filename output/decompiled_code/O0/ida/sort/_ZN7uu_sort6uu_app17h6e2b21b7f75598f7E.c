void *__fastcall uu_sort::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rbp
  __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // r14
  __int64 v23; // r14
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
  __int64 v35; // r14
  void *v36; // rbx
  __int128 v38; // [rsp-B000h] [rbp-CEC8h]
  __int128 v39; // [rsp-AFF0h] [rbp-CEB8h] BYREF
  __int64 v40; // [rsp-AFE0h] [rbp-CEA8h]
  _OWORD v41[37]; // [rsp-AFD0h] [rbp-CE98h] BYREF
  void *v42; // [rsp-AD78h] [rbp-CC40h]
  __int128 v43; // [rsp-AD70h] [rbp-CC38h] BYREF
  __int64 v44; // [rsp-AD60h] [rbp-CC28h]
  __int128 v45; // [rsp-AD50h] [rbp-CC18h] BYREF
  __int64 v46; // [rsp-AD40h] [rbp-CC08h]
  __int64 v47; // [rsp-AD38h] [rbp-CC00h] BYREF
  __int128 v48; // [rsp-AD30h] [rbp-CBF8h]
  _OWORD v49[37]; // [rsp-AD20h] [rbp-CBE8h] BYREF
  _BYTE v50[588]; // [rsp-AAD0h] [rbp-C998h] BYREF
  int v51; // [rsp-A884h] [rbp-C74Ch]
  _BYTE v52[588]; // [rsp-A880h] [rbp-C748h] BYREF
  int v53; // [rsp-A634h] [rbp-C4FCh]
  _BYTE v54[588]; // [rsp-A630h] [rbp-C4F8h] BYREF
  int v55; // [rsp-A3E4h] [rbp-C2ACh]
  _BYTE v56[588]; // [rsp-A3E0h] [rbp-C2A8h] BYREF
  int v57; // [rsp-A194h] [rbp-C05Ch]
  _BYTE v58[588]; // [rsp-A190h] [rbp-C058h] BYREF
  int v59; // [rsp-9F44h] [rbp-BE0Ch]
  _BYTE v60[588]; // [rsp-9F40h] [rbp-BE08h] BYREF
  int v61; // [rsp-9CF4h] [rbp-BBBCh]
  _BYTE v62[588]; // [rsp-9CF0h] [rbp-BBB8h] BYREF
  int v63; // [rsp-9AA4h] [rbp-B96Ch]
  _BYTE v64[588]; // [rsp-9AA0h] [rbp-B968h] BYREF
  int v65; // [rsp-9854h] [rbp-B71Ch]
  _BYTE v66[592]; // [rsp-9850h] [rbp-B718h] BYREF
  _BYTE v67[592]; // [rsp-9600h] [rbp-B4C8h] BYREF
  _OWORD v68[37]; // [rsp-93B0h] [rbp-B278h] BYREF
  _OWORD v69[37]; // [rsp-9160h] [rbp-B028h] BYREF
  _OWORD v70[37]; // [rsp-8F10h] [rbp-ADD8h] BYREF
  _OWORD v71[37]; // [rsp-8CC0h] [rbp-AB88h] BYREF
  _OWORD v72[37]; // [rsp-8A70h] [rbp-A938h] BYREF
  _OWORD v73[37]; // [rsp-8820h] [rbp-A6E8h] BYREF
  _BYTE v74[592]; // [rsp-85D0h] [rbp-A498h] BYREF
  _OWORD v75[37]; // [rsp-8380h] [rbp-A248h] BYREF
  _OWORD v76[37]; // [rsp-8130h] [rbp-9FF8h] BYREF
  _OWORD v77[37]; // [rsp-7EE0h] [rbp-9DA8h] BYREF
  _OWORD v78[37]; // [rsp-7C90h] [rbp-9B58h] BYREF
  _OWORD v79[37]; // [rsp-7A40h] [rbp-9908h] BYREF
  _OWORD v80[37]; // [rsp-77F0h] [rbp-96B8h] BYREF
  _OWORD v81[37]; // [rsp-75A0h] [rbp-9468h] BYREF
  _BYTE v82[589]; // [rsp-7350h] [rbp-9218h] BYREF
  _BYTE v83[3]; // [rsp-7103h] [rbp-8FCBh]
  _DWORD v84[178]; // [rsp-7100h] [rbp-8FC8h] BYREF
  _OWORD v85[37]; // [rsp-6E38h] [rbp-8D00h] BYREF
  _QWORD v86[74]; // [rsp-6BE8h] [rbp-8AB0h] BYREF
  _QWORD v87[74]; // [rsp-6998h] [rbp-8860h] BYREF
  _QWORD v88[74]; // [rsp-6748h] [rbp-8610h] BYREF
  _BYTE v89[592]; // [rsp-64F8h] [rbp-83C0h] BYREF
  _BYTE v90[592]; // [rsp-62A8h] [rbp-8170h] BYREF
  _DWORD v91[178]; // [rsp-6058h] [rbp-7F20h] BYREF
  _BYTE v92[712]; // [rsp-5D90h] [rbp-7C58h] BYREF
  _BYTE v93[712]; // [rsp-5AC8h] [rbp-7990h] BYREF
  _BYTE v94[712]; // [rsp-5800h] [rbp-76C8h] BYREF
  _BYTE v95[712]; // [rsp-5538h] [rbp-7400h] BYREF
  _BYTE v96[712]; // [rsp-5270h] [rbp-7138h] BYREF
  _BYTE v97[712]; // [rsp-4FA8h] [rbp-6E70h] BYREF
  _BYTE v98[712]; // [rsp-4CE0h] [rbp-6BA8h] BYREF
  _BYTE v99[712]; // [rsp-4A18h] [rbp-68E0h] BYREF
  _BYTE v100[712]; // [rsp-4750h] [rbp-6618h] BYREF
  _BYTE v101[712]; // [rsp-4488h] [rbp-6350h] BYREF
  _BYTE v102[712]; // [rsp-41C0h] [rbp-6088h] BYREF
  _BYTE v103[712]; // [rsp-3EF8h] [rbp-5DC0h] BYREF
  _BYTE v104[712]; // [rsp-3C30h] [rbp-5AF8h] BYREF
  _BYTE v105[712]; // [rsp-3968h] [rbp-5830h] BYREF
  _BYTE v106[712]; // [rsp-36A0h] [rbp-5568h] BYREF
  _BYTE v107[712]; // [rsp-33D8h] [rbp-52A0h] BYREF
  _BYTE v108[712]; // [rsp-3110h] [rbp-4FD8h] BYREF
  _BYTE v109[712]; // [rsp-2E48h] [rbp-4D10h] BYREF
  _BYTE v110[712]; // [rsp-2B80h] [rbp-4A48h] BYREF
  _BYTE v111[712]; // [rsp-28B8h] [rbp-4780h] BYREF
  _BYTE v112[712]; // [rsp-25F0h] [rbp-44B8h] BYREF
  _BYTE v113[712]; // [rsp-2328h] [rbp-41F0h] BYREF
  _BYTE v114[712]; // [rsp-2060h] [rbp-3F28h] BYREF
  _BYTE v115[712]; // [rsp-1D98h] [rbp-3C60h] BYREF
  _BYTE v116[712]; // [rsp-1AD0h] [rbp-3998h] BYREF
  _BYTE v117[712]; // [rsp-1808h] [rbp-36D0h] BYREF
  _BYTE v118[712]; // [rsp-1540h] [rbp-3408h] BYREF
  _BYTE v119[712]; // [rsp-1278h] [rbp-3140h] BYREF
  _BYTE v120[712]; // [rsp-FB0h] [rbp-2E78h] BYREF
  _BYTE v121[712]; // [rsp-CE8h] [rbp-2BB0h] BYREF
  _BYTE v122[592]; // [rsp-A20h] [rbp-28E8h] BYREF
  _BYTE v123[592]; // [rsp-7D0h] [rbp-2698h] BYREF
  _BYTE v124[592]; // [rsp-580h] [rbp-2448h] BYREF
  _BYTE v125[592]; // [rsp-330h] [rbp-21F8h] BYREF
  _OWORD v126[37]; // [rsp-E0h] [rbp-1FA8h] BYREF
  _BYTE v127[712]; // [rsp+170h] [rbp-1D58h] BYREF
  _QWORD v128[74]; // [rsp+438h] [rbp-1A90h] BYREF
  _QWORD v129[74]; // [rsp+688h] [rbp-1840h] BYREF
  _QWORD v130[74]; // [rsp+8D8h] [rbp-15F0h] BYREF
  _QWORD v131[74]; // [rsp+B28h] [rbp-13A0h] BYREF
  _QWORD v132[74]; // [rsp+D78h] [rbp-1150h] BYREF
  _QWORD v133[74]; // [rsp+FC8h] [rbp-F00h] BYREF
  _QWORD v134[74]; // [rsp+1218h] [rbp-CB0h] BYREF
  _QWORD v135[74]; // [rsp+1468h] [rbp-A60h] BYREF
  _QWORD v136[74]; // [rsp+16B8h] [rbp-810h] BYREF
  _BYTE v137[96]; // [rsp+1908h] [rbp-5C0h] BYREF
  _BYTE v138[712]; // [rsp+1BD0h] [rbp-2F8h] BYREF

  do
    *(_QWORD *)&v58[40] = 0LL;
  while ( &v58[40] != (char *)&v68[-3036] + 8 );
  v42 = a1;
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
  ((void (__fastcall *)(_BYTE *, __int64, __int64))clap_builder::builder::command::Command::new::new_inner)(
    v127,
    v2,
    v3);
  *(_QWORD *)&v127[608] = a0027;
  *(_QWORD *)&v127[616] = 6LL;
  memcpy(v138, v127, sizeof(v138));
  clap_builder::builder::command::Command::about(v137, v138);
  clap_builder::builder::command::Command::after_help(v84, v137);
  uucore::format_usage((unsigned int)&v47);
  v4 = v47;
  if ( v47 != 0x8000000000000000LL )
    v41[0] = v48;
  if ( *(_QWORD *)&v84[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v84[116]);
  *(_QWORD *)&v84[116] = v4;
  *(_OWORD *)&v84[118] = v41[0];
  memcpy(v91, v84, 0x2BCuLL);
  *(_QWORD *)&v91[175] = *(_QWORD *)&v84[175] | 0x14008800140088LL;
  v91[177] = v84[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *((_QWORD *)&v41[33] + 1) = 4LL;
  memcpy(v66, v41, 0x220uLL);
  *(_OWORD *)&v66[560] = v41[35];
  *(_OWORD *)&v66[576] = v41[36];
  *(_QWORD *)&v66[544] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *(_QWORD *)&v66[552] = 4LL;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aPrintHelpInfor, 23LL);
  v5 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *(_QWORD *)&v66[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v66[440]);
  *(_QWORD *)&v66[440] = v5;
  *(_OWORD *)&v66[448] = v38;
  memcpy(v41, v66, 0x24CuLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)&v66[589];
  HIBYTE(v41[36]) = v66[591];
  BYTE12(v41[36]) = 5;
  ((void (__fastcall *)(_DWORD *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v91, v41);
  memcpy(v121, v91, sizeof(v121));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aVersion_0;
  *((_QWORD *)&v41[33] + 1) = 7LL;
  memcpy(v67, v41, 0x220uLL);
  *(_OWORD *)&v67[560] = v41[35];
  *(_OWORD *)&v67[576] = v41[36];
  *(_QWORD *)&v67[544] = aVersion_0;
  *(_QWORD *)&v67[552] = 7LL;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aPrintVersionIn, 26LL);
  v6 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *(_QWORD *)&v67[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v67[440]);
  *(_QWORD *)&v67[440] = v6;
  *(_OWORD *)&v67[448] = v38;
  memcpy(v41, v67, 0x24CuLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)&v67[589];
  HIBYTE(v41[36]) = v67[591];
  BYTE12(v41[36]) = 8;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v121, v41);
  memcpy(v120, v121, sizeof(v120));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aSort;
  *((_QWORD *)&v41[33] + 1) = 4LL;
  memcpy(v76, v41, 0x220uLL);
  v76[35] = v41[35];
  v76[36] = v41[36];
  *(_QWORD *)&v76[34] = aSort;
  *((_QWORD *)&v76[34] + 1) = 4LL;
  *(_QWORD *)&v41[0] = aGeneralNumeric_2;
  *((_QWORD *)&v41[0] + 1) = 15LL;
  *(_QWORD *)&v41[1] = aHumanNumeric_0;
  *((_QWORD *)&v41[1] + 1) = 13LL;
  *(_QWORD *)&v41[2] = aMonth_0;
  *((_QWORD *)&v41[2] + 1) = 5LL;
  *(_QWORD *)&v41[3] = aNumeric_0;
  *((_QWORD *)&v41[3] + 1) = 7LL;
  *(_QWORD *)&v41[4] = aVersion_0;
  *((_QWORD *)&v41[4] + 1) = 7LL;
  *(_QWORD *)&v41[5] = aRandom_0;
  *((_QWORD *)&v41[5] + 1) = 6LL;
  *(_QWORD *)&v41[6] = 0LL;
  *((_QWORD *)&v41[6] + 1) = 6LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v39,
    v41);
  v43 = v39;
  v44 = v40;
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v41, &v43);
  v7 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 5LL )
    v41[0] = v39;
  if ( *(_QWORD *)&v76[5] >= 4uLL && *(_QWORD *)&v76[5] != 5LL )
    ((void (__fastcall *)(char *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)((char *)&v76[5] + 8);
  *(_QWORD *)&v76[5] = v7;
  *(_OWORD *)((char *)&v76[5] + 8) = v41[0];
  memcpy(v122, v76, sizeof(v122));
  v41[5] = *(_OWORD *)&off_1D30F0;
  v41[4] = *(_OWORD *)&off_1D30E0;
  v41[3] = *(_OWORD *)&off_1D30D0;
  v41[2] = *(_OWORD *)&off_1D30C0;
  v41[1] = *(_OWORD *)&off_1D30B0;
  v41[0] = *(_OWORD *)&off_1D30A0;
  *(_QWORD *)&v41[6] = 0LL;
  *((_QWORD *)&v41[6] + 1) = 6LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v122[104], v41);
  memcpy(v41, v122, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v120, v41);
  memcpy(v119, v120, sizeof(v119));
  uu_sort::make_sort_mode_arg((__int64)v128, aHumanNumericSo_0, 0x12uLL, 104, (__int64)aCompareAccordi, 55LL);
  memcpy(v41, v128, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v119, v41);
  memcpy(v118, v119, sizeof(v118));
  uu_sort::make_sort_mode_arg((__int64)v129, aMonthSort_0, 0xAuLL, 77, (__int64)aCompareAccordi_0, 44LL);
  memcpy(v41, v129, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v118, v41);
  memcpy(v117, v118, sizeof(v117));
  uu_sort::make_sort_mode_arg((__int64)v130, aNumericSort_0, 0xCuLL, 110, (__int64)aCompareAccordi_1, 43LL);
  memcpy(v41, v130, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v117, v41);
  memcpy(v116, v117, sizeof(v116));
  uu_sort::make_sort_mode_arg((__int64)v131, aGeneralNumeric_1, 0x14uLL, 103, (__int64)aCompareAccordi_2, 51LL);
  memcpy(v41, v131, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v116, v41);
  memcpy(v115, v116, sizeof(v115));
  uu_sort::make_sort_mode_arg((__int64)v132, aVersionSort_0, 0xCuLL, 86, (__int64)aSortBySemverVe, 48LL);
  memcpy(v41, v132, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v115, v41);
  memcpy(v114, v115, sizeof(v114));
  uu_sort::make_sort_mode_arg((__int64)v133, aRandomSort_0, 0xBuLL, 82, (__int64)aShuffleInRando, 23LL);
  memcpy(v41, v133, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v114, v41);
  memcpy(v113, v114, sizeof(v113));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aDictionaryOrde;
  *((_QWORD *)&v41[33] + 1) = 16LL;
  memcpy(v68, v41, 0x220uLL);
  v68[35] = v41[35];
  *(_QWORD *)((char *)&v68[36] + 4) = *(_QWORD *)((char *)&v41[36] + 4);
  HIDWORD(v68[36]) = HIDWORD(v41[36]);
  *(_QWORD *)&v68[34] = aDictionaryOrde;
  *((_QWORD *)&v68[34] + 1) = 16LL;
  LODWORD(v68[36]) = 100;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aConsiderOnlyBl, 48LL);
  v8 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v41[0] = v39;
  if ( *((_QWORD *)&v68[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v68[27] + 8);
  *((_QWORD *)&v68[27] + 1) = v8;
  v68[28] = v41[0];
  memcpy(v89, v68, sizeof(v89));
  *(_QWORD *)&v41[0] = aNumericSort_0;
  *((_QWORD *)&v41[0] + 1) = 12LL;
  *(_QWORD *)&v41[1] = aGeneralNumeric_1;
  *((_QWORD *)&v41[1] + 1) = 20LL;
  *(_QWORD *)&v41[2] = aHumanNumericSo_0;
  *((_QWORD *)&v41[2] + 1) = 18LL;
  *(_QWORD *)&v41[3] = aMonthSort_0;
  *((_QWORD *)&v41[3] + 1) = 10LL;
  *(_QWORD *)&v41[4] = 0LL;
  *((_QWORD *)&v41[4] + 1) = 4LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v89[104], v41);
  memcpy(v41, v89, 0x24CuLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)&v89[589];
  HIBYTE(v41[36]) = v89[591];
  BYTE12(v41[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v113, v41);
  memcpy(v112, v113, sizeof(v112));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aMerge_0;
  *((_QWORD *)&v41[33] + 1) = 5LL;
  memcpy(v52, v41, 0x220uLL);
  *(_OWORD *)&v52[560] = v41[35];
  *(_QWORD *)&v52[580] = *(_QWORD *)((char *)&v41[36] + 4);
  v53 = HIDWORD(v41[36]);
  *(_QWORD *)&v52[544] = aMerge_0;
  *(_QWORD *)&v52[552] = 5LL;
  *(_DWORD *)&v52[576] = 109;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aMergeAlreadySo, 39LL);
  v9 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *(_QWORD *)&v52[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v52[440]);
  *(_QWORD *)&v52[440] = v9;
  *(_OWORD *)&v52[448] = v38;
  memcpy(v41, v52, 0x24CuLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)((char *)&v53 + 1);
  HIBYTE(v41[36]) = HIBYTE(v53);
  BYTE12(v41[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v112, v41);
  memcpy(v111, v112, sizeof(v111));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aCheck_0;
  *((_QWORD *)&v41[33] + 1) = 5LL;
  v49[0] = v41[0];
  memcpy((char *)&v49[2] + 8, (char *)&v41[2] + 8, 0x1F8uLL);
  v49[35] = v41[35];
  v49[1] = 1uLL;
  *(_QWORD *)&v49[2] = -1LL;
  *(_QWORD *)&v49[34] = aCheck_0;
  *((_QWORD *)&v49[34] + 1) = 5LL;
  LODWORD(v49[36]) = 99;
  *(_QWORD *)((char *)&v49[36] + 4) = *(_QWORD *)((char *)&v41[36] + 4) | 0x8000000000LL;
  HIDWORD(v49[36]) = HIDWORD(v41[36]);
  *(_QWORD *)&v41[0] = aSilent_0;
  *((_QWORD *)&v41[0] + 1) = 6LL;
  *(_QWORD *)&v41[1] = aQuiet_0;
  *((_QWORD *)&v41[1] + 1) = 5LL;
  *(_QWORD *)&v41[2] = aDiagnoseFirst;
  *((_QWORD *)&v41[2] + 1) = 14LL;
  *(_QWORD *)&v41[3] = 0LL;
  *((_QWORD *)&v41[3] + 1) = 3LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v39,
    v41);
  v45 = v39;
  v46 = v40;
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v41, &v45);
  v10 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 5LL )
    v41[0] = v39;
  if ( *(_QWORD *)&v49[5] >= 4uLL && *(_QWORD *)&v49[5] != 5LL )
    ((void (__fastcall *)(char *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)((char *)&v49[5] + 8);
  *(_QWORD *)&v49[5] = v10;
  *(_OWORD *)((char *)&v49[5] + 8) = v41[0];
  memcpy(v86, v49, sizeof(v86));
  v11 = v86[15];
  if ( v86[15] == v86[13] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v86[13]);
  v12 = v86[14];
  v13 = 16 * v11;
  *(_QWORD *)(v86[14] + v13) = &unk_3446C;
  *(_QWORD *)(v12 + v13 + 8) = 6LL;
  v86[15] = v11 + 1;
  memcpy(v85, v86, sizeof(v85));
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aCheckForSorted, 35LL);
  v14 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *((_QWORD *)&v85[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v85[27] + 8);
  *((_QWORD *)&v85[27] + 1) = v14;
  v85[28] = v38;
  memcpy(v41, v85, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v111, v41);
  memcpy(v110, v111, sizeof(v110));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aCheckSilent_0;
  *((_QWORD *)&v41[33] + 1) = 12LL;
  memcpy(v75, v41, 0x220uLL);
  v75[35] = v41[35];
  *(_QWORD *)((char *)&v75[36] + 4) = *(_QWORD *)((char *)&v41[36] + 4);
  HIDWORD(v75[36]) = HIDWORD(v41[36]);
  *(_QWORD *)&v75[34] = aCheckSilent_0;
  *((_QWORD *)&v75[34] + 1) = 12LL;
  LODWORD(v75[36]) = 67;
  v15 = *((_QWORD *)&v75[7] + 1);
  if ( *((_QWORD *)&v75[7] + 1) == *((_QWORD *)&v75[6] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v75[6] + 8);
  v16 = *(_QWORD *)&v75[7];
  v17 = 16 * v15;
  *(_QWORD *)(*(_QWORD *)&v75[7] + v17) = &unk_3446C;
  *(_QWORD *)(v16 + v17 + 8) = 6LL;
  *((_QWORD *)&v75[7] + 1) = v15 + 1;
  memcpy(v81, v75, sizeof(v81));
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aExitSuccessful, 88LL);
  v18 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *((_QWORD *)&v81[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v81[27] + 8);
  *((_QWORD *)&v81[27] + 1) = v18;
  v81[28] = v38;
  memcpy(v41, v81, 0x24CuLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)((char *)&v81[36] + 13);
  HIBYTE(v41[36]) = HIBYTE(v81[36]);
  BYTE12(v41[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v110, v41);
  memcpy(v109, v110, sizeof(v109));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aIgnoreCase_0;
  *((_QWORD *)&v41[33] + 1) = 11LL;
  memcpy(v54, v41, 0x220uLL);
  *(_OWORD *)&v54[560] = v41[35];
  *(_QWORD *)&v54[580] = *(_QWORD *)((char *)&v41[36] + 4);
  v55 = HIDWORD(v41[36]);
  *(_QWORD *)&v54[544] = aIgnoreCase_0;
  *(_QWORD *)&v54[552] = 11LL;
  *(_DWORD *)&v54[576] = 102;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aFoldLowerCaseT, 40LL);
  v19 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *(_QWORD *)&v54[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v54[440]);
  *(_QWORD *)&v54[440] = v19;
  *(_OWORD *)&v54[448] = v38;
  memcpy(v41, v54, 0x24CuLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)((char *)&v55 + 1);
  HIBYTE(v41[36]) = HIBYTE(v55);
  BYTE12(v41[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v109, v41);
  memcpy(v108, v109, sizeof(v108));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aIgnoreNonprint_0;
  *((_QWORD *)&v41[33] + 1) = 18LL;
  memcpy(v69, v41, 0x220uLL);
  v69[35] = v41[35];
  *(_QWORD *)((char *)&v69[36] + 4) = *(_QWORD *)((char *)&v41[36] + 4);
  HIDWORD(v69[36]) = HIDWORD(v41[36]);
  *(_QWORD *)&v69[34] = aIgnoreNonprint_0;
  *((_QWORD *)&v69[34] + 1) = 18LL;
  LODWORD(v69[36]) = 105;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aIgnoreNonprint_1, 29LL);
  v20 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v41[0] = v39;
  if ( *((_QWORD *)&v69[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v69[27] + 8);
  *((_QWORD *)&v69[27] + 1) = v20;
  v69[28] = v41[0];
  memcpy(v90, v69, sizeof(v90));
  *(_QWORD *)&v41[0] = aNumericSort_0;
  *((_QWORD *)&v41[0] + 1) = 12LL;
  *(_QWORD *)&v41[1] = aGeneralNumeric_1;
  *((_QWORD *)&v41[1] + 1) = 20LL;
  *(_QWORD *)&v41[2] = aHumanNumericSo_0;
  *((_QWORD *)&v41[2] + 1) = 18LL;
  *(_QWORD *)&v41[3] = aMonthSort_0;
  *((_QWORD *)&v41[3] + 1) = 10LL;
  *(_QWORD *)&v41[4] = 0LL;
  *((_QWORD *)&v41[4] + 1) = 4LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v90[104], v41);
  memcpy(v41, v90, 0x24CuLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)&v90[589];
  HIBYTE(v41[36]) = v90[591];
  BYTE12(v41[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v108, v41);
  memcpy(v107, v108, sizeof(v107));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aIgnoreLeadingB_0;
  *((_QWORD *)&v41[33] + 1) = 21LL;
  memcpy(v56, v41, 0x220uLL);
  *(_OWORD *)&v56[560] = v41[35];
  *(_QWORD *)&v56[580] = *(_QWORD *)((char *)&v41[36] + 4);
  v57 = HIDWORD(v41[36]);
  *(_QWORD *)&v56[544] = aIgnoreLeadingB_0;
  *(_QWORD *)&v56[552] = 21LL;
  *(_DWORD *)&v56[576] = 98;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aIgnoreLeadingB_1, 57LL);
  v21 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *(_QWORD *)&v56[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v56[440]);
  *(_QWORD *)&v56[440] = v21;
  *(_OWORD *)&v56[448] = v38;
  memcpy(v41, v56, 0x24CuLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)((char *)&v57 + 1);
  HIBYTE(v41[36]) = HIBYTE(v57);
  BYTE12(v41[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v107, v41);
  memcpy(v106, v107, sizeof(v106));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = &unk_3446C;
  *((_QWORD *)&v41[33] + 1) = 6LL;
  memcpy(v70, v41, 0x220uLL);
  v70[35] = v41[35];
  *(_QWORD *)((char *)&v70[36] + 4) = *(_QWORD *)((char *)&v41[36] + 4);
  HIDWORD(v70[36]) = HIDWORD(v41[36]);
  *(_QWORD *)&v70[34] = &unk_3446C;
  *((_QWORD *)&v70[34] + 1) = 6LL;
  LODWORD(v70[36]) = 111;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aWriteOutputToF, 42LL);
  v22 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *((_QWORD *)&v70[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v70[27] + 8);
  *((_QWORD *)&v70[27] + 1) = v22;
  v70[28] = v38;
  memcpy(v41, v70, sizeof(v41));
  *(_QWORD *)&v39 = aFilename;
  *((_QWORD *)&v39 + 1) = 8LL;
  clap_builder::builder::arg::Arg::value_names(v123, v41);
  v123[589] = 3;
  memcpy(v41, v123, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v106, v41);
  memcpy(v105, v106, sizeof(v105));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aReverse_0;
  *((_QWORD *)&v41[33] + 1) = 7LL;
  memcpy(v58, v41, 0x220uLL);
  *(_OWORD *)&v58[560] = v41[35];
  *(_QWORD *)&v58[580] = *(_QWORD *)((char *)&v41[36] + 4);
  v59 = HIDWORD(v41[36]);
  *(_QWORD *)&v58[544] = aReverse_0;
  *(_QWORD *)&v58[552] = 7LL;
  *(_DWORD *)&v58[576] = 114;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aReverseTheOutp, 18LL);
  v23 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *(_QWORD *)&v58[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v58[440]);
  *(_QWORD *)&v58[440] = v23;
  *(_OWORD *)&v58[448] = v38;
  memcpy(v41, v58, 0x24CuLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)((char *)&v59 + 1);
  HIBYTE(v41[36]) = HIBYTE(v59);
  BYTE12(v41[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v105, v41);
  memcpy(v104, v105, sizeof(v104));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aStable_0;
  *((_QWORD *)&v41[33] + 1) = 6LL;
  memcpy(v60, v41, 0x220uLL);
  *(_OWORD *)&v60[560] = v41[35];
  *(_QWORD *)&v60[580] = *(_QWORD *)((char *)&v41[36] + 4);
  v61 = HIDWORD(v41[36]);
  *(_QWORD *)&v60[544] = aStable_0;
  *(_QWORD *)&v60[552] = 6LL;
  *(_DWORD *)&v60[576] = 115;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aStabilizeSortB, 50LL);
  v24 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *(_QWORD *)&v60[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v60[440]);
  *(_QWORD *)&v60[440] = v24;
  *(_OWORD *)&v60[448] = v38;
  memcpy(v41, v60, 0x24CuLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)((char *)&v61 + 1);
  HIBYTE(v41[36]) = HIBYTE(v61);
  BYTE12(v41[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v104, v41);
  memcpy(v103, v104, sizeof(v103));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aUnique_0;
  *((_QWORD *)&v41[33] + 1) = 6LL;
  memcpy(v62, v41, 0x220uLL);
  *(_OWORD *)&v62[560] = v41[35];
  *(_QWORD *)&v62[580] = *(_QWORD *)((char *)&v41[36] + 4);
  v63 = HIDWORD(v41[36]);
  *(_QWORD *)&v62[544] = aUnique_0;
  *(_QWORD *)&v62[552] = 6LL;
  *(_DWORD *)&v62[576] = 117;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aOutputOnlyTheF, 37LL);
  v25 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *(_QWORD *)&v62[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v62[440]);
  *(_QWORD *)&v62[440] = v25;
  *(_OWORD *)&v62[448] = v38;
  memcpy(v41, v62, 0x24CuLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)((char *)&v63 + 1);
  HIBYTE(v41[36]) = HIBYTE(v63);
  BYTE12(v41[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v103, v41);
  memcpy(v102, v103, sizeof(v102));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aKey_0;
  *((_QWORD *)&v41[33] + 1) = 3LL;
  memcpy(v50, v41, 0x220uLL);
  *(_OWORD *)&v50[560] = v41[35];
  *(_QWORD *)&v50[580] = *(_QWORD *)((char *)&v41[36] + 4);
  v51 = HIDWORD(v41[36]);
  *(_QWORD *)&v50[544] = aKey_0;
  *(_QWORD *)&v50[552] = 3LL;
  *(_DWORD *)&v50[576] = 107;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aSortByAKey, 13LL);
  v26 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *(_QWORD *)&v50[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v50[440]);
  *(_QWORD *)&v50[440] = v26;
  *(_OWORD *)&v50[448] = v38;
  v41[0] = *(_OWORD *)v50;
  memcpy((char *)&v41[2] + 8, &v50[40], 0x224uLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)((char *)&v51 + 1);
  HIBYTE(v41[36]) = HIBYTE(v51);
  *(_QWORD *)&v41[1] = 1LL;
  *((_QWORD *)&v41[1] + 1) = 1LL;
  *(_QWORD *)&v41[2] = 1LL;
  BYTE12(v41[36]) = 1;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v102, v41);
  memcpy(v101, v102, sizeof(v101));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aFieldSeparator_0;
  *((_QWORD *)&v41[33] + 1) = 15LL;
  memcpy(v71, v41, 0x220uLL);
  v71[35] = v41[35];
  *(_QWORD *)((char *)&v71[36] + 4) = *(_QWORD *)((char *)&v41[36] + 4);
  HIDWORD(v71[36]) = HIDWORD(v41[36]);
  *(_QWORD *)&v71[34] = aFieldSeparator_0;
  *((_QWORD *)&v71[34] + 1) = 15LL;
  LODWORD(v71[36]) = 116;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aCustomSeparato, 23LL);
  v27 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v41[0] = v39;
  if ( *((_QWORD *)&v71[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v71[27] + 8);
  *((_QWORD *)&v71[27] + 1) = v27;
  v71[28] = v41[0];
  memcpy(v88, v71, sizeof(v88));
  if ( v88[10] >= 4uLL && v88[10] != 5LL )
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)(&v88[11]);
  v88[10] = 2LL;
  memcpy(v41, v88, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v101, v41);
  memcpy(v100, v101, sizeof(v100));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aZeroTerminated_0;
  *((_QWORD *)&v41[33] + 1) = 15LL;
  memcpy(v64, v41, 0x220uLL);
  *(_OWORD *)&v64[560] = v41[35];
  *(_QWORD *)&v64[580] = *(_QWORD *)((char *)&v41[36] + 4);
  v65 = HIDWORD(v41[36]);
  *(_QWORD *)&v64[544] = aZeroTerminated_0;
  *(_QWORD *)&v64[552] = 15LL;
  *(_DWORD *)&v64[576] = 122;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aLineDelimiterI, 34LL);
  v28 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *(_QWORD *)&v64[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v64[440]);
  *(_QWORD *)&v64[440] = v28;
  *(_OWORD *)&v64[448] = v38;
  memcpy(v41, v64, 0x24CuLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)((char *)&v65 + 1);
  HIBYTE(v41[36]) = HIBYTE(v65);
  BYTE12(v41[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v100, v41);
  memcpy(v99, v100, sizeof(v99));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aParallel;
  *((_QWORD *)&v41[33] + 1) = 8LL;
  memcpy(v77, v41, 0x220uLL);
  v77[35] = v41[35];
  v77[36] = v41[36];
  *(_QWORD *)&v77[34] = aParallel;
  *((_QWORD *)&v77[34] + 1) = 8LL;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aChangeTheNumbe, 64LL);
  v29 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *((_QWORD *)&v77[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v77[27] + 8);
  *((_QWORD *)&v77[27] + 1) = v29;
  v77[28] = v38;
  memcpy(v41, v77, sizeof(v41));
  *(_QWORD *)&v39 = aNumThreads;
  *((_QWORD *)&v39 + 1) = 11LL;
  clap_builder::builder::arg::Arg::value_names(v134, v41);
  memcpy(v41, v134, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v99, v41);
  memcpy(v98, v99, sizeof(v98));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aBufferSize_0;
  *((_QWORD *)&v41[33] + 1) = 11LL;
  memcpy(v72, v41, 0x220uLL);
  v72[35] = v41[35];
  *(_QWORD *)((char *)&v72[36] + 4) = *(_QWORD *)((char *)&v41[36] + 4);
  HIDWORD(v72[36]) = HIDWORD(v41[36]);
  *(_QWORD *)&v72[34] = aBufferSize_0;
  *((_QWORD *)&v72[34] + 1) = 11LL;
  LODWORD(v72[36]) = 83;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aSetsTheMaximum, 63LL);
  v30 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *((_QWORD *)&v72[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v72[27] + 8);
  *((_QWORD *)&v72[27] + 1) = v30;
  v72[28] = v38;
  memcpy(v41, v72, sizeof(v41));
  *(_QWORD *)&v39 = aSize;
  *((_QWORD *)&v39 + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v135, v41);
  memcpy(v41, v135, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v98, v41);
  memcpy(v97, v98, sizeof(v97));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aTemporaryDirec_0;
  *((_QWORD *)&v41[33] + 1) = 19LL;
  memcpy(v73, v41, 0x220uLL);
  v73[35] = v41[35];
  *(_QWORD *)((char *)&v73[36] + 4) = *(_QWORD *)((char *)&v41[36] + 4);
  HIDWORD(v73[36]) = HIDWORD(v41[36]);
  *(_QWORD *)&v73[34] = aTemporaryDirec_0;
  *((_QWORD *)&v73[34] + 1) = 19LL;
  LODWORD(v73[36]) = 84;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aUseDirForTempo, 44LL);
  v31 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *((_QWORD *)&v73[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v73[27] + 8);
  *((_QWORD *)&v73[27] + 1) = v31;
  v73[28] = v38;
  memcpy(v41, v73, sizeof(v41));
  *(_QWORD *)&v39 = aDir;
  *((_QWORD *)&v39 + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v124, v41);
  v124[589] = 4;
  memcpy(v41, v124, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v97, v41);
  memcpy(v96, v97, sizeof(v96));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aCompressProgra;
  *((_QWORD *)&v41[33] + 1) = 16LL;
  memcpy(v78, v41, 0x220uLL);
  v78[35] = v41[35];
  v78[36] = v41[36];
  *(_QWORD *)&v78[34] = aCompressProgra;
  *((_QWORD *)&v78[34] + 1) = 16LL;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aCompressTempor, 115LL);
  v32 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *((_QWORD *)&v78[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v78[27] + 8);
  *((_QWORD *)&v78[27] + 1) = v32;
  v78[28] = v38;
  memcpy(v41, v78, sizeof(v41));
  *(_QWORD *)&v39 = aProg;
  *((_QWORD *)&v39 + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v125, v41);
  v125[589] = 6;
  memcpy(v41, v125, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v96, v41);
  memcpy(v95, v96, sizeof(v95));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aBatchSize_0;
  *((_QWORD *)&v41[33] + 1) = 10LL;
  memcpy(v79, v41, 0x220uLL);
  v79[35] = v41[35];
  v79[36] = v41[36];
  *(_QWORD *)&v79[34] = aBatchSize_0;
  *((_QWORD *)&v79[34] + 1) = 10LL;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aMergeAtMostNMe, 37LL);
  v33 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *((_QWORD *)&v79[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v79[27] + 8);
  *((_QWORD *)&v79[27] + 1) = v33;
  v79[28] = v38;
  memcpy(v41, v79, sizeof(v41));
  *(_QWORD *)&v39 = aNMerge;
  *((_QWORD *)&v39 + 1) = 7LL;
  clap_builder::builder::arg::Arg::value_names(v136, v41);
  memcpy(v41, v136, sizeof(v41));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v95, v41);
  memcpy(v94, v95, sizeof(v94));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aFiles0From_0;
  *((_QWORD *)&v41[33] + 1) = 11LL;
  memcpy(v80, v41, 0x220uLL);
  v80[35] = v41[35];
  v80[36] = v41[36];
  *(_QWORD *)&v80[34] = aFiles0From_0;
  *((_QWORD *)&v80[34] + 1) = 11LL;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aReadInputFromT, 63LL);
  v34 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *((_QWORD *)&v80[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v80[27] + 8);
  *((_QWORD *)&v80[27] + 1) = v34;
  v80[28] = v38;
  memcpy(v41, v80, sizeof(v41));
  *(_QWORD *)&v39 = aNulFiles;
  *((_QWORD *)&v39 + 1) = 9LL;
  clap_builder::builder::arg::Arg::value_names(v126, v41);
  BYTE12(v126[36]) = 1;
  memcpy(v87, v126, sizeof(v87));
  if ( v87[10] >= 4uLL && v87[10] != 5LL )
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)(&v87[11]);
  v87[10] = 2LL;
  memcpy(v41, v87, 0x24DuLL);
  BYTE13(v41[36]) = 3;
  HIWORD(v41[36]) = HIWORD(v87[73]);
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v94, v41);
  memcpy(v93, v94, sizeof(v93));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aDebug_0;
  *((_QWORD *)&v41[33] + 1) = 5LL;
  memcpy(v74, v41, 0x220uLL);
  *(_OWORD *)&v74[560] = v41[35];
  *(_OWORD *)&v74[576] = v41[36];
  *(_QWORD *)&v74[544] = aDebug_0;
  *(_QWORD *)&v74[552] = 5LL;
  *(_QWORD *)&v41[0] = 0LL;
  *((_QWORD *)&v41[0] + 1) = 1LL;
  *(_QWORD *)&v41[1] = 0LL;
  alloc::string::String::push_str(v41, aUnderlineThePa, 66LL);
  v35 = *(_QWORD *)&v41[0];
  v39 = *(_OWORD *)((char *)v41 + 8);
  if ( *(_QWORD *)&v41[0] != 0x8000000000000000LL )
    v38 = v39;
  if ( *(_QWORD *)&v74[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v74[440]);
  *(_QWORD *)&v74[440] = v35;
  *(_OWORD *)&v74[448] = v38;
  memcpy(v41, v74, 0x24CuLL);
  *(_WORD *)((char *)&v41[36] + 13) = *(_WORD *)&v74[589];
  HIBYTE(v41[36]) = v74[591];
  BYTE12(v41[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v93, v41);
  memcpy(v92, v93, sizeof(v92));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v41);
  *(_QWORD *)&v41[33] = aFiles_0;
  *((_QWORD *)&v41[33] + 1) = 5LL;
  memcpy(v82, v41, 0x24CuLL);
  *(_WORD *)v83 = *(_WORD *)((char *)&v41[36] + 13);
  v83[2] = HIBYTE(v41[36]);
  v82[588] = 1;
  if ( *(_QWORD *)&v82[80] >= 4uLL && *(_QWORD *)&v82[80] != 5LL )
    ((void (__fastcall *)(_BYTE *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)(&v82[88]);
  *(_QWORD *)&v82[80] = 2LL;
  memcpy(v41, v82, 0x24DuLL);
  BYTE13(v41[36]) = 3;
  HIWORD(v41[36]) = *(_WORD *)&v83[1];
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v92, v41);
  v36 = v42;
  memcpy(v42, v92, 0x2C8uLL);
  return v36;
}
