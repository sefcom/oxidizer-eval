void *__fastcall uu_realpath::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  _OWORD v9[37]; // [rsp+8h] [rbp-6080h] BYREF
  __int64 v10; // [rsp+258h] [rbp-5E30h] BYREF
  __int128 v11; // [rsp+260h] [rbp-5E28h]
  _OWORD v12[35]; // [rsp+270h] [rbp-5E18h] BYREF
  __int128 v13; // [rsp+4A0h] [rbp-5BE8h]
  __int128 v14; // [rsp+4B0h] [rbp-5BD8h]
  _OWORD v15[37]; // [rsp+4C0h] [rbp-5BC8h] BYREF
  _DWORD v16[178]; // [rsp+710h] [rbp-5978h] BYREF
  _OWORD v17[37]; // [rsp+9D8h] [rbp-56B0h] BYREF
  _BYTE v18[544]; // [rsp+C28h] [rbp-5460h] BYREF
  const char *v19; // [rsp+E48h] [rbp-5240h]
  __int64 v20; // [rsp+E50h] [rbp-5238h]
  __int128 v21; // [rsp+E58h] [rbp-5230h]
  int v22; // [rsp+E68h] [rbp-5220h]
  __int64 v23; // [rsp+E6Ch] [rbp-521Ch]
  int v24; // [rsp+E74h] [rbp-5214h]
  _QWORD v25[70]; // [rsp+E78h] [rbp-5210h] BYREF
  __int128 v26; // [rsp+10A8h] [rbp-4FE0h]
  int v27; // [rsp+10B8h] [rbp-4FD0h]
  __int64 v28; // [rsp+10BCh] [rbp-4FCCh]
  int v29; // [rsp+10C4h] [rbp-4FC4h]
  _BYTE v30[544]; // [rsp+10C8h] [rbp-4FC0h] BYREF
  const char *v31; // [rsp+12E8h] [rbp-4DA0h]
  __int64 v32; // [rsp+12F0h] [rbp-4D98h]
  __int128 v33; // [rsp+12F8h] [rbp-4D90h]
  int v34; // [rsp+1308h] [rbp-4D80h]
  __int64 v35; // [rsp+130Ch] [rbp-4D7Ch]
  int v36; // [rsp+1314h] [rbp-4D74h]
  _BYTE v37[544]; // [rsp+1318h] [rbp-4D70h] BYREF
  const char *v38; // [rsp+1538h] [rbp-4B50h]
  __int64 v39; // [rsp+1540h] [rbp-4B48h]
  __int128 v40; // [rsp+1548h] [rbp-4B40h]
  int v41; // [rsp+1558h] [rbp-4B30h]
  __int64 v42; // [rsp+155Ch] [rbp-4B2Ch]
  int v43; // [rsp+1564h] [rbp-4B24h]
  _BYTE v44[544]; // [rsp+1568h] [rbp-4B20h] BYREF
  const char *v45; // [rsp+1788h] [rbp-4900h]
  __int64 v46; // [rsp+1790h] [rbp-48F8h]
  __int128 v47; // [rsp+1798h] [rbp-48F0h]
  int v48; // [rsp+17A8h] [rbp-48E0h]
  __int64 v49; // [rsp+17ACh] [rbp-48DCh]
  int v50; // [rsp+17B4h] [rbp-48D4h]
  _DWORD v51[178]; // [rsp+17B8h] [rbp-48D0h] BYREF
  _BYTE v52[712]; // [rsp+1A80h] [rbp-4608h] BYREF
  _BYTE v53[712]; // [rsp+1D48h] [rbp-4340h] BYREF
  _QWORD v54[89]; // [rsp+2010h] [rbp-4078h] BYREF
  _BYTE v55[712]; // [rsp+22D8h] [rbp-3DB0h] BYREF
  _BYTE v56[712]; // [rsp+25A0h] [rbp-3AE8h] BYREF
  _BYTE v57[712]; // [rsp+2868h] [rbp-3820h] BYREF
  _BYTE v58[712]; // [rsp+2B30h] [rbp-3558h] BYREF
  _QWORD v59[89]; // [rsp+2DF8h] [rbp-3290h] BYREF
  _BYTE v60[712]; // [rsp+30C0h] [rbp-2FC8h] BYREF
  _BYTE v61[592]; // [rsp+3388h] [rbp-2D00h] BYREF
  _BYTE v62[592]; // [rsp+35D8h] [rbp-2AB0h] BYREF
  _BYTE v63[592]; // [rsp+3828h] [rbp-2860h] BYREF
  _BYTE v64[592]; // [rsp+3A78h] [rbp-2610h] BYREF
  _BYTE v65[592]; // [rsp+3CC8h] [rbp-23C0h] BYREF
  _QWORD v66[74]; // [rsp+3F18h] [rbp-2170h] BYREF
  _BYTE v67[592]; // [rsp+4168h] [rbp-1F20h] BYREF
  _BYTE v68[592]; // [rsp+43B8h] [rbp-1CD0h] BYREF
  _BYTE v69[584]; // [rsp+4608h] [rbp-1A80h] BYREF
  int v70; // [rsp+4850h] [rbp-1838h]
  unsigned int v71; // [rsp+4854h] [rbp-1834h]
  _QWORD src[89]; // [rsp+4858h] [rbp-1830h] BYREF
  _BYTE v73[592]; // [rsp+4B20h] [rbp-1568h] BYREF
  _BYTE v74[592]; // [rsp+4D70h] [rbp-1318h] BYREF
  _BYTE v75[168]; // [rsp+4FC0h] [rbp-10C8h] BYREF
  __int64 v76; // [rsp+5068h] [rbp-1020h]
  _BYTE v77[592]; // [rsp+5210h] [rbp-E78h] BYREF
  _BYTE v78[592]; // [rsp+5460h] [rbp-C28h] BYREF
  _BYTE v79[592]; // [rsp+56B0h] [rbp-9D8h] BYREF
  _BYTE v80[592]; // [rsp+5900h] [rbp-788h] BYREF
  _BYTE v81[592]; // [rsp+5B50h] [rbp-538h] BYREF
  _BYTE desta[744]; // [rsp+5DA0h] [rbp-2E8h] BYREF

  v76 = 0LL;
  v66[42] = 0LL;
  v59[78] = 0LL;
  v54[11] = 0LL;
  v25[62] = 0LL;
  *(_QWORD *)&v9[6] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v16, desta);
  uucore::format_usage((unsigned int)&v10);
  v4 = v10;
  if ( v10 != 0x8000000000000000LL )
    v12[0] = v11;
  if ( *(_QWORD *)&v16[116] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v9, &v16[116]);
    if ( *((_QWORD *)&v9[0] + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        &v16[120],
        *(_QWORD *)&v9[0],
        *((_QWORD *)&v9[0] + 1),
        *(_QWORD *)&v9[1]);
  }
  *(_QWORD *)&v16[116] = v4;
  *(_OWORD *)&v16[118] = v12[0];
  memcpy(v51, v16, 0x2BCuLL);
  *(_QWORD *)&v51[175] = *(_QWORD *)&v16[175] | 0x8000000080LL;
  v51[177] = v16[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = aQuiet;
  *((_QWORD *)&v9[33] + 1) = 5LL;
  memcpy(v18, v9, sizeof(v18));
  v21 = v9[35];
  v23 = *(_QWORD *)((char *)&v9[36] + 4);
  v24 = HIDWORD(v9[36]);
  v19 = aQuiet;
  v20 = 5LL;
  v22 = 113;
  clap_builder::builder::arg::Arg::help(v61, v18);
  v61[588] = 2;
  memcpy(v9, v61, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v51, v9);
  memcpy(v60, v51, sizeof(v60));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = aStrip;
  *((_QWORD *)&v9[33] + 1) = 5LL;
  memcpy(v15, v9, 0x220uLL);
  v15[35] = v9[35];
  *(_QWORD *)((char *)&v15[36] + 4) = *(_QWORD *)((char *)&v9[36] + 4);
  HIDWORD(v15[36]) = HIDWORD(v9[36]);
  *(_QWORD *)&v15[34] = aStrip;
  *((_QWORD *)&v15[34] + 1) = 5LL;
  LODWORD(v15[36]) = 115;
  v5 = *((_QWORD *)&v15[19] + 1);
  if ( *((_QWORD *)&v15[19] + 1) == *((_QWORD *)&v15[18] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v15[18] + 8);
  v6 = *(_QWORD *)&v15[19];
  v7 = 3 * v5;
  *(_QWORD *)(*(_QWORD *)&v15[19] + 8 * v7) = &unk_1EF94;
  *(_QWORD *)(v6 + 8 * v7 + 8) = 11LL;
  *(_BYTE *)(v6 + 8 * v7 + 16) = 1;
  *((_QWORD *)&v15[19] + 1) = v5 + 1;
  memcpy(v80, v15, sizeof(v80));
  clap_builder::builder::arg::Arg::help(v62, v80);
  v62[588] = 2;
  memcpy(v9, v62, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v60, v9);
  memcpy(v59, v60, sizeof(v59));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = aZero_0;
  *((_QWORD *)&v9[33] + 1) = 4LL;
  memcpy(v25, v9, 0x220uLL);
  v26 = v9[35];
  v28 = *(_QWORD *)((char *)&v9[36] + 4);
  v29 = HIDWORD(v9[36]);
  v25[68] = aZero_0;
  v25[69] = 4LL;
  v27 = 122;
  clap_builder::builder::arg::Arg::help(v63, v25);
  v63[588] = 2;
  memcpy(v9, v63, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v59, v9);
  memcpy(v58, v59, sizeof(v58));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = aLogical;
  *((_QWORD *)&v9[33] + 1) = 7LL;
  memcpy(v30, v9, sizeof(v30));
  v33 = v9[35];
  v35 = *(_QWORD *)((char *)&v9[36] + 4);
  v36 = HIDWORD(v9[36]);
  v31 = aLogical;
  v32 = 7LL;
  v34 = 76;
  clap_builder::builder::arg::Arg::help(v64, v30);
  v64[588] = 2;
  memcpy(v9, v64, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v58, v9);
  memcpy(v57, v58, sizeof(v57));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = aPhysical;
  *((_QWORD *)&v9[33] + 1) = 8LL;
  memcpy(v17, v9, 0x220uLL);
  v17[35] = v9[35];
  *(_QWORD *)((char *)&v17[36] + 4) = *(_QWORD *)((char *)&v9[36] + 4);
  HIDWORD(v17[36]) = HIDWORD(v9[36]);
  *(_QWORD *)&v17[34] = aPhysical;
  *((_QWORD *)&v17[34] + 1) = 8LL;
  LODWORD(v17[36]) = 80;
  *(_QWORD *)&v9[0] = aStrip;
  *((_QWORD *)&v9[0] + 1) = 5LL;
  *(_QWORD *)&v9[1] = aLogical;
  *((_QWORD *)&v9[1] + 1) = 7LL;
  *(_QWORD *)&v9[2] = 0LL;
  *((_QWORD *)&v9[2] + 1) = 2LL;
  alloc::vec::Vec<T,A>::extend_trusted(&v17[8], v9);
  memcpy(v81, v17, sizeof(v81));
  clap_builder::builder::arg::Arg::help(v65, v81);
  v65[588] = 2;
  memcpy(v9, v65, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v57, v9);
  memcpy(v56, v57, sizeof(v56));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = aCanonicalizeEx_0;
  *((_QWORD *)&v9[33] + 1) = 21LL;
  memcpy(v37, v9, sizeof(v37));
  v40 = v9[35];
  v42 = *(_QWORD *)((char *)&v9[36] + 4);
  v43 = HIDWORD(v9[36]);
  v38 = aCanonicalizeEx_0;
  v39 = 21LL;
  v41 = 101;
  clap_builder::builder::arg::Arg::help(v66, v37);
  BYTE4(v66[73]) = 2;
  memcpy(v9, v66, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v56, v9);
  memcpy(v55, v56, sizeof(v55));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = aCanonicalizeMi_0;
  *((_QWORD *)&v9[33] + 1) = 20LL;
  memcpy(v44, v9, sizeof(v44));
  v47 = v9[35];
  v49 = *(_QWORD *)((char *)&v9[36] + 4);
  v50 = HIDWORD(v9[36]);
  v45 = aCanonicalizeMi_0;
  v46 = 20LL;
  v48 = 109;
  clap_builder::builder::arg::Arg::help(v67, v44);
  v67[588] = 2;
  memcpy(v9, v67, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v55, v9);
  memcpy(v54, v55, sizeof(v54));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[33] = aRelativeTo;
  *((_QWORD *)&v12[33] + 1) = 11LL;
  memcpy(v9, v12, 0x220uLL);
  v9[35] = v13;
  v9[36] = v14;
  *(_QWORD *)&v9[34] = aRelativeTo;
  *((_QWORD *)&v9[34] + 1) = 11LL;
  *(_QWORD *)&v12[0] = aDir;
  *((_QWORD *)&v12[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v75, v9);
  clap_builder::builder::arg::Arg::value_parser(v74, v75);
  clap_builder::builder::arg::Arg::help(v73, v74);
  memcpy(v9, v73, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v54, v9);
  memcpy(v53, v54, sizeof(v53));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[33] = aRelativeBase;
  *((_QWORD *)&v12[33] + 1) = 13LL;
  memcpy(v9, v12, 0x220uLL);
  v9[35] = v13;
  v9[36] = v14;
  *(_QWORD *)&v9[34] = aRelativeBase;
  *((_QWORD *)&v9[34] + 1) = 13LL;
  *(_QWORD *)&v12[0] = aDir;
  *((_QWORD *)&v12[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v79, v9);
  clap_builder::builder::arg::Arg::value_parser(v78, v79);
  clap_builder::builder::arg::Arg::help(v77, v78);
  memcpy(v9, v77, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v53, v9);
  memcpy(v52, v53, sizeof(v52));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = aFiles;
  *((_QWORD *)&v9[33] + 1) = 5LL;
  memcpy(v69, v9, sizeof(v69));
  v70 = DWORD2(v9[36]) | 1;
  v71 = HIDWORD(v9[36]) & 0xFFFFFF00 | 1;
  clap_builder::builder::arg::Arg::value_parser(v68, v69);
  v68[589] = 2;
  memcpy(v9, v68, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v52, v9);
  memcpy(dest, v52, 0x2C8uLL);
  return dest;
}
