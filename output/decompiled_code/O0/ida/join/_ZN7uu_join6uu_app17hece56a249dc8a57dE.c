void *__fastcall uu_join::uu_app(void *a1)
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
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // r14
  void *v18; // rbx
  __int128 v20; // [rsp+0h] [rbp-65A8h]
  _OWORD v21[37]; // [rsp+10h] [rbp-6598h] BYREF
  void *v22; // [rsp+268h] [rbp-6340h]
  _BYTE v23[592]; // [rsp+270h] [rbp-6338h] BYREF
  const char *v24; // [rsp+4C8h] [rbp-60E0h]
  __int64 v25; // [rsp+4D0h] [rbp-60D8h]
  const char *v26; // [rsp+4D8h] [rbp-60D0h]
  __int64 v27; // [rsp+4E0h] [rbp-60C8h]
  const char *v28; // [rsp+4E8h] [rbp-60C0h]
  __int64 v29; // [rsp+4F0h] [rbp-60B8h]
  const char *v30; // [rsp+4F8h] [rbp-60B0h]
  __int64 v31; // [rsp+500h] [rbp-60A8h]
  __int64 v32; // [rsp+508h] [rbp-60A0h] BYREF
  __int128 v33; // [rsp+510h] [rbp-6098h]
  _BYTE v34[588]; // [rsp+520h] [rbp-6088h] BYREF
  int v35; // [rsp+76Ch] [rbp-5E3Ch]
  _BYTE v36[588]; // [rsp+770h] [rbp-5E38h] BYREF
  int v37; // [rsp+9BCh] [rbp-5BECh]
  _BYTE v38[592]; // [rsp+9C0h] [rbp-5BE8h] BYREF
  _BYTE v39[592]; // [rsp+C10h] [rbp-5998h] BYREF
  _BYTE v40[592]; // [rsp+E60h] [rbp-5748h] BYREF
  __int128 v41; // [rsp+10B0h] [rbp-54F8h] BYREF
  __int64 v42; // [rsp+10C0h] [rbp-54E8h]
  __int64 v43; // [rsp+10C8h] [rbp-54E0h]
  __int64 v44; // [rsp+10D0h] [rbp-54D8h]
  _BYTE v45[536]; // [rsp+10D8h] [rbp-54D0h] BYREF
  int v46; // [rsp+12F0h] [rbp-52B8h]
  __int64 v47; // [rsp+12F4h] [rbp-52B4h]
  char v48; // [rsp+12FCh] [rbp-52ACh]
  __int16 v49; // [rsp+12FDh] [rbp-52ABh]
  char v50; // [rsp+12FFh] [rbp-52A9h]
  __int128 v51; // [rsp+1300h] [rbp-52A8h] BYREF
  __int64 v52; // [rsp+1310h] [rbp-5298h]
  __int64 v53; // [rsp+1318h] [rbp-5290h]
  __int64 v54; // [rsp+1320h] [rbp-5288h]
  _BYTE v55[536]; // [rsp+1328h] [rbp-5280h] BYREF
  int v56; // [rsp+1540h] [rbp-5068h]
  __int64 v57; // [rsp+1544h] [rbp-5064h]
  char v58; // [rsp+154Ch] [rbp-505Ch]
  __int16 v59; // [rsp+154Dh] [rbp-505Bh]
  char v60; // [rsp+154Fh] [rbp-5059h]
  _DWORD v61[178]; // [rsp+1558h] [rbp-5050h] BYREF
  _OWORD v62[37]; // [rsp+1820h] [rbp-4D88h] BYREF
  _OWORD v63[37]; // [rsp+1A70h] [rbp-4B38h] BYREF
  _OWORD v64[37]; // [rsp+1CC0h] [rbp-48E8h] BYREF
  _OWORD v65[37]; // [rsp+1F10h] [rbp-4698h] BYREF
  _OWORD v66[37]; // [rsp+2160h] [rbp-4448h] BYREF
  _OWORD v67[37]; // [rsp+23B0h] [rbp-41F8h] BYREF
  _OWORD v68[37]; // [rsp+2600h] [rbp-3FA8h] BYREF
  _OWORD v69[37]; // [rsp+2850h] [rbp-3D58h] BYREF
  _QWORD v70[74]; // [rsp+2AA0h] [rbp-3B08h] BYREF
  _DWORD v71[178]; // [rsp+2CF0h] [rbp-38B8h] BYREF
  _BYTE v72[584]; // [rsp+2FB8h] [rbp-35F0h] BYREF
  __int64 v73; // [rsp+3200h] [rbp-33A8h]
  _BYTE v74[584]; // [rsp+3208h] [rbp-33A0h] BYREF
  __int64 v75; // [rsp+3450h] [rbp-3158h]
  _QWORD v76[89]; // [rsp+3458h] [rbp-3150h] BYREF
  _BYTE v77[712]; // [rsp+3720h] [rbp-2E88h] BYREF
  _BYTE v78[712]; // [rsp+39E8h] [rbp-2BC0h] BYREF
  _BYTE v79[712]; // [rsp+3CB0h] [rbp-28F8h] BYREF
  _BYTE v80[712]; // [rsp+3F78h] [rbp-2630h] BYREF
  _BYTE v81[712]; // [rsp+4240h] [rbp-2368h] BYREF
  _QWORD v82[89]; // [rsp+4508h] [rbp-20A0h] BYREF
  _BYTE v83[712]; // [rsp+47D0h] [rbp-1DD8h] BYREF
  _BYTE v84[712]; // [rsp+4A98h] [rbp-1B10h] BYREF
  _BYTE v85[712]; // [rsp+4D60h] [rbp-1848h] BYREF
  _BYTE v86[712]; // [rsp+5028h] [rbp-1580h] BYREF
  _QWORD v87[89]; // [rsp+52F0h] [rbp-12B8h] BYREF
  _BYTE v88[712]; // [rsp+55B8h] [rbp-FF0h] BYREF
  _BYTE v89[712]; // [rsp+5880h] [rbp-D28h] BYREF
  _QWORD src[89]; // [rsp+5B48h] [rbp-A60h] BYREF
  _BYTE v91[592]; // [rsp+5E10h] [rbp-798h] BYREF
  _BYTE v92[592]; // [rsp+6060h] [rbp-548h] BYREF
  _BYTE dest[760]; // [rsp+62B0h] [rbp-2F8h] BYREF

  v87[81] = 0LL;
  v82[14] = 0LL;
  v76[36] = 0LL;
  *((_QWORD *)&v67[28] + 1) = 0LL;
  *(_QWORD *)&v61[8] = 0LL;
  *(_QWORD *)&v34[88] = 0LL;
  v22 = a1;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v61, dest);
  uucore::format_usage((unsigned int)&v32);
  v4 = v32;
  if ( v32 != 0x8000000000000000LL )
    v21[0] = v33;
  if ( *(_QWORD *)&v61[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v61[116], aOptionFile1Fil);
  *(_QWORD *)&v61[116] = v4;
  *(_OWORD *)&v61[118] = v21[0];
  memcpy(v71, v61, 0x2BCuLL);
  *(_QWORD *)&v71[175] = *(_QWORD *)&v61[175] | 0x8000000080LL;
  v71[177] = v61[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[33] = aA;
  *((_QWORD *)&v21[33] + 1) = 1LL;
  v41 = v21[0];
  memcpy(v45, (char *)&v21[2] + 8, sizeof(v45));
  v49 = *(_WORD *)((char *)&v21[36] + 13);
  v50 = HIBYTE(v21[36]);
  v42 = 1LL;
  v43 = 1LL;
  v44 = 1LL;
  v46 = 97;
  v47 = *(_QWORD *)((char *)&v21[36] + 4);
  v48 = 1;
  v24 = ::a1;
  v25 = 1LL;
  v26 = a2;
  v27 = 1LL;
  clap_builder::builder::arg::Arg::value_parser(v91, &v41);
  memcpy(v21, v91, sizeof(v21));
  *(_QWORD *)v23 = aFilenum;
  *(_QWORD *)&v23[8] = 7LL;
  clap_builder::builder::arg::Arg::value_names(v62, v21);
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::string::String::push_str(v21, aAlsoPrintUnpai, 103LL);
  v5 = *(_QWORD *)&v21[0];
  *(_OWORD *)v23 = *(_OWORD *)((char *)v21 + 8);
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v20 = *(_OWORD *)v23;
  if ( *((_QWORD *)&v62[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v62[27] + 8, aAlsoPrintUnpai);
  *((_QWORD *)&v62[27] + 1) = v5;
  v62[28] = v20;
  memcpy(v21, v62, sizeof(v21));
  clap_builder::builder::command::Command::arg_internal(v71, v21);
  memcpy(v89, v71, sizeof(v89));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[33] = aV;
  *((_QWORD *)&v21[33] + 1) = 1LL;
  v51 = v21[0];
  memcpy(v55, (char *)&v21[2] + 8, sizeof(v55));
  v59 = *(_WORD *)((char *)&v21[36] + 13);
  v60 = HIBYTE(v21[36]);
  v52 = 1LL;
  v53 = 1LL;
  v54 = 1LL;
  v56 = 118;
  v57 = *(_QWORD *)((char *)&v21[36] + 4);
  v58 = 1;
  v28 = ::a1;
  v29 = 1LL;
  v30 = a2;
  v31 = 1LL;
  clap_builder::builder::arg::Arg::value_parser(v92, &v51);
  memcpy(v21, v92, sizeof(v21));
  *(_QWORD *)v23 = aFilenum;
  *(_QWORD *)&v23[8] = 7LL;
  clap_builder::builder::arg::Arg::value_names(v63, v21);
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::string::String::push_str(v21, aLikeAFilenumBu, 49LL);
  v6 = *(_QWORD *)&v21[0];
  *(_OWORD *)v23 = *(_OWORD *)((char *)v21 + 8);
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v20 = *(_OWORD *)v23;
  if ( *((_QWORD *)&v63[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v63[27] + 8, aLikeAFilenumBu);
  *((_QWORD *)&v63[27] + 1) = v6;
  v63[28] = v20;
  memcpy(v21, v63, sizeof(v21));
  clap_builder::builder::command::Command::arg_internal(v89, v21);
  memcpy(v88, v89, sizeof(v88));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[528] = aE;
  *(_QWORD *)&v23[536] = 1LL;
  memcpy(v21, v23, 0x240uLL);
  *(_QWORD *)((char *)&v21[36] + 4) = *(_QWORD *)&v23[580];
  HIDWORD(v21[36]) = *(_DWORD *)&v23[588];
  LODWORD(v21[36]) = 101;
  *(_QWORD *)v23 = aEmpty;
  *(_QWORD *)&v23[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v64, v21);
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::string::String::push_str(v21, aReplaceMissing, 39LL);
  v7 = *(_QWORD *)&v21[0];
  *(_OWORD *)v23 = *(_OWORD *)((char *)v21 + 8);
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v20 = *(_OWORD *)v23;
  if ( *((_QWORD *)&v64[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v64[27] + 8, aReplaceMissing);
  *((_QWORD *)&v64[27] + 1) = v7;
  v64[28] = v20;
  memcpy(v21, v64, sizeof(v21));
  clap_builder::builder::command::Command::arg_internal(v88, v21);
  memcpy(v87, v88, sizeof(v87));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[33] = aI;
  *((_QWORD *)&v21[33] + 1) = 1LL;
  memcpy(v34, v21, 0x220uLL);
  *(_OWORD *)&v34[560] = v21[35];
  *(_QWORD *)&v34[580] = *(_QWORD *)((char *)&v21[36] + 4);
  v35 = HIDWORD(v21[36]);
  *(_QWORD *)&v34[544] = aIgnoreCase;
  *(_QWORD *)&v34[552] = 11LL;
  *(_DWORD *)&v34[576] = 105;
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::string::String::push_str(v21, aIgnoreDifferen, 48LL);
  v8 = *(_QWORD *)&v21[0];
  *(_OWORD *)v23 = *(_OWORD *)((char *)v21 + 8);
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v20 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v34[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34[440], aIgnoreDifferen);
  *(_QWORD *)&v34[440] = v8;
  *(_OWORD *)&v34[448] = v20;
  memcpy(v21, v34, 0x24CuLL);
  *(_WORD *)((char *)&v21[36] + 13) = *(_WORD *)((char *)&v35 + 1);
  HIBYTE(v21[36]) = HIBYTE(v35);
  BYTE12(v21[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v87, v21);
  memcpy(v86, v87, sizeof(v86));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[528] = aJ;
  *(_QWORD *)&v23[536] = 1LL;
  memcpy(v21, v23, 0x240uLL);
  *(_QWORD *)((char *)&v21[36] + 4) = *(_QWORD *)&v23[580];
  HIDWORD(v21[36]) = *(_DWORD *)&v23[588];
  LODWORD(v21[36]) = 106;
  *(_QWORD *)v23 = aField;
  *(_QWORD *)&v23[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v65, v21);
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::string::String::push_str(v21, aEquivalentTo1F, 33LL);
  v9 = *(_QWORD *)&v21[0];
  *(_OWORD *)v23 = *(_OWORD *)((char *)v21 + 8);
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v20 = *(_OWORD *)v23;
  if ( *((_QWORD *)&v65[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v65[27] + 8, aEquivalentTo1F);
  *((_QWORD *)&v65[27] + 1) = v9;
  v65[28] = v20;
  memcpy(v21, v65, sizeof(v21));
  clap_builder::builder::command::Command::arg_internal(v86, v21);
  memcpy(v85, v86, sizeof(v85));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[528] = aO;
  *(_QWORD *)&v23[536] = 1LL;
  memcpy(v21, v23, 0x240uLL);
  *(_QWORD *)((char *)&v21[36] + 4) = *(_QWORD *)&v23[580];
  HIDWORD(v21[36]) = *(_DWORD *)&v23[588];
  LODWORD(v21[36]) = 111;
  *(_QWORD *)v23 = aFormat;
  *(_QWORD *)&v23[8] = 6LL;
  clap_builder::builder::arg::Arg::value_names(v66, v21);
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::string::String::push_str(v21, aObeyFormatWhil, 42LL);
  v10 = *(_QWORD *)&v21[0];
  *(_OWORD *)v23 = *(_OWORD *)((char *)v21 + 8);
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v20 = *(_OWORD *)v23;
  if ( *((_QWORD *)&v66[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v66[27] + 8, aObeyFormatWhil);
  *((_QWORD *)&v66[27] + 1) = v10;
  v66[28] = v20;
  memcpy(v21, v66, sizeof(v21));
  clap_builder::builder::command::Command::arg_internal(v85, v21);
  memcpy(v84, v85, sizeof(v84));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[528] = aT;
  *(_QWORD *)&v23[536] = 1LL;
  memcpy(v21, v23, 0x240uLL);
  *(_QWORD *)((char *)&v21[36] + 4) = *(_QWORD *)&v23[580];
  HIDWORD(v21[36]) = *(_DWORD *)&v23[588];
  LODWORD(v21[36]) = 116;
  *(_QWORD *)v23 = aChar;
  *(_QWORD *)&v23[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v70, v21);
  if ( v70[10] >= 4uLL && v70[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v70[11]);
  v70[10] = 2LL;
  memcpy(v67, v70, sizeof(v67));
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::string::String::push_str(v21, aUseCharAsInput, 44LL);
  v11 = *(_QWORD *)&v21[0];
  *(_OWORD *)v23 = *(_OWORD *)((char *)v21 + 8);
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v20 = *(_OWORD *)v23;
  if ( *((_QWORD *)&v67[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v67[27] + 8, aUseCharAsInput);
  *((_QWORD *)&v67[27] + 1) = v11;
  v67[28] = v20;
  memcpy(v21, v67, sizeof(v21));
  clap_builder::builder::command::Command::arg_internal(v84, v21);
  memcpy(v83, v84, sizeof(v83));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[528] = ::a1;
  *(_QWORD *)&v23[536] = 1LL;
  memcpy(v21, v23, 0x240uLL);
  *(_QWORD *)((char *)&v21[36] + 4) = *(_QWORD *)&v23[580];
  HIDWORD(v21[36]) = *(_DWORD *)&v23[588];
  LODWORD(v21[36]) = 49;
  *(_QWORD *)v23 = aField;
  *(_QWORD *)&v23[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v68, v21);
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::string::String::push_str(v21, aJoinOnThisFiel, 28LL);
  v12 = *(_QWORD *)&v21[0];
  *(_OWORD *)v23 = *(_OWORD *)((char *)v21 + 8);
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v20 = *(_OWORD *)v23;
  if ( *((_QWORD *)&v68[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v68[27] + 8, aJoinOnThisFiel);
  *((_QWORD *)&v68[27] + 1) = v12;
  v68[28] = v20;
  memcpy(v21, v68, sizeof(v21));
  clap_builder::builder::command::Command::arg_internal(v83, v21);
  memcpy(v82, v83, sizeof(v82));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[528] = a2;
  *(_QWORD *)&v23[536] = 1LL;
  memcpy(v21, v23, 0x240uLL);
  *(_QWORD *)((char *)&v21[36] + 4) = *(_QWORD *)&v23[580];
  HIDWORD(v21[36]) = *(_DWORD *)&v23[588];
  LODWORD(v21[36]) = 50;
  *(_QWORD *)v23 = aField;
  *(_QWORD *)&v23[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v69, v21);
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::string::String::push_str(v21, aJoinOnThisFiel_0, 28LL);
  v13 = *(_QWORD *)&v21[0];
  *(_OWORD *)v23 = *(_OWORD *)((char *)v21 + 8);
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v20 = *(_OWORD *)v23;
  if ( *((_QWORD *)&v69[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v69[27] + 8, aJoinOnThisFiel_0);
  *((_QWORD *)&v69[27] + 1) = v13;
  v69[28] = v20;
  memcpy(v21, v69, sizeof(v21));
  clap_builder::builder::command::Command::arg_internal(v82, v21);
  memcpy(v81, v82, sizeof(v81));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[33] = aCheckOrder;
  *((_QWORD *)&v21[33] + 1) = 11LL;
  memcpy(v38, v21, 0x220uLL);
  *(_OWORD *)&v38[560] = v21[35];
  *(_OWORD *)&v38[576] = v21[36];
  *(_QWORD *)&v38[544] = aCheckOrder;
  *(_QWORD *)&v38[552] = 11LL;
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::string::String::push_str(v21, aCheckThatTheIn, 78LL);
  v14 = *(_QWORD *)&v21[0];
  *(_OWORD *)v23 = *(_OWORD *)((char *)v21 + 8);
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v20 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v38[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38[440], aCheckThatTheIn);
  *(_QWORD *)&v38[440] = v14;
  *(_OWORD *)&v38[448] = v20;
  memcpy(v21, v38, 0x24CuLL);
  *(_WORD *)((char *)&v21[36] + 13) = *(_WORD *)&v38[589];
  HIBYTE(v21[36]) = v38[591];
  BYTE12(v21[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v81, v21);
  memcpy(v80, v81, sizeof(v80));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[33] = aNocheckOrder;
  *((_QWORD *)&v21[33] + 1) = 13LL;
  memcpy(v39, v21, 0x220uLL);
  *(_OWORD *)&v39[560] = v21[35];
  *(_OWORD *)&v39[576] = v21[36];
  *(_QWORD *)&v39[544] = aNocheckOrder;
  *(_QWORD *)&v39[552] = 13LL;
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::string::String::push_str(v21, aDoNotCheckThat, 47LL);
  v15 = *(_QWORD *)&v21[0];
  *(_OWORD *)v23 = *(_OWORD *)((char *)v21 + 8);
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v20 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v39[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v39[440], aDoNotCheckThat);
  *(_QWORD *)&v39[440] = v15;
  *(_OWORD *)&v39[448] = v20;
  memcpy(v21, v39, 0x24CuLL);
  *(_WORD *)((char *)&v21[36] + 13) = *(_WORD *)&v39[589];
  HIBYTE(v21[36]) = v39[591];
  BYTE12(v21[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v80, v21);
  memcpy(v79, v80, sizeof(v79));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[33] = aHeader;
  *((_QWORD *)&v21[33] + 1) = 6LL;
  memcpy(v40, v21, 0x220uLL);
  *(_OWORD *)&v40[560] = v21[35];
  *(_OWORD *)&v40[576] = v21[36];
  *(_QWORD *)&v40[544] = aHeader;
  *(_QWORD *)&v40[552] = 6LL;
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::string::String::push_str(v21, aTreatTheFirstL, 90LL);
  v16 = *(_QWORD *)&v21[0];
  *(_OWORD *)v23 = *(_OWORD *)((char *)v21 + 8);
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v20 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v40[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40[440], aTreatTheFirstL);
  *(_QWORD *)&v40[440] = v16;
  *(_OWORD *)&v40[448] = v20;
  memcpy(v21, v40, 0x24CuLL);
  *(_WORD *)((char *)&v21[36] + 13) = *(_WORD *)&v40[589];
  HIBYTE(v21[36]) = v40[591];
  BYTE12(v21[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v79, v21);
  memcpy(v78, v79, sizeof(v78));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[33] = aZ;
  *((_QWORD *)&v21[33] + 1) = 1LL;
  memcpy(v36, v21, 0x220uLL);
  *(_OWORD *)&v36[560] = v21[35];
  *(_QWORD *)&v36[580] = *(_QWORD *)((char *)&v21[36] + 4);
  v37 = HIDWORD(v21[36]);
  *(_QWORD *)&v36[544] = aZeroTerminated;
  *(_QWORD *)&v36[552] = 15LL;
  *(_DWORD *)&v36[576] = 122;
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::string::String::push_str(v21, aLineDelimiterI, 34LL);
  v17 = *(_QWORD *)&v21[0];
  *(_OWORD *)v23 = *(_OWORD *)((char *)v21 + 8);
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v20 = *(_OWORD *)v23;
  if ( *(_QWORD *)&v36[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v36[440], aLineDelimiterI);
  *(_QWORD *)&v36[440] = v17;
  *(_OWORD *)&v36[448] = v20;
  memcpy(v21, v36, 0x24CuLL);
  *(_WORD *)((char *)&v21[36] + 13) = *(_WORD *)((char *)&v37 + 1);
  HIBYTE(v21[36]) = HIBYTE(v37);
  BYTE12(v21[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v78, v21);
  memcpy(v77, v78, sizeof(v77));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[528] = aFile1_0;
  *(_QWORD *)&v23[536] = 5LL;
  memcpy(v21, v23, 0x248uLL);
  *((_QWORD *)&v21[36] + 1) = *(_QWORD *)&v23[584] | 1LL;
  *(_QWORD *)v23 = aFile1_1;
  *(_QWORD *)&v23[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v72, v21);
  BYTE5(v73) = 3;
  memcpy(v21, v72, 0x248uLL);
  *((_QWORD *)&v21[36] + 1) = v73 | 4;
  clap_builder::builder::command::Command::arg_internal(v77, v21);
  memcpy(v76, v77, sizeof(v76));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v23);
  *(_QWORD *)&v23[528] = aFile2_0;
  *(_QWORD *)&v23[536] = 5LL;
  memcpy(v21, v23, 0x248uLL);
  *((_QWORD *)&v21[36] + 1) = *(_QWORD *)&v23[584] | 1LL;
  *(_QWORD *)v23 = aFile2_1;
  *(_QWORD *)&v23[8] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v74, v21);
  BYTE5(v75) = 3;
  memcpy(v21, v74, 0x248uLL);
  *((_QWORD *)&v21[36] + 1) = v75 | 4;
  clap_builder::builder::command::Command::arg_internal(v76, v21);
  v18 = v22;
  memcpy(v22, v76, 0x2C8uLL);
  return v18;
}
