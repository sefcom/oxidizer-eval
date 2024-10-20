void *__fastcall uu_hostname::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // r14
  __int128 v10; // [rsp+0h] [rbp-2ED8h]
  _OWORD v11[37]; // [rsp+130h] [rbp-2DA8h] BYREF
  __int64 v12; // [rsp+380h] [rbp-2B58h] BYREF
  __int128 v13; // [rsp+388h] [rbp-2B50h]
  _BYTE v14[588]; // [rsp+398h] [rbp-2B40h] BYREF
  __int16 v15; // [rsp+5E5h] [rbp-28F3h]
  char v16; // [rsp+5E7h] [rbp-28F1h]
  _BYTE v17[588]; // [rsp+5E8h] [rbp-28F0h] BYREF
  __int16 v18; // [rsp+835h] [rbp-26A3h]
  char v19; // [rsp+837h] [rbp-26A1h]
  _BYTE v20[588]; // [rsp+838h] [rbp-26A0h] BYREF
  __int16 v21; // [rsp+A85h] [rbp-2453h]
  char v22; // [rsp+A87h] [rbp-2451h]
  _BYTE v23[588]; // [rsp+A88h] [rbp-2450h] BYREF
  __int16 v24; // [rsp+CD5h] [rbp-2203h]
  char v25; // [rsp+CD7h] [rbp-2201h]
  _QWORD v26[74]; // [rsp+CD8h] [rbp-2200h] BYREF
  _DWORD v27[178]; // [rsp+F28h] [rbp-1FB0h] BYREF
  _BYTE v28[544]; // [rsp+11F0h] [rbp-1CE8h] BYREF
  const char *v29; // [rsp+1410h] [rbp-1AC8h]
  __int64 v30; // [rsp+1418h] [rbp-1AC0h]
  __int128 v31; // [rsp+1420h] [rbp-1AB8h]
  int v32; // [rsp+1430h] [rbp-1AA8h]
  __int64 v33; // [rsp+1434h] [rbp-1AA4h]
  int v34; // [rsp+143Ch] [rbp-1A9Ch]
  _BYTE v35[544]; // [rsp+1440h] [rbp-1A98h] BYREF
  const char *v36; // [rsp+1660h] [rbp-1878h]
  __int64 v37; // [rsp+1668h] [rbp-1870h]
  __int128 v38; // [rsp+1670h] [rbp-1868h]
  int v39; // [rsp+1680h] [rbp-1858h]
  __int64 v40; // [rsp+1684h] [rbp-1854h]
  int v41; // [rsp+168Ch] [rbp-184Ch]
  _BYTE v42[544]; // [rsp+1690h] [rbp-1848h] BYREF
  const char *v43; // [rsp+18B0h] [rbp-1628h]
  __int64 v44; // [rsp+18B8h] [rbp-1620h]
  __int128 v45; // [rsp+18C0h] [rbp-1618h]
  int v46; // [rsp+18D0h] [rbp-1608h]
  __int64 v47; // [rsp+18D4h] [rbp-1604h]
  int v48; // [rsp+18DCh] [rbp-15FCh]
  _BYTE v49[544]; // [rsp+18E0h] [rbp-15F8h] BYREF
  const char *v50; // [rsp+1B00h] [rbp-13D8h]
  __int64 v51; // [rsp+1B08h] [rbp-13D0h]
  __int128 v52; // [rsp+1B10h] [rbp-13C8h]
  int v53; // [rsp+1B20h] [rbp-13B8h]
  __int64 v54; // [rsp+1B24h] [rbp-13B4h]
  int v55; // [rsp+1B2Ch] [rbp-13ACh]
  _DWORD v56[178]; // [rsp+1B30h] [rbp-13A8h] BYREF
  _QWORD v57[89]; // [rsp+1DF8h] [rbp-10E0h] BYREF
  _BYTE v58[712]; // [rsp+20C0h] [rbp-E18h] BYREF
  _BYTE v59[712]; // [rsp+2388h] [rbp-B50h] BYREF
  _BYTE v60[712]; // [rsp+2650h] [rbp-888h] BYREF
  _QWORD src[89]; // [rsp+2918h] [rbp-5C0h] BYREF
  _BYTE dest[760]; // [rsp+2BE0h] [rbp-2F8h] BYREF

  v57[22] = 0LL;
  v26[58] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v27, dest);
  uucore::format_usage((unsigned int)&v12);
  v4 = v12;
  if ( v12 != 0x8000000000000000LL )
    v11[0] = v13;
  if ( *(_QWORD *)&v27[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v27[116], aOptionHostname);
  *(_QWORD *)&v27[116] = v4;
  *(_OWORD *)&v27[118] = v11[0];
  memcpy(v56, v27, 0x2BCuLL);
  *(_QWORD *)&v56[175] = *(_QWORD *)&v27[175] | 0x8000000080LL;
  v56[177] = v27[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[33] = aDomain;
  *((_QWORD *)&v11[33] + 1) = 6LL;
  memcpy(v28, v11, sizeof(v28));
  v31 = v11[35];
  v33 = *(_QWORD *)((char *)&v11[36] + 4);
  v34 = HIDWORD(v11[36]);
  v29 = aDomain;
  v30 = 6LL;
  v32 = 100;
  clap_builder::builder::arg::Arg::overrides_with_all(v14, v28);
  *(_QWORD *)&v11[0] = 0LL;
  *((_QWORD *)&v11[0] + 1) = 1LL;
  *(_QWORD *)&v11[1] = 0LL;
  alloc::string::String::push_str(v11, aDisplayTheName, 46LL);
  v5 = *(_QWORD *)&v11[0];
  if ( *(_QWORD *)&v11[0] != 0x8000000000000000LL )
    v10 = *(_OWORD *)((char *)v11 + 8);
  if ( *(_QWORD *)&v14[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v14[440], aDisplayTheName);
  *(_QWORD *)&v14[440] = v5;
  *(_OWORD *)&v14[448] = v10;
  memcpy(v11, v14, 0x24CuLL);
  *(_WORD *)((char *)&v11[36] + 13) = v15;
  HIBYTE(v11[36]) = v16;
  BYTE12(v11[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v56, v11);
  memcpy(v60, v56, sizeof(v60));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[33] = aIpAddress;
  *((_QWORD *)&v11[33] + 1) = 10LL;
  memcpy(v35, v11, sizeof(v35));
  v38 = v11[35];
  v40 = *(_QWORD *)((char *)&v11[36] + 4);
  v41 = HIDWORD(v11[36]);
  v36 = aIpAddress;
  v37 = 10LL;
  v39 = 105;
  clap_builder::builder::arg::Arg::overrides_with_all(v17, v35);
  *(_QWORD *)&v11[0] = 0LL;
  *((_QWORD *)&v11[0] + 1) = 1LL;
  *(_QWORD *)&v11[1] = 0LL;
  alloc::string::String::push_str(v11, aDisplayTheNetw, 43LL);
  v6 = *(_QWORD *)&v11[0];
  if ( *(_QWORD *)&v11[0] != 0x8000000000000000LL )
    v10 = *(_OWORD *)((char *)v11 + 8);
  if ( *(_QWORD *)&v17[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v17[440], aDisplayTheNetw);
  *(_QWORD *)&v17[440] = v6;
  *(_OWORD *)&v17[448] = v10;
  memcpy(v11, v17, 0x24CuLL);
  *(_WORD *)((char *)&v11[36] + 13) = v18;
  HIBYTE(v11[36]) = v19;
  BYTE12(v11[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v60, v11);
  memcpy(v59, v60, sizeof(v59));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[33] = aFqdn;
  *((_QWORD *)&v11[33] + 1) = 4LL;
  memcpy(v42, v11, sizeof(v42));
  v45 = v11[35];
  v47 = *(_QWORD *)((char *)&v11[36] + 4);
  v48 = HIDWORD(v11[36]);
  v43 = aFqdn;
  v44 = 4LL;
  v46 = 102;
  clap_builder::builder::arg::Arg::overrides_with_all(v20, v42);
  *(_QWORD *)&v11[0] = 0LL;
  *((_QWORD *)&v11[0] + 1) = 1LL;
  *(_QWORD *)&v11[1] = 0LL;
  alloc::string::String::push_str(v11, aDisplayTheFqdn, 56LL);
  v7 = *(_QWORD *)&v11[0];
  if ( *(_QWORD *)&v11[0] != 0x8000000000000000LL )
    v10 = *(_OWORD *)((char *)v11 + 8);
  if ( *(_QWORD *)&v20[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v20[440], aDisplayTheFqdn);
  *(_QWORD *)&v20[440] = v7;
  *(_OWORD *)&v20[448] = v10;
  memcpy(v11, v20, 0x24CuLL);
  *(_WORD *)((char *)&v11[36] + 13) = v21;
  HIBYTE(v11[36]) = v22;
  BYTE12(v11[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v59, v11);
  memcpy(v58, v59, sizeof(v58));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[33] = aShort;
  *((_QWORD *)&v11[33] + 1) = 5LL;
  memcpy(v49, v11, sizeof(v49));
  v52 = v11[35];
  v54 = *(_QWORD *)((char *)&v11[36] + 4);
  v55 = HIDWORD(v11[36]);
  v50 = aShort;
  v51 = 5LL;
  v53 = 115;
  clap_builder::builder::arg::Arg::overrides_with_all(v23, v49);
  *(_QWORD *)&v11[0] = 0LL;
  *((_QWORD *)&v11[0] + 1) = 1LL;
  *(_QWORD *)&v11[1] = 0LL;
  alloc::string::String::push_str(v11, aDisplayTheShor, 73LL);
  v8 = *(_QWORD *)&v11[0];
  if ( *(_QWORD *)&v11[0] != 0x8000000000000000LL )
    v10 = *(_OWORD *)((char *)v11 + 8);
  if ( *(_QWORD *)&v23[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v23[440], aDisplayTheShor);
  *(_QWORD *)&v23[440] = v8;
  *(_OWORD *)&v23[448] = v10;
  memcpy(v11, v23, 0x24CuLL);
  *(_WORD *)((char *)&v11[36] + 13) = v24;
  HIBYTE(v11[36]) = v25;
  BYTE12(v11[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v58, v11);
  memcpy(v57, v58, sizeof(v57));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[33] = aHost;
  *((_QWORD *)&v11[33] + 1) = 4LL;
  memcpy(v26, v11, sizeof(v26));
  if ( v26[10] >= 4uLL && v26[10] != 5LL )
  {
    if ( *(_QWORD *)v26[12] )
      (*(void (__fastcall **)(_QWORD))v26[12])(v26[11]);
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v26[11]);
  }
  v26[10] = 2LL;
  memcpy(v11, v26, 0x24DuLL);
  BYTE13(v11[36]) = 10;
  HIWORD(v11[36]) = HIWORD(v26[73]);
  clap_builder::builder::command::Command::arg_internal(v57, v11);
  memcpy(a1, v57, 0x2C8uLL);
  return a1;
}
