void *__fastcall uu_tr::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  _OWORD v24[37]; // [rsp+10h] [rbp-2FF8h] BYREF
  __int64 v25; // [rsp+268h] [rbp-2DA0h] BYREF
  __int128 v26; // [rsp+270h] [rbp-2D98h]
  _BYTE v27[588]; // [rsp+280h] [rbp-2D88h] BYREF
  int v28; // [rsp+4CCh] [rbp-2B3Ch]
  _BYTE v29[588]; // [rsp+4D0h] [rbp-2B38h] BYREF
  int v30; // [rsp+71Ch] [rbp-28ECh]
  _BYTE v31[588]; // [rsp+720h] [rbp-28E8h] BYREF
  int v32; // [rsp+96Ch] [rbp-269Ch]
  _BYTE v33[588]; // [rsp+970h] [rbp-2698h] BYREF
  int v34; // [rsp+BBCh] [rbp-244Ch]
  _OWORD v35[37]; // [rsp+BC0h] [rbp-2448h] BYREF
  _QWORD v36[74]; // [rsp+E10h] [rbp-21F8h] BYREF
  _OWORD v37[37]; // [rsp+1060h] [rbp-1FA8h] BYREF
  _QWORD v38[74]; // [rsp+12B0h] [rbp-1D58h] BYREF
  _QWORD v39[74]; // [rsp+1500h] [rbp-1B08h] BYREF
  _QWORD v40[74]; // [rsp+1750h] [rbp-18B8h] BYREF
  _BYTE v41[700]; // [rsp+19A0h] [rbp-1668h] BYREF
  int v42; // [rsp+1C5Ch] [rbp-13ACh]
  __int64 v43; // [rsp+1C60h] [rbp-13A8h]
  _QWORD v44[89]; // [rsp+1C68h] [rbp-13A0h] BYREF
  _QWORD v45[89]; // [rsp+1F30h] [rbp-10D8h] BYREF
  _BYTE v46[712]; // [rsp+21F8h] [rbp-E10h] BYREF
  _BYTE v47[712]; // [rsp+24C0h] [rbp-B48h] BYREF
  _BYTE v48[712]; // [rsp+2788h] [rbp-880h] BYREF
  _QWORD src[89]; // [rsp+2A50h] [rbp-5B8h] BYREF
  _BYTE desta[752]; // [rsp+2D18h] [rbp-2F0h] BYREF

  v45[22] = 0LL;
  v36[58] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v41, desta);
  uucore::format_usage((unsigned int)&v25);
  v4 = v25;
  if ( v25 != 0x8000000000000000LL )
    v24[0] = v26;
  if ( *(_QWORD *)&v41[464] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v41[464], aOptionSet1Set2);
  *(_QWORD *)&v41[464] = v4;
  *(_OWORD *)&v41[472] = v24[0];
  memcpy(v44, v41, 0x2BCuLL);
  HIDWORD(v44[87]) = v42 | 0xA0;
  v44[88] = v43 | 0x80;
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v24);
  *(_QWORD *)&v24[33] = aComplement_0;
  *((_QWORD *)&v24[33] + 1) = 10LL;
  memcpy(v37, v24, sizeof(v37));
  v5 = *(_QWORD *)&v37[21];
  if ( *(_QWORD *)&v37[21] == *(_QWORD *)&v37[20] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v37[20]);
  v6 = *((_QWORD *)&v37[20] + 1);
  *(_DWORD *)(*((_QWORD *)&v37[20] + 1) + 8 * v5) = 67;
  *(_BYTE *)(v6 + 8 * v5 + 4) = 1;
  *(_QWORD *)&v37[21] = v5 + 1;
  memcpy(v27, v37, 0x220uLL);
  *(_OWORD *)&v27[560] = v37[35];
  *(_QWORD *)&v27[580] = *(_QWORD *)((char *)&v37[36] + 4);
  v28 = HIDWORD(v37[36]);
  *(_QWORD *)&v27[544] = aComplement_0;
  *(_QWORD *)&v27[552] = 10LL;
  *(_DWORD *)&v27[576] = 99;
  *(_QWORD *)&v24[0] = 0LL;
  *((_QWORD *)&v24[0] + 1) = 1LL;
  *(_QWORD *)&v24[1] = 0LL;
  alloc::string::String::push_str(v24, aUseTheCompleme, 26LL);
  v7 = *(_QWORD *)&v24[0];
  if ( *(_QWORD *)&v24[0] != 0x8000000000000000LL )
    v24[0] = *(_OWORD *)((char *)v24 + 8);
  if ( *(_QWORD *)&v27[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v27[440], aUseTheCompleme);
  *(_QWORD *)&v27[440] = v7;
  *(_OWORD *)&v27[448] = v24[0];
  memcpy(v36, v27, 0x24CuLL);
  *(_WORD *)((char *)&v36[73] + 5) = *(_WORD *)((char *)&v28 + 1);
  HIBYTE(v36[73]) = HIBYTE(v28);
  BYTE4(v36[73]) = 2;
  v8 = v36[18];
  if ( v36[18] == v36[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v36[16]);
  v9 = v36[17];
  v10 = 16 * v8;
  *(_QWORD *)(v36[17] + v10) = aComplement_0;
  *(_QWORD *)(v9 + v10 + 8) = 10LL;
  v36[18] = v8 + 1;
  memcpy(v24, v36, sizeof(v24));
  clap_builder::builder::command::Command::arg_internal(v44, v24);
  memcpy(v48, v44, sizeof(v48));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v24);
  *(_QWORD *)&v24[33] = aDelete_0;
  *((_QWORD *)&v24[33] + 1) = 6LL;
  memcpy(v29, v24, 0x220uLL);
  *(_OWORD *)&v29[560] = v24[35];
  *(_QWORD *)&v29[580] = *(_QWORD *)((char *)&v24[36] + 4);
  v30 = HIDWORD(v24[36]);
  *(_QWORD *)&v29[544] = aDelete_0;
  *(_QWORD *)&v29[552] = 6LL;
  *(_DWORD *)&v29[576] = 100;
  *(_QWORD *)&v24[0] = 0LL;
  *((_QWORD *)&v24[0] + 1) = 1LL;
  *(_QWORD *)&v24[1] = 0LL;
  alloc::string::String::push_str(v24, aDeleteCharacte, 43LL);
  v11 = *(_QWORD *)&v24[0];
  if ( *(_QWORD *)&v24[0] != 0x8000000000000000LL )
    v24[0] = *(_OWORD *)((char *)v24 + 8);
  if ( *(_QWORD *)&v29[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29[440], aDeleteCharacte);
  *(_QWORD *)&v29[440] = v11;
  *(_OWORD *)&v29[448] = v24[0];
  memcpy(v38, v29, 0x24CuLL);
  *(_WORD *)((char *)&v38[73] + 5) = *(_WORD *)((char *)&v30 + 1);
  HIBYTE(v38[73]) = HIBYTE(v30);
  BYTE4(v38[73]) = 2;
  v12 = v38[18];
  if ( v38[18] == v38[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v38[16]);
  v13 = v38[17];
  v14 = 16 * v12;
  *(_QWORD *)(v38[17] + v14) = aDelete_0;
  *(_QWORD *)(v13 + v14 + 8) = 6LL;
  v38[18] = v12 + 1;
  memcpy(v24, v38, sizeof(v24));
  clap_builder::builder::command::Command::arg_internal(v48, v24);
  memcpy(v47, v48, sizeof(v47));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v24);
  *(_QWORD *)&v24[33] = aSqueezeRepeats_0;
  *((_QWORD *)&v24[33] + 1) = 15LL;
  memcpy(v31, v24, 0x220uLL);
  *(_OWORD *)&v31[560] = v24[35];
  *(_QWORD *)&v31[580] = *(_QWORD *)((char *)&v24[36] + 4);
  v32 = HIDWORD(v24[36]);
  *(_QWORD *)&v31[544] = aSqueezeRepeats_0;
  *(_QWORD *)&v31[552] = 15LL;
  *(_DWORD *)&v31[576] = 115;
  *(_QWORD *)&v24[0] = 0LL;
  *((_QWORD *)&v24[0] + 1) = 1LL;
  *(_QWORD *)&v24[1] = 0LL;
  alloc::string::String::push_str(v24, aReplaceEachSeq, 130LL);
  v15 = *(_QWORD *)&v24[0];
  if ( *(_QWORD *)&v24[0] != 0x8000000000000000LL )
    v24[0] = *(_OWORD *)((char *)v24 + 8);
  if ( *(_QWORD *)&v31[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31[440], aReplaceEachSeq);
  *(_QWORD *)&v31[440] = v15;
  *(_OWORD *)&v31[448] = v24[0];
  memcpy(v39, v31, 0x24CuLL);
  *(_WORD *)((char *)&v39[73] + 5) = *(_WORD *)((char *)&v32 + 1);
  HIBYTE(v39[73]) = HIBYTE(v32);
  BYTE4(v39[73]) = 2;
  v16 = v39[18];
  if ( v39[18] == v39[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v39[16]);
  v17 = v39[17];
  v18 = 16 * v16;
  *(_QWORD *)(v39[17] + v18) = aSqueezeRepeats_0;
  *(_QWORD *)(v17 + v18 + 8) = 15LL;
  v39[18] = v16 + 1;
  memcpy(v24, v39, sizeof(v24));
  clap_builder::builder::command::Command::arg_internal(v47, v24);
  memcpy(v46, v47, sizeof(v46));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v24);
  *(_QWORD *)&v24[33] = aTruncateSet1_0;
  *((_QWORD *)&v24[33] + 1) = 13LL;
  memcpy(v33, v24, 0x220uLL);
  *(_OWORD *)&v33[560] = v24[35];
  *(_QWORD *)&v33[580] = *(_QWORD *)((char *)&v24[36] + 4);
  v34 = HIDWORD(v24[36]);
  *(_QWORD *)&v33[544] = aTruncateSet1_0;
  *(_QWORD *)&v33[552] = 13LL;
  *(_DWORD *)&v33[576] = 116;
  *(_QWORD *)&v24[0] = 0LL;
  *((_QWORD *)&v24[0] + 1) = 1LL;
  *(_QWORD *)&v24[1] = 0LL;
  alloc::string::String::push_str(v24, aFirstTruncateS, 37LL);
  v19 = *(_QWORD *)&v24[0];
  if ( *(_QWORD *)&v24[0] != 0x8000000000000000LL )
    v24[0] = *(_OWORD *)((char *)v24 + 8);
  if ( *(_QWORD *)&v33[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v33[440], aFirstTruncateS);
  *(_QWORD *)&v33[440] = v19;
  *(_OWORD *)&v33[448] = v24[0];
  memcpy(v40, v33, 0x24CuLL);
  *(_WORD *)((char *)&v40[73] + 5) = *(_WORD *)((char *)&v34 + 1);
  HIBYTE(v40[73]) = HIBYTE(v34);
  BYTE4(v40[73]) = 2;
  v20 = v40[18];
  if ( v40[18] == v40[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v40[16]);
  v21 = v40[17];
  v22 = 16 * v20;
  *(_QWORD *)(v40[17] + v22) = aTruncateSet1_0;
  *(_QWORD *)(v21 + v22 + 8) = 13LL;
  v40[18] = v20 + 1;
  memcpy(v24, v40, sizeof(v24));
  clap_builder::builder::command::Command::arg_internal(v46, v24);
  memcpy(v45, v46, sizeof(v45));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v24);
  *(_QWORD *)&v24[33] = aSets;
  *((_QWORD *)&v24[33] + 1) = 4LL;
  v35[0] = v24[0];
  memcpy((char *)&v35[2] + 8, (char *)&v24[2] + 8, 0x228uLL);
  *(_QWORD *)&v35[1] = 1LL;
  *((_QWORD *)&v35[1] + 1) = 1LL;
  *(_QWORD *)&v35[2] = -1LL;
  if ( *(_QWORD *)&v35[5] >= 4uLL && *(_QWORD *)&v35[5] != 5LL )
  {
    if ( **(_QWORD **)&v35[6] )
      (**(void (__fastcall ***)(_QWORD))&v35[6])(*((_QWORD *)&v35[5] + 1));
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop((char *)&v35[5] + 8);
  }
  *(_QWORD *)&v35[5] = 2LL;
  memcpy(v24, v35, sizeof(v24));
  clap_builder::builder::command::Command::arg_internal(v45, v24);
  memcpy(dest, v45, 0x2C8uLL);
  return dest;
}
