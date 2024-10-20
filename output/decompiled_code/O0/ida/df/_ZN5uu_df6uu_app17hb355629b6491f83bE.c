void *__fastcall uu_df::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  int v5; // ebx
  int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // r14
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // r14
  __int64 v29; // r14
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // r14
  __int64 v35; // r14
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 v40; // r14
  void *v41; // rbx
  __int128 v43; // [rsp-8000h] [rbp-9AD8h]
  _OWORD v44[37]; // [rsp-7FF0h] [rbp-9AC8h] BYREF
  void *v45; // [rsp-7DA0h] [rbp-9878h]
  __int64 v46; // [rsp-7D98h] [rbp-9870h] BYREF
  __int128 v47; // [rsp-7D90h] [rbp-9868h]
  _BYTE v48[592]; // [rsp-7D80h] [rbp-9858h] BYREF
  _BYTE v49[592]; // [rsp-7B30h] [rbp-9608h] BYREF
  _OWORD v50[37]; // [rsp-78E0h] [rbp-93B8h] BYREF
  _OWORD v51[37]; // [rsp-7690h] [rbp-9168h] BYREF
  _OWORD v52[37]; // [rsp-7440h] [rbp-8F18h] BYREF
  _OWORD v53[37]; // [rsp-71F0h] [rbp-8CC8h] BYREF
  _OWORD v54[37]; // [rsp-6FA0h] [rbp-8A78h] BYREF
  _OWORD v55[37]; // [rsp-6D50h] [rbp-8828h] BYREF
  _OWORD v56[37]; // [rsp-6B00h] [rbp-85D8h] BYREF
  _OWORD v57[37]; // [rsp-68B0h] [rbp-8388h] BYREF
  _OWORD v58[37]; // [rsp-6660h] [rbp-8138h] BYREF
  _OWORD v59[37]; // [rsp-6410h] [rbp-7EE8h] BYREF
  _OWORD v60[37]; // [rsp-61C0h] [rbp-7C98h] BYREF
  _OWORD v61[37]; // [rsp-5F70h] [rbp-7A48h] BYREF
  _OWORD v62[37]; // [rsp-5D20h] [rbp-77F8h] BYREF
  _OWORD v63[37]; // [rsp-5AD0h] [rbp-75A8h] BYREF
  _OWORD v64[37]; // [rsp-5880h] [rbp-7358h] BYREF
  _OWORD v65[37]; // [rsp-5630h] [rbp-7108h] BYREF
  _OWORD v66[37]; // [rsp-53E0h] [rbp-6EB8h] BYREF
  _OWORD v67[37]; // [rsp-5190h] [rbp-6C68h] BYREF
  _OWORD v68[37]; // [rsp-4F40h] [rbp-6A18h] BYREF
  _OWORD v69[37]; // [rsp-4CF0h] [rbp-67C8h] BYREF
  _OWORD v70[37]; // [rsp-4A98h] [rbp-6570h] BYREF
  _OWORD v71[37]; // [rsp-4848h] [rbp-6320h] BYREF
  _OWORD v72[37]; // [rsp-45F8h] [rbp-60D0h] BYREF
  _OWORD v73[37]; // [rsp-43A8h] [rbp-5E80h] BYREF
  _OWORD v74[37]; // [rsp-4158h] [rbp-5C30h] BYREF
  _OWORD v75[37]; // [rsp-3F08h] [rbp-59E0h] BYREF
  _QWORD v76[89]; // [rsp-3CB8h] [rbp-5790h] BYREF
  _OWORD v77[37]; // [rsp-39F0h] [rbp-54C8h] BYREF
  _OWORD v78[37]; // [rsp-37A0h] [rbp-5278h] BYREF
  _DWORD v79[178]; // [rsp-3550h] [rbp-5028h] BYREF
  _BYTE v80[592]; // [rsp-3288h] [rbp-4D60h] BYREF
  __int128 v81; // [rsp-3038h] [rbp-4B10h] BYREF
  _BYTE v82[544]; // [rsp-3010h] [rbp-4AE8h] BYREF
  __int64 v83; // [rsp-2DF0h] [rbp-48C8h]
  _OWORD v84[37]; // [rsp-2DE8h] [rbp-48C0h] BYREF
  _OWORD v85[37]; // [rsp-2B98h] [rbp-4670h] BYREF
  _BYTE v86[700]; // [rsp-2948h] [rbp-4420h] BYREF
  int v87; // [rsp-268Ch] [rbp-4164h]
  int v88; // [rsp-2688h] [rbp-4160h]
  int v89; // [rsp-2684h] [rbp-415Ch]
  _BYTE v90[712]; // [rsp-2680h] [rbp-4158h] BYREF
  _BYTE v91[712]; // [rsp-23B8h] [rbp-3E90h] BYREF
  _BYTE v92[712]; // [rsp-20F0h] [rbp-3BC8h] BYREF
  _BYTE v93[712]; // [rsp-1E28h] [rbp-3900h] BYREF
  _BYTE v94[712]; // [rsp-1B60h] [rbp-3638h] BYREF
  _BYTE v95[712]; // [rsp-1898h] [rbp-3370h] BYREF
  _BYTE v96[712]; // [rsp-15D0h] [rbp-30A8h] BYREF
  _BYTE v97[712]; // [rsp-1308h] [rbp-2DE0h] BYREF
  _BYTE v98[712]; // [rsp-1040h] [rbp-2B18h] BYREF
  _BYTE v99[712]; // [rsp-D78h] [rbp-2850h] BYREF
  _BYTE v100[712]; // [rsp-AB0h] [rbp-2588h] BYREF
  _BYTE v101[712]; // [rsp-7E8h] [rbp-22C0h] BYREF
  _BYTE v102[712]; // [rsp-520h] [rbp-1FF8h] BYREF
  _QWORD v103[89]; // [rsp-258h] [rbp-1D30h] BYREF
  _BYTE v104[712]; // [rsp+70h] [rbp-1A68h] BYREF
  _QWORD v105[89]; // [rsp+338h] [rbp-17A0h] BYREF
  _OWORD v106[37]; // [rsp+600h] [rbp-14D8h] BYREF
  _OWORD v107[37]; // [rsp+850h] [rbp-1288h] BYREF
  _OWORD v108[37]; // [rsp+AA0h] [rbp-1038h] BYREF
  _BYTE v109[192]; // [rsp+CF0h] [rbp-DE8h] BYREF
  _OWORD v110[37]; // [rsp+DB0h] [rbp-D28h] BYREF
  _BYTE v111[712]; // [rsp+1000h] [rbp-AD8h] BYREF
  _QWORD v112[74]; // [rsp+12C8h] [rbp-810h] BYREF
  _QWORD v113[89]; // [rsp+1518h] [rbp-5C0h] BYREF
  _OWORD v114[47]; // [rsp+17E0h] [rbp-2F8h] BYREF

  do
    *((_QWORD *)&v51[19] + 1) = 0LL;
  while ( (char *)&v51[19] + 8 != (char *)&v58[-2288] + 8 );
  v45 = a1;
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
    v111,
    v2,
    v3);
  *(_QWORD *)&v111[608] = a0027;
  *(_QWORD *)&v111[616] = 6LL;
  memcpy(v114, v111, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v76, v114);
  uucore::format_usage((unsigned int)&v46);
  v4 = v46;
  if ( v46 != 0x8000000000000000LL )
    v44[0] = v47;
  if ( v76[58] != 0x8000000000000000LL )
    ((void (__fastcall *)(_QWORD *, const char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(
      &v76[58],
      aOptionFile);
  v76[58] = v4;
  *(_OWORD *)&v76[59] = v44[0];
  memcpy(v113, v76, sizeof(v113));
  clap_builder::builder::command::Command::after_help(v86, v113);
  v5 = v87;
  v6 = v88;
  v87 |= 0x80u;
  v88 |= 0x80u;
  memcpy(v79, v86, 0x2BCuLL);
  v79[175] = v5 | 0x40080;
  v79[176] = v6 | 0x40080;
  v79[177] = v89;
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *((_QWORD *)&v44[33] + 1) = 4LL;
  memcpy(v49, v44, 0x220uLL);
  *(_OWORD *)&v49[560] = v44[35];
  *(_OWORD *)&v49[576] = v44[36];
  *(_QWORD *)&v49[544] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *(_QWORD *)&v49[552] = 4LL;
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aPrintHelpInfor, 23LL);
  v7 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *(_QWORD *)&v49[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v49[440]);
  *(_QWORD *)&v49[440] = v7;
  *(_OWORD *)&v49[448] = v43;
  memcpy(v44, v49, 0x24CuLL);
  *(_WORD *)((char *)&v44[36] + 13) = *(_WORD *)&v49[589];
  HIBYTE(v44[36]) = v49[591];
  BYTE12(v44[36]) = 5;
  ((void (__fastcall *)(_DWORD *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v79, v44);
  memcpy(v105, v79, sizeof(v105));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = aAll;
  *((_QWORD *)&v44[33] + 1) = 3LL;
  memcpy(v51, v44, 0x220uLL);
  v51[35] = v44[35];
  *(_QWORD *)((char *)&v51[36] + 4) = *(_QWORD *)((char *)&v44[36] + 4);
  HIDWORD(v51[36]) = HIDWORD(v44[36]);
  *(_QWORD *)&v51[34] = aAll;
  *((_QWORD *)&v51[34] + 1) = 3LL;
  LODWORD(v51[36]) = 97;
  v8 = *(_QWORD *)&v51[9];
  if ( *(_QWORD *)&v51[9] == *(_QWORD *)&v51[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v51[8]);
  v9 = *((_QWORD *)&v51[8] + 1);
  v10 = 16 * v8;
  *(_QWORD *)(*((_QWORD *)&v51[8] + 1) + v10) = aAll;
  *(_QWORD *)(v9 + v10 + 8) = 3LL;
  *(_QWORD *)&v51[9] = v8 + 1;
  memcpy(v59, v51, sizeof(v59));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aIncludeDummyFi, 26LL);
  v11 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v59[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v59[27] + 8);
  *((_QWORD *)&v59[27] + 1) = v11;
  v59[28] = v43;
  memcpy(v44, v59, 0x24CuLL);
  *(_WORD *)((char *)&v44[36] + 13) = *(_WORD *)((char *)&v59[36] + 13);
  HIBYTE(v44[36]) = HIBYTE(v59[36]);
  BYTE12(v44[36]) = 2;
  ((void (__fastcall *)(_QWORD *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v105, v44);
  memcpy(v104, v105, sizeof(v104));
  ((void (__fastcall *)(_BYTE *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v48);
  *(_QWORD *)&v48[528] = anon_6295e1784fd24e8d722933e78c148adb_65_llvm_17845274406068090511;
  *(_QWORD *)&v48[536] = 9LL;
  memcpy(v44, v48, 0x220uLL);
  v44[35] = *(_OWORD *)&v48[560];
  *(_QWORD *)((char *)&v44[36] + 4) = *(_QWORD *)&v48[580];
  HIDWORD(v44[36]) = *(_DWORD *)&v48[588];
  *(_QWORD *)&v44[34] = aBlockSize;
  *((_QWORD *)&v44[34] + 1) = 10LL;
  LODWORD(v44[36]) = 66;
  *(_QWORD *)v48 = &unk_188CC;
  *(_QWORD *)&v48[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v106, v44);
  *(_QWORD *)&v44[0] = aKilo;
  *((_QWORD *)&v44[0] + 1) = 4LL;
  *(_QWORD *)&v44[1] = anon_6295e1784fd24e8d722933e78c148adb_65_llvm_17845274406068090511;
  *((_QWORD *)&v44[1] + 1) = 9LL;
  *(_QWORD *)&v44[2] = 0LL;
  *((_QWORD *)&v44[2] + 1) = 2LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v106[8], v44);
  memcpy(v72, v106, sizeof(v72));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aScaleSizesBySi, 92LL);
  v12 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v72[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v72[27] + 8);
  *((_QWORD *)&v72[27] + 1) = v12;
  v72[28] = v43;
  memcpy(v44, v72, sizeof(v44));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v104, v44);
  memcpy(v103, v104, sizeof(v103));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = aTotal;
  *((_QWORD *)&v44[33] + 1) = 5LL;
  memcpy(v57, v44, 0x220uLL);
  v57[35] = v44[35];
  v57[36] = v44[36];
  *(_QWORD *)&v57[34] = aTotal;
  *((_QWORD *)&v57[34] + 1) = 5LL;
  v13 = *(_QWORD *)&v57[9];
  if ( *(_QWORD *)&v57[9] == *(_QWORD *)&v57[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v57[8]);
  v14 = *((_QWORD *)&v57[8] + 1);
  v15 = 16 * v13;
  *(_QWORD *)(*((_QWORD *)&v57[8] + 1) + v15) = aTotal;
  *(_QWORD *)(v14 + v15 + 8) = 5LL;
  *(_QWORD *)&v57[9] = v13 + 1;
  memcpy(v60, v57, sizeof(v60));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aProduceAGrandT, 21LL);
  v16 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v60[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v60[27] + 8);
  *((_QWORD *)&v60[27] + 1) = v16;
  v60[28] = v43;
  memcpy(v44, v60, 0x24CuLL);
  *(_WORD *)((char *)&v44[36] + 13) = *(_WORD *)((char *)&v60[36] + 13);
  HIBYTE(v44[36]) = HIBYTE(v60[36]);
  BYTE12(v44[36]) = 2;
  ((void (__fastcall *)(_QWORD *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v103, v44);
  memcpy(v102, v103, sizeof(v102));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = aHumanReadableB;
  *((_QWORD *)&v44[33] + 1) = 21LL;
  memcpy(v70, v44, 0x220uLL);
  v70[35] = v44[35];
  *(_QWORD *)((char *)&v70[36] + 4) = *(_QWORD *)((char *)&v44[36] + 4);
  HIDWORD(v70[36]) = HIDWORD(v44[36]);
  *(_QWORD *)&v70[34] = aHumanReadable;
  *((_QWORD *)&v70[34] + 1) = 14LL;
  LODWORD(v70[36]) = 104;
  *(_QWORD *)&v44[0] = aHumanReadableD;
  *((_QWORD *)&v44[0] + 1) = 22LL;
  *(_QWORD *)&v44[1] = aHumanReadableB;
  *((_QWORD *)&v44[1] + 1) = 21LL;
  *(_QWORD *)&v44[2] = 0LL;
  *((_QWORD *)&v44[2] + 1) = 2LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v70[8], v44);
  memcpy(v61, v70, sizeof(v61));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aPrintSizesInHu, 55LL);
  v17 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v61[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v61[27] + 8);
  *((_QWORD *)&v61[27] + 1) = v17;
  v61[28] = v43;
  memcpy(v44, v61, 0x24CuLL);
  *(_WORD *)((char *)&v44[36] + 13) = *(_WORD *)((char *)&v61[36] + 13);
  HIBYTE(v44[36]) = HIBYTE(v61[36]);
  BYTE12(v44[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v102, v44);
  memcpy(v101, v102, sizeof(v101));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = aHumanReadableD;
  *((_QWORD *)&v44[33] + 1) = 22LL;
  memcpy(v71, v44, 0x220uLL);
  v71[35] = v44[35];
  *(_QWORD *)((char *)&v71[36] + 4) = *(_QWORD *)((char *)&v44[36] + 4);
  HIDWORD(v71[36]) = HIDWORD(v44[36]);
  *(_QWORD *)&v71[34] = aSi;
  *((_QWORD *)&v71[34] + 1) = 2LL;
  LODWORD(v71[36]) = 72;
  *(_QWORD *)&v44[0] = aHumanReadableB;
  *((_QWORD *)&v44[0] + 1) = 21LL;
  *(_QWORD *)&v44[1] = aHumanReadableD;
  *((_QWORD *)&v44[1] + 1) = 22LL;
  *(_QWORD *)&v44[2] = 0LL;
  *((_QWORD *)&v44[2] + 1) = 2LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v71[8], v44);
  memcpy(v62, v71, sizeof(v62));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aLikewiseButUse, 41LL);
  v18 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v62[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v62[27] + 8);
  *((_QWORD *)&v62[27] + 1) = v18;
  v62[28] = v43;
  memcpy(v44, v62, 0x24CuLL);
  *(_WORD *)((char *)&v44[36] + 13) = *(_WORD *)((char *)&v62[36] + 13);
  HIBYTE(v44[36]) = HIBYTE(v62[36]);
  BYTE12(v44[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v101, v44);
  memcpy(v100, v101, sizeof(v100));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = anon_6295e1784fd24e8d722933e78c148adb_68_llvm_17845274406068090511;
  *((_QWORD *)&v44[33] + 1) = 6LL;
  memcpy(v52, v44, 0x220uLL);
  v52[35] = v44[35];
  *(_QWORD *)((char *)&v52[36] + 4) = *(_QWORD *)((char *)&v44[36] + 4);
  HIDWORD(v52[36]) = HIDWORD(v44[36]);
  *(_QWORD *)&v52[34] = anon_6295e1784fd24e8d722933e78c148adb_68_llvm_17845274406068090511;
  *((_QWORD *)&v52[34] + 1) = 6LL;
  LODWORD(v52[36]) = 105;
  v19 = *(_QWORD *)&v52[9];
  if ( *(_QWORD *)&v52[9] == *(_QWORD *)&v52[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v52[8]);
  v20 = *((_QWORD *)&v52[8] + 1);
  v21 = 16 * v19;
  *(_QWORD *)(*((_QWORD *)&v52[8] + 1) + v21) = anon_6295e1784fd24e8d722933e78c148adb_68_llvm_17845274406068090511;
  *(_QWORD *)(v20 + v21 + 8) = 6LL;
  *(_QWORD *)&v52[9] = v19 + 1;
  memcpy(v63, v52, sizeof(v63));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aListInodeInfor, 45LL);
  v22 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v63[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v63[27] + 8);
  *((_QWORD *)&v63[27] + 1) = v22;
  v63[28] = v43;
  memcpy(v44, v63, 0x24CuLL);
  *(_WORD *)((char *)&v44[36] + 13) = *(_WORD *)((char *)&v63[36] + 13);
  HIBYTE(v44[36]) = HIBYTE(v63[36]);
  BYTE12(v44[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v100, v44);
  memcpy(v99, v100, sizeof(v99));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = aKilo;
  *((_QWORD *)&v44[33] + 1) = 4LL;
  memcpy(v58, v44, 0x240uLL);
  *(_QWORD *)((char *)&v58[36] + 4) = *(_QWORD *)((char *)&v44[36] + 4);
  HIDWORD(v58[36]) = HIDWORD(v44[36]);
  LODWORD(v58[36]) = 107;
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aLikeBlockSize1, 20LL);
  v23 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v44[0] = *(_OWORD *)v48;
  if ( *((_QWORD *)&v58[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v58[27] + 8);
  *((_QWORD *)&v58[27] + 1) = v23;
  v58[28] = v44[0];
  memcpy(v80, v58, sizeof(v80));
  *(_QWORD *)&v44[0] = anon_6295e1784fd24e8d722933e78c148adb_65_llvm_17845274406068090511;
  *((_QWORD *)&v44[0] + 1) = 9LL;
  *(_QWORD *)&v44[1] = aKilo;
  *((_QWORD *)&v44[1] + 1) = 4LL;
  *(_QWORD *)&v44[2] = 0LL;
  *((_QWORD *)&v44[2] + 1) = 2LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v80[128], v44);
  memcpy(v44, v80, 0x24CuLL);
  *(_WORD *)((char *)&v44[36] + 13) = *(_WORD *)&v80[589];
  HIBYTE(v44[36]) = v80[591];
  BYTE12(v44[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v99, v44);
  memcpy(v98, v99, sizeof(v98));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = aLocal;
  *((_QWORD *)&v44[33] + 1) = 5LL;
  memcpy(v53, v44, 0x220uLL);
  v53[35] = v44[35];
  *(_QWORD *)((char *)&v53[36] + 4) = *(_QWORD *)((char *)&v44[36] + 4);
  HIDWORD(v53[36]) = HIDWORD(v44[36]);
  *(_QWORD *)&v53[34] = aLocal;
  *((_QWORD *)&v53[34] + 1) = 5LL;
  LODWORD(v53[36]) = 108;
  v24 = *(_QWORD *)&v53[9];
  if ( *(_QWORD *)&v53[9] == *(_QWORD *)&v53[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v53[8]);
  v25 = *((_QWORD *)&v53[8] + 1);
  v26 = 16 * v24;
  *(_QWORD *)(*((_QWORD *)&v53[8] + 1) + v26) = aLocal;
  *(_QWORD *)(v25 + v26 + 8) = 5LL;
  *(_QWORD *)&v53[9] = v24 + 1;
  memcpy(v64, v53, sizeof(v64));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aLimitListingTo, 35LL);
  v27 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v64[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v64[27] + 8);
  *((_QWORD *)&v64[27] + 1) = v27;
  v64[28] = v43;
  memcpy(v44, v64, 0x24CuLL);
  *(_WORD *)((char *)&v44[36] + 13) = *(_WORD *)((char *)&v64[36] + 13);
  HIBYTE(v44[36]) = HIBYTE(v64[36]);
  BYTE12(v44[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v98, v44);
  memcpy(v97, v98, sizeof(v97));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = aNoSync;
  *((_QWORD *)&v44[33] + 1) = 7LL;
  memcpy(v77, v44, 0x220uLL);
  v77[35] = v44[35];
  v77[36] = v44[36];
  *(_QWORD *)&v77[34] = aNoSync;
  *((_QWORD *)&v77[34] + 1) = 7LL;
  *(_QWORD *)&v44[0] = aSync_0;
  *((_QWORD *)&v44[0] + 1) = 4LL;
  *(_QWORD *)&v44[1] = aNoSync;
  *((_QWORD *)&v44[1] + 1) = 7LL;
  *(_QWORD *)&v44[2] = 0LL;
  *((_QWORD *)&v44[2] + 1) = 2LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v77[8], v44);
  memcpy(v65, v77, sizeof(v65));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aDoNotInvokeSyn, 54LL);
  v28 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v65[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v65[27] + 8);
  *((_QWORD *)&v65[27] + 1) = v28;
  v65[28] = v43;
  memcpy(v44, v65, 0x24CuLL);
  *(_WORD *)((char *)&v44[36] + 13) = *(_WORD *)((char *)&v65[36] + 13);
  HIBYTE(v44[36]) = HIBYTE(v65[36]);
  BYTE12(v44[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v97, v44);
  memcpy(v96, v97, sizeof(v96));
  ((void (__fastcall *)(_BYTE *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v48);
  *(_QWORD *)&v48[528] = anon_6295e1784fd24e8d722933e78c148adb_72_llvm_17845274406068090511;
  *(_QWORD *)&v48[536] = 6LL;
  memcpy(v44, v48, 0x220uLL);
  v44[35] = *(_OWORD *)&v48[560];
  v44[36] = *(_OWORD *)&v48[576];
  *(_QWORD *)&v44[34] = anon_6295e1784fd24e8d722933e78c148adb_72_llvm_17845274406068090511;
  *((_QWORD *)&v44[34] + 1) = 6LL;
  *(_QWORD *)v48 = aFieldList;
  *(_QWORD *)&v48[8] = 10LL;
  clap_builder::builder::arg::Arg::value_names(&v81, v44);
  BYTE4(v83) = 1;
  v69[0] = v81;
  memcpy((char *)&v69[2] + 8, v82, 0x220uLL);
  v69[1] = 1uLL;
  *(_QWORD *)&v69[2] = -1LL;
  *((_QWORD *)&v69[36] + 1) = v83 | 0x80;
  ((void (__fastcall *)(char *, __int64))core::option::Option<T>::get_or_insert)((char *)&v69[36] + 4, 44LL);
  memcpy(v112, v69, sizeof(v112));
  memcpy(v109, &uu_df::OUTPUT_FIELD_LIST, sizeof(v109));
  clap_builder::builder::arg::Arg::value_parser(v85, v112, v109);
  memcpy(v44, &uu_df::OUTPUT_FIELD_LIST, 0xC0uLL);
  *(_QWORD *)&v44[12] = 0LL;
  *((_QWORD *)&v44[12] + 1) = 12LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v48,
    v44);
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::raw_vec::RawVec<T,A>::current_memory)(v44, &v85[26]);
  if ( *((_QWORD *)&v44[0] + 1) )
    ((void (__fastcall *)(_OWORD *, _QWORD, _QWORD, _QWORD))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
      &v85[27],
      *(_QWORD *)&v44[0],
      *((_QWORD *)&v44[0] + 1),
      *(_QWORD *)&v44[1]);
  *(_QWORD *)&v85[27] = *(_QWORD *)&v48[16];
  v85[26] = *(_OWORD *)v48;
  memcpy(v84, v85, sizeof(v84));
  *(_QWORD *)&v44[0] = aSource;
  *((_QWORD *)&v44[0] + 1) = 6LL;
  *(_QWORD *)&v44[1] = aSize;
  *((_QWORD *)&v44[1] + 1) = 4LL;
  *(_QWORD *)&v44[2] = aUsed;
  *((_QWORD *)&v44[2] + 1) = 4LL;
  *(_QWORD *)&v44[3] = aAvail;
  *((_QWORD *)&v44[3] + 1) = 5LL;
  *(_QWORD *)&v44[4] = aPcent;
  *((_QWORD *)&v44[4] + 1) = 5LL;
  *(_QWORD *)&v44[5] = aTarget;
  *((_QWORD *)&v44[5] + 1) = 6LL;
  *(_QWORD *)&v44[6] = 0LL;
  *((_QWORD *)&v44[6] + 1) = 6LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v48,
    v44);
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::raw_vec::RawVec<T,A>::current_memory)(v44, &v84[23]);
  if ( *((_QWORD *)&v44[0] + 1) )
    ((void (__fastcall *)(_OWORD *, _QWORD, _QWORD, _QWORD))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
      &v84[24],
      *(_QWORD *)&v44[0],
      *((_QWORD *)&v44[0] + 1),
      *(_QWORD *)&v44[1]);
  *(_QWORD *)&v84[24] = *(_QWORD *)&v48[16];
  v84[23] = *(_OWORD *)v48;
  memcpy(v107, v84, sizeof(v107));
  *(_QWORD *)&v44[0] = anon_6295e1784fd24e8d722933e78c148adb_68_llvm_17845274406068090511;
  *((_QWORD *)&v44[0] + 1) = 6LL;
  *(_QWORD *)&v44[1] = anon_6295e1784fd24e8d722933e78c148adb_74_llvm_17845274406068090511;
  *((_QWORD *)&v44[1] + 1) = 11LL;
  *(_QWORD *)&v44[2] = anon_6295e1784fd24e8d722933e78c148adb_77_llvm_17845274406068090511;
  *((_QWORD *)&v44[2] + 1) = 10LL;
  *(_QWORD *)&v44[3] = 0LL;
  *((_QWORD *)&v44[3] + 1) = 3LL;
  ((void (__fastcall *)(char *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)((char *)&v107[6] + 8, v44);
  memcpy(v73, v107, sizeof(v73));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aUseTheOutputFo, 90LL);
  v29 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v73[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v73[27] + 8);
  *((_QWORD *)&v73[27] + 1) = v29;
  v73[28] = v43;
  memcpy(v44, v73, sizeof(v44));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v96, v44);
  memcpy(v95, v96, sizeof(v95));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = anon_6295e1784fd24e8d722933e78c148adb_74_llvm_17845274406068090511;
  *((_QWORD *)&v44[33] + 1) = 11LL;
  memcpy(v54, v44, 0x220uLL);
  v54[35] = v44[35];
  *(_QWORD *)((char *)&v54[36] + 4) = *(_QWORD *)((char *)&v44[36] + 4);
  HIDWORD(v54[36]) = HIDWORD(v44[36]);
  *(_QWORD *)&v54[34] = anon_6295e1784fd24e8d722933e78c148adb_74_llvm_17845274406068090511;
  *((_QWORD *)&v54[34] + 1) = 11LL;
  LODWORD(v54[36]) = 80;
  v30 = *(_QWORD *)&v54[9];
  if ( *(_QWORD *)&v54[9] == *(_QWORD *)&v54[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v54[8]);
  v31 = *((_QWORD *)&v54[8] + 1);
  v32 = 16 * v30;
  *(_QWORD *)(*((_QWORD *)&v54[8] + 1) + v32) = anon_6295e1784fd24e8d722933e78c148adb_74_llvm_17845274406068090511;
  *(_QWORD *)(v31 + v32 + 8) = 11LL;
  *(_QWORD *)&v54[9] = v30 + 1;
  memcpy(v66, v54, sizeof(v66));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aUseThePosixOut, 27LL);
  v33 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v66[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v66[27] + 8);
  *((_QWORD *)&v66[27] + 1) = v33;
  v66[28] = v43;
  memcpy(v44, v66, 0x24CuLL);
  *(_WORD *)((char *)&v44[36] + 13) = *(_WORD *)((char *)&v66[36] + 13);
  HIBYTE(v44[36]) = HIBYTE(v66[36]);
  BYTE12(v44[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v95, v44);
  memcpy(v94, v95, sizeof(v94));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = aSync_0;
  *((_QWORD *)&v44[33] + 1) = 4LL;
  memcpy(v78, v44, 0x220uLL);
  v78[35] = v44[35];
  v78[36] = v44[36];
  *(_QWORD *)&v78[34] = aSync_0;
  *((_QWORD *)&v78[34] + 1) = 4LL;
  *(_QWORD *)&v44[0] = aNoSync;
  *((_QWORD *)&v44[0] + 1) = 7LL;
  *(_QWORD *)&v44[1] = aSync_0;
  *((_QWORD *)&v44[1] + 1) = 4LL;
  *(_QWORD *)&v44[2] = 0LL;
  *((_QWORD *)&v44[2] + 1) = 2LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v78[8], v44);
  memcpy(v67, v78, sizeof(v67));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aInvokeSyncBefo, 56LL);
  v34 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v67[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v67[27] + 8);
  *((_QWORD *)&v67[27] + 1) = v34;
  v67[28] = v43;
  memcpy(v44, v67, 0x24CuLL);
  *(_WORD *)((char *)&v44[36] + 13) = *(_WORD *)((char *)&v67[36] + 13);
  HIBYTE(v44[36]) = HIBYTE(v67[36]);
  BYTE12(v44[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v94, v44);
  memcpy(v93, v94, sizeof(v93));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = &unk_189A0;
  *((_QWORD *)&v44[33] + 1) = 4LL;
  memcpy(v56, v44, 0x220uLL);
  v56[35] = v44[35];
  *(_QWORD *)((char *)&v56[36] + 4) = *(_QWORD *)((char *)&v44[36] + 4);
  HIDWORD(v56[36]) = HIDWORD(v44[36]);
  *(_QWORD *)&v56[34] = &unk_189A0;
  *((_QWORD *)&v56[34] + 1) = 4LL;
  LODWORD(v56[36]) = 116;
  if ( *(_QWORD *)&v56[5] >= 4uLL && *(_QWORD *)&v56[5] != 5LL )
    ((void (__fastcall *)(char *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)((char *)&v56[5] + 8);
  *(_QWORD *)&v56[5] = 2LL;
  memcpy(v44, v56, sizeof(v44));
  *(_QWORD *)v48 = aType;
  *(_QWORD *)&v48[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v110, v44);
  BYTE12(v110[36]) = 1;
  memcpy(v74, v110, sizeof(v74));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aLimitListingTo_0, 42LL);
  v35 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v74[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v74[27] + 8);
  *((_QWORD *)&v74[27] + 1) = v35;
  v74[28] = v43;
  memcpy(v44, v74, sizeof(v44));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v93, v44);
  memcpy(v92, v93, sizeof(v92));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = anon_6295e1784fd24e8d722933e78c148adb_77_llvm_17845274406068090511;
  *((_QWORD *)&v44[33] + 1) = 10LL;
  memcpy(v55, v44, 0x220uLL);
  v55[35] = v44[35];
  *(_QWORD *)((char *)&v55[36] + 4) = *(_QWORD *)((char *)&v44[36] + 4);
  HIDWORD(v55[36]) = HIDWORD(v44[36]);
  *(_QWORD *)&v55[34] = anon_6295e1784fd24e8d722933e78c148adb_77_llvm_17845274406068090511;
  *((_QWORD *)&v55[34] + 1) = 10LL;
  LODWORD(v55[36]) = 84;
  v36 = *(_QWORD *)&v55[9];
  if ( *(_QWORD *)&v55[9] == *(_QWORD *)&v55[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v55[8]);
  v37 = *((_QWORD *)&v55[8] + 1);
  v38 = 16 * v36;
  *(_QWORD *)(*((_QWORD *)&v55[8] + 1) + v38) = anon_6295e1784fd24e8d722933e78c148adb_77_llvm_17845274406068090511;
  *(_QWORD *)(v37 + v38 + 8) = 10LL;
  *(_QWORD *)&v55[9] = v36 + 1;
  memcpy(v68, v55, sizeof(v68));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aPrintFileSyste, 22LL);
  v39 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v68[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v68[27] + 8);
  *((_QWORD *)&v68[27] + 1) = v39;
  v68[28] = v43;
  memcpy(v44, v68, 0x24CuLL);
  *(_WORD *)((char *)&v44[36] + 13) = *(_WORD *)((char *)&v68[36] + 13);
  HIBYTE(v44[36]) = HIBYTE(v68[36]);
  BYTE12(v44[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v92, v44);
  memcpy(v91, v92, sizeof(v91));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v44);
  *(_QWORD *)&v44[33] = aExcludeType;
  *((_QWORD *)&v44[33] + 1) = 12LL;
  memcpy(v50, v44, 0x220uLL);
  v50[35] = v44[35];
  *(_WORD *)((char *)&v50[36] + 13) = *(_WORD *)((char *)&v44[36] + 13);
  HIBYTE(v50[36]) = HIBYTE(v44[36]);
  *(_QWORD *)&v50[34] = aExcludeType;
  *((_QWORD *)&v50[34] + 1) = 12LL;
  LODWORD(v50[36]) = 120;
  *(_QWORD *)((char *)&v50[36] + 4) = *(_QWORD *)((char *)&v44[36] + 4);
  BYTE12(v50[36]) = 1;
  if ( *(_QWORD *)&v50[5] >= 4uLL && *(_QWORD *)&v50[5] != 5LL )
    ((void (__fastcall *)(char *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)((char *)&v50[5] + 8);
  *(_QWORD *)&v50[5] = 2LL;
  memcpy(v44, v50, sizeof(v44));
  *(_QWORD *)v48 = aType;
  *(_QWORD *)&v48[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v108, v44);
  ((void (__fastcall *)(char *, __int64))core::option::Option<T>::get_or_insert)((char *)&v108[36] + 4, 44LL);
  memcpy(v75, v108, sizeof(v75));
  *(_QWORD *)&v44[0] = 0LL;
  *((_QWORD *)&v44[0] + 1) = 1LL;
  *(_QWORD *)&v44[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v44, aLimitListingTo_1, 46LL);
  v40 = *(_QWORD *)&v44[0];
  *(_OWORD *)v48 = *(_OWORD *)((char *)v44 + 8);
  if ( *(_QWORD *)&v44[0] != 0x8000000000000000LL )
    v43 = *(_OWORD *)v48;
  if ( *((_QWORD *)&v75[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v75[27] + 8);
  *((_QWORD *)&v75[27] + 1) = v40;
  v75[28] = v43;
  memcpy(v44, v75, sizeof(v44));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v91, v44);
  memcpy(v90, v91, sizeof(v90));
  ((void (__fastcall *)(_BYTE *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v48);
  *(_QWORD *)&v48[528] = aPaths;
  *(_QWORD *)&v48[536] = 5LL;
  memcpy(v44, v48, 0x24CuLL);
  WORD6(v44[36]) = 513;
  HIWORD(v44[36]) = *(_WORD *)&v48[590];
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v90, v44);
  v41 = v45;
  memcpy(v45, v90, 0x2C8uLL);
  return v41;
}
