void *__fastcall uu_cat::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  int v5; // ebp
  int v6; // r14d
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
  __int128 v18; // [rsp+0h] [rbp-45D8h]
  _BYTE v19[588]; // [rsp+10h] [rbp-45C8h] BYREF
  int v20; // [rsp+25Ch] [rbp-437Ch]
  __int64 v21; // [rsp+268h] [rbp-4370h] BYREF
  __int128 v22; // [rsp+270h] [rbp-4368h]
  _BYTE v23[584]; // [rsp+280h] [rbp-4358h] BYREF
  int v24; // [rsp+4C8h] [rbp-4110h]
  __int16 v25; // [rsp+4CEh] [rbp-410Ah]
  _BYTE v26[588]; // [rsp+4D0h] [rbp-4108h] BYREF
  int v27; // [rsp+71Ch] [rbp-3EBCh]
  _BYTE v28[588]; // [rsp+720h] [rbp-3EB8h] BYREF
  int v29; // [rsp+96Ch] [rbp-3C6Ch]
  _BYTE v30[588]; // [rsp+970h] [rbp-3C68h] BYREF
  int v31; // [rsp+BBCh] [rbp-3A1Ch]
  _BYTE v32[588]; // [rsp+BC0h] [rbp-3A18h] BYREF
  int v33; // [rsp+E0Ch] [rbp-37CCh]
  _BYTE v34[588]; // [rsp+E10h] [rbp-37C8h] BYREF
  int v35; // [rsp+105Ch] [rbp-357Ch]
  _BYTE v36[588]; // [rsp+1060h] [rbp-3578h] BYREF
  int v37; // [rsp+12ACh] [rbp-332Ch]
  _BYTE v38[588]; // [rsp+12B0h] [rbp-3328h] BYREF
  int v39; // [rsp+14FCh] [rbp-30DCh]
  _BYTE v40[588]; // [rsp+1500h] [rbp-30D8h] BYREF
  int v41; // [rsp+174Ch] [rbp-2E8Ch]
  _BYTE v42[588]; // [rsp+1750h] [rbp-2E88h] BYREF
  int v43; // [rsp+199Ch] [rbp-2C3Ch]
  _BYTE v44[588]; // [rsp+19A0h] [rbp-2C38h] BYREF
  int v45; // [rsp+1BECh] [rbp-29ECh]
  _QWORD desta[89]; // [rsp+1BF0h] [rbp-29E8h] BYREF
  _DWORD v47[178]; // [rsp+1EB8h] [rbp-2720h] BYREF
  _BYTE v48[700]; // [rsp+2180h] [rbp-2458h] BYREF
  int v49; // [rsp+243Ch] [rbp-219Ch]
  int v50; // [rsp+2440h] [rbp-2198h]
  int v51; // [rsp+2444h] [rbp-2194h]
  _QWORD v52[89]; // [rsp+2448h] [rbp-2190h] BYREF
  _BYTE v53[712]; // [rsp+2710h] [rbp-1EC8h] BYREF
  _BYTE v54[712]; // [rsp+29D8h] [rbp-1C00h] BYREF
  _BYTE v55[712]; // [rsp+2CA0h] [rbp-1938h] BYREF
  _BYTE v56[712]; // [rsp+2F68h] [rbp-1670h] BYREF
  _BYTE v57[712]; // [rsp+3230h] [rbp-13A8h] BYREF
  _QWORD v58[89]; // [rsp+34F8h] [rbp-10E0h] BYREF
  _BYTE v59[712]; // [rsp+37C0h] [rbp-E18h] BYREF
  _BYTE v60[712]; // [rsp+3A88h] [rbp-B50h] BYREF
  _BYTE v61[712]; // [rsp+3D50h] [rbp-888h] BYREF
  _QWORD src[89]; // [rsp+4018h] [rbp-5C0h] BYREF
  _BYTE v63[760]; // [rsp+42E0h] [rbp-2F8h] BYREF

  v58[22] = 0LL;
  v52[44] = 0LL;
  *(_QWORD *)&v40[168] = 0LL;
  *(_QWORD *)&v26[216] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, sizeof(desta));
  uucore::format_usage((unsigned int)&v21);
  v4 = v21;
  if ( v21 != 0x8000000000000000LL )
    *(_OWORD *)v19 = v22;
  if ( desta[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&desta[58], aOptionFile);
  desta[58] = v4;
  *(_OWORD *)&desta[59] = *(_OWORD *)v19;
  memcpy(v63, desta, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v48, v63);
  v5 = v49;
  v6 = v50;
  v49 |= 0x80u;
  v50 |= 0x80u;
  memcpy(v47, v48, 0x2BCuLL);
  v47[175] = v5 | 0x88;
  v47[176] = v6 | 0x88;
  v47[177] = v51;
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[528] = aFile;
  *(_QWORD *)&v23[536] = 4LL;
  memcpy(v19, v23, 0x248uLL);
  *(_DWORD *)&v19[584] = v24 | 4;
  LOWORD(v20) = 769;
  HIWORD(v20) = v25;
  clap_builder::builder::command::Command::arg_internal(v47, v19);
  memcpy(v61, v47, sizeof(v61));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[528] = aShowAll;
  *(_QWORD *)&v19[536] = 8LL;
  memcpy(v26, v19, 0x220uLL);
  *(_OWORD *)&v26[560] = *(_OWORD *)&v19[560];
  *(_QWORD *)&v26[580] = *(_QWORD *)&v19[580];
  v27 = v20;
  *(_QWORD *)&v26[544] = aShowAll;
  *(_QWORD *)&v26[552] = 8LL;
  *(_DWORD *)&v26[576] = 65;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)&v19[8] = 1LL;
  *(_QWORD *)&v19[16] = 0LL;
  alloc::string::String::push_str(v19, aEquivalentToVe, 18LL);
  v7 = *(_QWORD *)v19;
  *(_OWORD *)v23 = *(_OWORD *)&v19[8];
  if ( *(_QWORD *)v19 != 0x8000000000000000LL )
    v18 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v26[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26[440], aEquivalentToVe);
  *(_QWORD *)&v26[440] = v7;
  *(_OWORD *)&v26[448] = v18;
  memcpy(v19, v26, sizeof(v19));
  *(_WORD *)((char *)&v20 + 1) = *(_WORD *)((char *)&v27 + 1);
  HIBYTE(v20) = HIBYTE(v27);
  LOBYTE(v20) = 2;
  clap_builder::builder::command::Command::arg_internal(v61, v19);
  memcpy(v60, v61, sizeof(v60));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[528] = aNumberNonblank;
  *(_QWORD *)&v19[536] = 15LL;
  memcpy(v28, v19, 0x220uLL);
  *(_OWORD *)&v28[560] = *(_OWORD *)&v19[560];
  *(_QWORD *)&v28[580] = *(_QWORD *)&v19[580];
  v29 = v20;
  *(_QWORD *)&v28[544] = aNumberNonblank;
  *(_QWORD *)&v28[552] = 15LL;
  *(_DWORD *)&v28[576] = 98;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)&v19[8] = 1LL;
  *(_QWORD *)&v19[16] = 0LL;
  alloc::string::String::push_str(v19, aNumberNonempty, 42LL);
  v8 = *(_QWORD *)v19;
  *(_OWORD *)v23 = *(_OWORD *)&v19[8];
  if ( *(_QWORD *)v19 != 0x8000000000000000LL )
    v18 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v28[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28[440], aNumberNonempty);
  *(_QWORD *)&v28[440] = v8;
  *(_OWORD *)&v28[448] = v18;
  memcpy(v19, v28, sizeof(v19));
  *(_WORD *)((char *)&v20 + 1) = *(_WORD *)((char *)&v29 + 1);
  HIBYTE(v20) = HIBYTE(v29);
  LOBYTE(v20) = 2;
  clap_builder::builder::command::Command::arg_internal(v60, v19);
  memcpy(v59, v60, sizeof(v59));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[528] = aE;
  *(_QWORD *)&v19[536] = 1LL;
  memcpy(v40, v19, 0x240uLL);
  *(_QWORD *)&v40[580] = *(_QWORD *)&v19[580];
  v41 = v20;
  *(_DWORD *)&v40[576] = 101;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)&v19[8] = 1LL;
  *(_QWORD *)&v19[16] = 0LL;
  alloc::string::String::push_str(v19, aEquivalentToVe_0, 17LL);
  v9 = *(_QWORD *)v19;
  *(_OWORD *)v23 = *(_OWORD *)&v19[8];
  if ( *(_QWORD *)v19 != 0x8000000000000000LL )
    v18 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v40[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40[440], aEquivalentToVe_0);
  *(_QWORD *)&v40[440] = v9;
  *(_OWORD *)&v40[448] = v18;
  memcpy(v19, v40, sizeof(v19));
  *(_WORD *)((char *)&v20 + 1) = *(_WORD *)((char *)&v41 + 1);
  HIBYTE(v20) = HIBYTE(v41);
  LOBYTE(v20) = 2;
  clap_builder::builder::command::Command::arg_internal(v59, v19);
  memcpy(v58, v59, sizeof(v58));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[528] = aShowEnds;
  *(_QWORD *)&v19[536] = 9LL;
  memcpy(v30, v19, 0x220uLL);
  *(_OWORD *)&v30[560] = *(_OWORD *)&v19[560];
  *(_QWORD *)&v30[580] = *(_QWORD *)&v19[580];
  v31 = v20;
  *(_QWORD *)&v30[544] = aShowEnds;
  *(_QWORD *)&v30[552] = 9LL;
  *(_DWORD *)&v30[576] = 69;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)&v19[8] = 1LL;
  *(_QWORD *)&v19[16] = 0LL;
  alloc::string::String::push_str(v19, aDisplayAtEndOf, 29LL);
  v10 = *(_QWORD *)v19;
  *(_OWORD *)v23 = *(_OWORD *)&v19[8];
  if ( *(_QWORD *)v19 != 0x8000000000000000LL )
    v18 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v30[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v30[440], aDisplayAtEndOf);
  *(_QWORD *)&v30[440] = v10;
  *(_OWORD *)&v30[448] = v18;
  memcpy(v19, v30, sizeof(v19));
  *(_WORD *)((char *)&v20 + 1) = *(_WORD *)((char *)&v31 + 1);
  HIBYTE(v20) = HIBYTE(v31);
  LOBYTE(v20) = 2;
  clap_builder::builder::command::Command::arg_internal(v58, v19);
  memcpy(v57, v58, sizeof(v57));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[528] = aNumber;
  *(_QWORD *)&v19[536] = 6LL;
  memcpy(v32, v19, 0x220uLL);
  *(_OWORD *)&v32[560] = *(_OWORD *)&v19[560];
  *(_QWORD *)&v32[580] = *(_QWORD *)&v19[580];
  v33 = v20;
  *(_QWORD *)&v32[544] = aNumber;
  *(_QWORD *)&v32[552] = 6LL;
  *(_DWORD *)&v32[576] = 110;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)&v19[8] = 1LL;
  *(_QWORD *)&v19[16] = 0LL;
  alloc::string::String::push_str(v19, aNumberAllOutpu, 23LL);
  v11 = *(_QWORD *)v19;
  *(_OWORD *)v23 = *(_OWORD *)&v19[8];
  if ( *(_QWORD *)v19 != 0x8000000000000000LL )
    v18 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v32[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v32[440], aNumberAllOutpu);
  *(_QWORD *)&v32[440] = v11;
  *(_OWORD *)&v32[448] = v18;
  memcpy(v19, v32, sizeof(v19));
  *(_WORD *)((char *)&v20 + 1) = *(_WORD *)((char *)&v33 + 1);
  HIBYTE(v20) = HIBYTE(v33);
  LOBYTE(v20) = 2;
  clap_builder::builder::command::Command::arg_internal(v57, v19);
  memcpy(v56, v57, sizeof(v56));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[528] = aSqueezeBlank;
  *(_QWORD *)&v19[536] = 13LL;
  memcpy(v34, v19, 0x220uLL);
  *(_OWORD *)&v34[560] = *(_OWORD *)&v19[560];
  *(_QWORD *)&v34[580] = *(_QWORD *)&v19[580];
  v35 = v20;
  *(_QWORD *)&v34[544] = aSqueezeBlank;
  *(_QWORD *)&v34[552] = 13LL;
  *(_DWORD *)&v34[576] = 115;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)&v19[8] = 1LL;
  *(_QWORD *)&v19[16] = 0LL;
  alloc::string::String::push_str(v19, aSuppressRepeat, 36LL);
  v12 = *(_QWORD *)v19;
  *(_OWORD *)v23 = *(_OWORD *)&v19[8];
  if ( *(_QWORD *)v19 != 0x8000000000000000LL )
    v18 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v34[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34[440], aSuppressRepeat);
  *(_QWORD *)&v34[440] = v12;
  *(_OWORD *)&v34[448] = v18;
  memcpy(v19, v34, sizeof(v19));
  *(_WORD *)((char *)&v20 + 1) = *(_WORD *)((char *)&v35 + 1);
  HIBYTE(v20) = HIBYTE(v35);
  LOBYTE(v20) = 2;
  clap_builder::builder::command::Command::arg_internal(v56, v19);
  memcpy(v55, v56, sizeof(v55));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[528] = aT;
  *(_QWORD *)&v19[536] = 1LL;
  memcpy(v42, v19, 0x240uLL);
  *(_QWORD *)&v42[580] = *(_QWORD *)&v19[580];
  v43 = v20;
  *(_DWORD *)&v42[576] = 116;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)&v19[8] = 1LL;
  *(_QWORD *)&v19[16] = 0LL;
  alloc::string::String::push_str(v19, aEquivalentToVt, 17LL);
  v13 = *(_QWORD *)v19;
  *(_OWORD *)v23 = *(_OWORD *)&v19[8];
  if ( *(_QWORD *)v19 != 0x8000000000000000LL )
    v18 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v42[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v42[440], aEquivalentToVt);
  *(_QWORD *)&v42[440] = v13;
  *(_OWORD *)&v42[448] = v18;
  memcpy(v19, v42, sizeof(v19));
  *(_WORD *)((char *)&v20 + 1) = *(_WORD *)((char *)&v43 + 1);
  HIBYTE(v20) = HIBYTE(v43);
  LOBYTE(v20) = 2;
  clap_builder::builder::command::Command::arg_internal(v55, v19);
  memcpy(v54, v55, sizeof(v54));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[528] = aShowTabs;
  *(_QWORD *)&v19[536] = 9LL;
  memcpy(v36, v19, 0x220uLL);
  *(_OWORD *)&v36[560] = *(_OWORD *)&v19[560];
  *(_QWORD *)&v36[580] = *(_QWORD *)&v19[580];
  v37 = v20;
  *(_QWORD *)&v36[544] = aShowTabs;
  *(_QWORD *)&v36[552] = 9LL;
  *(_DWORD *)&v36[576] = 84;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)&v19[8] = 1LL;
  *(_QWORD *)&v19[16] = 0LL;
  alloc::string::String::push_str(v19, aDisplayTabChar, 28LL);
  v14 = *(_QWORD *)v19;
  *(_OWORD *)v23 = *(_OWORD *)&v19[8];
  if ( *(_QWORD *)v19 != 0x8000000000000000LL )
    v18 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v36[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v36[440], aDisplayTabChar);
  *(_QWORD *)&v36[440] = v14;
  *(_OWORD *)&v36[448] = v18;
  memcpy(v19, v36, sizeof(v19));
  *(_WORD *)((char *)&v20 + 1) = *(_WORD *)((char *)&v37 + 1);
  HIBYTE(v20) = HIBYTE(v37);
  LOBYTE(v20) = 2;
  clap_builder::builder::command::Command::arg_internal(v54, v19);
  memcpy(v53, v54, sizeof(v53));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[528] = aShowNonprintin;
  *(_QWORD *)&v19[536] = 16LL;
  memcpy(v38, v19, 0x220uLL);
  *(_OWORD *)&v38[560] = *(_OWORD *)&v19[560];
  *(_QWORD *)&v38[580] = *(_QWORD *)&v19[580];
  v39 = v20;
  *(_QWORD *)&v38[544] = aShowNonprintin;
  *(_QWORD *)&v38[552] = 16LL;
  *(_DWORD *)&v38[576] = 118;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)&v19[8] = 1LL;
  *(_QWORD *)&v19[16] = 0LL;
  alloc::string::String::push_str(v19, aUseAndMNotatio, 54LL);
  v15 = *(_QWORD *)v19;
  *(_OWORD *)v23 = *(_OWORD *)&v19[8];
  if ( *(_QWORD *)v19 != 0x8000000000000000LL )
    v18 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v38[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38[440], aUseAndMNotatio);
  *(_QWORD *)&v38[440] = v15;
  *(_OWORD *)&v38[448] = v18;
  memcpy(v19, v38, sizeof(v19));
  *(_WORD *)((char *)&v20 + 1) = *(_WORD *)((char *)&v39 + 1);
  HIBYTE(v20) = HIBYTE(v39);
  LOBYTE(v20) = 2;
  clap_builder::builder::command::Command::arg_internal(v53, v19);
  memcpy(v52, v53, sizeof(v52));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[528] = aIgnoredU;
  *(_QWORD *)&v19[536] = 9LL;
  memcpy(v44, v19, 0x240uLL);
  *(_QWORD *)&v44[580] = *(_QWORD *)&v19[580];
  v45 = v20;
  *(_DWORD *)&v44[576] = 117;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)&v19[8] = 1LL;
  *(_QWORD *)&v19[16] = 0LL;
  alloc::string::String::push_str(v19, aIgnored, 9LL);
  v16 = *(_QWORD *)v19;
  *(_OWORD *)v23 = *(_OWORD *)&v19[8];
  if ( *(_QWORD *)v19 != 0x8000000000000000LL )
    v18 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v44[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v44[440], aIgnored);
  *(_QWORD *)&v44[440] = v16;
  *(_OWORD *)&v44[448] = v18;
  memcpy(v19, v44, sizeof(v19));
  *(_WORD *)((char *)&v20 + 1) = *(_WORD *)((char *)&v45 + 1);
  HIBYTE(v20) = HIBYTE(v45);
  LOBYTE(v20) = 2;
  clap_builder::builder::command::Command::arg_internal(v52, v19);
  memcpy(dest, v52, 0x2C8uLL);
  return dest;
}
