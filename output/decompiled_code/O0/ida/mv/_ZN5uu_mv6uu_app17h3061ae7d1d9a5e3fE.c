void *__fastcall uu_mv::uu_app(void *a1)
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
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r14
  int v17; // ebx
  __int64 v18; // r14
  void *v19; // rbx
  __int128 v21; // [rsp+10h] [rbp-6858h]
  _OWORD v22[37]; // [rsp+20h] [rbp-6848h] BYREF
  void *v23; // [rsp+278h] [rbp-65F0h]
  _QWORD v24[4]; // [rsp+280h] [rbp-65E8h] BYREF
  __int64 v25; // [rsp+2A0h] [rbp-65C8h] BYREF
  __int128 v26; // [rsp+2A8h] [rbp-65C0h]
  __int64 v27; // [rsp+2B8h] [rbp-65B0h] BYREF
  __int128 v28; // [rsp+2C0h] [rbp-65A8h]
  _BYTE v29[588]; // [rsp+2D0h] [rbp-6598h] BYREF
  int v30; // [rsp+51Ch] [rbp-634Ch]
  _BYTE v31[588]; // [rsp+520h] [rbp-6348h] BYREF
  int v32; // [rsp+76Ch] [rbp-60FCh]
  _BYTE v33[588]; // [rsp+770h] [rbp-60F8h] BYREF
  int v34; // [rsp+9BCh] [rbp-5EACh]
  _OWORD v35[37]; // [rsp+9C0h] [rbp-5EA8h] BYREF
  _OWORD v36[37]; // [rsp+C10h] [rbp-5C58h] BYREF
  _OWORD v37[37]; // [rsp+E60h] [rbp-5A08h] BYREF
  _BYTE v38[592]; // [rsp+10B0h] [rbp-57B8h] BYREF
  _OWORD v39[37]; // [rsp+1300h] [rbp-5568h] BYREF
  _BYTE v40[592]; // [rsp+1550h] [rbp-5318h] BYREF
  _BYTE v41[592]; // [rsp+17A0h] [rbp-50C8h] BYREF
  _QWORD v42[89]; // [rsp+19F0h] [rbp-4E78h] BYREF
  _QWORD v43[89]; // [rsp+1CB8h] [rbp-4BB0h] BYREF
  _QWORD v44[74]; // [rsp+1F80h] [rbp-48E8h] BYREF
  _QWORD v45[74]; // [rsp+21D0h] [rbp-4698h] BYREF
  _BYTE v46[592]; // [rsp+2420h] [rbp-4448h] BYREF
  _QWORD v47[74]; // [rsp+2670h] [rbp-41F8h] BYREF
  _BYTE v48[592]; // [rsp+28C0h] [rbp-3FA8h] BYREF
  _DWORD v49[178]; // [rsp+2B10h] [rbp-3D58h] BYREF
  _BYTE v50[712]; // [rsp+2DD8h] [rbp-3A90h] BYREF
  _BYTE v51[712]; // [rsp+30A0h] [rbp-37C8h] BYREF
  _BYTE v52[712]; // [rsp+3368h] [rbp-3500h] BYREF
  _QWORD v53[89]; // [rsp+3630h] [rbp-3238h] BYREF
  _BYTE v54[712]; // [rsp+38F8h] [rbp-2F70h] BYREF
  _BYTE v55[712]; // [rsp+3BC0h] [rbp-2CA8h] BYREF
  _BYTE v56[712]; // [rsp+3E88h] [rbp-29E0h] BYREF
  _BYTE v57[712]; // [rsp+4150h] [rbp-2718h] BYREF
  _BYTE v58[712]; // [rsp+4418h] [rbp-2450h] BYREF
  _QWORD v59[89]; // [rsp+46E0h] [rbp-2188h] BYREF
  _BYTE v60[712]; // [rsp+49A8h] [rbp-1EC0h] BYREF
  _BYTE v61[712]; // [rsp+4C70h] [rbp-1BF8h] BYREF
  _BYTE v62[712]; // [rsp+4F38h] [rbp-1930h] BYREF
  _BYTE v63[712]; // [rsp+5200h] [rbp-1668h] BYREF
  _BYTE v64[592]; // [rsp+54C8h] [rbp-13A0h] BYREF
  _QWORD src[89]; // [rsp+5718h] [rbp-1150h] BYREF
  _BYTE v66[592]; // [rsp+59E0h] [rbp-E88h] BYREF
  _BYTE v67[592]; // [rsp+5C30h] [rbp-C38h] BYREF
  _BYTE v68[592]; // [rsp+5E80h] [rbp-9E8h] BYREF
  _BYTE v69[592]; // [rsp+60D0h] [rbp-798h] BYREF
  _BYTE v70[592]; // [rsp+6320h] [rbp-548h] BYREF
  _BYTE dest[760]; // [rsp+6570h] [rbp-2F8h] BYREF

  src[36] = 0LL;
  v59[43] = 0LL;
  v53[65] = 0LL;
  v47[57] = 0LL;
  *(_QWORD *)&v41[152] = 0LL;
  *(_QWORD *)&v33[200] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v43, dest);
  uucore::format_usage((unsigned int)&v25);
  v4 = v25;
  if ( v25 != 0x8000000000000000LL )
    v22[0] = v26;
  if ( v43[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v43[58], aOptionTSourceD);
  v43[58] = v4;
  *(_OWORD *)&v43[59] = v22[0];
  memcpy(v42, v43, sizeof(v42));
  v24[0] = &off_15B428;
  v24[1] = <&T as core::fmt::Display>::fmt;
  v24[2] = &off_15B418;
  v24[3] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v22[0] = &unk_15B3F8;
  *((_QWORD *)&v22[0] + 1) = 2LL;
  *(_QWORD *)&v22[1] = v24;
  *((_QWORD *)&v22[1] + 1) = 2LL;
  *(_QWORD *)&v22[2] = 0LL;
  alloc::fmt::format::format_inner(&v27, v22);
  v5 = v27;
  if ( v27 != 0x8000000000000000LL )
    v22[0] = v28;
  if ( v42[52] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v42[52], v22);
  v42[52] = v5;
  *(_OWORD *)&v42[53] = v22[0];
  memcpy(v49, v42, 0x2BCuLL);
  *(_QWORD *)&v49[175] = *(_QWORD *)((char *)&v42[87] + 4) | 0x8000000080LL;
  v49[177] = HIDWORD(v42[88]);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[33] = aForce;
  *((_QWORD *)&v22[33] + 1) = 5LL;
  memcpy(v35, v22, 0x220uLL);
  v35[35] = v22[35];
  *(_QWORD *)((char *)&v35[36] + 4) = *(_QWORD *)((char *)&v22[36] + 4);
  HIDWORD(v35[36]) = HIDWORD(v22[36]);
  *(_QWORD *)&v35[34] = aForce;
  *((_QWORD *)&v35[34] + 1) = 5LL;
  LODWORD(v35[36]) = 102;
  *(_QWORD *)&v22[0] = 0LL;
  *((_QWORD *)&v22[0] + 1) = 1LL;
  *(_QWORD *)&v22[1] = 0LL;
  alloc::string::String::push_str(v22, aDoNotPromptBef, 32LL);
  v6 = *(_QWORD *)&v22[0];
  if ( *(_QWORD *)&v22[0] != 0x8000000000000000LL )
    v22[0] = *(_OWORD *)((char *)v22 + 8);
  v23 = a1;
  if ( *((_QWORD *)&v35[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v35[27] + 8, aDoNotPromptBef);
  *((_QWORD *)&v35[27] + 1) = v6;
  v35[28] = v22[0];
  memcpy(v46, v35, sizeof(v46));
  *(_QWORD *)&v22[0] = aInteractive;
  *((_QWORD *)&v22[0] + 1) = 11LL;
  *(_QWORD *)&v22[1] = aNoClobber;
  *((_QWORD *)&v22[1] + 1) = 10LL;
  *(_QWORD *)&v22[2] = 0LL;
  *((_QWORD *)&v22[2] + 1) = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v46[128], v22);
  memcpy(v22, v46, 0x24CuLL);
  *(_WORD *)((char *)&v22[36] + 13) = *(_WORD *)&v46[589];
  HIBYTE(v22[36]) = v46[591];
  BYTE12(v22[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v49, v22);
  memcpy(v63, v49, sizeof(v63));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[33] = aInteractive;
  *((_QWORD *)&v22[33] + 1) = 11LL;
  memcpy(v36, v22, 0x220uLL);
  v36[35] = v22[35];
  *(_QWORD *)((char *)&v36[36] + 4) = *(_QWORD *)((char *)&v22[36] + 4);
  HIDWORD(v36[36]) = HIDWORD(v22[36]);
  *(_QWORD *)&v36[34] = aInteractive;
  *((_QWORD *)&v36[34] + 1) = 11LL;
  LODWORD(v36[36]) = 105;
  *(_QWORD *)&v22[0] = 0LL;
  *((_QWORD *)&v22[0] + 1) = 1LL;
  *(_QWORD *)&v22[1] = 0LL;
  alloc::string::String::push_str(v22, aPromptBeforeOv, 22LL);
  v7 = *(_QWORD *)&v22[0];
  if ( *(_QWORD *)&v22[0] != 0x8000000000000000LL )
    v22[0] = *(_OWORD *)((char *)v22 + 8);
  if ( *((_QWORD *)&v36[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v36[27] + 8, aPromptBeforeOv);
  *((_QWORD *)&v36[27] + 1) = v7;
  v36[28] = v22[0];
  memcpy(v47, v36, sizeof(v47));
  *(_QWORD *)&v22[0] = aForce;
  *((_QWORD *)&v22[0] + 1) = 5LL;
  *(_QWORD *)&v22[1] = aNoClobber;
  *((_QWORD *)&v22[1] + 1) = 10LL;
  *(_QWORD *)&v22[2] = 0LL;
  *((_QWORD *)&v22[2] + 1) = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v47[16], v22);
  memcpy(v22, v47, 0x24CuLL);
  *(_WORD *)((char *)&v22[36] + 13) = *(_WORD *)((char *)&v47[73] + 5);
  HIBYTE(v22[36]) = HIBYTE(v47[73]);
  BYTE12(v22[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v63, v22);
  memcpy(v62, v63, sizeof(v62));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[33] = aNoClobber;
  *((_QWORD *)&v22[33] + 1) = 10LL;
  memcpy(v37, v22, 0x220uLL);
  v37[35] = v22[35];
  *(_QWORD *)((char *)&v37[36] + 4) = *(_QWORD *)((char *)&v22[36] + 4);
  HIDWORD(v37[36]) = HIDWORD(v22[36]);
  *(_QWORD *)&v37[34] = aNoClobber;
  *((_QWORD *)&v37[34] + 1) = 10LL;
  LODWORD(v37[36]) = 110;
  *(_QWORD *)&v22[0] = 0LL;
  *((_QWORD *)&v22[0] + 1) = 1LL;
  *(_QWORD *)&v22[1] = 0LL;
  alloc::string::String::push_str(v22, aDoNotOverwrite, 33LL);
  v8 = *(_QWORD *)&v22[0];
  if ( *(_QWORD *)&v22[0] != 0x8000000000000000LL )
    v22[0] = *(_OWORD *)((char *)v22 + 8);
  if ( *((_QWORD *)&v37[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v37[27] + 8, aDoNotOverwrite);
  *((_QWORD *)&v37[27] + 1) = v8;
  v37[28] = v22[0];
  memcpy(v48, v37, sizeof(v48));
  *(_QWORD *)&v22[0] = aForce;
  *((_QWORD *)&v22[0] + 1) = 5LL;
  *(_QWORD *)&v22[1] = aInteractive;
  *((_QWORD *)&v22[1] + 1) = 11LL;
  *(_QWORD *)&v22[2] = 0LL;
  *((_QWORD *)&v22[2] + 1) = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v48[128], v22);
  memcpy(v22, v48, 0x24CuLL);
  *(_WORD *)((char *)&v22[36] + 13) = *(_WORD *)&v48[589];
  HIBYTE(v22[36]) = v48[591];
  BYTE12(v22[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v62, v22);
  memcpy(v61, v62, sizeof(v61));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[33] = aStripTrailingS;
  *((_QWORD *)&v22[33] + 1) = 22LL;
  memcpy(v38, v22, 0x220uLL);
  *(_OWORD *)&v38[560] = v22[35];
  *(_OWORD *)&v38[576] = v22[36];
  *(_QWORD *)&v38[544] = aStripTrailingS;
  *(_QWORD *)&v38[552] = 22LL;
  *(_QWORD *)&v22[0] = 0LL;
  *((_QWORD *)&v22[0] + 1) = 1LL;
  *(_QWORD *)&v22[1] = 0LL;
  alloc::string::String::push_str(v22, aRemoveAnyTrail, 53LL);
  v9 = *(_QWORD *)&v22[0];
  if ( *(_QWORD *)&v22[0] != 0x8000000000000000LL )
    v21 = *(_OWORD *)((char *)v22 + 8);
  if ( *(_QWORD *)&v38[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38[440], aRemoveAnyTrail);
  *(_QWORD *)&v38[440] = v9;
  *(_OWORD *)&v38[448] = v21;
  memcpy(v22, v38, 0x24CuLL);
  *(_WORD *)((char *)&v22[36] + 13) = *(_WORD *)&v38[589];
  HIBYTE(v22[36]) = v38[591];
  BYTE12(v22[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v61, v22);
  memcpy(v60, v61, sizeof(v60));
  uucore::features::backup_control::arguments::backup(v66);
  memcpy(v22, v66, sizeof(v22));
  clap_builder::builder::command::Command::arg_internal(v60, v22);
  memcpy(v59, v60, sizeof(v59));
  uucore::features::backup_control::arguments::backup_no_args(v67);
  memcpy(v22, v67, sizeof(v22));
  clap_builder::builder::command::Command::arg_internal(v59, v22);
  memcpy(v58, v59, sizeof(v58));
  uucore::features::backup_control::arguments::suffix(v68);
  memcpy(v22, v68, sizeof(v22));
  clap_builder::builder::command::Command::arg_internal(v58, v22);
  memcpy(v57, v58, sizeof(v57));
  uucore::features::update_control::arguments::update(v69);
  memcpy(v22, v69, sizeof(v22));
  clap_builder::builder::command::Command::arg_internal(v57, v22);
  memcpy(v56, v57, sizeof(v56));
  uucore::features::update_control::arguments::update_no_args(v70);
  memcpy(v22, v70, sizeof(v22));
  clap_builder::builder::command::Command::arg_internal(v56, v22);
  memcpy(v55, v56, sizeof(v55));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[33] = aTargetDirector;
  *((_QWORD *)&v22[33] + 1) = 16LL;
  memcpy(v39, v22, 0x220uLL);
  v39[35] = v22[35];
  *(_QWORD *)((char *)&v39[36] + 4) = *(_QWORD *)((char *)&v22[36] + 4);
  HIDWORD(v39[36]) = HIDWORD(v22[36]);
  *(_QWORD *)&v39[34] = aTargetDirector;
  *((_QWORD *)&v39[34] + 1) = 16LL;
  LODWORD(v39[36]) = 116;
  *(_QWORD *)&v22[0] = 0LL;
  *((_QWORD *)&v22[0] + 1) = 1LL;
  *(_QWORD *)&v22[1] = 0LL;
  alloc::string::String::push_str(v22, aMoveAllSourceA, 40LL);
  v10 = *(_QWORD *)&v22[0];
  if ( *(_QWORD *)&v22[0] != 0x8000000000000000LL )
    v21 = *(_OWORD *)((char *)v22 + 8);
  if ( *((_QWORD *)&v39[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v39[27] + 8, aMoveAllSourceA);
  *((_QWORD *)&v39[27] + 1) = v10;
  v39[28] = v21;
  memcpy(v22, v39, sizeof(v22));
  clap_builder::builder::arg::Arg::value_names(v64, v22);
  v64[589] = 4;
  memcpy(v44, v64, sizeof(v44));
  v11 = v44[15];
  if ( v44[15] == v44[13] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v44[13]);
  v12 = v44[14];
  v13 = 16 * v11;
  *(_QWORD *)(v44[14] + v13) = aNoTargetDirect;
  *(_QWORD *)(v12 + v13 + 8) = 19LL;
  v44[15] = v11 + 1;
  memcpy(v45, v44, sizeof(v45));
  if ( v45[10] >= 4uLL && v45[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v45[11]);
  v45[10] = 2LL;
  memcpy(v22, v45, sizeof(v22));
  clap_builder::builder::command::Command::arg_internal(v55, v22);
  memcpy(v54, v55, sizeof(v54));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[33] = aNoTargetDirect;
  *((_QWORD *)&v22[33] + 1) = 19LL;
  memcpy(v29, v22, 0x220uLL);
  *(_OWORD *)&v29[560] = v22[35];
  *(_QWORD *)&v29[580] = *(_QWORD *)((char *)&v22[36] + 4);
  v30 = HIDWORD(v22[36]);
  *(_QWORD *)&v29[544] = aNoTargetDirect;
  *(_QWORD *)&v29[552] = 19LL;
  *(_DWORD *)&v29[576] = 84;
  *(_QWORD *)&v22[0] = 0LL;
  *((_QWORD *)&v22[0] + 1) = 1LL;
  *(_QWORD *)&v22[1] = 0LL;
  alloc::string::String::push_str(v22, aTreatDestAsANo, 27LL);
  v14 = *(_QWORD *)&v22[0];
  if ( *(_QWORD *)&v22[0] != 0x8000000000000000LL )
    v21 = *(_OWORD *)((char *)v22 + 8);
  if ( *(_QWORD *)&v29[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29[440], aTreatDestAsANo);
  *(_QWORD *)&v29[440] = v14;
  *(_OWORD *)&v29[448] = v21;
  memcpy(v22, v29, 0x24CuLL);
  *(_WORD *)((char *)&v22[36] + 13) = *(_WORD *)((char *)&v30 + 1);
  HIBYTE(v22[36]) = HIBYTE(v30);
  BYTE12(v22[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v54, v22);
  memcpy(v53, v54, sizeof(v53));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[33] = aVerbose;
  *((_QWORD *)&v22[33] + 1) = 7LL;
  memcpy(v31, v22, 0x220uLL);
  *(_OWORD *)&v31[560] = v22[35];
  *(_QWORD *)&v31[580] = *(_QWORD *)((char *)&v22[36] + 4);
  v32 = HIDWORD(v22[36]);
  *(_QWORD *)&v31[544] = aVerbose;
  *(_QWORD *)&v31[552] = 7LL;
  *(_DWORD *)&v31[576] = 118;
  *(_QWORD *)&v22[0] = 0LL;
  *((_QWORD *)&v22[0] + 1) = 1LL;
  *(_QWORD *)&v22[1] = 0LL;
  alloc::string::String::push_str(v22, aExplainWhatIsB, 26LL);
  v15 = *(_QWORD *)&v22[0];
  if ( *(_QWORD *)&v22[0] != 0x8000000000000000LL )
    v21 = *(_OWORD *)((char *)v22 + 8);
  if ( *(_QWORD *)&v31[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31[440], aExplainWhatIsB);
  *(_QWORD *)&v31[440] = v15;
  *(_OWORD *)&v31[448] = v21;
  memcpy(v22, v31, 0x24CuLL);
  *(_WORD *)((char *)&v22[36] + 13) = *(_WORD *)((char *)&v32 + 1);
  HIBYTE(v22[36]) = HIBYTE(v32);
  BYTE12(v22[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v53, v22);
  memcpy(v52, v53, sizeof(v52));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[33] = aProgress;
  *((_QWORD *)&v22[33] + 1) = 8LL;
  memcpy(v33, v22, 0x220uLL);
  *(_OWORD *)&v33[560] = v22[35];
  *(_QWORD *)&v33[580] = *(_QWORD *)((char *)&v22[36] + 4);
  v34 = HIDWORD(v22[36]);
  *(_QWORD *)&v33[544] = aProgress;
  *(_QWORD *)&v33[552] = 8LL;
  *(_DWORD *)&v33[576] = 103;
  *(_QWORD *)&v22[0] = 0LL;
  *((_QWORD *)&v22[0] + 1) = 1LL;
  *(_QWORD *)&v22[1] = 0LL;
  alloc::string::String::push_str(v22, aDisplayAProgre, 78LL);
  v16 = *(_QWORD *)&v22[0];
  if ( *(_QWORD *)&v22[0] != 0x8000000000000000LL )
    v21 = *(_OWORD *)((char *)v22 + 8);
  if ( *(_QWORD *)&v33[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v33[440], aDisplayAProgre);
  *(_QWORD *)&v33[440] = v16;
  *(_OWORD *)&v33[448] = v21;
  memcpy(v22, v33, 0x24CuLL);
  *(_WORD *)((char *)&v22[36] + 13) = *(_WORD *)((char *)&v34 + 1);
  HIBYTE(v22[36]) = HIBYTE(v34);
  BYTE12(v22[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v52, v22);
  memcpy(v51, v52, sizeof(v51));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[33] = aFiles;
  *((_QWORD *)&v22[33] + 1) = 5LL;
  *(_OWORD *)v41 = v22[0];
  memcpy(&v41[40], (char *)&v22[2] + 8, 0x220uLL);
  *(_QWORD *)&v41[16] = 1LL;
  *(_QWORD *)&v41[24] = 1LL;
  *(_QWORD *)&v41[32] = -1LL;
  *(_DWORD *)&v41[584] = DWORD2(v22[36]) | 1;
  *(_DWORD *)&v41[588] = HIDWORD(v22[36]) & 0xFFFFFF00 | 1;
  v17 = HIWORD(HIDWORD(v22[36]));
  if ( *(_QWORD *)&v41[80] >= 4uLL && *(_QWORD *)&v41[80] != 5LL )
  {
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v41[88]);
    LOWORD(v17) = *(_WORD *)&v41[590];
  }
  *(_QWORD *)&v41[80] = 2LL;
  memcpy(v22, v41, 0x24DuLL);
  BYTE13(v22[36]) = 2;
  HIWORD(v22[36]) = v17;
  clap_builder::builder::command::Command::arg_internal(v51, v22);
  memcpy(v50, v51, sizeof(v50));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v22);
  *(_QWORD *)&v22[33] = aDebug;
  *((_QWORD *)&v22[33] + 1) = 5LL;
  memcpy(v40, v22, 0x220uLL);
  *(_OWORD *)&v40[560] = v22[35];
  *(_OWORD *)&v40[576] = v22[36];
  *(_QWORD *)&v40[544] = aDebug;
  *(_QWORD *)&v40[552] = 5LL;
  *(_QWORD *)&v22[0] = 0LL;
  *((_QWORD *)&v22[0] + 1) = 1LL;
  *(_QWORD *)&v22[1] = 0LL;
  alloc::string::String::push_str(v22, aExplainHowAFil, 40LL);
  v18 = *(_QWORD *)&v22[0];
  v19 = v23;
  if ( *(_QWORD *)&v22[0] != 0x8000000000000000LL )
    v21 = *(_OWORD *)((char *)v22 + 8);
  if ( *(_QWORD *)&v40[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40[440], aExplainHowAFil);
  *(_QWORD *)&v40[440] = v18;
  *(_OWORD *)&v40[448] = v21;
  memcpy(v22, v40, 0x24CuLL);
  *(_WORD *)((char *)&v22[36] + 13) = *(_WORD *)&v40[589];
  HIBYTE(v22[36]) = v40[591];
  BYTE12(v22[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v50, v22);
  memcpy(v19, v50, 0x2C8uLL);
  return v19;
}
