void *__fastcall uu_truncate::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int128 v16; // [rsp+0h] [rbp-3018h]
  __int64 v17; // [rsp+18h] [rbp-3000h] BYREF
  __int128 v18; // [rsp+20h] [rbp-2FF8h]
  _OWORD v19[37]; // [rsp+30h] [rbp-2FE8h] BYREF
  _OWORD v20[37]; // [rsp+280h] [rbp-2D98h] BYREF
  _BYTE v21[588]; // [rsp+4D8h] [rbp-2B40h] BYREF
  int v22; // [rsp+724h] [rbp-28F4h]
  _BYTE v23[588]; // [rsp+728h] [rbp-28F0h] BYREF
  int v24; // [rsp+974h] [rbp-26A4h]
  _OWORD v25[37]; // [rsp+978h] [rbp-26A0h] BYREF
  _OWORD v26[37]; // [rsp+BC8h] [rbp-2450h] BYREF
  _DWORD v27[178]; // [rsp+E18h] [rbp-2200h] BYREF
  _OWORD v28[37]; // [rsp+10E0h] [rbp-1F38h] BYREF
  _OWORD v29[37]; // [rsp+1330h] [rbp-1CE8h] BYREF
  _DWORD v30[178]; // [rsp+1580h] [rbp-1A98h] BYREF
  _BYTE v31[584]; // [rsp+1848h] [rbp-17D0h] BYREF
  int v32; // [rsp+1A90h] [rbp-1588h]
  char v33; // [rsp+1A94h] [rbp-1584h]
  __int16 v34; // [rsp+1A96h] [rbp-1582h]
  _BYTE v35[712]; // [rsp+1A98h] [rbp-1580h] BYREF
  _QWORD v36[89]; // [rsp+1D60h] [rbp-12B8h] BYREF
  _BYTE v37[712]; // [rsp+2028h] [rbp-FF0h] BYREF
  _BYTE v38[712]; // [rsp+22F0h] [rbp-D28h] BYREF
  _BYTE v39[592]; // [rsp+25B8h] [rbp-A60h] BYREF
  _QWORD src[89]; // [rsp+2808h] [rbp-810h] BYREF
  _BYTE v41[592]; // [rsp+2AD0h] [rbp-548h] BYREF
  _BYTE desta[760]; // [rsp+2D20h] [rbp-2F8h] BYREF

  v36[81] = 0LL;
  *(_QWORD *)&v27[116] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v27, desta);
  uucore::format_usage((unsigned int)&v17);
  v4 = v17;
  if ( v17 != 0x8000000000000000LL )
    v19[0] = v18;
  if ( *(_QWORD *)&v27[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v27[116], aOptionFile);
  *(_QWORD *)&v27[116] = v4;
  *(_OWORD *)&v27[118] = v19[0];
  memcpy(v30, v27, 0x2BCuLL);
  *(_QWORD *)&v30[175] = *(_QWORD *)&v27[175] | 0x8000000080LL;
  v30[177] = v27[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[33] = aIoBlocks;
  *((_QWORD *)&v19[33] + 1) = 9LL;
  memcpy(v21, v19, 0x220uLL);
  *(_OWORD *)&v21[560] = v19[35];
  *(_QWORD *)&v21[580] = *(_QWORD *)((char *)&v19[36] + 4);
  v22 = HIDWORD(v19[36]);
  *(_QWORD *)&v21[544] = aIoBlocks;
  *(_QWORD *)&v21[552] = 9LL;
  *(_DWORD *)&v21[576] = 111;
  *(_QWORD *)&v19[0] = 0LL;
  *((_QWORD *)&v19[0] + 1) = 1LL;
  *(_QWORD *)&v19[1] = 0LL;
  alloc::string::String::push_str(v19, aTreatSizeAsThe, 86LL);
  v5 = *(_QWORD *)&v19[0];
  v20[0] = *(_OWORD *)((char *)v19 + 8);
  if ( *(_QWORD *)&v19[0] != 0x8000000000000000LL )
    v16 = v20[0];
  if ( *(_QWORD *)&v21[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v21[440], aTreatSizeAsThe);
  *(_QWORD *)&v21[440] = v5;
  *(_OWORD *)&v21[448] = v16;
  memcpy(v19, v21, 0x24CuLL);
  *(_WORD *)((char *)&v19[36] + 13) = *(_WORD *)((char *)&v22 + 1);
  HIBYTE(v19[36]) = HIBYTE(v22);
  BYTE12(v19[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v30, v19);
  memcpy(v38, v30, sizeof(v38));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[33] = aNoCreate;
  *((_QWORD *)&v19[33] + 1) = 9LL;
  memcpy(v23, v19, 0x220uLL);
  *(_OWORD *)&v23[560] = v19[35];
  *(_QWORD *)&v23[580] = *(_QWORD *)((char *)&v19[36] + 4);
  v24 = HIDWORD(v19[36]);
  *(_QWORD *)&v23[544] = aNoCreate;
  *(_QWORD *)&v23[552] = 9LL;
  *(_DWORD *)&v23[576] = 99;
  *(_QWORD *)&v19[0] = 0LL;
  *((_QWORD *)&v19[0] + 1) = 1LL;
  *(_QWORD *)&v19[1] = 0LL;
  alloc::string::String::push_str(v19, aDoNotCreateFil, 37LL);
  v6 = *(_QWORD *)&v19[0];
  v20[0] = *(_OWORD *)((char *)v19 + 8);
  if ( *(_QWORD *)&v19[0] != 0x8000000000000000LL )
    v16 = v20[0];
  if ( *(_QWORD *)&v23[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v23[440], aDoNotCreateFil);
  *(_QWORD *)&v23[440] = v6;
  *(_OWORD *)&v23[448] = v16;
  memcpy(v19, v23, 0x24CuLL);
  *(_WORD *)((char *)&v19[36] + 13) = *(_WORD *)((char *)&v24 + 1);
  HIBYTE(v19[36]) = HIBYTE(v24);
  BYTE12(v19[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v38, v19);
  memcpy(v37, v38, sizeof(v37));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[33] = aReference;
  *((_QWORD *)&v19[33] + 1) = 9LL;
  memcpy(v25, v19, 0x220uLL);
  v25[35] = v19[35];
  *(_QWORD *)((char *)&v25[36] + 4) = *(_QWORD *)((char *)&v19[36] + 4);
  HIDWORD(v25[36]) = HIDWORD(v19[36]);
  *(_QWORD *)&v25[34] = aReference;
  *((_QWORD *)&v25[34] + 1) = 9LL;
  LODWORD(v25[36]) = 114;
  v7 = *((_QWORD *)&v25[16] + 1);
  if ( *((_QWORD *)&v25[16] + 1) == *((_QWORD *)&v25[15] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v25[15] + 8);
  v8 = *(_QWORD *)&v25[16];
  v9 = 16 * v7;
  *(_QWORD *)(*(_QWORD *)&v25[16] + v9) = aSize;
  *(_QWORD *)(v8 + v9 + 8) = 4LL;
  *((_QWORD *)&v25[16] + 1) = v7 + 1;
  memcpy(v28, v25, sizeof(v28));
  *(_QWORD *)&v19[0] = 0LL;
  *((_QWORD *)&v19[0] + 1) = 1LL;
  *(_QWORD *)&v19[1] = 0LL;
  alloc::string::String::push_str(v19, aBaseTheSizeOfE, 47LL);
  v10 = *(_QWORD *)&v19[0];
  v20[0] = *(_OWORD *)((char *)v19 + 8);
  if ( *(_QWORD *)&v19[0] != 0x8000000000000000LL )
    v16 = v20[0];
  if ( *((_QWORD *)&v28[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v28[27] + 8, aBaseTheSizeOfE);
  *((_QWORD *)&v28[27] + 1) = v10;
  v28[28] = v16;
  memcpy(v19, v28, sizeof(v19));
  *(_QWORD *)&v20[0] = aRfile;
  *((_QWORD *)&v20[0] + 1) = 5LL;
  clap_builder::builder::arg::Arg::value_names(v39, v19);
  v39[589] = 3;
  memcpy(v19, v39, sizeof(v19));
  clap_builder::builder::command::Command::arg_internal(v37, v19);
  memcpy(v36, v37, sizeof(v36));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[33] = aSize;
  *((_QWORD *)&v19[33] + 1) = 4LL;
  memcpy(v26, v19, 0x220uLL);
  v26[35] = v19[35];
  *(_QWORD *)((char *)&v26[36] + 4) = *(_QWORD *)((char *)&v19[36] + 4);
  HIDWORD(v26[36]) = HIDWORD(v19[36]);
  *(_QWORD *)&v26[34] = aSize;
  *((_QWORD *)&v26[34] + 1) = 4LL;
  LODWORD(v26[36]) = 115;
  v11 = *((_QWORD *)&v26[16] + 1);
  if ( *((_QWORD *)&v26[16] + 1) == *((_QWORD *)&v26[15] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v26[15] + 8);
  v12 = *(_QWORD *)&v26[16];
  v13 = 16 * v11;
  *(_QWORD *)(*(_QWORD *)&v26[16] + v13) = aReference;
  *(_QWORD *)(v12 + v13 + 8) = 9LL;
  *((_QWORD *)&v26[16] + 1) = v11 + 1;
  memcpy(v29, v26, sizeof(v29));
  *(_QWORD *)&v19[0] = 0LL;
  *((_QWORD *)&v19[0] + 1) = 1LL;
  *(_QWORD *)&v19[1] = 0LL;
  alloc::string::String::push_str(v19, aSetOrAdjustThe, 104LL);
  v14 = *(_QWORD *)&v19[0];
  v20[0] = *(_OWORD *)((char *)v19 + 8);
  if ( *(_QWORD *)&v19[0] != 0x8000000000000000LL )
    v16 = v20[0];
  if ( *((_QWORD *)&v29[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v29[27] + 8, aSetOrAdjustThe);
  *((_QWORD *)&v29[27] + 1) = v14;
  v29[28] = v16;
  memcpy(v19, v29, sizeof(v19));
  *(_QWORD *)&v20[0] = aSizezero;
  *((_QWORD *)&v20[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v41, v19);
  memcpy(v19, v41, sizeof(v19));
  clap_builder::builder::command::Command::arg_internal(v36, v19);
  memcpy(v35, v36, sizeof(v35));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v20);
  *(_QWORD *)&v20[33] = aFiles;
  *((_QWORD *)&v20[33] + 1) = 5LL;
  memcpy(v19, v20, sizeof(v19));
  *(_QWORD *)&v20[0] = aFile;
  *((_QWORD *)&v20[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v31, v19);
  v33 = 1;
  memcpy(v19, v31, 0x248uLL);
  DWORD2(v19[36]) = v32 | 1;
  WORD6(v19[36]) = 769;
  HIWORD(v19[36]) = v34;
  clap_builder::builder::command::Command::arg_internal(v35, v19);
  memcpy(dest, v35, 0x2C8uLL);
  return dest;
}
