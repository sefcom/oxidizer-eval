void *__fastcall uu_uname::uu_app(void *dest)
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
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // r14
  __int128 v21; // [rsp+0h] [rbp-3D78h]
  _BYTE v22[588]; // [rsp+20h] [rbp-3D58h] BYREF
  unsigned int v23; // [rsp+26Ch] [rbp-3B0Ch]
  __int64 v24; // [rsp+270h] [rbp-3B08h] BYREF
  __int128 v25; // [rsp+278h] [rbp-3B00h]
  _BYTE v26[588]; // [rsp+288h] [rbp-3AF0h] BYREF
  unsigned int v27; // [rsp+4D4h] [rbp-38A4h]
  _BYTE v28[588]; // [rsp+4D8h] [rbp-38A0h] BYREF
  unsigned int v29; // [rsp+724h] [rbp-3654h]
  _BYTE v30[588]; // [rsp+728h] [rbp-3650h] BYREF
  unsigned int v31; // [rsp+974h] [rbp-3404h]
  _BYTE v32[588]; // [rsp+978h] [rbp-3400h] BYREF
  unsigned int v33; // [rsp+BC4h] [rbp-31B4h]
  _BYTE v34[588]; // [rsp+BC8h] [rbp-31B0h] BYREF
  unsigned int v35; // [rsp+E14h] [rbp-2F64h]
  _BYTE v36[588]; // [rsp+E18h] [rbp-2F60h] BYREF
  unsigned int v37; // [rsp+1064h] [rbp-2D14h]
  _BYTE v38[588]; // [rsp+1068h] [rbp-2D10h] BYREF
  unsigned int v39; // [rsp+12B4h] [rbp-2AC4h]
  _OWORD v40[37]; // [rsp+12B8h] [rbp-2AC0h] BYREF
  _OWORD v41[37]; // [rsp+1508h] [rbp-2870h] BYREF
  _OWORD v42[37]; // [rsp+1758h] [rbp-2620h] BYREF
  _OWORD v43[37]; // [rsp+19A8h] [rbp-23D0h] BYREF
  _DWORD v44[178]; // [rsp+1BF8h] [rbp-2180h] BYREF
  _DWORD v45[178]; // [rsp+1EC0h] [rbp-1EB8h] BYREF
  _BYTE v46[712]; // [rsp+2188h] [rbp-1BF0h] BYREF
  _BYTE v47[712]; // [rsp+2450h] [rbp-1928h] BYREF
  _BYTE v48[712]; // [rsp+2718h] [rbp-1660h] BYREF
  _BYTE v49[712]; // [rsp+29E0h] [rbp-1398h] BYREF
  _QWORD v50[89]; // [rsp+2CA8h] [rbp-10D0h] BYREF
  _BYTE v51[712]; // [rsp+2F70h] [rbp-E08h] BYREF
  _BYTE v52[712]; // [rsp+3238h] [rbp-B40h] BYREF
  _BYTE v53[712]; // [rsp+3500h] [rbp-878h] BYREF
  _QWORD src[89]; // [rsp+37C8h] [rbp-5B0h] BYREF
  _BYTE desta[744]; // [rsp+3A90h] [rbp-2E8h] BYREF

  v50[22] = 0LL;
  *(_QWORD *)&v44[88] = 0LL;
  *(_QWORD *)&v34[400] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v44, desta);
  uucore::format_usage((unsigned int)&v24);
  v4 = v24;
  if ( v24 != 0x8000000000000000LL )
    *(_OWORD *)v22 = v25;
  if ( *(_QWORD *)&v44[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v44[116], aOption);
  *(_QWORD *)&v44[116] = v4;
  *(_OWORD *)&v44[118] = *(_OWORD *)v22;
  memcpy(v45, v44, 0x2BCuLL);
  *(_QWORD *)&v45[175] = *(_QWORD *)&v44[175] | 0x8000000080LL;
  v45[177] = v44[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[528] = aAll;
  *(_QWORD *)&v22[536] = 3LL;
  memcpy(v26, v22, 0x220uLL);
  *(_OWORD *)&v26[560] = *(_OWORD *)&v22[560];
  *(_QWORD *)&v26[580] = *(_QWORD *)&v22[580];
  v27 = v23;
  *(_QWORD *)&v26[544] = aAll;
  *(_QWORD *)&v26[552] = 3LL;
  *(_DWORD *)&v26[576] = 97;
  *(_QWORD *)v22 = 0LL;
  *(_QWORD *)&v22[8] = 1LL;
  *(_QWORD *)&v22[16] = 0LL;
  alloc::string::String::push_str(v22, aBehaveAsThough, 59LL);
  v5 = *(_QWORD *)v22;
  if ( *(_QWORD *)v22 != 0x8000000000000000LL )
    v21 = *(_OWORD *)&v22[8];
  if ( *(_QWORD *)&v26[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26[440], aBehaveAsThough);
  *(_QWORD *)&v26[440] = v5;
  *(_OWORD *)&v26[448] = v21;
  memcpy(v22, v26, sizeof(v22));
  *(_WORD *)((char *)&v23 + 1) = *(_WORD *)((char *)&v27 + 1);
  HIBYTE(v23) = HIBYTE(v27);
  LOBYTE(v23) = 2;
  clap_builder::builder::command::Command::arg_internal(v45, v22);
  memcpy(v53, v45, sizeof(v53));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[528] = aKernelName;
  *(_QWORD *)&v22[536] = 11LL;
  memcpy(v40, v22, 0x220uLL);
  v40[35] = *(_OWORD *)&v22[560];
  *(_QWORD *)((char *)&v40[36] + 4) = *(_QWORD *)&v22[580];
  HIDWORD(v40[36]) = v23;
  *(_QWORD *)&v40[34] = aKernelName;
  *((_QWORD *)&v40[34] + 1) = 11LL;
  LODWORD(v40[36]) = 115;
  v6 = *((_QWORD *)&v40[19] + 1);
  if ( *((_QWORD *)&v40[19] + 1) == *((_QWORD *)&v40[18] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v40[18] + 8);
  v7 = *(_QWORD *)&v40[19];
  v8 = 3 * v6;
  *(_QWORD *)(*(_QWORD *)&v40[19] + 8 * v8) = &unk_1DB35;
  *(_QWORD *)(v7 + 8 * v8 + 8) = 7LL;
  *(_BYTE *)(v7 + 8 * v8 + 16) = 0;
  *((_QWORD *)&v40[19] + 1) = v6 + 1;
  memcpy(v42, v40, sizeof(v42));
  *(_QWORD *)v22 = 0LL;
  *(_QWORD *)&v22[8] = 1LL;
  *(_QWORD *)&v22[16] = 0LL;
  alloc::string::String::push_str(v22, aPrintTheKernel, 22LL);
  v9 = *(_QWORD *)v22;
  if ( *(_QWORD *)v22 != 0x8000000000000000LL )
    v21 = *(_OWORD *)&v22[8];
  if ( *((_QWORD *)&v42[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v42[27] + 8, aPrintTheKernel);
  *((_QWORD *)&v42[27] + 1) = v9;
  v42[28] = v21;
  memcpy(v22, v42, sizeof(v22));
  *(_WORD *)((char *)&v23 + 1) = *(_WORD *)((char *)&v42[36] + 13);
  HIBYTE(v23) = HIBYTE(v42[36]);
  LOBYTE(v23) = 2;
  clap_builder::builder::command::Command::arg_internal(v53, v22);
  memcpy(v52, v53, sizeof(v52));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[528] = &unk_171F8;
  *(_QWORD *)&v22[536] = 8LL;
  memcpy(v28, v22, 0x220uLL);
  *(_OWORD *)&v28[560] = *(_OWORD *)&v22[560];
  *(_QWORD *)&v28[580] = *(_QWORD *)&v22[580];
  v29 = v23;
  *(_QWORD *)&v28[544] = &unk_171F8;
  *(_QWORD *)&v28[552] = 8LL;
  *(_DWORD *)&v28[576] = 110;
  *(_QWORD *)v22 = 0LL;
  *(_QWORD *)&v22[8] = 1LL;
  *(_QWORD *)&v22[16] = 0LL;
  alloc::string::String::push_str(v22, aPrintTheNodena, 104LL);
  v10 = *(_QWORD *)v22;
  if ( *(_QWORD *)v22 != 0x8000000000000000LL )
    v21 = *(_OWORD *)&v22[8];
  if ( *(_QWORD *)&v28[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28[440], aPrintTheNodena);
  *(_QWORD *)&v28[440] = v10;
  *(_OWORD *)&v28[448] = v21;
  memcpy(v22, v28, sizeof(v22));
  *(_WORD *)((char *)&v23 + 1) = *(_WORD *)((char *)&v29 + 1);
  HIBYTE(v23) = HIBYTE(v29);
  LOBYTE(v23) = 2;
  clap_builder::builder::command::Command::arg_internal(v52, v22);
  memcpy(v51, v52, sizeof(v51));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[528] = aKernelRelease;
  *(_QWORD *)&v22[536] = 14LL;
  memcpy(v41, v22, 0x220uLL);
  v41[35] = *(_OWORD *)&v22[560];
  *(_QWORD *)((char *)&v41[36] + 4) = *(_QWORD *)&v22[580];
  HIDWORD(v41[36]) = v23;
  *(_QWORD *)&v41[34] = aKernelRelease;
  *((_QWORD *)&v41[34] + 1) = 14LL;
  LODWORD(v41[36]) = 114;
  v11 = *((_QWORD *)&v41[19] + 1);
  if ( *((_QWORD *)&v41[19] + 1) == *((_QWORD *)&v41[18] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v41[18] + 8);
  v12 = *(_QWORD *)&v41[19];
  v13 = 3 * v11;
  *(_QWORD *)(*(_QWORD *)&v41[19] + 8 * v13) = &unk_1DBBA;
  *(_QWORD *)(v12 + 8 * v13 + 8) = 7LL;
  *(_BYTE *)(v12 + 8 * v13 + 16) = 0;
  *((_QWORD *)&v41[19] + 1) = v11 + 1;
  memcpy(v43, v41, sizeof(v43));
  *(_QWORD *)v22 = 0LL;
  *(_QWORD *)&v22[8] = 1LL;
  *(_QWORD *)&v22[16] = 0LL;
  alloc::string::String::push_str(v22, aPrintTheOperat_0, 35LL);
  v14 = *(_QWORD *)v22;
  if ( *(_QWORD *)v22 != 0x8000000000000000LL )
    v21 = *(_OWORD *)&v22[8];
  if ( *((_QWORD *)&v43[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v43[27] + 8, aPrintTheOperat_0);
  *((_QWORD *)&v43[27] + 1) = v14;
  v43[28] = v21;
  memcpy(v22, v43, sizeof(v22));
  *(_WORD *)((char *)&v23 + 1) = *(_WORD *)((char *)&v43[36] + 13);
  HIBYTE(v23) = HIBYTE(v43[36]);
  LOBYTE(v23) = 2;
  clap_builder::builder::command::Command::arg_internal(v51, v22);
  memcpy(v50, v51, sizeof(v50));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[528] = aKernelVersion;
  *(_QWORD *)&v22[536] = 14LL;
  memcpy(v30, v22, 0x220uLL);
  *(_OWORD *)&v30[560] = *(_OWORD *)&v22[560];
  *(_QWORD *)&v30[580] = *(_QWORD *)&v22[580];
  v31 = v23;
  *(_QWORD *)&v30[544] = aKernelVersion;
  *(_QWORD *)&v30[552] = 14LL;
  *(_DWORD *)&v30[576] = 118;
  *(_QWORD *)v22 = 0LL;
  *(_QWORD *)&v22[8] = 1LL;
  *(_QWORD *)&v22[16] = 0LL;
  alloc::string::String::push_str(v22, aPrintTheOperat_1, 35LL);
  v15 = *(_QWORD *)v22;
  if ( *(_QWORD *)v22 != 0x8000000000000000LL )
    v21 = *(_OWORD *)&v22[8];
  if ( *(_QWORD *)&v30[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v30[440], aPrintTheOperat_1);
  *(_QWORD *)&v30[440] = v15;
  *(_OWORD *)&v30[448] = v21;
  memcpy(v22, v30, sizeof(v22));
  *(_WORD *)((char *)&v23 + 1) = *(_WORD *)((char *)&v31 + 1);
  HIBYTE(v23) = HIBYTE(v31);
  LOBYTE(v23) = 2;
  clap_builder::builder::command::Command::arg_internal(v50, v22);
  memcpy(v49, v50, sizeof(v49));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[528] = aMachine;
  *(_QWORD *)&v22[536] = 7LL;
  memcpy(v32, v22, 0x220uLL);
  *(_OWORD *)&v32[560] = *(_OWORD *)&v22[560];
  *(_QWORD *)&v32[580] = *(_QWORD *)&v22[580];
  v33 = v23;
  *(_QWORD *)&v32[544] = aMachine;
  *(_QWORD *)&v32[552] = 7LL;
  *(_DWORD *)&v32[576] = 109;
  *(_QWORD *)v22 = 0LL;
  *(_QWORD *)&v22[8] = 1LL;
  *(_QWORD *)&v22[16] = 0LL;
  alloc::string::String::push_str(v22, aPrintTheMachin, 32LL);
  v16 = *(_QWORD *)v22;
  if ( *(_QWORD *)v22 != 0x8000000000000000LL )
    v21 = *(_OWORD *)&v22[8];
  if ( *(_QWORD *)&v32[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v32[440], aPrintTheMachin);
  *(_QWORD *)&v32[440] = v16;
  *(_OWORD *)&v32[448] = v21;
  memcpy(v22, v32, sizeof(v22));
  *(_WORD *)((char *)&v23 + 1) = *(_WORD *)((char *)&v33 + 1);
  HIBYTE(v23) = HIBYTE(v33);
  LOBYTE(v23) = 2;
  clap_builder::builder::command::Command::arg_internal(v49, v22);
  memcpy(v48, v49, sizeof(v48));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[528] = aOperatingSyste;
  *(_QWORD *)&v22[536] = 16LL;
  memcpy(v34, v22, 0x220uLL);
  *(_OWORD *)&v34[560] = *(_OWORD *)&v22[560];
  *(_QWORD *)&v34[580] = *(_QWORD *)&v22[580];
  v35 = v23;
  *(_QWORD *)&v34[544] = aOperatingSyste;
  *(_QWORD *)&v34[552] = 16LL;
  *(_DWORD *)&v34[576] = 111;
  *(_QWORD *)v22 = 0LL;
  *(_QWORD *)&v22[8] = 1LL;
  *(_QWORD *)&v22[16] = 0LL;
  alloc::string::String::push_str(v22, aPrintTheOperat, 32LL);
  v17 = *(_QWORD *)v22;
  if ( *(_QWORD *)v22 != 0x8000000000000000LL )
    v21 = *(_OWORD *)&v22[8];
  if ( *(_QWORD *)&v34[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34[440], aPrintTheOperat);
  *(_QWORD *)&v34[440] = v17;
  *(_OWORD *)&v34[448] = v21;
  memcpy(v22, v34, sizeof(v22));
  *(_WORD *)((char *)&v23 + 1) = *(_WORD *)((char *)&v35 + 1);
  HIBYTE(v23) = HIBYTE(v35);
  LOBYTE(v23) = 2;
  clap_builder::builder::command::Command::arg_internal(v48, v22);
  memcpy(v47, v48, sizeof(v47));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[528] = aProcessor;
  *(_QWORD *)&v22[536] = 9LL;
  memcpy(v36, v22, 0x220uLL);
  *(_OWORD *)&v36[560] = *(_OWORD *)&v22[560];
  *(_QWORD *)&v36[580] = *(_QWORD *)&v22[580];
  v37 = v23;
  *(_QWORD *)&v36[544] = aProcessor;
  *(_QWORD *)&v36[552] = 9LL;
  *(_DWORD *)&v36[576] = 112;
  *(_QWORD *)v22 = 0LL;
  *(_QWORD *)&v22[8] = 1LL;
  *(_QWORD *)&v22[16] = 0LL;
  alloc::string::String::push_str(v22, aPrintTheProces, 39LL);
  v18 = *(_QWORD *)v22;
  if ( *(_QWORD *)v22 != 0x8000000000000000LL )
    v21 = *(_OWORD *)&v22[8];
  if ( *(_QWORD *)&v36[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v36[440], aPrintTheProces);
  *(_QWORD *)&v36[440] = v18;
  *(_OWORD *)&v36[448] = v21;
  memcpy(v22, v36, 0x248uLL);
  *(_DWORD *)&v22[584] = *(_DWORD *)&v36[584] | 4;
  v23 = v37 & 0xFFFFFF00 | 2;
  clap_builder::builder::command::Command::arg_internal(v47, v22);
  memcpy(v46, v47, sizeof(v46));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[528] = aHardwarePlatfo;
  *(_QWORD *)&v22[536] = 17LL;
  memcpy(v38, v22, 0x220uLL);
  *(_OWORD *)&v38[560] = *(_OWORD *)&v22[560];
  *(_QWORD *)&v38[580] = *(_QWORD *)&v22[580];
  v39 = v23;
  *(_QWORD *)&v38[544] = aHardwarePlatfo;
  *(_QWORD *)&v38[552] = 17LL;
  *(_DWORD *)&v38[576] = 105;
  *(_QWORD *)v22 = 0LL;
  *(_QWORD *)&v22[8] = 1LL;
  *(_QWORD *)&v22[16] = 0LL;
  alloc::string::String::push_str(v22, aPrintTheHardwa, 42LL);
  v19 = *(_QWORD *)v22;
  if ( *(_QWORD *)v22 != 0x8000000000000000LL )
    v21 = *(_OWORD *)&v22[8];
  if ( *(_QWORD *)&v38[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38[440], aPrintTheHardwa);
  *(_QWORD *)&v38[440] = v19;
  *(_OWORD *)&v38[448] = v21;
  memcpy(v22, v38, 0x248uLL);
  *(_DWORD *)&v22[584] = *(_DWORD *)&v38[584] | 4;
  v23 = v39 & 0xFFFFFF00 | 2;
  clap_builder::builder::command::Command::arg_internal(v46, v22);
  memcpy(dest, v46, 0x2C8uLL);
  return dest;
}
