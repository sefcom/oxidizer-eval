void *__fastcall uu_shuf::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // rbp
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  __int128 v28; // [rsp+0h] [rbp-41A8h]
  _OWORD v29[37]; // [rsp+10h] [rbp-4198h] BYREF
  __int64 v30; // [rsp+268h] [rbp-3F40h] BYREF
  __int128 v31; // [rsp+270h] [rbp-3F38h]
  _BYTE v32[592]; // [rsp+280h] [rbp-3F28h] BYREF
  _BYTE v33[588]; // [rsp+4D0h] [rbp-3CD8h] BYREF
  int v34; // [rsp+71Ch] [rbp-3A8Ch]
  _BYTE v35[588]; // [rsp+720h] [rbp-3A88h] BYREF
  int v36; // [rsp+96Ch] [rbp-383Ch]
  _BYTE v37[588]; // [rsp+970h] [rbp-3838h] BYREF
  int v38; // [rsp+BBCh] [rbp-35ECh]
  _QWORD v39[74]; // [rsp+BC0h] [rbp-35E8h] BYREF
  _QWORD v40[74]; // [rsp+E10h] [rbp-3398h] BYREF
  _QWORD v41[74]; // [rsp+1060h] [rbp-3148h] BYREF
  _BYTE v42[589]; // [rsp+12B0h] [rbp-2EF8h] BYREF
  __int16 v43; // [rsp+14FEh] [rbp-2CAAh]
  _BYTE v44[589]; // [rsp+1500h] [rbp-2CA8h] BYREF
  __int16 v45; // [rsp+174Eh] [rbp-2A5Ah]
  _QWORD desta[89]; // [rsp+1750h] [rbp-2A58h] BYREF
  _OWORD v47[37]; // [rsp+1A18h] [rbp-2790h] BYREF
  _OWORD v48[37]; // [rsp+1C68h] [rbp-2540h] BYREF
  _QWORD v49[74]; // [rsp+1EB8h] [rbp-22F0h] BYREF
  _QWORD v50[74]; // [rsp+2108h] [rbp-20A0h] BYREF
  _DWORD v51[178]; // [rsp+2358h] [rbp-1E50h] BYREF
  _BYTE v52[712]; // [rsp+2620h] [rbp-1B88h] BYREF
  _BYTE v53[712]; // [rsp+28E8h] [rbp-18C0h] BYREF
  _BYTE v54[712]; // [rsp+2BB0h] [rbp-15F8h] BYREF
  _BYTE v55[712]; // [rsp+2E78h] [rbp-1330h] BYREF
  _QWORD v56[89]; // [rsp+3140h] [rbp-1068h] BYREF
  _BYTE v57[712]; // [rsp+3408h] [rbp-DA0h] BYREF
  _BYTE v58[712]; // [rsp+36D0h] [rbp-AD8h] BYREF
  _BYTE v59[592]; // [rsp+3998h] [rbp-810h] BYREF
  _QWORD src[89]; // [rsp+3BE8h] [rbp-5C0h] BYREF
  _BYTE v61[760]; // [rsp+3EB0h] [rbp-2F8h] BYREF

  v56[7] = 0LL;
  v50[14] = 0LL;
  v41[35] = 0LL;
  *((_QWORD *)&v29[22] + 1) = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(v61, v2, v3);
  clap_builder::builder::command::Command::about(src, v61);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, sizeof(desta));
  uucore::format_usage((unsigned int)&v30);
  v4 = v30;
  if ( v30 != 0x8000000000000000LL )
    v29[0] = v31;
  if ( desta[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&desta[58], aOptionFileEOpt);
  desta[58] = v4;
  *(_OWORD *)&desta[59] = v29[0];
  memcpy(v51, desta, 0x2BCuLL);
  *(_QWORD *)&v51[175] = *(_QWORD *)((char *)&desta[87] + 4) | 0x8000000080LL;
  v51[177] = HIDWORD(desta[88]);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = anon_952b21e97a889c6613436287509e44a2_62_llvm_11215979972707939310;
  *((_QWORD *)&v29[33] + 1) = 4LL;
  memcpy(v33, v29, 0x220uLL);
  *(_OWORD *)&v33[560] = v29[35];
  *(_QWORD *)&v33[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v34 = HIDWORD(v29[36]);
  *(_QWORD *)&v33[544] = anon_952b21e97a889c6613436287509e44a2_62_llvm_11215979972707939310;
  *(_QWORD *)&v33[552] = 4LL;
  *(_DWORD *)&v33[576] = 101;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aTreatEachArgAs, 31LL);
  v5 = *(_QWORD *)&v29[0];
  *(_OWORD *)v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v29[0] = *(_OWORD *)v32;
  if ( *(_QWORD *)&v33[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v33[440], aTreatEachArgAs);
  *(_QWORD *)&v33[440] = v5;
  *(_OWORD *)&v33[448] = v29[0];
  memcpy(v39, v33, 0x24CuLL);
  *(_WORD *)((char *)&v39[73] + 5) = *(_WORD *)((char *)&v34 + 1);
  HIBYTE(v39[73]) = HIBYTE(v34);
  BYTE4(v39[73]) = 2;
  v6 = v39[18];
  if ( v39[18] == v39[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v39[16]);
  v7 = v39[17];
  v8 = 16 * v6;
  *(_QWORD *)(v39[17] + v8) = anon_952b21e97a889c6613436287509e44a2_62_llvm_11215979972707939310;
  *(_QWORD *)(v7 + v8 + 8) = 4LL;
  v39[18] = v6 + 1;
  memcpy(v49, v39, sizeof(v49));
  v9 = v49[15];
  if ( v49[15] == v49[13] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v49[13]);
  v10 = v49[14];
  v11 = 16 * v9;
  *(_QWORD *)(v49[14] + v11) = anon_952b21e97a889c6613436287509e44a2_63_llvm_11215979972707939310;
  *(_QWORD *)(v10 + v11 + 8) = 11LL;
  v49[15] = v9 + 1;
  memcpy(v29, v49, sizeof(v29));
  clap_builder::builder::command::Command::arg_internal(v51, v29);
  memcpy(v58, v51, sizeof(v58));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v32);
  *(_QWORD *)&v32[528] = anon_952b21e97a889c6613436287509e44a2_63_llvm_11215979972707939310;
  *(_QWORD *)&v32[536] = 11LL;
  memcpy(v29, v32, 0x220uLL);
  v29[35] = *(_OWORD *)&v32[560];
  *(_QWORD *)((char *)&v29[36] + 4) = *(_QWORD *)&v32[580];
  HIDWORD(v29[36]) = *(_DWORD *)&v32[588];
  *(_QWORD *)&v29[34] = anon_952b21e97a889c6613436287509e44a2_63_llvm_11215979972707939310;
  *((_QWORD *)&v29[34] + 1) = 11LL;
  LODWORD(v29[36]) = 105;
  *(_QWORD *)v32 = aLoHi;
  *(_QWORD *)&v32[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v47, v29);
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aTreatEachNumbe, 48LL);
  v12 = *(_QWORD *)&v29[0];
  *(_OWORD *)v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v29[0] = *(_OWORD *)v32;
  if ( *((_QWORD *)&v47[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v47[27] + 8, aTreatEachNumbe);
  *((_QWORD *)&v47[27] + 1) = v12;
  v47[28] = v29[0];
  memcpy(v50, v47, sizeof(v50));
  v13 = v50[15];
  if ( v50[15] == v50[13] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v50[13]);
  v14 = v50[14];
  v15 = 16 * v13;
  *(_QWORD *)(v50[14] + v15) = anon_952b21e97a889c6613436287509e44a2_69_llvm_11215979972707939310;
  *(_QWORD *)(v14 + v15 + 8) = 12LL;
  v50[15] = v13 + 1;
  memcpy(v29, v50, sizeof(v29));
  clap_builder::builder::command::Command::arg_internal(v58, v29);
  memcpy(v57, v58, sizeof(v57));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v32);
  *(_QWORD *)&v32[528] = anon_952b21e97a889c6613436287509e44a2_64_llvm_11215979972707939310;
  *(_QWORD *)&v32[536] = 10LL;
  memcpy(v29, v32, 0x220uLL);
  v29[35] = *(_OWORD *)&v32[560];
  *(_QWORD *)((char *)&v29[36] + 4) = *(_QWORD *)&v32[580];
  HIDWORD(v29[36]) = *(_DWORD *)&v32[588];
  *(_QWORD *)&v29[34] = anon_952b21e97a889c6613436287509e44a2_64_llvm_11215979972707939310;
  *((_QWORD *)&v29[34] + 1) = 10LL;
  LODWORD(v29[36]) = 110;
  *(_QWORD *)v32 = aCount;
  *(_QWORD *)&v32[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v59, v29);
  v59[588] = 1;
  memcpy(v48, v59, sizeof(v48));
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aOutputAtMostCo, 26LL);
  v16 = *(_QWORD *)&v29[0];
  *(_OWORD *)v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v28 = *(_OWORD *)v32;
  if ( *((_QWORD *)&v48[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v48[27] + 8, aOutputAtMostCo);
  *((_QWORD *)&v48[27] + 1) = v16;
  v48[28] = v28;
  memcpy(v29, v48, sizeof(v29));
  clap_builder::builder::command::Command::arg_internal(v57, v29);
  memcpy(v56, v57, sizeof(v56));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v32);
  *(_QWORD *)&v32[528] = anon_952b21e97a889c6613436287509e44a2_65_llvm_11215979972707939310;
  *(_QWORD *)&v32[536] = 6LL;
  memcpy(v29, v32, 0x220uLL);
  v29[35] = *(_OWORD *)&v32[560];
  *(_QWORD *)((char *)&v29[36] + 4) = *(_QWORD *)&v32[580];
  HIDWORD(v29[36]) = *(_DWORD *)&v32[588];
  *(_QWORD *)&v29[34] = anon_952b21e97a889c6613436287509e44a2_65_llvm_11215979972707939310;
  *((_QWORD *)&v29[34] + 1) = 6LL;
  LODWORD(v29[36]) = 111;
  *(_QWORD *)v32 = aFile;
  *(_QWORD *)&v32[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v42, v29);
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aWriteResultToF, 47LL);
  v17 = *(_QWORD *)&v29[0];
  *(_OWORD *)v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v28 = *(_OWORD *)v32;
  if ( *(_QWORD *)&v42[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v42[440], aWriteResultToF);
  *(_QWORD *)&v42[440] = v17;
  *(_OWORD *)&v42[448] = v28;
  memcpy(v29, v42, 0x24DuLL);
  BYTE13(v29[36]) = 3;
  HIWORD(v29[36]) = v43;
  clap_builder::builder::command::Command::arg_internal(v56, v29);
  memcpy(v55, v56, sizeof(v55));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v32);
  *(_QWORD *)&v32[528] = anon_952b21e97a889c6613436287509e44a2_66_llvm_11215979972707939310;
  *(_QWORD *)&v32[536] = 13LL;
  memcpy(v29, v32, 0x220uLL);
  v29[35] = *(_OWORD *)&v32[560];
  v29[36] = *(_OWORD *)&v32[576];
  *(_QWORD *)&v29[34] = anon_952b21e97a889c6613436287509e44a2_66_llvm_11215979972707939310;
  *((_QWORD *)&v29[34] + 1) = 13LL;
  *(_QWORD *)v32 = aFile;
  *(_QWORD *)&v32[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v44, v29);
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aGetRandomBytes, 26LL);
  v18 = *(_QWORD *)&v29[0];
  *(_OWORD *)v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v28 = *(_OWORD *)v32;
  if ( *(_QWORD *)&v44[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v44[440], aGetRandomBytes);
  *(_QWORD *)&v44[440] = v18;
  *(_OWORD *)&v44[448] = v28;
  memcpy(v29, v44, 0x24DuLL);
  BYTE13(v29[36]) = 3;
  HIWORD(v29[36]) = v45;
  clap_builder::builder::command::Command::arg_internal(v55, v29);
  memcpy(v54, v55, sizeof(v54));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = anon_952b21e97a889c6613436287509e44a2_67_llvm_11215979972707939310;
  *((_QWORD *)&v29[33] + 1) = 6LL;
  memcpy(v35, v29, 0x220uLL);
  *(_OWORD *)&v35[560] = v29[35];
  *(_QWORD *)&v35[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v36 = HIDWORD(v29[36]);
  *(_QWORD *)&v35[544] = anon_952b21e97a889c6613436287509e44a2_67_llvm_11215979972707939310;
  *(_QWORD *)&v35[552] = 6LL;
  *(_DWORD *)&v35[576] = 114;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aOutputLinesCan, 28LL);
  v19 = *(_QWORD *)&v29[0];
  *(_OWORD *)v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v29[0] = *(_OWORD *)v32;
  if ( *(_QWORD *)&v35[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35[440], aOutputLinesCan);
  *(_QWORD *)&v35[440] = v19;
  *(_OWORD *)&v35[448] = v29[0];
  memcpy(v40, v35, 0x24CuLL);
  *(_WORD *)((char *)&v40[73] + 5) = *(_WORD *)((char *)&v36 + 1);
  HIBYTE(v40[73]) = HIBYTE(v36);
  BYTE4(v40[73]) = 2;
  v20 = v40[18];
  if ( v40[18] == v40[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v40[16]);
  v21 = v40[17];
  v22 = 16 * v20;
  *(_QWORD *)(v40[17] + v22) = anon_952b21e97a889c6613436287509e44a2_67_llvm_11215979972707939310;
  *(_QWORD *)(v21 + v22 + 8) = 6LL;
  v40[18] = v20 + 1;
  memcpy(v29, v40, sizeof(v29));
  clap_builder::builder::command::Command::arg_internal(v54, v29);
  memcpy(v53, v54, sizeof(v53));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = anon_952b21e97a889c6613436287509e44a2_68_llvm_11215979972707939310;
  *((_QWORD *)&v29[33] + 1) = 15LL;
  memcpy(v37, v29, 0x220uLL);
  *(_OWORD *)&v37[560] = v29[35];
  *(_QWORD *)&v37[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v38 = HIDWORD(v29[36]);
  *(_QWORD *)&v37[544] = anon_952b21e97a889c6613436287509e44a2_68_llvm_11215979972707939310;
  *(_QWORD *)&v37[552] = 15LL;
  *(_DWORD *)&v37[576] = 122;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aLineDelimiterI, 34LL);
  v23 = *(_QWORD *)&v29[0];
  *(_OWORD *)v32 = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v29[0] = *(_OWORD *)v32;
  if ( *(_QWORD *)&v37[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37[440], aLineDelimiterI);
  *(_QWORD *)&v37[440] = v23;
  *(_OWORD *)&v37[448] = v29[0];
  memcpy(v41, v37, 0x24CuLL);
  *(_WORD *)((char *)&v41[73] + 5) = *(_WORD *)((char *)&v38 + 1);
  HIBYTE(v41[73]) = HIBYTE(v38);
  BYTE4(v41[73]) = 2;
  v24 = v41[18];
  if ( v41[18] == v41[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v41[16]);
  v25 = v41[17];
  v26 = 16 * v24;
  *(_QWORD *)(v41[17] + v26) = anon_952b21e97a889c6613436287509e44a2_68_llvm_11215979972707939310;
  *(_QWORD *)(v25 + v26 + 8) = 15LL;
  v41[18] = v24 + 1;
  memcpy(v29, v41, sizeof(v29));
  clap_builder::builder::command::Command::arg_internal(v53, v29);
  memcpy(v52, v53, sizeof(v52));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v32);
  *(_QWORD *)&v32[528] = anon_952b21e97a889c6613436287509e44a2_69_llvm_11215979972707939310;
  *(_QWORD *)&v32[536] = 12LL;
  memcpy(v29, v32, 0x24CuLL);
  WORD6(v29[36]) = 769;
  HIWORD(v29[36]) = *(_WORD *)&v32[590];
  clap_builder::builder::command::Command::arg_internal(v52, v29);
  memcpy(dest, v52, 0x2C8uLL);
  return dest;
}
