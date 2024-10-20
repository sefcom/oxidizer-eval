void *__fastcall uu_echo::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+8h] [rbp-2DA0h] BYREF
  __int128 v15; // [rsp+10h] [rbp-2D98h]
  _OWORD v16[37]; // [rsp+20h] [rbp-2D88h] BYREF
  _QWORD v17[89]; // [rsp+270h] [rbp-2B38h] BYREF
  _BYTE desta[608]; // [rsp+538h] [rbp-2870h] BYREF
  const char *v19; // [rsp+798h] [rbp-2610h]
  __int64 v20; // [rsp+7A0h] [rbp-2608h]
  __int128 v21; // [rsp+7A8h] [rbp-2600h]
  __int128 v22; // [rsp+7B8h] [rbp-25F0h]
  __int128 v23; // [rsp+7C8h] [rbp-25E0h]
  _BYTE v24[28]; // [rsp+7D8h] [rbp-25D0h]
  int v25; // [rsp+7F4h] [rbp-25B4h]
  __int64 v26; // [rsp+7F8h] [rbp-25B0h]
  _BYTE v27[588]; // [rsp+800h] [rbp-25A8h] BYREF
  __int16 v28; // [rsp+A4Dh] [rbp-235Bh]
  char v29; // [rsp+A4Fh] [rbp-2359h]
  _QWORD v30[74]; // [rsp+A50h] [rbp-2358h] BYREF
  _QWORD v31[74]; // [rsp+CA0h] [rbp-2108h] BYREF
  _QWORD v32[89]; // [rsp+EF0h] [rbp-1EB8h] BYREF
  _BYTE src[624]; // [rsp+11B8h] [rbp-1BF0h] BYREF
  __int128 v34; // [rsp+1428h] [rbp-1980h]
  __int128 v35; // [rsp+1438h] [rbp-1970h]
  __int128 v36; // [rsp+1448h] [rbp-1960h]
  _BYTE v37[28]; // [rsp+1458h] [rbp-1950h]
  int v38; // [rsp+1474h] [rbp-1934h]
  __int64 v39; // [rsp+1478h] [rbp-1930h]
  _BYTE v40[712]; // [rsp+1480h] [rbp-1928h] BYREF
  _BYTE v41[712]; // [rsp+1748h] [rbp-1660h] BYREF
  _BYTE v42[712]; // [rsp+1A10h] [rbp-1398h] BYREF
  _QWORD v43[89]; // [rsp+1CD8h] [rbp-10D0h] BYREF
  _BYTE v44[576]; // [rsp+1FA0h] [rbp-E08h] BYREF
  int v45; // [rsp+21E0h] [rbp-BC8h]
  __int64 v46; // [rsp+21E4h] [rbp-BC4h]
  int v47; // [rsp+21ECh] [rbp-BBCh]
  _BYTE v48[576]; // [rsp+21F0h] [rbp-BB8h] BYREF
  int v49; // [rsp+2430h] [rbp-978h]
  __int64 v50; // [rsp+2434h] [rbp-974h]
  int v51; // [rsp+243Ch] [rbp-96Ch]
  _BYTE v52[576]; // [rsp+2440h] [rbp-968h] BYREF
  int v53; // [rsp+2680h] [rbp-728h]
  __int64 v54; // [rsp+2684h] [rbp-724h]
  int v55; // [rsp+268Ch] [rbp-71Ch]
  _BYTE v56[592]; // [rsp+2690h] [rbp-718h] BYREF
  _BYTE v57[592]; // [rsp+28E0h] [rbp-4C8h] BYREF
  _BYTE v58[632]; // [rsp+2B30h] [rbp-278h] BYREF

  v43[21] = 0LL;
  v31[28] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  v4 = v38;
  v38 |= 0x20u;
  memcpy(desta, src, sizeof(desta));
  v21 = v34;
  v22 = v35;
  v23 = v36;
  *(_OWORD *)v24 = *(_OWORD *)v37;
  *(_OWORD *)&v24[12] = *(_OWORD *)&v37[12];
  v19 = a0027;
  v20 = 6LL;
  v25 = v4 | 0x22;
  v26 = v39;
  clap_builder::builder::command::Command::about(v32, desta);
  *(_QWORD *)&v16[0] = 0LL;
  *((_QWORD *)&v16[0] + 1) = 1LL;
  *(_QWORD *)&v16[1] = 0LL;
  core::slice::raw::from_raw_parts::precondition_check(&unk_1D1A2, 1LL, 1LL, 437LL);
  alloc::vec::Vec<T,A>::append_elements(v16, &unk_1D1A2, 437LL);
  v5 = *(_QWORD *)&v16[0];
  *(_OWORD *)v27 = *(_OWORD *)((char *)v16 + 8);
  if ( *(_QWORD *)&v16[0] != 0x8000000000000000LL )
    v16[0] = *(_OWORD *)v27;
  if ( v32[52] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v32[52]);
  v32[52] = v5;
  *(_OWORD *)&v32[53] = v16[0];
  memcpy(v17, v32, sizeof(v17));
  uucore::format_usage((unsigned int)&v14);
  v6 = v14;
  if ( v14 != 0x8000000000000000LL )
    v16[0] = v15;
  if ( v17[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v17[58]);
  v17[58] = v6;
  *(_OWORD *)&v17[59] = v16[0];
  memcpy(v43, v17, sizeof(v43));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v16);
  *(_QWORD *)&v16[33] = aNoNewline_0;
  *((_QWORD *)&v16[33] + 1) = 10LL;
  memcpy(v44, v16, sizeof(v44));
  v46 = *(_QWORD *)((char *)&v16[36] + 4);
  v47 = HIDWORD(v16[36]);
  v45 = 110;
  clap_builder::builder::arg::Arg::help(v56, v44);
  v56[588] = 2;
  memcpy(v16, v56, sizeof(v16));
  clap_builder::builder::command::Command::arg_internal(v43, v16);
  memcpy(v42, v43, sizeof(v42));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v16);
  *(_QWORD *)&v16[33] = aEnableBackslas_0;
  *((_QWORD *)&v16[33] + 1) = 23LL;
  memcpy(v48, v16, sizeof(v48));
  v50 = *(_QWORD *)((char *)&v16[36] + 4);
  v51 = HIDWORD(v16[36]);
  v49 = 101;
  clap_builder::builder::arg::Arg::help(v57, v48);
  v57[588] = 2;
  memcpy(v30, v57, sizeof(v30));
  v7 = v30[18];
  if ( v30[18] == v30[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v30[16]);
  v8 = v30[17];
  v9 = 16 * v7;
  *(_QWORD *)(v30[17] + v9) = &unk_1D3DF;
  *(_QWORD *)(v8 + v9 + 8) = 24LL;
  v30[18] = v7 + 1;
  memcpy(v16, v30, sizeof(v16));
  clap_builder::builder::command::Command::arg_internal(v42, v16);
  memcpy(v41, v42, sizeof(v41));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v16);
  *(_QWORD *)&v16[33] = &unk_1D3DF;
  *((_QWORD *)&v16[33] + 1) = 24LL;
  memcpy(v52, v16, sizeof(v52));
  v54 = *(_QWORD *)((char *)&v16[36] + 4);
  v55 = HIDWORD(v16[36]);
  v53 = 69;
  clap_builder::builder::arg::Arg::help(v58, v52);
  v58[588] = 2;
  memcpy(v31, v58, sizeof(v31));
  v10 = v31[18];
  if ( v31[18] == v31[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v31[16]);
  v11 = v31[17];
  v12 = 16 * v10;
  *(_QWORD *)(v31[17] + v12) = aEnableBackslas_0;
  *(_QWORD *)(v11 + v12 + 8) = 23LL;
  v31[18] = v10 + 1;
  memcpy(v16, v31, sizeof(v16));
  clap_builder::builder::command::Command::arg_internal(v41, v16);
  memcpy(v40, v41, sizeof(v40));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v27);
  *(_QWORD *)&v27[528] = aString_0;
  *(_QWORD *)&v27[536] = 6LL;
  memcpy(v16, v27, 0x24CuLL);
  *(_WORD *)((char *)&v16[36] + 13) = v28;
  HIBYTE(v16[36]) = v29;
  BYTE12(v16[36]) = 1;
  clap_builder::builder::command::Command::arg_internal(v40, v16);
  memcpy(dest, v40, 0x2C8uLL);
  return dest;
}
