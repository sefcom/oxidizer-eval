void *__fastcall uu_dircolors::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
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
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // r14
  __int128 v23; // [rsp+0h] [rbp-3088h]
  _BYTE v24[592]; // [rsp+10h] [rbp-3078h] BYREF
  __int64 v25; // [rsp+268h] [rbp-2E20h] BYREF
  __int128 v26; // [rsp+270h] [rbp-2E18h]
  _BYTE v27[588]; // [rsp+280h] [rbp-2E08h] BYREF
  int v28; // [rsp+4CCh] [rbp-2BBCh]
  _BYTE v29[584]; // [rsp+4D0h] [rbp-2BB8h] BYREF
  int v30; // [rsp+718h] [rbp-2970h]
  __int16 v31; // [rsp+71Eh] [rbp-296Ah]
  _BYTE v32[592]; // [rsp+720h] [rbp-2968h] BYREF
  _OWORD v33[37]; // [rsp+970h] [rbp-2718h] BYREF
  _OWORD v34[37]; // [rsp+BC0h] [rbp-24C8h] BYREF
  _OWORD v35[37]; // [rsp+E10h] [rbp-2278h] BYREF
  _OWORD v36[37]; // [rsp+1060h] [rbp-2028h] BYREF
  _QWORD v37[89]; // [rsp+12B0h] [rbp-1DD8h] BYREF
  _QWORD v38[74]; // [rsp+1578h] [rbp-1B10h] BYREF
  _QWORD v39[74]; // [rsp+17C8h] [rbp-18C0h] BYREF
  _QWORD v40[89]; // [rsp+1A18h] [rbp-1670h] BYREF
  _DWORD v41[178]; // [rsp+1CE0h] [rbp-13A8h] BYREF
  _QWORD v42[89]; // [rsp+1FA8h] [rbp-10E0h] BYREF
  _BYTE v43[712]; // [rsp+2270h] [rbp-E18h] BYREF
  _BYTE v44[712]; // [rsp+2538h] [rbp-B50h] BYREF
  _BYTE v45[712]; // [rsp+2800h] [rbp-888h] BYREF
  _QWORD src[89]; // [rsp+2AC8h] [rbp-5C0h] BYREF
  _BYTE desta[760]; // [rsp+2D90h] [rbp-2F8h] BYREF

  v42[22] = 0LL;
  *((_QWORD *)&v35[36] + 1) = 0LL;
  *(_QWORD *)&v24[72] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v40, desta);
  *(_QWORD *)v24 = 0LL;
  *(_QWORD *)&v24[8] = 1LL;
  *(_QWORD *)&v24[16] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v24, aIfFileIsSpecif, 218LL);
  v4 = *(_QWORD *)v24;
  *(_OWORD *)v29 = *(_OWORD *)&v24[8];
  if ( *(_QWORD *)v24 != 0x8000000000000000LL )
    *(_OWORD *)v24 = *(_OWORD *)v29;
  if ( v40[52] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40[52]);
  v40[52] = v4;
  *(_OWORD *)&v40[53] = *(_OWORD *)v24;
  memcpy(v37, v40, sizeof(v37));
  uucore::format_usage((unsigned int)&v25);
  v5 = v25;
  if ( v25 != 0x8000000000000000LL )
    *(_OWORD *)v24 = v26;
  if ( v37[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37[58]);
  v37[58] = v5;
  *(_OWORD *)&v37[59] = *(_OWORD *)v24;
  memcpy(v41, v37, 0x2BCuLL);
  *(_QWORD *)&v41[175] = *(_QWORD *)((char *)&v37[87] + 4) | 0x8800000088LL;
  v41[177] = HIDWORD(v37[88]);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v24);
  *(_QWORD *)&v24[528] = aBourneShell_0;
  *(_QWORD *)&v24[536] = 12LL;
  memcpy(v33, v24, 0x220uLL);
  v33[35] = *(_OWORD *)&v24[560];
  *(_QWORD *)((char *)&v33[36] + 4) = *(_QWORD *)&v24[580];
  HIDWORD(v33[36]) = *(_DWORD *)&v24[588];
  *(_QWORD *)&v33[34] = aSh;
  *((_QWORD *)&v33[34] + 1) = 2LL;
  LODWORD(v33[36]) = 98;
  v6 = *((_QWORD *)&v33[19] + 1);
  if ( *((_QWORD *)&v33[19] + 1) == *((_QWORD *)&v33[18] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v33[18] + 8);
  v7 = *(_QWORD *)&v33[19];
  v8 = 3 * v6;
  *(_QWORD *)(*(_QWORD *)&v33[19] + 8 * v8) = aBourneShell_0;
  *(_QWORD *)(v7 + 8 * v8 + 8) = 12LL;
  *(_BYTE *)(v7 + 8 * v8 + 16) = 1;
  *((_QWORD *)&v33[19] + 1) = v6 + 1;
  memcpy(v38, v33, sizeof(v38));
  v9 = v38[18];
  if ( v38[18] == v38[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v38[16]);
  v10 = v38[17];
  v11 = 16 * v9;
  *(_QWORD *)(v38[17] + v11) = &unk_28C75;
  *(_QWORD *)(v10 + v11 + 8) = 7LL;
  v38[18] = v9 + 1;
  memcpy(v35, v38, sizeof(v35));
  *(_QWORD *)v24 = 0LL;
  *(_QWORD *)&v24[8] = 1LL;
  *(_QWORD *)&v24[16] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v24, aOutputBourneSh, 41LL);
  v12 = *(_QWORD *)v24;
  *(_OWORD *)v29 = *(_OWORD *)&v24[8];
  if ( *(_QWORD *)v24 != 0x8000000000000000LL )
    v23 = *(_OWORD *)v29;
  if ( *((_QWORD *)&v35[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v35[27] + 8);
  *((_QWORD *)&v35[27] + 1) = v12;
  v35[28] = v23;
  memcpy(v24, v35, 0x24CuLL);
  *(_WORD *)&v24[589] = *(_WORD *)((char *)&v35[36] + 13);
  v24[591] = HIBYTE(v35[36]);
  v24[588] = 2;
  clap_builder::builder::command::Command::arg_internal(v41, v24);
  memcpy(v45, v41, sizeof(v45));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v24);
  *(_QWORD *)&v24[528] = &unk_28C75;
  *(_QWORD *)&v24[536] = 7LL;
  memcpy(v34, v24, 0x220uLL);
  v34[35] = *(_OWORD *)&v24[560];
  *(_QWORD *)((char *)&v34[36] + 4) = *(_QWORD *)&v24[580];
  HIDWORD(v34[36]) = *(_DWORD *)&v24[588];
  *(_QWORD *)&v34[34] = aCsh;
  *((_QWORD *)&v34[34] + 1) = 3LL;
  LODWORD(v34[36]) = 99;
  v13 = *((_QWORD *)&v34[19] + 1);
  if ( *((_QWORD *)&v34[19] + 1) == *((_QWORD *)&v34[18] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v34[18] + 8);
  v14 = *(_QWORD *)&v34[19];
  v15 = 3 * v13;
  *(_QWORD *)(*(_QWORD *)&v34[19] + 8 * v15) = &unk_28C75;
  *(_QWORD *)(v14 + 8 * v15 + 8) = 7LL;
  *(_BYTE *)(v14 + 8 * v15 + 16) = 1;
  *((_QWORD *)&v34[19] + 1) = v13 + 1;
  memcpy(v39, v34, sizeof(v39));
  v16 = v39[18];
  if ( v39[18] == v39[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v39[16]);
  v17 = v39[17];
  v18 = 16 * v16;
  *(_QWORD *)(v39[17] + v18) = aBourneShell_0;
  *(_QWORD *)(v17 + v18 + 8) = 12LL;
  v39[18] = v16 + 1;
  memcpy(v36, v39, sizeof(v36));
  *(_QWORD *)v24 = 0LL;
  *(_QWORD *)&v24[8] = 1LL;
  *(_QWORD *)&v24[16] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v24, aOutputCShellCo, 36LL);
  v19 = *(_QWORD *)v24;
  *(_OWORD *)v29 = *(_OWORD *)&v24[8];
  if ( *(_QWORD *)v24 != 0x8000000000000000LL )
    v23 = *(_OWORD *)v29;
  if ( *((_QWORD *)&v36[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v36[27] + 8);
  *((_QWORD *)&v36[27] + 1) = v19;
  v36[28] = v23;
  memcpy(v24, v36, 0x24CuLL);
  *(_WORD *)&v24[589] = *(_WORD *)((char *)&v36[36] + 13);
  v24[591] = HIBYTE(v36[36]);
  v24[588] = 2;
  clap_builder::builder::command::Command::arg_internal(v45, v24);
  memcpy(v44, v45, sizeof(v44));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v24);
  *(_QWORD *)&v24[528] = aPrintDatabase_0;
  *(_QWORD *)&v24[536] = 14LL;
  memcpy(v27, v24, 0x220uLL);
  *(_OWORD *)&v27[560] = *(_OWORD *)&v24[560];
  *(_QWORD *)&v27[580] = *(_QWORD *)&v24[580];
  v28 = *(_DWORD *)&v24[588];
  *(_QWORD *)&v27[544] = aPrintDatabase_0;
  *(_QWORD *)&v27[552] = 14LL;
  *(_DWORD *)&v27[576] = 112;
  *(_QWORD *)v24 = 0LL;
  *(_QWORD *)&v24[8] = 1LL;
  *(_QWORD *)&v24[16] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v24, aPrintTheByteCo, 21LL);
  v20 = *(_QWORD *)v24;
  *(_OWORD *)v29 = *(_OWORD *)&v24[8];
  if ( *(_QWORD *)v24 != 0x8000000000000000LL )
    v23 = *(_OWORD *)v29;
  if ( *(_QWORD *)&v27[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v27[440]);
  *(_QWORD *)&v27[440] = v20;
  *(_OWORD *)&v27[448] = v23;
  memcpy(v24, v27, 0x24CuLL);
  *(_WORD *)&v24[589] = *(_WORD *)((char *)&v28 + 1);
  v24[591] = HIBYTE(v28);
  v24[588] = 2;
  clap_builder::builder::command::Command::arg_internal(v44, v24);
  memcpy(v43, v44, sizeof(v43));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v24);
  *(_QWORD *)&v24[528] = aPrintLsColors_0;
  *(_QWORD *)&v24[536] = 15LL;
  memcpy(v32, v24, 0x220uLL);
  *(_OWORD *)&v32[560] = *(_OWORD *)&v24[560];
  *(_OWORD *)&v32[576] = *(_OWORD *)&v24[576];
  *(_QWORD *)&v32[544] = aPrintLsColors_0;
  *(_QWORD *)&v32[552] = 15LL;
  *(_QWORD *)v24 = 0LL;
  *(_QWORD *)&v24[8] = 1LL;
  *(_QWORD *)&v24[16] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v24, aOutputFullyEsc, 39LL);
  v21 = *(_QWORD *)v24;
  *(_OWORD *)v29 = *(_OWORD *)&v24[8];
  if ( *(_QWORD *)v24 != 0x8000000000000000LL )
    v23 = *(_OWORD *)v29;
  if ( *(_QWORD *)&v32[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v32[440]);
  *(_QWORD *)&v32[440] = v21;
  *(_OWORD *)&v32[448] = v23;
  memcpy(v24, v32, 0x24CuLL);
  *(_WORD *)&v24[589] = *(_WORD *)&v32[589];
  v24[591] = v32[591];
  v24[588] = 2;
  clap_builder::builder::command::Command::arg_internal(v43, v24);
  memcpy(v42, v43, sizeof(v42));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[528] = aFile;
  *(_QWORD *)&v29[536] = 4LL;
  memcpy(v24, v29, 0x248uLL);
  *(_DWORD *)&v24[584] = v30 | 4;
  *(_WORD *)&v24[588] = 769;
  *(_WORD *)&v24[590] = v31;
  clap_builder::builder::command::Command::arg_internal(v42, v24);
  memcpy(dest, v42, 0x2C8uLL);
  return dest;
}
