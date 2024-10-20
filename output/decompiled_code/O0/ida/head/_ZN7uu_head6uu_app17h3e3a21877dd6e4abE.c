void *__fastcall uu_head::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  _BYTE v20[592]; // [rsp+10h] [rbp-3C88h] BYREF
  __int64 v21; // [rsp+268h] [rbp-3A30h] BYREF
  __int128 v22; // [rsp+270h] [rbp-3A28h]
  _BYTE v23[588]; // [rsp+280h] [rbp-3A18h] BYREF
  int v24; // [rsp+4CCh] [rbp-37CCh]
  _OWORD v25[37]; // [rsp+4D8h] [rbp-37C0h] BYREF
  _BYTE v26[592]; // [rsp+728h] [rbp-3570h] BYREF
  _OWORD v27[37]; // [rsp+978h] [rbp-3320h] BYREF
  _OWORD v28[37]; // [rsp+BC8h] [rbp-30D0h] BYREF
  _QWORD v29[74]; // [rsp+E18h] [rbp-2E80h] BYREF
  _DWORD v30[178]; // [rsp+1068h] [rbp-2C30h] BYREF
  _OWORD v31[37]; // [rsp+1330h] [rbp-2968h] BYREF
  _OWORD v32[37]; // [rsp+1580h] [rbp-2718h] BYREF
  _OWORD v33[37]; // [rsp+17D0h] [rbp-24C8h] BYREF
  _QWORD v34[74]; // [rsp+1A20h] [rbp-2278h] BYREF
  _QWORD v35[74]; // [rsp+1C70h] [rbp-2028h] BYREF
  _BYTE v36[592]; // [rsp+1EC0h] [rbp-1DD8h] BYREF
  _BYTE v37[592]; // [rsp+2110h] [rbp-1B88h] BYREF
  _DWORD v38[178]; // [rsp+2360h] [rbp-1938h] BYREF
  _BYTE v39[712]; // [rsp+2628h] [rbp-1670h] BYREF
  _BYTE v40[712]; // [rsp+28F0h] [rbp-13A8h] BYREF
  _QWORD v41[89]; // [rsp+2BB8h] [rbp-10E0h] BYREF
  _BYTE v42[712]; // [rsp+2E80h] [rbp-E18h] BYREF
  _BYTE v43[712]; // [rsp+3148h] [rbp-B50h] BYREF
  _BYTE v44[712]; // [rsp+3410h] [rbp-888h] BYREF
  _QWORD src[89]; // [rsp+36D8h] [rbp-5C0h] BYREF
  _BYTE dest[760]; // [rsp+39A0h] [rbp-2F8h] BYREF

  v41[22] = 0LL;
  v34[73] = 0LL;
  *(_QWORD *)&v28[10] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v30, dest);
  uucore::format_usage((unsigned int)&v21);
  v4 = v21;
  if ( v21 != 0x8000000000000000LL )
    *(_OWORD *)v20 = v22;
  if ( *(_QWORD *)&v30[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v30[116], aFlagFile);
  *(_QWORD *)&v30[116] = v4;
  *(_OWORD *)&v30[118] = *(_OWORD *)v20;
  memcpy(v38, v30, 0x2BCuLL);
  *(_QWORD *)&v38[175] = *(_QWORD *)&v30[175] | 0x8000000080LL;
  v38[177] = v30[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[528] = aBytes_0;
  *(_QWORD *)&v23[536] = 5LL;
  memcpy(v20, v23, 0x220uLL);
  *(_OWORD *)&v20[560] = *(_OWORD *)&v23[560];
  *(_QWORD *)&v20[580] = *(_QWORD *)&v23[580];
  *(_DWORD *)&v20[588] = v24;
  *(_QWORD *)&v20[544] = aBytes_1;
  *(_QWORD *)&v20[552] = 5LL;
  *(_DWORD *)&v20[576] = 99;
  *(_QWORD *)v23 = aNum;
  *(_QWORD *)&v23[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v31, v20);
  *(_QWORD *)v20 = 0LL;
  *(_QWORD *)&v20[8] = 1LL;
  *(_QWORD *)&v20[16] = 0LL;
  alloc::string::String::push_str(v20, aPrintTheFirstN, 107LL);
  v5 = *(_QWORD *)v20;
  *(_OWORD *)v23 = *(_OWORD *)&v20[8];
  if ( *(_QWORD *)v20 != 0x8000000000000000LL )
    *(_OWORD *)v20 = *(_OWORD *)v23;
  if ( *((_QWORD *)&v31[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v31[27] + 8, aPrintTheFirstN);
  *((_QWORD *)&v31[27] + 1) = v5;
  v31[28] = *(_OWORD *)v20;
  memcpy(v34, v31, sizeof(v34));
  *(_QWORD *)v20 = aBytes_0;
  *(_QWORD *)&v20[8] = 5LL;
  *(_QWORD *)&v20[16] = aLines;
  *(_QWORD *)&v20[24] = 5LL;
  *(_QWORD *)&v20[32] = 0LL;
  *(_QWORD *)&v20[40] = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v34[16], v20);
  memcpy(v20, v34, 0x248uLL);
  *(_QWORD *)&v20[584] = v34[73] | 0x20LL;
  clap_builder::builder::command::Command::arg_internal(v38, v20);
  memcpy(v44, v38, sizeof(v44));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[528] = aLines;
  *(_QWORD *)&v23[536] = 5LL;
  memcpy(v20, v23, 0x220uLL);
  *(_OWORD *)&v20[560] = *(_OWORD *)&v23[560];
  *(_QWORD *)&v20[580] = *(_QWORD *)&v23[580];
  *(_DWORD *)&v20[588] = v24;
  *(_QWORD *)&v20[544] = aLines_0;
  *(_QWORD *)&v20[552] = 5LL;
  *(_DWORD *)&v20[576] = 110;
  *(_QWORD *)v23 = aNum;
  *(_QWORD *)&v23[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v32, v20);
  *(_QWORD *)v20 = 0LL;
  *(_QWORD *)&v20[8] = 1LL;
  *(_QWORD *)&v20[16] = 0LL;
  alloc::string::String::push_str(v20, aPrintTheFirstN_0, 118LL);
  v6 = *(_QWORD *)v20;
  *(_OWORD *)v23 = *(_OWORD *)&v20[8];
  if ( *(_QWORD *)v20 != 0x8000000000000000LL )
    *(_OWORD *)v20 = *(_OWORD *)v23;
  if ( *((_QWORD *)&v32[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v32[27] + 8, aPrintTheFirstN_0);
  *((_QWORD *)&v32[27] + 1) = v6;
  v32[28] = *(_OWORD *)v20;
  memcpy(v35, v32, sizeof(v35));
  *(_QWORD *)v20 = aLines;
  *(_QWORD *)&v20[8] = 5LL;
  *(_QWORD *)&v20[16] = aBytes_0;
  *(_QWORD *)&v20[24] = 5LL;
  *(_QWORD *)&v20[32] = 0LL;
  *(_QWORD *)&v20[40] = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v35[16], v20);
  memcpy(v20, v35, 0x248uLL);
  *(_QWORD *)&v20[584] = v35[73] | 0x20LL;
  clap_builder::builder::command::Command::arg_internal(v44, v20);
  memcpy(v43, v44, sizeof(v43));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v20);
  *(_QWORD *)&v20[528] = aQuiet;
  *(_QWORD *)&v20[536] = 5LL;
  memcpy(v28, v20, 0x220uLL);
  v28[35] = *(_OWORD *)&v20[560];
  *(_QWORD *)((char *)&v28[36] + 4) = *(_QWORD *)&v20[580];
  HIDWORD(v28[36]) = *(_DWORD *)&v20[588];
  *(_QWORD *)&v28[34] = aQuiet_0;
  *((_QWORD *)&v28[34] + 1) = 5LL;
  LODWORD(v28[36]) = 113;
  v7 = *((_QWORD *)&v28[19] + 1);
  if ( *((_QWORD *)&v28[19] + 1) == *((_QWORD *)&v28[18] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v28[18] + 8);
  v8 = *(_QWORD *)&v28[19];
  v9 = 3 * v7;
  *(_QWORD *)(*(_QWORD *)&v28[19] + 8 * v9) = &unk_1F6DE;
  *(_QWORD *)(v8 + 8 * v9 + 8) = 6LL;
  *(_BYTE *)(v8 + 8 * v9 + 16) = 1;
  *((_QWORD *)&v28[19] + 1) = v7 + 1;
  memcpy(v33, v28, sizeof(v33));
  *(_QWORD *)v20 = 0LL;
  *(_QWORD *)&v20[8] = 1LL;
  *(_QWORD *)&v20[16] = 0LL;
  alloc::string::String::push_str(v20, aNeverPrintHead, 37LL);
  v10 = *(_QWORD *)v20;
  *(_OWORD *)v23 = *(_OWORD *)&v20[8];
  if ( *(_QWORD *)v20 != 0x8000000000000000LL )
    *(_OWORD *)v20 = *(_OWORD *)v23;
  if ( *((_QWORD *)&v33[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v33[27] + 8, aNeverPrintHead);
  *((_QWORD *)&v33[27] + 1) = v10;
  v33[28] = *(_OWORD *)v20;
  memcpy(v36, v33, sizeof(v36));
  *(_QWORD *)v20 = aVerbose;
  *(_QWORD *)&v20[8] = 7LL;
  *(_QWORD *)&v20[16] = aQuiet;
  *(_QWORD *)&v20[24] = 5LL;
  *(_QWORD *)&v20[32] = 0LL;
  *(_QWORD *)&v20[40] = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v36[128], v20);
  memcpy(v20, v36, 0x24CuLL);
  *(_WORD *)&v20[589] = *(_WORD *)&v36[589];
  v20[591] = v36[591];
  v20[588] = 2;
  clap_builder::builder::command::Command::arg_internal(v43, v20);
  memcpy(v42, v43, sizeof(v42));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v20);
  *(_QWORD *)&v20[528] = aVerbose;
  *(_QWORD *)&v20[536] = 7LL;
  memcpy(v25, v20, 0x220uLL);
  v25[35] = *(_OWORD *)&v20[560];
  *(_QWORD *)((char *)&v25[36] + 4) = *(_QWORD *)&v20[580];
  HIDWORD(v25[36]) = *(_DWORD *)&v20[588];
  *(_QWORD *)&v25[34] = aVerbose_0;
  *((_QWORD *)&v25[34] + 1) = 7LL;
  LODWORD(v25[36]) = 118;
  *(_QWORD *)v20 = 0LL;
  *(_QWORD *)&v20[8] = 1LL;
  *(_QWORD *)&v20[16] = 0LL;
  alloc::string::String::push_str(v20, aAlwaysPrintHea, 38LL);
  v11 = *(_QWORD *)v20;
  *(_OWORD *)v23 = *(_OWORD *)&v20[8];
  if ( *(_QWORD *)v20 != 0x8000000000000000LL )
    *(_OWORD *)v20 = *(_OWORD *)v23;
  if ( *((_QWORD *)&v25[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v25[27] + 8, aAlwaysPrintHea);
  *((_QWORD *)&v25[27] + 1) = v11;
  v25[28] = *(_OWORD *)v20;
  memcpy(v37, v25, sizeof(v37));
  *(_QWORD *)v20 = aQuiet;
  *(_QWORD *)&v20[8] = 5LL;
  *(_QWORD *)&v20[16] = aVerbose;
  *(_QWORD *)&v20[24] = 7LL;
  *(_QWORD *)&v20[32] = 0LL;
  *(_QWORD *)&v20[40] = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v37[128], v20);
  memcpy(v20, v37, 0x24CuLL);
  *(_WORD *)&v20[589] = *(_WORD *)&v37[589];
  v20[591] = v37[591];
  v20[588] = 2;
  clap_builder::builder::command::Command::arg_internal(v42, v20);
  memcpy(v41, v42, sizeof(v41));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v20);
  *(_QWORD *)&v20[528] = aPresumeInputPi;
  *(_QWORD *)&v20[536] = 19LL;
  memcpy(v26, v20, 0x220uLL);
  *(_OWORD *)&v26[560] = *(_OWORD *)&v20[560];
  *(_OWORD *)&v26[576] = *(_OWORD *)&v20[576];
  *(_QWORD *)&v26[544] = aPresumeInputPi_0;
  *(_QWORD *)&v26[552] = 18LL;
  v12 = *(_QWORD *)&v26[312];
  if ( *(_QWORD *)&v26[312] == *(_QWORD *)&v26[296] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v26[296]);
  v13 = *(_QWORD *)&v26[304];
  v14 = 3 * v12;
  *(_QWORD *)(*(_QWORD *)&v26[304] + 8 * v14) = &unk_1F762;
  *(_QWORD *)(v13 + 8 * v14 + 8) = 19LL;
  *(_BYTE *)(v13 + 8 * v14 + 16) = 0;
  *(_QWORD *)&v26[312] = v12 + 1;
  memcpy(v20, v26, 0x248uLL);
  *(_WORD *)&v20[589] = *(_WORD *)&v26[589];
  v20[591] = v26[591];
  *(_DWORD *)&v20[584] = *(_DWORD *)&v26[584] | 4;
  v20[588] = 2;
  clap_builder::builder::command::Command::arg_internal(v41, v20);
  memcpy(v40, v41, sizeof(v40));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v20);
  *(_QWORD *)&v20[528] = aZero;
  *(_QWORD *)&v20[536] = 4LL;
  memcpy(v27, v20, 0x220uLL);
  v27[35] = *(_OWORD *)&v20[560];
  *(_QWORD *)((char *)&v27[36] + 4) = *(_QWORD *)&v20[580];
  HIDWORD(v27[36]) = *(_DWORD *)&v20[588];
  *(_QWORD *)&v27[34] = aZeroTerminated;
  *((_QWORD *)&v27[34] + 1) = 15LL;
  LODWORD(v27[36]) = 122;
  *(_QWORD *)v20 = 0LL;
  *(_QWORD *)&v20[8] = 1LL;
  *(_QWORD *)&v20[16] = 0LL;
  alloc::string::String::push_str(v20, aLineDelimiterI, 34LL);
  v15 = *(_QWORD *)v20;
  *(_OWORD *)v23 = *(_OWORD *)&v20[8];
  if ( *(_QWORD *)v20 != 0x8000000000000000LL )
    *(_OWORD *)v20 = *(_OWORD *)v23;
  if ( *((_QWORD *)&v27[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v27[27] + 8, aLineDelimiterI);
  *((_QWORD *)&v27[27] + 1) = v15;
  v27[28] = *(_OWORD *)v20;
  memcpy(v29, v27, sizeof(v29));
  v16 = v29[18];
  if ( v29[18] == v29[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v29[16]);
  v17 = v29[17];
  v18 = 16 * v16;
  *(_QWORD *)(v29[17] + v18) = aZero;
  *(_QWORD *)(v17 + v18 + 8) = 4LL;
  v29[18] = v16 + 1;
  memcpy(v20, v29, 0x24CuLL);
  *(_WORD *)&v20[589] = *(_WORD *)((char *)&v29[73] + 5);
  v20[591] = HIBYTE(v29[73]);
  v20[588] = 2;
  clap_builder::builder::command::Command::arg_internal(v40, v20);
  memcpy(v39, v40, sizeof(v39));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[528] = aFile;
  *(_QWORD *)&v23[536] = 4LL;
  memcpy(v20, v23, 0x24CuLL);
  *(_WORD *)&v20[588] = 769;
  *(_WORD *)&v20[590] = HIWORD(v24);
  clap_builder::builder::command::Command::arg_internal(v39, v20);
  memcpy(a1, v39, 0x2C8uLL);
  return a1;
}
