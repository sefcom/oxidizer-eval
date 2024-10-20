void *__fastcall uu_touch::uu_app(void *dest)
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
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  __int128 v33; // [rsp+0h] [rbp-4F38h]
  __int128 v34; // [rsp+10h] [rbp-4F28h] BYREF
  __int64 v35; // [rsp+20h] [rbp-4F18h]
  _OWORD v36[37]; // [rsp+30h] [rbp-4F08h] BYREF
  __int128 v37; // [rsp+280h] [rbp-4CB8h] BYREF
  __int64 v38; // [rsp+290h] [rbp-4CA8h]
  unsigned __int64 v39; // [rsp+298h] [rbp-4CA0h]
  __int128 v40; // [rsp+2A0h] [rbp-4C98h]
  __int128 v41; // [rsp+2B0h] [rbp-4C88h]
  __int64 v42; // [rsp+2C0h] [rbp-4C78h]
  __int128 v43; // [rsp+2D0h] [rbp-4C68h] BYREF
  __int64 v44; // [rsp+2E0h] [rbp-4C58h]
  unsigned __int64 v45; // [rsp+2E8h] [rbp-4C50h]
  __int128 v46; // [rsp+2F0h] [rbp-4C48h]
  __int128 v47; // [rsp+300h] [rbp-4C38h]
  __int64 v48; // [rsp+310h] [rbp-4C28h]
  __int128 v49; // [rsp+318h] [rbp-4C20h] BYREF
  __int64 v50; // [rsp+328h] [rbp-4C10h]
  unsigned __int64 v51; // [rsp+330h] [rbp-4C08h]
  __int128 v52; // [rsp+338h] [rbp-4C00h]
  __int128 v53; // [rsp+348h] [rbp-4BF0h]
  __int64 v54; // [rsp+358h] [rbp-4BE0h]
  __int128 v55; // [rsp+360h] [rbp-4BD8h]
  unsigned __int128 v56; // [rsp+370h] [rbp-4BC8h]
  __int128 v57; // [rsp+380h] [rbp-4BB8h]
  __int128 v58; // [rsp+390h] [rbp-4BA8h]
  __int64 v59; // [rsp+3A0h] [rbp-4B98h]
  _QWORD v60[6]; // [rsp+3B0h] [rbp-4B88h] BYREF
  __int128 v61; // [rsp+3E0h] [rbp-4B58h] BYREF
  __int64 v62; // [rsp+3F0h] [rbp-4B48h]
  __int64 v63; // [rsp+3F8h] [rbp-4B40h] BYREF
  __int128 v64; // [rsp+400h] [rbp-4B38h]
  _OWORD v65[5]; // [rsp+410h] [rbp-4B28h] BYREF
  __int64 v66; // [rsp+460h] [rbp-4AD8h]
  char v67; // [rsp+468h] [rbp-4AD0h]
  char v68; // [rsp+469h] [rbp-4ACFh]
  int v69; // [rsp+46Ah] [rbp-4ACEh]
  __int16 v70; // [rsp+46Eh] [rbp-4ACAh]
  _QWORD v71[2]; // [rsp+470h] [rbp-4AC8h] BYREF
  __int128 v72; // [rsp+480h] [rbp-4AB8h]
  __int64 v73; // [rsp+490h] [rbp-4AA8h]
  __int128 v74; // [rsp+498h] [rbp-4AA0h]
  __int64 v75; // [rsp+4A8h] [rbp-4A90h]
  __int64 v76; // [rsp+4B0h] [rbp-4A88h]
  const char *v77; // [rsp+4B8h] [rbp-4A80h]
  __int64 v78; // [rsp+4C0h] [rbp-4A78h]
  __int16 v79; // [rsp+4C8h] [rbp-4A70h]
  _OWORD v80[9]; // [rsp+4D0h] [rbp-4A68h] BYREF
  _BYTE v81[588]; // [rsp+560h] [rbp-49D8h] BYREF
  int v82; // [rsp+7ACh] [rbp-478Ch]
  _BYTE v83[588]; // [rsp+7B0h] [rbp-4788h] BYREF
  int v84; // [rsp+9FCh] [rbp-453Ch]
  _OWORD v85[37]; // [rsp+A00h] [rbp-4538h] BYREF
  _BYTE v86[589]; // [rsp+C50h] [rbp-42E8h] BYREF
  _BYTE v87[3]; // [rsp+E9Dh] [rbp-409Bh]
  _BYTE v88[592]; // [rsp+EA8h] [rbp-4090h] BYREF
  _OWORD v89[37]; // [rsp+10F8h] [rbp-3E40h] BYREF
  _BYTE v90[588]; // [rsp+1348h] [rbp-3BF0h] BYREF
  int v91; // [rsp+1594h] [rbp-39A4h]
  _BYTE v92[588]; // [rsp+1598h] [rbp-39A0h] BYREF
  int v93; // [rsp+17E4h] [rbp-3754h]
  _OWORD v94[37]; // [rsp+17E8h] [rbp-3750h] BYREF
  _OWORD v95[37]; // [rsp+1A38h] [rbp-3500h] BYREF
  _QWORD v96[74]; // [rsp+1C88h] [rbp-32B0h] BYREF
  _DWORD v97[178]; // [rsp+1ED8h] [rbp-3060h] BYREF
  _QWORD v98[74]; // [rsp+21A0h] [rbp-2D98h] BYREF
  _QWORD v99[74]; // [rsp+23F0h] [rbp-2B48h] BYREF
  _BYTE v100[589]; // [rsp+2640h] [rbp-28F8h] BYREF
  __int16 v101; // [rsp+288Eh] [rbp-26AAh]
  _QWORD v102[89]; // [rsp+2890h] [rbp-26A8h] BYREF
  _DWORD v103[178]; // [rsp+2B58h] [rbp-23E0h] BYREF
  _QWORD v104[89]; // [rsp+2E20h] [rbp-2118h] BYREF
  _BYTE v105[712]; // [rsp+30E8h] [rbp-1E50h] BYREF
  _BYTE v106[712]; // [rsp+33B0h] [rbp-1B88h] BYREF
  _BYTE v107[712]; // [rsp+3678h] [rbp-18C0h] BYREF
  _BYTE v108[712]; // [rsp+3940h] [rbp-15F8h] BYREF
  _BYTE v109[712]; // [rsp+3C08h] [rbp-1330h] BYREF
  _QWORD v110[89]; // [rsp+3ED0h] [rbp-1068h] BYREF
  _BYTE v111[712]; // [rsp+4198h] [rbp-DA0h] BYREF
  _BYTE v112[712]; // [rsp+4460h] [rbp-AD8h] BYREF
  _QWORD src[89]; // [rsp+4728h] [rbp-810h] BYREF
  _BYTE v114[592]; // [rsp+49F0h] [rbp-548h] BYREF
  _BYTE desta[760]; // [rsp+4C40h] [rbp-2F8h] BYREF

  v110[7] = 0LL;
  v104[29] = 0LL;
  *(_QWORD *)&v97[12] = 0LL;
  *(_QWORD *)&v88[96] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v97, desta);
  uucore::format_usage((unsigned int)&v63);
  v4 = v63;
  if ( v63 != 0x8000000000000000LL )
    v36[0] = v64;
  if ( *(_QWORD *)&v97[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v97[116], aOptionUser);
  *(_QWORD *)&v97[116] = v4;
  *(_OWORD *)&v97[118] = v36[0];
  memcpy(v103, v97, 0x2BCuLL);
  *(_QWORD *)&v103[175] = *(_QWORD *)&v97[175] | 0x4008000040080LL;
  v103[177] = v97[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v36);
  *(_QWORD *)&v36[33] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *((_QWORD *)&v36[33] + 1) = 4LL;
  memcpy(v88, v36, 0x220uLL);
  *(_OWORD *)&v88[560] = v36[35];
  *(_OWORD *)&v88[576] = v36[36];
  *(_QWORD *)&v88[544] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *(_QWORD *)&v88[552] = 4LL;
  *(_QWORD *)&v36[0] = 0LL;
  *((_QWORD *)&v36[0] + 1) = 1LL;
  *(_QWORD *)&v36[1] = 0LL;
  alloc::string::String::push_str(v36, aPrintHelpInfor, 23LL);
  v5 = *(_QWORD *)&v36[0];
  v34 = *(_OWORD *)((char *)v36 + 8);
  if ( *(_QWORD *)&v36[0] != 0x8000000000000000LL )
    v33 = v34;
  if ( *(_QWORD *)&v88[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v88[440], aPrintHelpInfor);
  *(_QWORD *)&v88[440] = v5;
  *(_OWORD *)&v88[448] = v33;
  memcpy(v36, v88, 0x24CuLL);
  *(_WORD *)((char *)&v36[36] + 13) = *(_WORD *)&v88[589];
  HIBYTE(v36[36]) = v88[591];
  BYTE12(v36[36]) = 5;
  clap_builder::builder::command::Command::arg_internal(v103, v36);
  memcpy(v112, v103, sizeof(v112));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v36);
  *(_QWORD *)&v36[33] = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_101_llvm_2806096261713610274;
  *((_QWORD *)&v36[33] + 1) = 6LL;
  memcpy(v90, v36, 0x240uLL);
  *(_QWORD *)&v90[580] = *(_QWORD *)((char *)&v36[36] + 4);
  v91 = HIDWORD(v36[36]);
  *(_DWORD *)&v90[576] = 97;
  *(_QWORD *)&v36[0] = 0LL;
  *((_QWORD *)&v36[0] + 1) = 1LL;
  *(_QWORD *)&v36[1] = 0LL;
  alloc::string::String::push_str(v36, aChangeOnlyTheA, 27LL);
  v6 = *(_QWORD *)&v36[0];
  v34 = *(_OWORD *)((char *)v36 + 8);
  if ( *(_QWORD *)&v36[0] != 0x8000000000000000LL )
    v33 = v34;
  if ( *(_QWORD *)&v90[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v90[440], aChangeOnlyTheA);
  *(_QWORD *)&v90[440] = v6;
  *(_OWORD *)&v90[448] = v33;
  memcpy(v36, v90, 0x24CuLL);
  *(_WORD *)((char *)&v36[36] + 13) = *(_WORD *)((char *)&v91 + 1);
  HIBYTE(v36[36]) = HIBYTE(v91);
  BYTE12(v36[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v112, v36);
  memcpy(v111, v112, sizeof(v111));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v36);
  *(_QWORD *)&v36[33] = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_99_llvm_2806096261713610274;
  *((_QWORD *)&v36[33] + 1) = 9LL;
  memcpy(v95, v36, 0x240uLL);
  *(_QWORD *)((char *)&v95[36] + 4) = *(_QWORD *)((char *)&v36[36] + 4);
  HIDWORD(v95[36]) = HIDWORD(v36[36]);
  LODWORD(v95[36]) = 116;
  *(_QWORD *)&v36[0] = 0LL;
  *((_QWORD *)&v36[0] + 1) = 1LL;
  *(_QWORD *)&v36[1] = 0LL;
  alloc::string::String::push_str(v36, aUseCcYyMmddhhm, 53LL);
  v7 = *(_QWORD *)&v36[0];
  v34 = *(_OWORD *)((char *)v36 + 8);
  if ( *(_QWORD *)&v36[0] != 0x8000000000000000LL )
    v33 = v34;
  if ( *((_QWORD *)&v95[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v95[27] + 8, aUseCcYyMmddhhm);
  *((_QWORD *)&v95[27] + 1) = v7;
  v95[28] = v33;
  memcpy(v36, v95, sizeof(v36));
  clap_builder::builder::arg::Arg::value_names(v114, v36);
  memcpy(v36, v114, sizeof(v36));
  clap_builder::builder::command::Command::arg_internal(v111, v36);
  memcpy(v110, v111, sizeof(v110));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v36);
  *(_QWORD *)&v36[33] = "datethur]";
  *((_QWORD *)&v36[33] + 1) = 4LL;
  memcpy(v85, v36, 0x220uLL);
  v85[35] = v36[35];
  *(_QWORD *)&v85[34] = "datethur]";
  *((_QWORD *)&v85[34] + 1) = 4LL;
  LODWORD(v85[36]) = 100;
  *(_QWORD *)((char *)&v85[36] + 4) = *(_QWORD *)((char *)&v36[36] + 4) | 0x2000000000LL;
  HIDWORD(v85[36]) = HIDWORD(v36[36]);
  *(_QWORD *)&v36[0] = 0LL;
  *((_QWORD *)&v36[0] + 1) = 1LL;
  *(_QWORD *)&v36[1] = 0LL;
  alloc::string::String::push_str(v36, aParseArgumentA, 49LL);
  v8 = *(_QWORD *)&v36[0];
  v34 = *(_OWORD *)((char *)v36 + 8);
  if ( *(_QWORD *)&v36[0] != 0x8000000000000000LL )
    v33 = v34;
  if ( *((_QWORD *)&v85[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v85[27] + 8, aParseArgumentA);
  *((_QWORD *)&v85[27] + 1) = v8;
  v85[28] = v33;
  memcpy(v36, v85, sizeof(v36));
  *(_QWORD *)&v34 = aString;
  *((_QWORD *)&v34 + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v99, v36);
  v9 = v99[15];
  if ( v99[15] == v99[13] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v99[13]);
  v10 = v99[14];
  v11 = 16 * v9;
  *(_QWORD *)(v99[14] + v11) = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_99_llvm_2806096261713610274;
  *(_QWORD *)(v10 + v11 + 8) = 9LL;
  v99[15] = v9 + 1;
  memcpy(v36, v99, sizeof(v36));
  clap_builder::builder::command::Command::arg_internal(v110, v36);
  memcpy(v109, v110, sizeof(v109));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v36);
  *(_QWORD *)&v36[33] = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_102_llvm_2806096261713610274;
  *((_QWORD *)&v36[33] + 1) = 12LL;
  memcpy(v92, v36, 0x240uLL);
  *(_QWORD *)&v92[580] = *(_QWORD *)((char *)&v36[36] + 4);
  v93 = HIDWORD(v36[36]);
  *(_DWORD *)&v92[576] = 109;
  *(_QWORD *)&v36[0] = 0LL;
  *((_QWORD *)&v36[0] + 1) = 1LL;
  *(_QWORD *)&v36[1] = 0LL;
  alloc::string::String::push_str(v36, aChangeOnlyTheM, 33LL);
  v12 = *(_QWORD *)&v36[0];
  v34 = *(_OWORD *)((char *)v36 + 8);
  if ( *(_QWORD *)&v36[0] != 0x8000000000000000LL )
    v33 = v34;
  if ( *(_QWORD *)&v92[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v92[440], aChangeOnlyTheM);
  *(_QWORD *)&v92[440] = v12;
  *(_OWORD *)&v92[448] = v33;
  memcpy(v36, v92, 0x24CuLL);
  *(_WORD *)((char *)&v36[36] + 13) = *(_WORD *)((char *)&v93 + 1);
  HIBYTE(v36[36]) = HIBYTE(v93);
  BYTE12(v36[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v109, v36);
  memcpy(v108, v109, sizeof(v108));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v36);
  *(_QWORD *)&v36[33] = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_103_llvm_2806096261713610274;
  *((_QWORD *)&v36[33] + 1) = 9LL;
  memcpy(v81, v36, 0x220uLL);
  *(_OWORD *)&v81[560] = v36[35];
  *(_QWORD *)&v81[580] = *(_QWORD *)((char *)&v36[36] + 4);
  v82 = HIDWORD(v36[36]);
  *(_QWORD *)&v81[544] = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_103_llvm_2806096261713610274;
  *(_QWORD *)&v81[552] = 9LL;
  *(_DWORD *)&v81[576] = 99;
  *(_QWORD *)&v36[0] = 0LL;
  *((_QWORD *)&v36[0] + 1) = 1LL;
  *(_QWORD *)&v36[1] = 0LL;
  alloc::string::String::push_str(v36, aDoNotCreateAny, 23LL);
  v13 = *(_QWORD *)&v36[0];
  v34 = *(_OWORD *)((char *)v36 + 8);
  if ( *(_QWORD *)&v36[0] != 0x8000000000000000LL )
    v33 = v34;
  if ( *(_QWORD *)&v81[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v81[440], aDoNotCreateAny);
  *(_QWORD *)&v81[440] = v13;
  *(_OWORD *)&v81[448] = v33;
  memcpy(v36, v81, 0x24CuLL);
  *(_WORD *)((char *)&v36[36] + 13) = *(_WORD *)((char *)&v82 + 1);
  HIBYTE(v36[36]) = HIBYTE(v82);
  BYTE12(v36[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v108, v36);
  memcpy(v107, v108, sizeof(v107));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v36);
  *(_QWORD *)&v36[33] = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_104_llvm_2806096261713610274;
  *((_QWORD *)&v36[33] + 1) = 14LL;
  memcpy(v83, v36, 0x220uLL);
  *(_OWORD *)&v83[560] = v36[35];
  *(_QWORD *)&v83[580] = *(_QWORD *)((char *)&v36[36] + 4);
  v84 = HIDWORD(v36[36]);
  *(_QWORD *)&v83[544] = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_104_llvm_2806096261713610274;
  *(_QWORD *)&v83[552] = 14LL;
  *(_DWORD *)&v83[576] = 104;
  *(_QWORD *)&v36[0] = 0LL;
  *((_QWORD *)&v36[0] + 1) = 1LL;
  *(_QWORD *)&v36[1] = 0LL;
  alloc::string::String::push_str(v36, aAffectEachSymb, 119LL);
  v14 = *(_QWORD *)&v36[0];
  v34 = *(_OWORD *)((char *)v36 + 8);
  if ( *(_QWORD *)&v36[0] != 0x8000000000000000LL )
    v33 = v34;
  if ( *(_QWORD *)&v83[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v83[440], aAffectEachSymb);
  *(_QWORD *)&v83[440] = v14;
  *(_OWORD *)&v83[448] = v33;
  memcpy(v36, v83, 0x24CuLL);
  *(_WORD *)((char *)&v36[36] + 13) = *(_WORD *)((char *)&v84 + 1);
  HIBYTE(v36[36]) = HIBYTE(v84);
  BYTE12(v36[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v107, v36);
  memcpy(v106, v107, sizeof(v106));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v36);
  *(_QWORD *)&v36[33] = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_98_llvm_2806096261713610274;
  *((_QWORD *)&v36[33] + 1) = 9LL;
  memcpy(v89, v36, 0x220uLL);
  v89[35] = v36[35];
  *(_QWORD *)((char *)&v89[36] + 4) = *(_QWORD *)((char *)&v36[36] + 4);
  HIDWORD(v89[36]) = HIDWORD(v36[36]);
  *(_QWORD *)&v89[34] = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_98_llvm_2806096261713610274;
  *((_QWORD *)&v89[34] + 1) = 9LL;
  LODWORD(v89[36]) = 114;
  *(_QWORD *)&v36[0] = 0LL;
  *((_QWORD *)&v36[0] + 1) = 1LL;
  *(_QWORD *)&v36[1] = 0LL;
  alloc::string::String::push_str(v36, aUseThisFileSTi, 49LL);
  v15 = *(_QWORD *)&v36[0];
  v34 = *(_OWORD *)((char *)v36 + 8);
  if ( *(_QWORD *)&v36[0] != 0x8000000000000000LL )
    v33 = v34;
  if ( *((_QWORD *)&v89[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v89[27] + 8, aUseThisFileSTi);
  *((_QWORD *)&v89[27] + 1) = v15;
  v89[28] = v33;
  memcpy(v36, v89, sizeof(v36));
  *(_QWORD *)&v34 = aFile;
  *((_QWORD *)&v34 + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v100, v36);
  if ( *(_QWORD *)&v100[80] >= 4uLL && *(_QWORD *)&v100[80] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v100[88]);
  *(_QWORD *)&v100[80] = 2LL;
  memcpy(v96, v100, 0x24DuLL);
  BYTE5(v96[73]) = 2;
  HIWORD(v96[73]) = v101;
  v16 = v96[15];
  if ( v96[15] == v96[13] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v96[13]);
  v17 = v96[14];
  v18 = 16 * v16;
  *(_QWORD *)(v96[14] + v18) = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_99_llvm_2806096261713610274;
  *(_QWORD *)(v17 + v18 + 8) = 9LL;
  v96[15] = v16 + 1;
  memcpy(v36, v96, sizeof(v36));
  clap_builder::builder::command::Command::arg_internal(v106, v36);
  memcpy(v105, v106, sizeof(v105));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v36);
  *(_QWORD *)&v36[33] = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_105_llvm_2806096261713610274;
  *((_QWORD *)&v36[33] + 1) = 4LL;
  memcpy(v94, v36, 0x220uLL);
  v94[35] = v36[35];
  v94[36] = v36[36];
  *(_QWORD *)&v94[34] = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_105_llvm_2806096261713610274;
  *((_QWORD *)&v94[34] + 1) = 4LL;
  *(_QWORD *)&v36[0] = 0LL;
  *((_QWORD *)&v36[0] + 1) = 1LL;
  *(_QWORD *)&v36[1] = 0LL;
  alloc::string::String::push_str(v36, aChangeOnlyTheS, 122LL);
  v19 = *(_QWORD *)&v36[0];
  v34 = *(_OWORD *)((char *)v36 + 8);
  if ( *(_QWORD *)&v36[0] != 0x8000000000000000LL )
    v33 = v34;
  if ( *((_QWORD *)&v94[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v94[27] + 8, aChangeOnlyTheS);
  *((_QWORD *)&v94[27] + 1) = v19;
  v94[28] = v33;
  memcpy(v36, v94, sizeof(v36));
  *(_QWORD *)&v34 = aWord;
  *((_QWORD *)&v34 + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v98, v36);
  *(_QWORD *)&v47 = aAtime;
  *((_QWORD *)&v47 + 1) = 5LL;
  v45 = 0x8000000000000000LL;
  *(_QWORD *)&v43 = 0LL;
  *((_QWORD *)&v43 + 1) = 8LL;
  v44 = 0LL;
  LOBYTE(v48) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(&v43);
  v20 = *((_QWORD *)&v43 + 1);
  **((_QWORD **)&v43 + 1) = aAccess;
  *(_QWORD *)(v20 + 8) = 6LL;
  v44 = 1LL;
  v38 = 1LL;
  v39 = v45;
  v37 = v43;
  v40 = v46;
  v41 = v47;
  v42 = v48;
  if ( (_QWORD)v43 == 1LL )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v37);
  v21 = *((_QWORD *)&v37 + 1);
  *(_QWORD *)(*((_QWORD *)&v37 + 1) + 16LL) = aUse;
  *(_QWORD *)(v21 + 24) = 3LL;
  v38 = 2LL;
  v55 = v37;
  v57 = v40;
  v58 = v41;
  v59 = v42;
  v56 = __PAIR128__(v39, 2LL);
  *(_QWORD *)&v53 = aMtime;
  *((_QWORD *)&v53 + 1) = 5LL;
  v51 = 0x8000000000000000LL;
  *(_QWORD *)&v49 = 0LL;
  *((_QWORD *)&v49 + 1) = 8LL;
  v50 = 0LL;
  LOBYTE(v54) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(&v49);
  v22 = *((_QWORD *)&v49 + 1);
  **((_QWORD **)&v49 + 1) = aModify;
  *(_QWORD *)(v22 + 8) = 6LL;
  v50 = 1LL;
  *(_OWORD *)((char *)&v80[4] + 8) = v49;
  *(_OWORD *)((char *)&v80[6] + 8) = v52;
  *(_OWORD *)((char *)&v80[7] + 8) = v53;
  *((_QWORD *)&v80[8] + 1) = v54;
  *((_QWORD *)&v80[5] + 1) = 1LL;
  *(_QWORD *)&v80[6] = v51;
  v80[0] = v55;
  v80[1] = v56;
  v80[2] = v57;
  v80[3] = v58;
  *(_QWORD *)&v80[4] = v59;
  memcpy(v36, v80, 0x90uLL);
  *(_QWORD *)&v36[9] = 0LL;
  *((_QWORD *)&v36[9] + 1) = 2LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v34, v36);
  v61 = v34;
  v62 = v35;
  clap_builder::builder::value_parser::ValueParser::new(v36, &v61);
  v23 = *(_QWORD *)&v36[0];
  v34 = *(_OWORD *)((char *)v36 + 8);
  if ( *(_QWORD *)&v36[0] != 5LL )
    v33 = v34;
  if ( v98[10] >= 4uLL && v98[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v98[11]);
  v98[10] = v23;
  *(_OWORD *)&v98[11] = v33;
  memcpy(v36, v98, sizeof(v36));
  clap_builder::builder::command::Command::arg_internal(v105, v36);
  memcpy(v104, v105, sizeof(v104));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v36);
  *(_QWORD *)&v36[33] = aFiles;
  *((_QWORD *)&v36[33] + 1) = 5LL;
  *(_OWORD *)v86 = v36[0];
  memcpy(&v86[40], (char *)&v36[2] + 8, 0x224uLL);
  *(_WORD *)v87 = *(_WORD *)((char *)&v36[36] + 13);
  v87[2] = HIBYTE(v36[36]);
  *(_QWORD *)&v86[16] = 1LL;
  *(_QWORD *)&v86[24] = 1LL;
  *(_QWORD *)&v86[32] = -1LL;
  v86[588] = 1;
  if ( *(_QWORD *)&v86[80] >= 4uLL && *(_QWORD *)&v86[80] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v86[88]);
  *(_QWORD *)&v86[80] = 2LL;
  memcpy(v36, v86, 0x24DuLL);
  BYTE13(v36[36]) = 2;
  HIWORD(v36[36]) = *(_WORD *)&v87[1];
  clap_builder::builder::command::Command::arg_internal(v104, v36);
  memcpy(v102, v104, sizeof(v102));
  v71[0] = 0LL;
  v71[1] = 8LL;
  v72 = 0LL;
  v73 = 8LL;
  v74 = 0LL;
  v75 = 8LL;
  v76 = 0LL;
  v77 = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_96_llvm_2806096261713610274;
  v78 = 7LL;
  v79 = 0;
  v60[0] = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_99_llvm_2806096261713610274;
  v60[1] = 9LL;
  v60[2] = "datethur]";
  v60[3] = 4LL;
  v60[4] = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_98_llvm_2806096261713610274;
  v60[5] = 9LL;
  clap_builder::builder::arg_group::ArgGroup::args(v65, v71, v60);
  v68 = 1;
  *(_QWORD *)&v36[5] = v66;
  BYTE8(v36[5]) = v67;
  BYTE9(v36[5]) = 1;
  *(_DWORD *)((char *)&v36[5] + 10) = v69;
  HIWORD(v36[5]) = v70;
  v36[4] = v65[4];
  v36[3] = v65[3];
  v36[2] = v65[2];
  v36[1] = v65[1];
  v36[0] = v65[0];
  v24 = v102[27];
  if ( v102[27] == v102[25] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v102[25]);
  v25 = v102[26];
  v26 = 96 * v24;
  v27 = v36[0];
  v28 = v36[1];
  v29 = v36[2];
  v30 = v36[3];
  v31 = v36[4];
  *(_OWORD *)(v102[26] + v26 + 80) = v36[5];
  *(_OWORD *)(v25 + v26 + 64) = v31;
  *(_OWORD *)(v25 + v26 + 48) = v30;
  *(_OWORD *)(v25 + v26 + 32) = v29;
  *(_OWORD *)(v25 + v26 + 16) = v28;
  *(_OWORD *)(v25 + v26) = v27;
  v102[27] = v24 + 1;
  memcpy(dest, v102, 0x2C8uLL);
  return dest;
}
