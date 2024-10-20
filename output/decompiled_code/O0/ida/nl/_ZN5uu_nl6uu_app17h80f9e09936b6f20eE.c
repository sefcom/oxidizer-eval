void *__fastcall uu_nl::uu_app(void *dest)
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
  _OWORD *v13; // rax
  _OWORD *v14; // r14
  __int128 v15; // xmm0
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // r14
  _QWORD *v22; // rax
  _QWORD *v23; // r14
  __int128 v25; // [rsp+0h] [rbp-6C28h]
  _OWORD v26[37]; // [rsp+10h] [rbp-6C18h] BYREF
  __int64 v27; // [rsp+268h] [rbp-69C0h] BYREF
  __int128 v28; // [rsp+270h] [rbp-69B8h]
  _BYTE v29[584]; // [rsp+280h] [rbp-69A8h] BYREF
  int v30; // [rsp+4C8h] [rbp-6760h]
  __int16 v31; // [rsp+4CEh] [rbp-675Ah]
  _OWORD v32[2]; // [rsp+4D0h] [rbp-6758h] BYREF
  _BYTE v33[32]; // [rsp+4F0h] [rbp-6738h] BYREF
  _BYTE v34[32]; // [rsp+510h] [rbp-6718h] BYREF
  _BYTE v35[588]; // [rsp+530h] [rbp-66F8h] BYREF
  int v36; // [rsp+77Ch] [rbp-64ACh]
  _BYTE v37[592]; // [rsp+780h] [rbp-64A8h] BYREF
  _OWORD v38[37]; // [rsp+9D0h] [rbp-6258h] BYREF
  _OWORD v39[37]; // [rsp+C20h] [rbp-6008h] BYREF
  _OWORD v40[37]; // [rsp+E70h] [rbp-5DB8h] BYREF
  _OWORD v41[37]; // [rsp+10C0h] [rbp-5B68h] BYREF
  _OWORD v42[37]; // [rsp+1310h] [rbp-5918h] BYREF
  _OWORD v43[37]; // [rsp+1560h] [rbp-56C8h] BYREF
  _OWORD v44[37]; // [rsp+17B0h] [rbp-5478h] BYREF
  _OWORD v45[37]; // [rsp+1A00h] [rbp-5228h] BYREF
  _OWORD v46[37]; // [rsp+1C50h] [rbp-4FD8h] BYREF
  _OWORD v47[37]; // [rsp+1EA0h] [rbp-4D88h] BYREF
  _QWORD v48[74]; // [rsp+20F0h] [rbp-4B38h] BYREF
  _QWORD v49[74]; // [rsp+2340h] [rbp-48E8h] BYREF
  _QWORD v50[74]; // [rsp+2590h] [rbp-4698h] BYREF
  _QWORD v51[89]; // [rsp+27E0h] [rbp-4448h] BYREF
  _QWORD desta[89]; // [rsp+2AA8h] [rbp-4180h] BYREF
  _DWORD v53[178]; // [rsp+2D70h] [rbp-3EB8h] BYREF
  _BYTE v54[712]; // [rsp+3038h] [rbp-3BF0h] BYREF
  _BYTE v55[712]; // [rsp+3300h] [rbp-3928h] BYREF
  _BYTE v56[712]; // [rsp+35C8h] [rbp-3660h] BYREF
  _BYTE v57[712]; // [rsp+3890h] [rbp-3398h] BYREF
  _QWORD v58[89]; // [rsp+3B58h] [rbp-30D0h] BYREF
  _BYTE v59[712]; // [rsp+3E20h] [rbp-2E08h] BYREF
  _BYTE v60[712]; // [rsp+40E8h] [rbp-2B40h] BYREF
  _BYTE v61[712]; // [rsp+43B0h] [rbp-2878h] BYREF
  _BYTE v62[712]; // [rsp+4678h] [rbp-25B0h] BYREF
  _QWORD v63[89]; // [rsp+4940h] [rbp-22E8h] BYREF
  _BYTE v64[712]; // [rsp+4C08h] [rbp-2020h] BYREF
  _BYTE v65[712]; // [rsp+4ED0h] [rbp-1D58h] BYREF
  _BYTE v66[592]; // [rsp+5198h] [rbp-1A90h] BYREF
  _BYTE v67[592]; // [rsp+53E8h] [rbp-1840h] BYREF
  _QWORD src[89]; // [rsp+5638h] [rbp-15F0h] BYREF
  _BYTE v69[592]; // [rsp+5900h] [rbp-1328h] BYREF
  _QWORD v70[74]; // [rsp+5B50h] [rbp-10D8h] BYREF
  _BYTE v71[592]; // [rsp+5DA0h] [rbp-E88h] BYREF
  _BYTE v72[592]; // [rsp+5FF0h] [rbp-C38h] BYREF
  _BYTE v73[592]; // [rsp+6240h] [rbp-9E8h] BYREF
  _BYTE v74[592]; // [rsp+6490h] [rbp-798h] BYREF
  _BYTE v75[592]; // [rsp+66E0h] [rbp-548h] BYREF
  _BYTE v76[760]; // [rsp+6930h] [rbp-2F8h] BYREF

  v70[21] = 0LL;
  v63[87] = 0LL;
  v58[20] = 0LL;
  desta[42] = 0LL;
  *((_QWORD *)&v45[31] + 1) = 0LL;
  *((_QWORD *)&v38[34] + 1) = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(v76, v2, v3);
  clap_builder::builder::command::Command::about(src, v76);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, sizeof(desta));
  uucore::format_usage((unsigned int)&v27);
  v4 = v27;
  if ( v27 != 0x8000000000000000LL )
    v26[0] = v28;
  if ( desta[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&desta[58], aOptionFile);
  desta[58] = v4;
  *(_OWORD *)&desta[59] = v26[0];
  memcpy(v51, desta, sizeof(v51));
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v26, aStyleIsOneOfAN, 336LL);
  v5 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v26[0] = *(_OWORD *)v29;
  if ( v51[52] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v51[52], aStyleIsOneOfAN);
  v51[52] = v5;
  *(_OWORD *)&v51[53] = v26[0];
  memcpy(v53, v51, 0x2BCuLL);
  *(_QWORD *)&v53[175] = *(_QWORD *)((char *)&v51[87] + 4) | 0x4008000040080LL;
  v53[177] = HIDWORD(v51[88]);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *((_QWORD *)&v26[33] + 1) = 4LL;
  memcpy(v37, v26, 0x220uLL);
  *(_OWORD *)&v37[560] = v26[35];
  *(_OWORD *)&v37[576] = v26[36];
  *(_QWORD *)&v37[544] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *(_QWORD *)&v37[552] = 4LL;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v26, aPrintHelpInfor, 23LL);
  v6 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v25 = *(_OWORD *)v29;
  if ( *(_QWORD *)&v37[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37[440], aPrintHelpInfor);
  *(_QWORD *)&v37[440] = v6;
  *(_OWORD *)&v37[448] = v25;
  memcpy(v26, v37, 0x24CuLL);
  *(_WORD *)((char *)&v26[36] + 13) = *(_WORD *)&v37[589];
  HIBYTE(v26[36]) = v37[591];
  BYTE12(v26[36]) = 5;
  clap_builder::builder::command::Command::arg_internal(v53, v26);
  memcpy(v65, v53, sizeof(v65));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[528] = aFile;
  *(_QWORD *)&v29[536] = 4LL;
  memcpy(v26, v29, 0x248uLL);
  DWORD2(v26[36]) = v30 | 4;
  WORD6(v26[36]) = 769;
  HIWORD(v26[36]) = v31;
  clap_builder::builder::command::Command::arg_internal(v65, v26);
  memcpy(v64, v65, sizeof(v64));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aBodyNumbering;
  *((_QWORD *)&v26[33] + 1) = 14LL;
  memcpy(v38, v26, 0x220uLL);
  v38[35] = v26[35];
  *(_QWORD *)((char *)&v38[36] + 4) = *(_QWORD *)((char *)&v26[36] + 4);
  HIDWORD(v38[36]) = HIDWORD(v26[36]);
  *(_QWORD *)&v38[34] = aBodyNumbering;
  *((_QWORD *)&v38[34] + 1) = 14LL;
  LODWORD(v38[36]) = 98;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v26, aUseStyleForNum, 34LL);
  v7 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v25 = *(_OWORD *)v29;
  if ( *((_QWORD *)&v38[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v38[27] + 8, aUseStyleForNum);
  *((_QWORD *)&v38[27] + 1) = v7;
  v38[28] = v25;
  memcpy(v26, v38, sizeof(v26));
  *(_QWORD *)v29 = aStyle;
  *(_QWORD *)&v29[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v69, v26);
  memcpy(v26, v69, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v64, v26);
  memcpy(v63, v64, sizeof(v63));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aSectionDelimit;
  *((_QWORD *)&v26[33] + 1) = 17LL;
  memcpy(v39, v26, 0x220uLL);
  v39[35] = v26[35];
  *(_QWORD *)((char *)&v39[36] + 4) = *(_QWORD *)((char *)&v26[36] + 4);
  HIDWORD(v39[36]) = HIDWORD(v26[36]);
  *(_QWORD *)&v39[34] = aSectionDelimit;
  *((_QWORD *)&v39[34] + 1) = 17LL;
  LODWORD(v39[36]) = 100;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v26, aUseCcForSepara, 35LL);
  v8 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v25 = *(_OWORD *)v29;
  if ( *((_QWORD *)&v39[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v39[27] + 8, aUseCcForSepara);
  *((_QWORD *)&v39[27] + 1) = v8;
  v39[28] = v25;
  memcpy(v26, v39, sizeof(v26));
  *(_QWORD *)v29 = aCc;
  *(_QWORD *)&v29[8] = 2LL;
  clap_builder::builder::arg::Arg::value_names(v70, v26);
  memcpy(v26, v70, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v63, v26);
  memcpy(v62, v63, sizeof(v62));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aFooterNumberin;
  *((_QWORD *)&v26[33] + 1) = 16LL;
  memcpy(v40, v26, 0x220uLL);
  v40[35] = v26[35];
  *(_QWORD *)((char *)&v40[36] + 4) = *(_QWORD *)((char *)&v26[36] + 4);
  HIDWORD(v40[36]) = HIDWORD(v26[36]);
  *(_QWORD *)&v40[34] = aFooterNumberin;
  *((_QWORD *)&v40[34] + 1) = 16LL;
  LODWORD(v40[36]) = 102;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v26, aUseStyleForNum_0, 36LL);
  v9 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v25 = *(_OWORD *)v29;
  if ( *((_QWORD *)&v40[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v40[27] + 8, aUseStyleForNum_0);
  *((_QWORD *)&v40[27] + 1) = v9;
  v40[28] = v25;
  memcpy(v26, v40, sizeof(v26));
  *(_QWORD *)v29 = aStyle;
  *(_QWORD *)&v29[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v71, v26);
  memcpy(v26, v71, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v62, v26);
  memcpy(v61, v62, sizeof(v61));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aHeaderNumberin;
  *((_QWORD *)&v26[33] + 1) = 16LL;
  memcpy(v41, v26, 0x220uLL);
  v41[35] = v26[35];
  *(_QWORD *)((char *)&v41[36] + 4) = *(_QWORD *)((char *)&v26[36] + 4);
  HIDWORD(v41[36]) = HIDWORD(v26[36]);
  *(_QWORD *)&v41[34] = aHeaderNumberin;
  *((_QWORD *)&v41[34] + 1) = 16LL;
  LODWORD(v41[36]) = 104;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v26, aUseStyleForNum_1, 36LL);
  v10 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v25 = *(_OWORD *)v29;
  if ( *((_QWORD *)&v41[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v41[27] + 8, aUseStyleForNum_1);
  *((_QWORD *)&v41[27] + 1) = v10;
  v41[28] = v25;
  memcpy(v26, v41, sizeof(v26));
  *(_QWORD *)v29 = aStyle;
  *(_QWORD *)&v29[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v72, v26);
  memcpy(v26, v72, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v61, v26);
  memcpy(v60, v61, sizeof(v60));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aLineIncrement;
  *((_QWORD *)&v26[33] + 1) = 14LL;
  memcpy(v42, v26, 0x220uLL);
  v42[35] = v26[35];
  *(_QWORD *)((char *)&v42[36] + 4) = *(_QWORD *)((char *)&v26[36] + 4);
  HIDWORD(v42[36]) = HIDWORD(v26[36]);
  *(_QWORD *)&v42[34] = aLineIncrement;
  *((_QWORD *)&v42[34] + 1) = 14LL;
  LODWORD(v42[36]) = 105;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v26, aLineNumberIncr, 34LL);
  v11 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v25 = *(_OWORD *)v29;
  if ( *((_QWORD *)&v42[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v42[27] + 8, aLineNumberIncr);
  *((_QWORD *)&v42[27] + 1) = v11;
  v42[28] = v25;
  memcpy(v26, v42, sizeof(v26));
  *(_QWORD *)v29 = aNumber;
  *(_QWORD *)&v29[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v66, v26);
  <clap_builder::builder::value_parser::RangedI64ValueParser<T> as core::convert::From<B>>::from(v33);
  clap_builder::builder::arg::Arg::value_parser(v73, v66);
  memcpy(v26, v73, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v60, v26);
  memcpy(v59, v60, sizeof(v59));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aJoinBlankLines;
  *((_QWORD *)&v26[33] + 1) = 16LL;
  memcpy(v43, v26, 0x220uLL);
  v43[35] = v26[35];
  *(_QWORD *)((char *)&v43[36] + 4) = *(_QWORD *)((char *)&v26[36] + 4);
  HIDWORD(v43[36]) = HIDWORD(v26[36]);
  *(_QWORD *)&v43[34] = aJoinBlankLines;
  *((_QWORD *)&v43[34] + 1) = 16LL;
  LODWORD(v43[36]) = 108;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v26, aGroupOfNumberE, 42LL);
  v12 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v25 = *(_OWORD *)v29;
  if ( *((_QWORD *)&v43[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v43[27] + 8, aGroupOfNumberE);
  *((_QWORD *)&v43[27] + 1) = v12;
  v43[28] = v25;
  memcpy(v26, v43, sizeof(v26));
  *(_QWORD *)v29 = aNumber;
  *(_QWORD *)&v29[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v48, v26);
  <clap_builder::builder::value_parser::RangedU64ValueParser<T> as core::convert::From<B>>::from(v32);
  v13 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  v14 = v13;
  if ( !v13 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v15 = v32[0];
  v13[1] = v32[1];
  *v13 = v15;
  if ( v48[10] >= 4uLL && v48[10] != 5LL )
  {
    if ( *(_QWORD *)v48[12] )
      (*(void (__fastcall **)(_QWORD))v48[12])(v48[11]);
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v48[11]);
  }
  v48[10] = 4LL;
  v48[11] = v14;
  v48[12] = &anon_f2fb85536fffd0a461a91483864f6ad6_7_llvm_13329461704207359836;
  memcpy(v26, v48, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v59, v26);
  memcpy(v58, v59, sizeof(v58));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aNumberFormat;
  *((_QWORD *)&v26[33] + 1) = 13LL;
  memcpy(v44, v26, 0x220uLL);
  v44[35] = v26[35];
  *(_QWORD *)((char *)&v44[36] + 4) = *(_QWORD *)((char *)&v26[36] + 4);
  HIDWORD(v44[36]) = HIDWORD(v26[36]);
  *(_QWORD *)&v44[34] = aNumberFormat;
  *((_QWORD *)&v44[34] + 1) = 13LL;
  LODWORD(v44[36]) = 110;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v26, aInsertLineNumb, 39LL);
  v16 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v25 = *(_OWORD *)v29;
  if ( *((_QWORD *)&v44[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v44[27] + 8, aInsertLineNumb);
  *((_QWORD *)&v44[27] + 1) = v16;
  v44[28] = v25;
  memcpy(v26, v44, sizeof(v26));
  *(_QWORD *)v29 = aFormat;
  *(_QWORD *)&v29[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v50, v26);
  *(_QWORD *)&v26[0] = anon_f61fdf178c084dfee4c22f74903c39dc_47_llvm_15529537142971326096;
  *((_QWORD *)&v26[0] + 1) = 2LL;
  *(_QWORD *)&v26[1] = anon_f61fdf178c084dfee4c22f74903c39dc_48_llvm_15529537142971326096;
  *((_QWORD *)&v26[1] + 1) = 2LL;
  *(_QWORD *)&v26[2] = anon_f61fdf178c084dfee4c22f74903c39dc_49_llvm_15529537142971326096;
  *((_QWORD *)&v26[2] + 1) = 2LL;
  *(_QWORD *)&v26[3] = 0LL;
  *((_QWORD *)&v26[3] + 1) = 3LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v29, v26);
  clap_builder::builder::value_parser::ValueParser::new(v26, v29);
  v17 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 5LL )
    v25 = *(_OWORD *)v29;
  if ( v50[10] >= 4uLL && v50[10] != 5LL )
  {
    if ( *(_QWORD *)v50[12] )
      (*(void (__fastcall **)(_QWORD))v50[12])(v50[11]);
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v50[11]);
  }
  v50[10] = v17;
  *(_OWORD *)&v50[11] = v25;
  memcpy(v26, v50, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v58, v26);
  memcpy(v57, v58, sizeof(v57));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aNoRenumber_0;
  *((_QWORD *)&v26[33] + 1) = 11LL;
  memcpy(v35, v26, 0x220uLL);
  *(_OWORD *)&v35[560] = v26[35];
  *(_QWORD *)&v35[580] = *(_QWORD *)((char *)&v26[36] + 4);
  v36 = HIDWORD(v26[36]);
  *(_QWORD *)&v35[544] = aNoRenumber_0;
  *(_QWORD *)&v35[552] = 11LL;
  *(_DWORD *)&v35[576] = 112;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v26, aDoNotResetLine, 42LL);
  v18 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v25 = *(_OWORD *)v29;
  if ( *(_QWORD *)&v35[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35[440], aDoNotResetLine);
  *(_QWORD *)&v35[440] = v18;
  *(_OWORD *)&v35[448] = v25;
  memcpy(v26, v35, 0x24CuLL);
  *(_WORD *)((char *)&v26[36] + 13) = *(_WORD *)((char *)&v36 + 1);
  HIBYTE(v26[36]) = HIBYTE(v36);
  BYTE12(v26[36]) = 3;
  clap_builder::builder::command::Command::arg_internal(v57, v26);
  memcpy(v56, v57, sizeof(v56));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aNumberSeparato;
  *((_QWORD *)&v26[33] + 1) = 16LL;
  memcpy(v45, v26, 0x220uLL);
  v45[35] = v26[35];
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)((char *)&v26[36] + 4);
  HIDWORD(v45[36]) = HIDWORD(v26[36]);
  *(_QWORD *)&v45[34] = aNumberSeparato;
  *((_QWORD *)&v45[34] + 1) = 16LL;
  LODWORD(v45[36]) = 115;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v26, aAddStringAfter, 39LL);
  v19 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v25 = *(_OWORD *)v29;
  if ( *((_QWORD *)&v45[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v45[27] + 8, aAddStringAfter);
  *((_QWORD *)&v45[27] + 1) = v19;
  v45[28] = v25;
  memcpy(v26, v45, sizeof(v26));
  *(_QWORD *)v29 = aString;
  *(_QWORD *)&v29[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v74, v26);
  memcpy(v26, v74, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v56, v26);
  memcpy(v55, v56, sizeof(v55));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aStartingLineNu;
  *((_QWORD *)&v26[33] + 1) = 20LL;
  memcpy(v46, v26, 0x220uLL);
  v46[35] = v26[35];
  *(_QWORD *)((char *)&v46[36] + 4) = *(_QWORD *)((char *)&v26[36] + 4);
  HIDWORD(v46[36]) = HIDWORD(v26[36]);
  *(_QWORD *)&v46[34] = aStartingLineNu;
  *((_QWORD *)&v46[34] + 1) = 20LL;
  LODWORD(v46[36]) = 118;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v26, aFirstLineNumbe, 38LL);
  v20 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v25 = *(_OWORD *)v29;
  if ( *((_QWORD *)&v46[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v46[27] + 8, aFirstLineNumbe);
  *((_QWORD *)&v46[27] + 1) = v20;
  v46[28] = v25;
  memcpy(v26, v46, sizeof(v26));
  *(_QWORD *)v29 = aNumber;
  *(_QWORD *)&v29[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v67, v26);
  <clap_builder::builder::value_parser::RangedI64ValueParser<T> as core::convert::From<B>>::from(v34);
  clap_builder::builder::arg::Arg::value_parser(v75, v67);
  memcpy(v26, v75, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v55, v26);
  memcpy(v54, v55, sizeof(v54));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v26);
  *(_QWORD *)&v26[33] = aNumberWidth;
  *((_QWORD *)&v26[33] + 1) = 12LL;
  memcpy(v47, v26, 0x220uLL);
  v47[35] = v26[35];
  *(_QWORD *)((char *)&v47[36] + 4) = *(_QWORD *)((char *)&v26[36] + 4);
  HIDWORD(v47[36]) = HIDWORD(v26[36]);
  *(_QWORD *)&v47[34] = aNumberWidth;
  *((_QWORD *)&v47[34] + 1) = 12LL;
  LODWORD(v47[36]) = 119;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::vec::Vec<T,A>::append_elements(v26, aUseNumberColum, 35LL);
  v21 = *(_QWORD *)&v26[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v25 = *(_OWORD *)v29;
  if ( *((_QWORD *)&v47[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v47[27] + 8, aUseNumberColum);
  *((_QWORD *)&v47[27] + 1) = v21;
  v47[28] = v25;
  memcpy(v26, v47, sizeof(v26));
  *(_QWORD *)v29 = aNumber;
  *(_QWORD *)&v29[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v49, v26);
  v22 = (_QWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
  v23 = v22;
  if ( !v22 )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  *v22 = core::num::<impl core::str::traits::FromStr for usize>::from_str;
  if ( v49[10] >= 4uLL && v49[10] != 5LL )
  {
    if ( *(_QWORD *)v49[12] )
      (*(void (__fastcall **)(_QWORD))v49[12])(v49[11]);
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v49[11]);
  }
  v49[10] = 4LL;
  v49[11] = v23;
  v49[12] = &anon_f2fb85536fffd0a461a91483864f6ad6_9_llvm_13329461704207359836;
  memcpy(v26, v49, sizeof(v26));
  clap_builder::builder::command::Command::arg_internal(v54, v26);
  memcpy(dest, v54, 0x2C8uLL);
  return dest;
}
