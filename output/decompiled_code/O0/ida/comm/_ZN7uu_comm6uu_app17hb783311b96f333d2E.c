void *__fastcall uu_comm::uu_app(void *dest)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // r14
  __int128 v22; // [rsp+0h] [rbp-3678h]
  __int128 v23; // [rsp+0h] [rbp-3678h]
  __int128 v24; // [rsp+10h] [rbp-3668h]
  __int128 v25; // [rsp+28h] [rbp-3650h] BYREF
  __int64 v26; // [rsp+38h] [rbp-3640h]
  _OWORD v27[37]; // [rsp+40h] [rbp-3638h] BYREF
  __int64 v28; // [rsp+298h] [rbp-33E0h] BYREF
  __int128 v29; // [rsp+2A0h] [rbp-33D8h]
  __int128 v30; // [rsp+2B0h] [rbp-33C8h]
  __int64 v31; // [rsp+2C0h] [rbp-33B8h]
  __int64 v32; // [rsp+2C8h] [rbp-33B0h] BYREF
  __int128 v33; // [rsp+2D0h] [rbp-33A8h]
  _OWORD v34[37]; // [rsp+2E0h] [rbp-3398h] BYREF
  _BYTE v35[592]; // [rsp+538h] [rbp-3140h] BYREF
  _BYTE v36[588]; // [rsp+788h] [rbp-2EF0h] BYREF
  int v37; // [rsp+9D4h] [rbp-2CA4h]
  _BYTE v38[588]; // [rsp+9D8h] [rbp-2CA0h] BYREF
  int v39; // [rsp+C24h] [rbp-2A54h]
  _BYTE v40[588]; // [rsp+C28h] [rbp-2A50h] BYREF
  int v41; // [rsp+E74h] [rbp-2804h]
  _OWORD v42[37]; // [rsp+E78h] [rbp-2800h] BYREF
  _OWORD v43[37]; // [rsp+10C8h] [rbp-25B0h] BYREF
  _OWORD v44[37]; // [rsp+1318h] [rbp-2360h] BYREF
  _DWORD v45[178]; // [rsp+1568h] [rbp-2110h] BYREF
  _DWORD v46[178]; // [rsp+1830h] [rbp-1E48h] BYREF
  _BYTE v47[712]; // [rsp+1AF8h] [rbp-1B80h] BYREF
  _BYTE v48[712]; // [rsp+1DC0h] [rbp-18B8h] BYREF
  _BYTE v49[712]; // [rsp+2088h] [rbp-15F0h] BYREF
  _BYTE v50[712]; // [rsp+2350h] [rbp-1328h] BYREF
  _QWORD v51[89]; // [rsp+2618h] [rbp-1060h] BYREF
  _BYTE v52[712]; // [rsp+28E0h] [rbp-D98h] BYREF
  _BYTE v53[712]; // [rsp+2BA8h] [rbp-AD0h] BYREF
  _QWORD src[89]; // [rsp+2E70h] [rbp-808h] BYREF
  _BYTE v55[592]; // [rsp+3138h] [rbp-540h] BYREF
  _BYTE desta[752]; // [rsp+3388h] [rbp-2F0h] BYREF

  v51[7] = 0LL;
  *(_QWORD *)&v45[58] = 0LL;
  *(_QWORD *)&v35[280] = 0LL;
  v2 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v3, 1LL, 1LL, v4);
  clap_builder::builder::command::Command::new::new_inner(src, v3, v4);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v45, desta);
  uucore::format_usage((unsigned int)&v32);
  v5 = v32;
  if ( v32 != 0x8000000000000000LL )
    v27[0] = v33;
  if ( *(_QWORD *)&v45[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v45[116], aOptionFile1Fil);
  *(_QWORD *)&v45[116] = v5;
  *(_OWORD *)&v45[118] = v27[0];
  memcpy(v46, v45, 0x2BCuLL);
  *(_QWORD *)&v46[175] = *(_QWORD *)&v45[175] | 0x8800000088LL;
  v46[177] = v45[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = a1;
  *((_QWORD *)&v27[33] + 1) = 1LL;
  memcpy(v36, v27, 0x240uLL);
  *(_QWORD *)&v36[580] = *(_QWORD *)((char *)&v27[36] + 4);
  v37 = HIDWORD(v27[36]);
  *(_DWORD *)&v36[576] = 49;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aSuppressColumn, 41LL);
  v6 = *(_QWORD *)&v27[0];
  v34[0] = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v22 = v34[0];
  if ( *(_QWORD *)&v36[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v36[440], aSuppressColumn);
  *(_QWORD *)&v36[440] = v6;
  *(_OWORD *)&v36[448] = v22;
  memcpy(v27, v36, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)((char *)&v37 + 1);
  HIBYTE(v27[36]) = HIBYTE(v37);
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v46, v27);
  memcpy(v53, v46, sizeof(v53));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = a2;
  *((_QWORD *)&v27[33] + 1) = 1LL;
  memcpy(v38, v27, 0x240uLL);
  *(_QWORD *)&v38[580] = *(_QWORD *)((char *)&v27[36] + 4);
  v39 = HIDWORD(v27[36]);
  *(_DWORD *)&v38[576] = 50;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aSuppressColumn_0, 41LL);
  v7 = *(_QWORD *)&v27[0];
  v34[0] = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v22 = v34[0];
  if ( *(_QWORD *)&v38[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38[440], aSuppressColumn_0);
  *(_QWORD *)&v38[440] = v7;
  *(_OWORD *)&v38[448] = v22;
  memcpy(v27, v38, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)((char *)&v39 + 1);
  HIBYTE(v27[36]) = HIBYTE(v39);
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v53, v27);
  memcpy(v52, v53, sizeof(v52));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = a3;
  *((_QWORD *)&v27[33] + 1) = 1LL;
  memcpy(v40, v27, 0x240uLL);
  *(_QWORD *)&v40[580] = *(_QWORD *)((char *)&v27[36] + 4);
  v41 = HIDWORD(v27[36]);
  *(_DWORD *)&v40[576] = 51;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aSuppressColumn_1, 51LL);
  v8 = *(_QWORD *)&v27[0];
  v34[0] = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v22 = v34[0];
  if ( *(_QWORD *)&v40[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40[440], aSuppressColumn_1);
  *(_QWORD *)&v40[440] = v8;
  *(_OWORD *)&v40[448] = v22;
  memcpy(v27, v40, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)((char *)&v41 + 1);
  HIBYTE(v27[36]) = HIBYTE(v41);
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v52, v27);
  memcpy(v51, v52, sizeof(v51));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aOutputDelimite;
  *((_QWORD *)&v27[33] + 1) = 16LL;
  memcpy(v43, v27, 0x220uLL);
  v43[35] = v27[35];
  v43[36] = v27[36];
  *(_QWORD *)&v43[34] = aOutputDelimite;
  *((_QWORD *)&v43[34] + 1) = 16LL;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aSeparateColumn, 25LL);
  v9 = *(_QWORD *)&v27[0];
  v34[0] = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v22 = v34[0];
  if ( *((_QWORD *)&v43[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v43[27] + 8, aSeparateColumn);
  *((_QWORD *)&v43[27] + 1) = v9;
  v43[28] = v22;
  memcpy(v27, v43, sizeof(v27));
  *(_QWORD *)&v34[0] = aStr;
  *((_QWORD *)&v34[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v55, v27);
  memcpy(v34, v55, sizeof(v34));
  *(_QWORD *)&v23 = asc_1E3C5;
  *((_QWORD *)&v23 + 1) = 1LL;
  *(_QWORD *)&v24 = 0LL;
  *((_QWORD *)&v24 + 1) = 1LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v28, 1LL, 0LL);
  if ( v28 )
    alloc::raw_vec::handle_error(v29, *((_QWORD *)&v29 + 1));
  v10 = *((_QWORD *)&v29 + 1);
  v25 = v29;
  v26 = 0LL;
  v27[1] = v24;
  v27[0] = v23;
  if ( (_QWORD)v29 )
  {
    v11 = 0LL;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v25, 0LL);
    v10 = *((_QWORD *)&v25 + 1);
    v11 = v26;
  }
  v12 = *((_QWORD *)&v27[0] + 1);
  v13 = 16 * v11;
  *(_QWORD *)(v10 + v13) = *(_QWORD *)&v27[0];
  *(_QWORD *)(v10 + v13 + 8) = v12;
  v26 = v11 + 1;
  v31 = v26;
  v30 = v25;
  if ( *(_QWORD *)&v34[23] )
  {
    if ( *(_QWORD *)&v34[23] >> 60 )
      core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
    v14 = 16LL * *(_QWORD *)&v34[23];
    *(_QWORD *)&v27[0] = *((_QWORD *)&v34[23] + 1);
    *((_QWORD *)&v27[0] + 1) = 8LL;
    v15 = 16LL;
  }
  else
  {
    v15 = 8LL;
    v14 = 0LL;
  }
  *(_QWORD *)((char *)v27 + v15) = v14;
  if ( *((_QWORD *)&v27[0] + 1) && *(_QWORD *)&v27[1] )
    _rust_dealloc(*(_QWORD *)&v27[0], *(_QWORD *)&v27[1], *((_QWORD *)&v27[0] + 1));
  *(_QWORD *)&v34[24] = v31;
  v34[23] = v30;
  memcpy(v27, v34, 0x248uLL);
  DWORD2(v27[36]) = DWORD2(v34[36]) | 0x420;
  HIDWORD(v27[36]) = HIDWORD(v34[36]) & 0xFFFFFF00 | 1;
  clap_builder::builder::command::Command::arg_internal(v51, v27);
  memcpy(v50, v51, sizeof(v50));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aZeroTerminated_0;
  *((_QWORD *)&v27[33] + 1) = 15LL;
  memcpy(v42, v27, 0x220uLL);
  v42[35] = v27[35];
  *(_QWORD *)((char *)&v42[36] + 4) = *(_QWORD *)((char *)&v27[36] + 4);
  HIDWORD(v42[36]) = HIDWORD(v27[36]);
  *(_QWORD *)&v42[34] = aZeroTerminated_0;
  *((_QWORD *)&v42[34] + 1) = 15LL;
  LODWORD(v42[36]) = 122;
  v16 = *(_QWORD *)&v42[9];
  if ( *(_QWORD *)&v42[9] == *(_QWORD *)&v42[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v42[8]);
  v17 = *((_QWORD *)&v42[8] + 1);
  v18 = 16 * v16;
  *(_QWORD *)(*((_QWORD *)&v42[8] + 1) + v18) = aZeroTerminated_0;
  *(_QWORD *)(v17 + v18 + 8) = 15LL;
  *(_QWORD *)&v42[9] = v16 + 1;
  memcpy(v44, v42, sizeof(v44));
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aLineDelimiterI, 34LL);
  v19 = *(_QWORD *)&v27[0];
  v34[0] = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v23 = v34[0];
  if ( *((_QWORD *)&v44[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v44[27] + 8, aLineDelimiterI);
  *((_QWORD *)&v44[27] + 1) = v19;
  v44[28] = v23;
  memcpy(v27, v44, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)((char *)&v44[36] + 13);
  HIBYTE(v27[36]) = HIBYTE(v44[36]);
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v50, v27);
  memcpy(v49, v50, sizeof(v49));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v34);
  *(_QWORD *)&v34[33] = aFile1_0;
  *((_QWORD *)&v34[33] + 1) = 5LL;
  memcpy(v27, v34, 0x248uLL);
  DWORD2(v27[36]) = DWORD2(v34[36]) | 1;
  BYTE12(v27[36]) = BYTE12(v34[36]);
  BYTE13(v27[36]) = 3;
  HIWORD(v27[36]) = HIWORD(v34[36]);
  clap_builder::builder::command::Command::arg_internal(v49, v27);
  memcpy(v48, v49, sizeof(v48));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v34);
  *(_QWORD *)&v34[33] = aFile2_0;
  *((_QWORD *)&v34[33] + 1) = 5LL;
  memcpy(v27, v34, 0x248uLL);
  DWORD2(v27[36]) = DWORD2(v34[36]) | 1;
  BYTE12(v27[36]) = BYTE12(v34[36]);
  BYTE13(v27[36]) = 3;
  HIWORD(v27[36]) = HIWORD(v34[36]);
  clap_builder::builder::command::Command::arg_internal(v48, v27);
  memcpy(v47, v48, sizeof(v47));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[33] = aTotal;
  *((_QWORD *)&v27[33] + 1) = 5LL;
  memcpy(v35, v27, 0x220uLL);
  *(_OWORD *)&v35[560] = v27[35];
  *(_OWORD *)&v35[576] = v27[36];
  *(_QWORD *)&v35[544] = aTotal;
  *(_QWORD *)&v35[552] = 5LL;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::string::String::push_str(v27, aOutputASummary, 16LL);
  v20 = *(_QWORD *)&v27[0];
  v34[0] = *(_OWORD *)((char *)v27 + 8);
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v23 = v34[0];
  if ( *(_QWORD *)&v35[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35[440], aOutputASummary);
  *(_QWORD *)&v35[440] = v20;
  *(_OWORD *)&v35[448] = v23;
  memcpy(v27, v35, 0x24CuLL);
  *(_WORD *)((char *)&v27[36] + 13) = *(_WORD *)&v35[589];
  HIBYTE(v27[36]) = v35[591];
  BYTE12(v27[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v47, v27);
  memcpy(dest, v47, 0x2C8uLL);
  return dest;
}
