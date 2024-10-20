void *__fastcall uu_ptx::uu_app(void *dest)
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
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // r14
  __int64 v20; // r14
  __int128 v22; // [rsp+0h] [rbp-78C8h]
  _OWORD v23[37]; // [rsp+10h] [rbp-78B8h] BYREF
  __int64 v24; // [rsp+268h] [rbp-7660h] BYREF
  __int128 v25; // [rsp+270h] [rbp-7658h]
  _BYTE v26[584]; // [rsp+280h] [rbp-7648h] BYREF
  int v27; // [rsp+4C8h] [rbp-7400h]
  __int16 v28; // [rsp+4CEh] [rbp-73FAh]
  _BYTE v29[588]; // [rsp+4D8h] [rbp-73F0h] BYREF
  int v30; // [rsp+724h] [rbp-71A4h]
  _BYTE v31[588]; // [rsp+728h] [rbp-71A0h] BYREF
  int v32; // [rsp+974h] [rbp-6F54h]
  _BYTE v33[588]; // [rsp+978h] [rbp-6F50h] BYREF
  int v34; // [rsp+BC4h] [rbp-6D04h]
  _BYTE v35[588]; // [rsp+BC8h] [rbp-6D00h] BYREF
  int v36; // [rsp+E14h] [rbp-6AB4h]
  _BYTE v37[588]; // [rsp+E18h] [rbp-6AB0h] BYREF
  int v38; // [rsp+1064h] [rbp-6864h]
  _BYTE v39[588]; // [rsp+1068h] [rbp-6860h] BYREF
  int v40; // [rsp+12B4h] [rbp-6614h]
  _OWORD v41[37]; // [rsp+12B8h] [rbp-6610h] BYREF
  _OWORD v42[37]; // [rsp+1508h] [rbp-63C0h] BYREF
  _OWORD v43[37]; // [rsp+1758h] [rbp-6170h] BYREF
  _OWORD v44[37]; // [rsp+19A8h] [rbp-5F20h] BYREF
  _OWORD v45[37]; // [rsp+1BF8h] [rbp-5CD0h] BYREF
  _OWORD v46[37]; // [rsp+1E48h] [rbp-5A80h] BYREF
  _OWORD v47[37]; // [rsp+2098h] [rbp-5830h] BYREF
  _OWORD v48[37]; // [rsp+22E8h] [rbp-55E0h] BYREF
  _OWORD v49[37]; // [rsp+2538h] [rbp-5390h] BYREF
  _OWORD v50[37]; // [rsp+2788h] [rbp-5140h] BYREF
  _QWORD desta[89]; // [rsp+29D8h] [rbp-4EF0h] BYREF
  _DWORD v52[178]; // [rsp+2CA0h] [rbp-4C28h] BYREF
  _BYTE v53[712]; // [rsp+2F68h] [rbp-4960h] BYREF
  _BYTE v54[712]; // [rsp+3230h] [rbp-4698h] BYREF
  _BYTE v55[712]; // [rsp+34F8h] [rbp-43D0h] BYREF
  _QWORD v56[89]; // [rsp+37C0h] [rbp-4108h] BYREF
  _BYTE v57[712]; // [rsp+3A88h] [rbp-3E40h] BYREF
  _BYTE v58[712]; // [rsp+3D50h] [rbp-3B78h] BYREF
  _BYTE v59[712]; // [rsp+4018h] [rbp-38B0h] BYREF
  _BYTE v60[712]; // [rsp+42E0h] [rbp-35E8h] BYREF
  _BYTE v61[712]; // [rsp+45A8h] [rbp-3320h] BYREF
  _QWORD v62[89]; // [rsp+4870h] [rbp-3058h] BYREF
  _BYTE v63[712]; // [rsp+4B38h] [rbp-2D90h] BYREF
  _BYTE v64[712]; // [rsp+4E00h] [rbp-2AC8h] BYREF
  _BYTE v65[712]; // [rsp+50C8h] [rbp-2800h] BYREF
  _BYTE v66[712]; // [rsp+5390h] [rbp-2538h] BYREF
  _QWORD v67[89]; // [rsp+5658h] [rbp-2270h] BYREF
  _BYTE v68[712]; // [rsp+5920h] [rbp-1FA8h] BYREF
  _BYTE v69[592]; // [rsp+5BE8h] [rbp-1CE0h] BYREF
  _BYTE v70[592]; // [rsp+5E38h] [rbp-1A90h] BYREF
  _BYTE v71[592]; // [rsp+6088h] [rbp-1840h] BYREF
  _BYTE v72[592]; // [rsp+62D8h] [rbp-15F0h] BYREF
  _QWORD src[89]; // [rsp+6528h] [rbp-13A0h] BYREF
  _QWORD v74[74]; // [rsp+67F0h] [rbp-10D8h] BYREF
  _BYTE v75[592]; // [rsp+6A40h] [rbp-E88h] BYREF
  _BYTE v76[592]; // [rsp+6C90h] [rbp-C38h] BYREF
  _BYTE v77[592]; // [rsp+6EE0h] [rbp-9E8h] BYREF
  _BYTE v78[592]; // [rsp+7130h] [rbp-798h] BYREF
  _BYTE v79[592]; // [rsp+7380h] [rbp-548h] BYREF
  _BYTE v80[760]; // [rsp+75D0h] [rbp-2F8h] BYREF

  v74[21] = 0LL;
  v67[72] = 0LL;
  v62[5] = 0LL;
  v56[27] = 0LL;
  *(_QWORD *)&v50[17] = 0LL;
  *(_QWORD *)&v43[20] = 0LL;
  *(_QWORD *)&v31[368] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(v80, v2, v3);
  clap_builder::builder::command::Command::about(src, v80);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, sizeof(desta));
  uucore::format_usage((unsigned int)&v24);
  v4 = v24;
  if ( v24 != 0x8000000000000000LL )
    v23[0] = v25;
  if ( desta[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&desta[58], aOptionInputGOp);
  desta[58] = v4;
  *(_OWORD *)&desta[59] = v23[0];
  memcpy(v52, desta, 0x2BCuLL);
  *(_QWORD *)&v52[175] = *(_QWORD *)((char *)&desta[87] + 4) | 0x8000000080LL;
  v52[177] = HIDWORD(desta[88]);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[528] = anon_8ffa798e1188aa055e40a44719e13e52_31_llvm_11133899800467015185;
  *(_QWORD *)&v26[536] = 4LL;
  memcpy(v23, v26, 0x248uLL);
  DWORD2(v23[36]) = v27 | 4;
  WORD6(v23[36]) = 769;
  HIWORD(v23[36]) = v28;
  clap_builder::builder::command::Command::arg_internal(v52, v23);
  memcpy(v68, v52, sizeof(v68));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_32_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 14LL;
  memcpy(v29, v23, 0x220uLL);
  *(_OWORD *)&v29[560] = v23[35];
  *(_QWORD *)&v29[580] = *(_QWORD *)((char *)&v23[36] + 4);
  v30 = HIDWORD(v23[36]);
  *(_QWORD *)&v29[544] = anon_8ffa798e1188aa055e40a44719e13e52_32_llvm_11133899800467015185;
  *(_QWORD *)&v29[552] = 14LL;
  *(_DWORD *)&v29[576] = 65;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aOutputAutomati, 41LL);
  v5 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *(_QWORD *)&v29[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29[440], aOutputAutomati);
  *(_QWORD *)&v29[440] = v5;
  *(_OWORD *)&v29[448] = v22;
  memcpy(v23, v29, 0x24CuLL);
  *(_WORD *)((char *)&v23[36] + 13) = *(_WORD *)((char *)&v30 + 1);
  HIBYTE(v23[36]) = HIBYTE(v30);
  BYTE12(v23[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v68, v23);
  memcpy(v67, v68, sizeof(v67));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_33_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 11LL;
  memcpy(v31, v23, 0x220uLL);
  *(_OWORD *)&v31[560] = v23[35];
  *(_QWORD *)&v31[580] = *(_QWORD *)((char *)&v23[36] + 4);
  v32 = HIDWORD(v23[36]);
  *(_QWORD *)&v31[544] = anon_8ffa798e1188aa055e40a44719e13e52_33_llvm_11133899800467015185;
  *(_QWORD *)&v31[552] = 11LL;
  *(_DWORD *)&v31[576] = 71;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aBehaveMoreLike, 31LL);
  v6 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *(_QWORD *)&v31[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31[440], aBehaveMoreLike);
  *(_QWORD *)&v31[440] = v6;
  *(_OWORD *)&v31[448] = v22;
  memcpy(v23, v31, 0x24CuLL);
  *(_WORD *)((char *)&v23[36] + 13) = *(_WORD *)((char *)&v32 + 1);
  HIBYTE(v23[36]) = HIBYTE(v32);
  BYTE12(v23[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v67, v23);
  memcpy(v66, v67, sizeof(v66));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_34_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 15LL;
  memcpy(v41, v23, 0x220uLL);
  v41[35] = v23[35];
  *(_QWORD *)((char *)&v41[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v41[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v41[34] = anon_8ffa798e1188aa055e40a44719e13e52_34_llvm_11133899800467015185;
  *((_QWORD *)&v41[34] + 1) = 15LL;
  LODWORD(v41[36]) = 70;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aUseStringForFl, 40LL);
  v7 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *((_QWORD *)&v41[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v41[27] + 8, aUseStringForFl);
  *((_QWORD *)&v41[27] + 1) = v7;
  v41[28] = v22;
  memcpy(v23, v41, sizeof(v23));
  *(_QWORD *)v26 = aString;
  *(_QWORD *)&v26[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v74, v23);
  memcpy(v23, v74, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v66, v23);
  memcpy(v65, v66, sizeof(v65));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_35_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 10LL;
  memcpy(v42, v23, 0x220uLL);
  v42[35] = v23[35];
  *(_QWORD *)((char *)&v42[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v42[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v42[34] = anon_8ffa798e1188aa055e40a44719e13e52_35_llvm_11133899800467015185;
  *((_QWORD *)&v42[34] + 1) = 10LL;
  LODWORD(v42[36]) = 77;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aMacroNameToUse, 33LL);
  v8 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *((_QWORD *)&v42[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v42[27] + 8, aMacroNameToUse);
  *((_QWORD *)&v42[27] + 1) = v8;
  v42[28] = v22;
  memcpy(v23, v42, sizeof(v23));
  *(_QWORD *)v26 = aString;
  *(_QWORD *)&v26[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v75, v23);
  memcpy(v23, v75, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v65, v23);
  memcpy(v64, v65, sizeof(v64));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_36_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 11LL;
  memcpy(v33, v23, 0x220uLL);
  *(_OWORD *)&v33[560] = v23[35];
  *(_QWORD *)&v33[580] = *(_QWORD *)((char *)&v23[36] + 4);
  v34 = HIDWORD(v23[36]);
  *(_QWORD *)&v33[544] = anon_8ffa798e1188aa055e40a44719e13e52_36_llvm_11133899800467015185;
  *(_QWORD *)&v33[552] = 11LL;
  *(_DWORD *)&v33[576] = 79;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aGenerateOutput, 34LL);
  v9 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *(_QWORD *)&v33[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v33[440], aGenerateOutput);
  *(_QWORD *)&v33[440] = v9;
  *(_OWORD *)&v33[448] = v22;
  memcpy(v23, v33, 0x24CuLL);
  *(_WORD *)((char *)&v23[36] + 13) = *(_WORD *)((char *)&v34 + 1);
  HIBYTE(v23[36]) = HIBYTE(v34);
  BYTE12(v23[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v64, v23);
  memcpy(v63, v64, sizeof(v63));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_37_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 15LL;
  memcpy(v35, v23, 0x220uLL);
  *(_OWORD *)&v35[560] = v23[35];
  *(_QWORD *)&v35[580] = *(_QWORD *)((char *)&v23[36] + 4);
  v36 = HIDWORD(v23[36]);
  *(_QWORD *)&v35[544] = anon_8ffa798e1188aa055e40a44719e13e52_37_llvm_11133899800467015185;
  *(_QWORD *)&v35[552] = 15LL;
  *(_DWORD *)&v35[576] = 82;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aPutReferencesA, 42LL);
  v10 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *(_QWORD *)&v35[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35[440], aPutReferencesA);
  *(_QWORD *)&v35[440] = v10;
  *(_OWORD *)&v35[448] = v22;
  memcpy(v23, v35, 0x24CuLL);
  *(_WORD *)((char *)&v23[36] + 13) = *(_WORD *)((char *)&v36 + 1);
  HIBYTE(v23[36]) = HIBYTE(v36);
  BYTE12(v23[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v63, v23);
  memcpy(v62, v63, sizeof(v62));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_38_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 15LL;
  memcpy(v43, v23, 0x220uLL);
  v43[35] = v23[35];
  *(_QWORD *)((char *)&v43[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v43[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v43[34] = anon_8ffa798e1188aa055e40a44719e13e52_38_llvm_11133899800467015185;
  *((_QWORD *)&v43[34] + 1) = 15LL;
  LODWORD(v43[36]) = 83;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aForEndOfLinesO, 36LL);
  v11 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *((_QWORD *)&v43[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v43[27] + 8, aForEndOfLinesO);
  *((_QWORD *)&v43[27] + 1) = v11;
  v43[28] = v22;
  memcpy(v23, v43, sizeof(v23));
  *(_QWORD *)v26 = aRegexp;
  *(_QWORD *)&v26[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v76, v23);
  memcpy(v23, v76, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v62, v23);
  memcpy(v61, v62, sizeof(v61));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_39_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 10LL;
  memcpy(v37, v23, 0x220uLL);
  *(_OWORD *)&v37[560] = v23[35];
  *(_QWORD *)&v37[580] = *(_QWORD *)((char *)&v23[36] + 4);
  v38 = HIDWORD(v23[36]);
  *(_QWORD *)&v37[544] = anon_8ffa798e1188aa055e40a44719e13e52_39_llvm_11133899800467015185;
  *(_QWORD *)&v37[552] = 10LL;
  *(_DWORD *)&v37[576] = 84;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aGenerateOutput_0, 33LL);
  v12 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *(_QWORD *)&v37[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37[440], aGenerateOutput_0);
  *(_QWORD *)&v37[440] = v12;
  *(_OWORD *)&v37[448] = v22;
  memcpy(v23, v37, 0x24CuLL);
  *(_WORD *)((char *)&v23[36] + 13) = *(_WORD *)((char *)&v38 + 1);
  HIBYTE(v23[36]) = HIBYTE(v38);
  BYTE12(v23[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v61, v23);
  memcpy(v60, v61, sizeof(v60));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_40_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 11LL;
  memcpy(v44, v23, 0x220uLL);
  v44[35] = v23[35];
  *(_QWORD *)((char *)&v44[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v44[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v44[34] = anon_8ffa798e1188aa055e40a44719e13e52_40_llvm_11133899800467015185;
  *((_QWORD *)&v44[34] + 1) = 11LL;
  LODWORD(v44[36]) = 87;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aUseRegexpToMat, 32LL);
  v13 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *((_QWORD *)&v44[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v44[27] + 8, aUseRegexpToMat);
  *((_QWORD *)&v44[27] + 1) = v13;
  v44[28] = v22;
  memcpy(v23, v44, sizeof(v23));
  *(_QWORD *)v26 = aRegexp;
  *(_QWORD *)&v26[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v77, v23);
  memcpy(v23, v77, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v60, v23);
  memcpy(v59, v60, sizeof(v59));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_41_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 10LL;
  memcpy(v45, v23, 0x220uLL);
  v45[35] = v23[35];
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v45[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v45[34] = anon_8ffa798e1188aa055e40a44719e13e52_41_llvm_11133899800467015185;
  *((_QWORD *)&v45[34] + 1) = 10LL;
  LODWORD(v45[36]) = 98;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aWordBreakChara, 34LL);
  v14 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *((_QWORD *)&v45[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v45[27] + 8, aWordBreakChara);
  *((_QWORD *)&v45[27] + 1) = v14;
  v45[28] = v22;
  memcpy(v23, v45, sizeof(v23));
  *(_QWORD *)v26 = aFile;
  *(_QWORD *)&v26[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v69, v23);
  v69[589] = 3;
  memcpy(v23, v69, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v59, v23);
  memcpy(v58, v59, sizeof(v58));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_42_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 11LL;
  memcpy(v39, v23, 0x220uLL);
  *(_OWORD *)&v39[560] = v23[35];
  *(_QWORD *)&v39[580] = *(_QWORD *)((char *)&v23[36] + 4);
  v40 = HIDWORD(v23[36]);
  *(_QWORD *)&v39[544] = anon_8ffa798e1188aa055e40a44719e13e52_42_llvm_11133899800467015185;
  *(_QWORD *)&v39[552] = 11LL;
  *(_DWORD *)&v39[576] = 102;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aFoldLowerCaseT, 41LL);
  v15 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *(_QWORD *)&v39[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v39[440], aFoldLowerCaseT);
  *(_QWORD *)&v39[440] = v15;
  *(_OWORD *)&v39[448] = v22;
  memcpy(v23, v39, 0x24CuLL);
  *(_WORD *)((char *)&v23[36] + 13) = *(_WORD *)((char *)&v40 + 1);
  HIBYTE(v23[36]) = HIBYTE(v40);
  BYTE12(v23[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v58, v23);
  memcpy(v57, v58, sizeof(v57));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_43_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 8LL;
  memcpy(v46, v23, 0x220uLL);
  v46[35] = v23[35];
  *(_QWORD *)((char *)&v46[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v46[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v46[34] = anon_8ffa798e1188aa055e40a44719e13e52_43_llvm_11133899800467015185;
  *((_QWORD *)&v46[34] + 1) = 8LL;
  LODWORD(v46[36]) = 103;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aGapSizeInColum, 41LL);
  v16 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *((_QWORD *)&v46[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v46[27] + 8, aGapSizeInColum);
  *((_QWORD *)&v46[27] + 1) = v16;
  v46[28] = v22;
  memcpy(v23, v46, sizeof(v23));
  *(_QWORD *)v26 = aNumber;
  *(_QWORD *)&v26[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v78, v23);
  memcpy(v23, v78, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v57, v23);
  memcpy(v56, v57, sizeof(v56));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_44_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 11LL;
  memcpy(v47, v23, 0x220uLL);
  v47[35] = v23[35];
  *(_QWORD *)((char *)&v47[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v47[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v47[34] = anon_8ffa798e1188aa055e40a44719e13e52_44_llvm_11133899800467015185;
  *((_QWORD *)&v47[34] + 1) = 11LL;
  LODWORD(v47[36]) = 105;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aReadIgnoreWord, 31LL);
  v17 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *((_QWORD *)&v47[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v47[27] + 8, aReadIgnoreWord);
  *((_QWORD *)&v47[27] + 1) = v17;
  v47[28] = v22;
  memcpy(v23, v47, sizeof(v23));
  *(_QWORD *)v26 = aFile;
  *(_QWORD *)&v26[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v70, v23);
  v70[589] = 3;
  memcpy(v23, v70, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v56, v23);
  memcpy(v55, v56, sizeof(v55));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_45_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 9LL;
  memcpy(v48, v23, 0x220uLL);
  v48[35] = v23[35];
  *(_QWORD *)((char *)&v48[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v48[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v48[34] = anon_8ffa798e1188aa055e40a44719e13e52_45_llvm_11133899800467015185;
  *((_QWORD *)&v48[34] + 1) = 9LL;
  LODWORD(v48[36]) = 111;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aReadOnlyWordLi, 34LL);
  v18 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *((_QWORD *)&v48[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v48[27] + 8, aReadOnlyWordLi);
  *((_QWORD *)&v48[27] + 1) = v18;
  v48[28] = v22;
  memcpy(v23, v48, sizeof(v23));
  *(_QWORD *)v26 = aFile;
  *(_QWORD *)&v26[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v71, v23);
  v71[589] = 3;
  memcpy(v23, v71, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v55, v23);
  memcpy(v54, v55, sizeof(v54));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_46_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 10LL;
  memcpy(v49, v23, 0x220uLL);
  v49[35] = v23[35];
  *(_QWORD *)((char *)&v49[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v49[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v49[34] = anon_8ffa798e1188aa055e40a44719e13e52_46_llvm_11133899800467015185;
  *((_QWORD *)&v49[34] + 1) = 10LL;
  LODWORD(v49[36]) = 114;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aFirstFieldOfEa, 39LL);
  v19 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *((_QWORD *)&v49[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v49[27] + 8, aFirstFieldOfEa);
  *((_QWORD *)&v49[27] + 1) = v19;
  v49[28] = v22;
  memcpy(v23, v49, sizeof(v23));
  *(_QWORD *)v26 = aFile;
  *(_QWORD *)&v26[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v72, v23);
  v72[588] = 2;
  memcpy(v23, v72, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v54, v23);
  memcpy(v53, v54, sizeof(v53));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[33] = anon_8ffa798e1188aa055e40a44719e13e52_47_llvm_11133899800467015185;
  *((_QWORD *)&v23[33] + 1) = 5LL;
  memcpy(v50, v23, 0x220uLL);
  v50[35] = v23[35];
  *(_QWORD *)((char *)&v50[36] + 4) = *(_QWORD *)((char *)&v23[36] + 4);
  HIDWORD(v50[36]) = HIDWORD(v23[36]);
  *(_QWORD *)&v50[34] = anon_8ffa798e1188aa055e40a44719e13e52_47_llvm_11133899800467015185;
  *((_QWORD *)&v50[34] + 1) = 5LL;
  LODWORD(v50[36]) = 119;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::string::String::push_str(v23, aOutputWidthInC, 43LL);
  v20 = *(_QWORD *)&v23[0];
  *(_OWORD *)v26 = *(_OWORD *)((char *)v23 + 8);
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v22 = *(_OWORD *)v26;
  if ( *((_QWORD *)&v50[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v50[27] + 8, aOutputWidthInC);
  *((_QWORD *)&v50[27] + 1) = v20;
  v50[28] = v22;
  memcpy(v23, v50, sizeof(v23));
  *(_QWORD *)v26 = aNumber;
  *(_QWORD *)&v26[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v79, v23);
  memcpy(v23, v79, sizeof(v23));
  clap_builder::builder::command::Command::arg_internal(v53, v23);
  memcpy(dest, v53, 0x2C8uLL);
  return dest;
}
