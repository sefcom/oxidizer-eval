void *__fastcall uu_hashsum::uu_app_common(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 v22; // r14
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // r13
  __int64 v28; // r14
  __int64 v29; // r14
  __int64 v30; // r13
  __int64 v31; // r14
  __int64 v32; // r14
  __int64 v33; // r13
  __int64 v34; // r14
  __int64 v35; // r14
  __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // r14
  __int64 v39; // r13
  __int64 v40; // r14
  __int64 v41; // r14
  __int64 v42; // r13
  __int64 v43; // r14
  __int128 v45; // [rsp+0h] [rbp-4EA8h]
  _OWORD v46[37]; // [rsp+10h] [rbp-4E98h] BYREF
  __int64 v47; // [rsp+268h] [rbp-4C40h] BYREF
  __int128 v48; // [rsp+270h] [rbp-4C38h]
  _OWORD v49[2]; // [rsp+280h] [rbp-4C28h] BYREF
  __int64 v50; // [rsp+2A0h] [rbp-4C08h]
  _BYTE v51[532]; // [rsp+2B8h] [rbp-4BF0h] BYREF
  __int16 v52; // [rsp+4CDh] [rbp-49DBh]
  char v53; // [rsp+4CFh] [rbp-49D9h]
  _BYTE v54[588]; // [rsp+4D8h] [rbp-49D0h] BYREF
  int v55; // [rsp+724h] [rbp-4784h]
  _BYTE v56[588]; // [rsp+728h] [rbp-4780h] BYREF
  int v57; // [rsp+974h] [rbp-4534h]
  _BYTE v58[588]; // [rsp+978h] [rbp-4530h] BYREF
  int v59; // [rsp+BC4h] [rbp-42E4h]
  _BYTE v60[588]; // [rsp+BC8h] [rbp-42E0h] BYREF
  int v61; // [rsp+E14h] [rbp-4094h]
  _BYTE v62[588]; // [rsp+E18h] [rbp-4090h] BYREF
  int v63; // [rsp+1064h] [rbp-3E44h]
  _BYTE v64[588]; // [rsp+1068h] [rbp-3E40h] BYREF
  int v65; // [rsp+12B4h] [rbp-3BF4h]
  _BYTE v66[592]; // [rsp+12B8h] [rbp-3BF0h] BYREF
  _OWORD v67[37]; // [rsp+1508h] [rbp-39A0h] BYREF
  _BYTE v68[592]; // [rsp+1758h] [rbp-3750h] BYREF
  _BYTE v69[592]; // [rsp+19A8h] [rbp-3500h] BYREF
  _QWORD v70[74]; // [rsp+1BF8h] [rbp-32B0h] BYREF
  _QWORD v71[74]; // [rsp+1E48h] [rbp-3060h] BYREF
  _QWORD v72[74]; // [rsp+2098h] [rbp-2E10h] BYREF
  _DWORD v73[178]; // [rsp+22E8h] [rbp-2BC0h] BYREF
  _QWORD v74[74]; // [rsp+25B0h] [rbp-28F8h] BYREF
  _DWORD v75[178]; // [rsp+2800h] [rbp-26A8h] BYREF
  _BYTE v76[712]; // [rsp+2AC8h] [rbp-23E0h] BYREF
  _QWORD v77[89]; // [rsp+2D90h] [rbp-2118h] BYREF
  _BYTE v78[712]; // [rsp+3058h] [rbp-1E50h] BYREF
  _BYTE v79[712]; // [rsp+3320h] [rbp-1B88h] BYREF
  _BYTE v80[712]; // [rsp+35E8h] [rbp-18C0h] BYREF
  _BYTE v81[712]; // [rsp+38B0h] [rbp-15F8h] BYREF
  _BYTE v82[712]; // [rsp+3B78h] [rbp-1330h] BYREF
  _QWORD v83[89]; // [rsp+3E40h] [rbp-1068h] BYREF
  _BYTE v84[712]; // [rsp+4108h] [rbp-DA0h] BYREF
  _BYTE v85[712]; // [rsp+43D0h] [rbp-AD8h] BYREF
  _BYTE v86[592]; // [rsp+4698h] [rbp-810h] BYREF
  _QWORD src[89]; // [rsp+48E8h] [rbp-5C0h] BYREF
  _BYTE desta[760]; // [rsp+4BB0h] [rbp-2F8h] BYREF

  v83[7] = 0LL;
  v77[29] = 0LL;
  v71[6] = 0LL;
  *(_QWORD *)&v62[96] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v73, desta);
  uucore::format_usage((unsigned int)&v47);
  v4 = v47;
  if ( v47 != 0x8000000000000000LL )
    v49[0] = v48;
  if ( *(_QWORD *)&v73[116] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v46, &v73[116]);
    if ( *((_QWORD *)&v46[0] + 1) )
    {
      if ( *(_QWORD *)&v46[1] )
        _rust_dealloc(*(_QWORD *)&v46[0], *(_QWORD *)&v46[1], *((_QWORD *)&v46[0] + 1));
    }
  }
  *(_QWORD *)&v73[116] = v4;
  *(_OWORD *)&v73[118] = v49[0];
  memcpy(v75, v73, 0x2BCuLL);
  *(_QWORD *)&v75[175] = *(_QWORD *)&v73[175] | 0x8800000088LL;
  v75[177] = v73[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v46);
  *(_QWORD *)&v46[33] = aBinary_0;
  *((_QWORD *)&v46[33] + 1) = 6LL;
  memcpy(v54, v46, 0x220uLL);
  *(_OWORD *)&v54[560] = v46[35];
  *(_QWORD *)&v54[580] = *(_QWORD *)((char *)&v46[36] + 4);
  v55 = HIDWORD(v46[36]);
  *(_QWORD *)&v54[544] = aBinary_0;
  *(_QWORD *)&v54[552] = 6LL;
  *(_DWORD *)&v54[576] = 98;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 19LL);
  v5 = *((_QWORD *)&v46[0] + 1);
  v6 = *(_QWORD *)&v46[1];
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &unk_6ADC2,
    *((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1],
    1LL,
    1LL,
    19LL);
  qmemcpy((void *)(v5 + v6), "read in binary mode", 19);
  *(_QWORD *)&v46[1] += 19LL;
  v7 = *(_QWORD *)&v46[0];
  v49[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v45 = v49[0];
  if ( *(_QWORD *)&v54[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v46, &v54[440]);
    if ( *((_QWORD *)&v46[0] + 1) )
    {
      if ( *(_QWORD *)&v46[1] )
        _rust_dealloc(*(_QWORD *)&v46[0], *(_QWORD *)&v46[1], *((_QWORD *)&v46[0] + 1));
    }
  }
  *(_QWORD *)&v54[440] = v7;
  *(_OWORD *)&v54[448] = v45;
  memcpy(v46, v54, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)((char *)&v55 + 1);
  HIBYTE(v46[36]) = HIBYTE(v55);
  BYTE12(v46[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v75, v46);
  memcpy(v85, v75, sizeof(v85));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v46);
  *(_QWORD *)&v46[33] = aCheck_0;
  *((_QWORD *)&v46[33] + 1) = 5LL;
  memcpy(v56, v46, 0x220uLL);
  *(_OWORD *)&v56[560] = v46[35];
  *(_QWORD *)&v56[580] = *(_QWORD *)((char *)&v46[36] + 4);
  v57 = HIDWORD(v46[36]);
  *(_QWORD *)&v56[544] = aCheck_0;
  *(_QWORD *)&v56[552] = 5LL;
  *(_DWORD *)&v56[576] = 99;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 43LL);
  v8 = *((_QWORD *)&v46[0] + 1);
  v9 = *(_QWORD *)&v46[1];
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &unk_6ADDA,
    *((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1],
    1LL,
    1LL,
    43LL);
  qmemcpy((void *)(v8 + v9), "read hashsums from the FILEs and check them", 43);
  *(_QWORD *)&v46[1] += 43LL;
  v10 = *(_QWORD *)&v46[0];
  v49[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v45 = v49[0];
  if ( *(_QWORD *)&v56[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v46, &v56[440]);
    if ( *((_QWORD *)&v46[0] + 1) )
    {
      if ( *(_QWORD *)&v46[1] )
        _rust_dealloc(*(_QWORD *)&v46[0], *(_QWORD *)&v46[1], *((_QWORD *)&v46[0] + 1));
    }
  }
  *(_QWORD *)&v56[440] = v10;
  *(_OWORD *)&v56[448] = v45;
  memcpy(v70, v56, 0x24CuLL);
  *(_WORD *)((char *)&v70[73] + 5) = *(_WORD *)((char *)&v57 + 1);
  HIBYTE(v70[73]) = HIBYTE(v57);
  BYTE4(v70[73]) = 2;
  v11 = v70[15];
  if ( v70[15] == v70[13] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v70[13]);
  v12 = v70[14];
  v13 = 16 * v11;
  *(_QWORD *)(v70[14] + v13) = &unk_6AE05;
  *(_QWORD *)(v12 + v13 + 8) = 3LL;
  v70[15] = v11 + 1;
  memcpy(v46, v70, sizeof(v46));
  clap_builder::builder::command::Command::arg_internal(v85, v46);
  memcpy(v84, v85, sizeof(v84));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v46);
  *(_QWORD *)&v46[33] = &unk_6AE05;
  *((_QWORD *)&v46[33] + 1) = 3LL;
  memcpy(v66, v46, 0x220uLL);
  *(_OWORD *)&v66[560] = v46[35];
  *(_OWORD *)&v66[576] = v46[36];
  *(_QWORD *)&v66[544] = &unk_6AE05;
  *(_QWORD *)&v66[552] = 3LL;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 27LL);
  v14 = *((_QWORD *)&v46[0] + 1);
  v15 = *(_QWORD *)&v46[1];
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &unk_6AE08,
    *((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1],
    1LL,
    1LL,
    27LL);
  qmemcpy((void *)(v14 + v15), "create a BSD-style checksum", 27);
  *(_QWORD *)&v46[1] += 27LL;
  v16 = *(_QWORD *)&v46[0];
  v49[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v45 = v49[0];
  if ( *(_QWORD *)&v66[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v46, &v66[440]);
    if ( *((_QWORD *)&v46[0] + 1) )
    {
      if ( *(_QWORD *)&v46[1] )
        _rust_dealloc(*(_QWORD *)&v46[0], *(_QWORD *)&v46[1], *((_QWORD *)&v46[0] + 1));
    }
  }
  *(_QWORD *)&v66[440] = v16;
  *(_OWORD *)&v66[448] = v45;
  memcpy(v71, v66, 0x24CuLL);
  *(_WORD *)((char *)&v71[73] + 5) = *(_WORD *)&v66[589];
  HIBYTE(v71[73]) = v66[591];
  BYTE4(v71[73]) = 2;
  v17 = v71[15];
  if ( v71[15] == v71[13] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v71[13]);
  v18 = v71[14];
  v19 = 16 * v17;
  *(_QWORD *)(v71[14] + v19) = aText;
  *(_QWORD *)(v18 + v19 + 8) = 4LL;
  v71[15] = v17 + 1;
  memcpy(v46, v71, sizeof(v46));
  clap_builder::builder::command::Command::arg_internal(v84, v46);
  memcpy(v83, v84, sizeof(v83));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v46);
  *(_QWORD *)&v46[33] = aText;
  *((_QWORD *)&v46[33] + 1) = 4LL;
  memcpy(v67, v46, 0x220uLL);
  v67[35] = v46[35];
  *(_QWORD *)((char *)&v67[36] + 4) = *(_QWORD *)((char *)&v46[36] + 4);
  HIDWORD(v67[36]) = HIDWORD(v46[36]);
  *(_QWORD *)&v67[34] = aText;
  *((_QWORD *)&v67[34] + 1) = 4LL;
  LODWORD(v67[36]) = 116;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 27LL);
  v20 = *((_QWORD *)&v46[0] + 1);
  v21 = *(_QWORD *)&v46[1];
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &unk_6AE23,
    *((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1],
    1LL,
    1LL,
    27LL);
  qmemcpy((void *)(v20 + v21), "read in text mode (default)", 27);
  *(_QWORD *)&v46[1] += 27LL;
  v22 = *(_QWORD *)&v46[0];
  v49[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v45 = v49[0];
  if ( *((_QWORD *)&v67[27] + 1) != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v46, (char *)&v67[27] + 8);
    if ( *((_QWORD *)&v46[0] + 1) )
    {
      if ( *(_QWORD *)&v46[1] )
        _rust_dealloc(*(_QWORD *)&v46[0], *(_QWORD *)&v46[1], *((_QWORD *)&v46[0] + 1));
    }
  }
  *((_QWORD *)&v67[27] + 1) = v22;
  v67[28] = v45;
  memcpy(v72, v67, sizeof(v72));
  v23 = v72[15];
  if ( v72[15] == v72[13] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v72[13]);
  v24 = v72[14];
  v25 = 16 * v23;
  *(_QWORD *)(v72[14] + v25) = aBinary_0;
  *(_QWORD *)(v24 + v25 + 8) = 6LL;
  v72[15] = v23 + 1;
  memcpy(v46, v72, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)((char *)&v72[73] + 5);
  HIBYTE(v46[36]) = HIBYTE(v72[73]);
  BYTE12(v46[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v83, v46);
  memcpy(v82, v83, sizeof(v82));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v46);
  *(_QWORD *)&v46[33] = aQuiet_0;
  *((_QWORD *)&v46[33] + 1) = 5LL;
  memcpy(v58, v46, 0x220uLL);
  *(_OWORD *)&v58[560] = v46[35];
  *(_QWORD *)&v58[580] = *(_QWORD *)((char *)&v46[36] + 4);
  v59 = HIDWORD(v46[36]);
  *(_QWORD *)&v58[544] = aQuiet_0;
  *(_QWORD *)&v58[552] = 5LL;
  *(_DWORD *)&v58[576] = 113;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 50LL);
  v26 = *((_QWORD *)&v46[0] + 1);
  v27 = *(_QWORD *)&v46[1];
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &unk_6AE43,
    *((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1],
    1LL,
    1LL,
    50LL);
  qmemcpy((void *)(v26 + v27), "don't print OK for each successfully verified file", 50);
  *(_QWORD *)&v46[1] += 50LL;
  v28 = *(_QWORD *)&v46[0];
  v49[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v45 = v49[0];
  if ( *(_QWORD *)&v58[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v46, &v58[440]);
    if ( *((_QWORD *)&v46[0] + 1) )
    {
      if ( *(_QWORD *)&v46[1] )
        _rust_dealloc(*(_QWORD *)&v46[0], *(_QWORD *)&v46[1], *((_QWORD *)&v46[0] + 1));
    }
  }
  *(_QWORD *)&v58[440] = v28;
  *(_OWORD *)&v58[448] = v45;
  memcpy(v46, v58, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)((char *)&v59 + 1);
  HIBYTE(v46[36]) = HIBYTE(v59);
  BYTE12(v46[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v82, v46);
  memcpy(v81, v82, sizeof(v81));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v46);
  *(_QWORD *)&v46[33] = aStatus_0;
  *((_QWORD *)&v46[33] + 1) = 6LL;
  memcpy(v60, v46, 0x220uLL);
  *(_OWORD *)&v60[560] = v46[35];
  *(_QWORD *)&v60[580] = *(_QWORD *)((char *)&v46[36] + 4);
  v61 = HIDWORD(v46[36]);
  *(_QWORD *)&v60[544] = aStatus_0;
  *(_QWORD *)&v60[552] = 6LL;
  *(_DWORD *)&v60[576] = 115;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 48LL);
  v29 = *((_QWORD *)&v46[0] + 1);
  v30 = *(_QWORD *)&v46[1];
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &unk_6AE7B,
    *((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1],
    1LL,
    1LL,
    48LL);
  qmemcpy((void *)(v29 + v30), "don't output anything, status code shows success", 48);
  *(_QWORD *)&v46[1] += 48LL;
  v31 = *(_QWORD *)&v46[0];
  v49[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v45 = v49[0];
  if ( *(_QWORD *)&v60[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v46, &v60[440]);
    if ( *((_QWORD *)&v46[0] + 1) )
    {
      if ( *(_QWORD *)&v46[1] )
        _rust_dealloc(*(_QWORD *)&v46[0], *(_QWORD *)&v46[1], *((_QWORD *)&v46[0] + 1));
    }
  }
  *(_QWORD *)&v60[440] = v31;
  *(_OWORD *)&v60[448] = v45;
  memcpy(v46, v60, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)((char *)&v61 + 1);
  HIBYTE(v46[36]) = HIBYTE(v61);
  BYTE12(v46[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v81, v46);
  memcpy(v80, v81, sizeof(v80));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v46);
  *(_QWORD *)&v46[33] = aStrict_0;
  *((_QWORD *)&v46[33] + 1) = 6LL;
  memcpy(v68, v46, 0x220uLL);
  *(_OWORD *)&v68[560] = v46[35];
  *(_OWORD *)&v68[576] = v46[36];
  *(_QWORD *)&v68[544] = aStrict_0;
  *(_QWORD *)&v68[552] = 6LL;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 53LL);
  v32 = *((_QWORD *)&v46[0] + 1);
  v33 = *(_QWORD *)&v46[1];
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &unk_6AEB1,
    *((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1],
    1LL,
    1LL,
    53LL);
  qmemcpy((void *)(v32 + v33), "exit non-zero for improperly formatted checksum lines", 53);
  *(_QWORD *)&v46[1] += 53LL;
  v34 = *(_QWORD *)&v46[0];
  v49[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v45 = v49[0];
  if ( *(_QWORD *)&v68[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v46, &v68[440]);
    if ( *((_QWORD *)&v46[0] + 1) )
    {
      if ( *(_QWORD *)&v46[1] )
        _rust_dealloc(*(_QWORD *)&v46[0], *(_QWORD *)&v46[1], *((_QWORD *)&v46[0] + 1));
    }
  }
  *(_QWORD *)&v68[440] = v34;
  *(_OWORD *)&v68[448] = v45;
  memcpy(v46, v68, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)&v68[589];
  HIBYTE(v46[36]) = v68[591];
  BYTE12(v46[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v80, v46);
  memcpy(v79, v80, sizeof(v79));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v46);
  *(_QWORD *)&v46[33] = aIgnoreMissing_0;
  *((_QWORD *)&v46[33] + 1) = 14LL;
  memcpy(v69, v46, 0x220uLL);
  *(_OWORD *)&v69[560] = v46[35];
  *(_OWORD *)&v69[576] = v46[36];
  *(_QWORD *)&v69[544] = aIgnoreMissing_0;
  *(_QWORD *)&v69[552] = 14LL;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 45LL);
  v35 = *((_QWORD *)&v46[0] + 1);
  v36 = *(_QWORD *)&v46[1];
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &unk_6AEF4,
    *((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1],
    1LL,
    1LL,
    45LL);
  qmemcpy((void *)(v35 + v36), "don't fail or report status for missing files", 45);
  *(_QWORD *)&v46[1] += 45LL;
  v37 = *(_QWORD *)&v46[0];
  v49[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v45 = v49[0];
  if ( *(_QWORD *)&v69[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v46, &v69[440]);
    if ( *((_QWORD *)&v46[0] + 1) )
    {
      if ( *(_QWORD *)&v46[1] )
        _rust_dealloc(*(_QWORD *)&v46[0], *(_QWORD *)&v46[1], *((_QWORD *)&v46[0] + 1));
    }
  }
  *(_QWORD *)&v69[440] = v37;
  *(_OWORD *)&v69[448] = v45;
  memcpy(v46, v69, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)&v69[589];
  HIBYTE(v46[36]) = v69[591];
  BYTE12(v46[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v79, v46);
  memcpy(v78, v79, sizeof(v78));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v46);
  *(_QWORD *)&v46[33] = aWarn;
  *((_QWORD *)&v46[33] + 1) = 4LL;
  memcpy(v62, v46, 0x220uLL);
  *(_OWORD *)&v62[560] = v46[35];
  *(_QWORD *)&v62[580] = *(_QWORD *)((char *)&v46[36] + 4);
  v63 = HIDWORD(v46[36]);
  *(_QWORD *)&v62[544] = aWarn;
  *(_QWORD *)&v62[552] = 4LL;
  *(_DWORD *)&v62[576] = 119;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 46LL);
  v38 = *((_QWORD *)&v46[0] + 1);
  v39 = *(_QWORD *)&v46[1];
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &unk_6AF21,
    *((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1],
    1LL,
    1LL,
    46LL);
  qmemcpy((void *)(v38 + v39), "warn about improperly formatted checksum lines", 46);
  *(_QWORD *)&v46[1] += 46LL;
  v40 = *(_QWORD *)&v46[0];
  v49[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v45 = v49[0];
  if ( *(_QWORD *)&v62[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v46, &v62[440]);
    if ( *((_QWORD *)&v46[0] + 1) )
    {
      if ( *(_QWORD *)&v46[1] )
        _rust_dealloc(*(_QWORD *)&v46[0], *(_QWORD *)&v46[1], *((_QWORD *)&v46[0] + 1));
    }
  }
  *(_QWORD *)&v62[440] = v40;
  *(_OWORD *)&v62[448] = v45;
  memcpy(v46, v62, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)((char *)&v63 + 1);
  HIBYTE(v46[36]) = HIBYTE(v63);
  BYTE12(v46[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v78, v46);
  memcpy(v77, v78, sizeof(v77));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v46);
  *(_QWORD *)&v46[33] = aZero;
  *((_QWORD *)&v46[33] + 1) = 4LL;
  memcpy(v64, v46, 0x220uLL);
  *(_OWORD *)&v64[560] = v46[35];
  *(_QWORD *)&v64[580] = *(_QWORD *)((char *)&v46[36] + 4);
  v65 = HIDWORD(v46[36]);
  *(_QWORD *)&v64[544] = aZero;
  *(_QWORD *)&v64[552] = 4LL;
  *(_DWORD *)&v64[576] = 122;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 42LL);
  v41 = *((_QWORD *)&v46[0] + 1);
  v42 = *(_QWORD *)&v46[1];
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &unk_6AF4F,
    *((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1],
    1LL,
    1LL,
    42LL);
  qmemcpy((void *)(v41 + v42), "end each output line with NUL, not newline", 42);
  *(_QWORD *)&v46[1] += 42LL;
  v43 = *(_QWORD *)&v46[0];
  v49[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v45 = v49[0];
  if ( *(_QWORD *)&v64[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v46, &v64[440]);
    if ( *((_QWORD *)&v46[0] + 1) )
    {
      if ( *(_QWORD *)&v46[1] )
        _rust_dealloc(*(_QWORD *)&v46[0], *(_QWORD *)&v46[1], *((_QWORD *)&v46[0] + 1));
    }
  }
  *(_QWORD *)&v64[440] = v43;
  *(_OWORD *)&v64[448] = v45;
  memcpy(v46, v64, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)((char *)&v65 + 1);
  HIBYTE(v46[36]) = HIBYTE(v65);
  BYTE12(v46[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v77, v46);
  memcpy(v76, v77, sizeof(v76));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v49);
  *(_QWORD *)&v51[472] = aFile;
  *(_QWORD *)&v51[480] = 4LL;
  *(_QWORD *)&v46[2] = v50;
  v46[1] = v49[1];
  v46[0] = v49[0];
  memcpy((char *)&v46[3] + 8, v51, 0x214uLL);
  *(_WORD *)((char *)&v46[36] + 13) = v52;
  HIBYTE(v46[36]) = v53;
  *((_QWORD *)&v46[2] + 1) = 1LL;
  *(_QWORD *)&v46[3] = 1LL;
  BYTE12(v46[36]) = 1;
  *(_QWORD *)&v49[0] = aFile;
  *((_QWORD *)&v49[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v86, v46);
  v86[589] = 3;
  memcpy(v74, v86, sizeof(v74));
  if ( v74[10] >= 4uLL && v74[10] != 5LL )
  {
    if ( *(_QWORD *)v74[12] )
      (*(void (__fastcall **)(_QWORD))v74[12])(v74[11]);
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v74[11]);
  }
  v74[10] = 2LL;
  memcpy(v46, v74, sizeof(v46));
  clap_builder::builder::command::Command::arg_internal(v76, v46);
  memcpy(dest, v76, 0x2C8uLL);
  return dest;
}
