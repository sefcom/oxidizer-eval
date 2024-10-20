void *__fastcall uu_readlink::uu_app(void *dest)
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
  __int128 v14; // [rsp+0h] [rbp-38D8h]
  _BYTE v15[588]; // [rsp+10h] [rbp-38C8h] BYREF
  int v16; // [rsp+25Ch] [rbp-367Ch]
  __int64 v17; // [rsp+268h] [rbp-3670h] BYREF
  __int128 v18; // [rsp+270h] [rbp-3668h]
  _BYTE v19[588]; // [rsp+280h] [rbp-3658h] BYREF
  __int16 v20; // [rsp+4CEh] [rbp-340Ah]
  _BYTE v21[588]; // [rsp+4D8h] [rbp-3400h] BYREF
  int v22; // [rsp+724h] [rbp-31B4h]
  _BYTE v23[588]; // [rsp+728h] [rbp-31B0h] BYREF
  int v24; // [rsp+974h] [rbp-2F64h]
  _BYTE v25[588]; // [rsp+978h] [rbp-2F60h] BYREF
  int v26; // [rsp+BC4h] [rbp-2D14h]
  _BYTE v27[588]; // [rsp+BC8h] [rbp-2D10h] BYREF
  int v28; // [rsp+E14h] [rbp-2AC4h]
  _BYTE v29[588]; // [rsp+E18h] [rbp-2AC0h] BYREF
  int v30; // [rsp+1064h] [rbp-2874h]
  _BYTE v31[588]; // [rsp+1068h] [rbp-2870h] BYREF
  int v32; // [rsp+12B4h] [rbp-2624h]
  _BYTE v33[588]; // [rsp+12B8h] [rbp-2620h] BYREF
  int v34; // [rsp+1504h] [rbp-23D4h]
  _BYTE v35[588]; // [rsp+1508h] [rbp-23D0h] BYREF
  int v36; // [rsp+1754h] [rbp-2184h]
  _DWORD v37[178]; // [rsp+1758h] [rbp-2180h] BYREF
  _DWORD v38[178]; // [rsp+1A20h] [rbp-1EB8h] BYREF
  _BYTE v39[712]; // [rsp+1CE8h] [rbp-1BF0h] BYREF
  _BYTE v40[712]; // [rsp+1FB0h] [rbp-1928h] BYREF
  _BYTE v41[712]; // [rsp+2278h] [rbp-1660h] BYREF
  _BYTE v42[712]; // [rsp+2540h] [rbp-1398h] BYREF
  _QWORD v43[89]; // [rsp+2808h] [rbp-10D0h] BYREF
  _BYTE v44[712]; // [rsp+2AD0h] [rbp-E08h] BYREF
  _BYTE v45[712]; // [rsp+2D98h] [rbp-B40h] BYREF
  _BYTE v46[712]; // [rsp+3060h] [rbp-878h] BYREF
  _QWORD src[89]; // [rsp+3328h] [rbp-5B0h] BYREF
  _BYTE desta[744]; // [rsp+35F0h] [rbp-2E8h] BYREF

  v43[22] = 0LL;
  *(_QWORD *)&v37[88] = 0LL;
  *(_QWORD *)&v23[400] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v37, desta);
  uucore::format_usage((unsigned int)&v17);
  v4 = v17;
  if ( v17 != 0x8000000000000000LL )
    *(_OWORD *)v15 = v18;
  if ( *(_QWORD *)&v37[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37[116], aOptionFile);
  *(_QWORD *)&v37[116] = v4;
  *(_OWORD *)&v37[118] = *(_OWORD *)v15;
  memcpy(v38, v37, 0x2BCuLL);
  *(_QWORD *)&v38[175] = *(_QWORD *)&v37[175] | 0x8000000080LL;
  v38[177] = v37[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[528] = aCanonicalize_0;
  *(_QWORD *)&v15[536] = 12LL;
  memcpy(v21, v15, 0x220uLL);
  *(_OWORD *)&v21[560] = *(_OWORD *)&v15[560];
  *(_QWORD *)&v21[580] = *(_QWORD *)&v15[580];
  v22 = v16;
  *(_QWORD *)&v21[544] = aCanonicalize_0;
  *(_QWORD *)&v21[552] = 12LL;
  *(_DWORD *)&v21[576] = 102;
  *(_QWORD *)v15 = 0LL;
  *(_QWORD *)&v15[8] = 1LL;
  *(_QWORD *)&v15[16] = 0LL;
  alloc::string::String::push_str(v15, aCanonicalizeBy, 127LL);
  v5 = *(_QWORD *)v15;
  *(_OWORD *)v19 = *(_OWORD *)&v15[8];
  if ( *(_QWORD *)v15 != 0x8000000000000000LL )
    v14 = *(_OWORD *)v19;
  if ( *(_QWORD *)&v21[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v21[440], aCanonicalizeBy);
  *(_QWORD *)&v21[440] = v5;
  *(_OWORD *)&v21[448] = v14;
  memcpy(v15, v21, sizeof(v15));
  *(_WORD *)((char *)&v16 + 1) = *(_WORD *)((char *)&v22 + 1);
  HIBYTE(v16) = HIBYTE(v22);
  LOBYTE(v16) = 2;
  clap_builder::builder::command::Command::arg_internal(v38, v15);
  memcpy(v46, v38, sizeof(v46));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[528] = aCanonicalizeEx_0;
  *(_QWORD *)&v15[536] = 21LL;
  memcpy(v23, v15, 0x220uLL);
  *(_OWORD *)&v23[560] = *(_OWORD *)&v15[560];
  *(_QWORD *)&v23[580] = *(_QWORD *)&v15[580];
  v24 = v16;
  *(_QWORD *)&v23[544] = aCanonicalizeEx_0;
  *(_QWORD *)&v23[552] = 21LL;
  *(_DWORD *)&v23[576] = 101;
  *(_QWORD *)v15 = 0LL;
  *(_QWORD *)&v15[8] = 1LL;
  *(_QWORD *)&v15[16] = 0LL;
  alloc::string::String::push_str(v15, aCanonicalizeBy_0, 115LL);
  v6 = *(_QWORD *)v15;
  *(_OWORD *)v19 = *(_OWORD *)&v15[8];
  if ( *(_QWORD *)v15 != 0x8000000000000000LL )
    v14 = *(_OWORD *)v19;
  if ( *(_QWORD *)&v23[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v23[440], aCanonicalizeBy_0);
  *(_QWORD *)&v23[440] = v6;
  *(_OWORD *)&v23[448] = v14;
  memcpy(v15, v23, sizeof(v15));
  *(_WORD *)((char *)&v16 + 1) = *(_WORD *)((char *)&v24 + 1);
  HIBYTE(v16) = HIBYTE(v24);
  LOBYTE(v16) = 2;
  clap_builder::builder::command::Command::arg_internal(v46, v15);
  memcpy(v45, v46, sizeof(v45));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[528] = aCanonicalizeMi_0;
  *(_QWORD *)&v15[536] = 20LL;
  memcpy(v25, v15, 0x220uLL);
  *(_OWORD *)&v25[560] = *(_OWORD *)&v15[560];
  *(_QWORD *)&v25[580] = *(_QWORD *)&v15[580];
  v26 = v16;
  *(_QWORD *)&v25[544] = aCanonicalizeMi_0;
  *(_QWORD *)&v25[552] = 20LL;
  *(_DWORD *)&v25[576] = 109;
  *(_QWORD *)v15 = 0LL;
  *(_QWORD *)&v15[8] = 1LL;
  *(_QWORD *)&v15[16] = 0LL;
  alloc::string::String::push_str(v15, aCanonicalizeBy_1, 134LL);
  v7 = *(_QWORD *)v15;
  *(_OWORD *)v19 = *(_OWORD *)&v15[8];
  if ( *(_QWORD *)v15 != 0x8000000000000000LL )
    v14 = *(_OWORD *)v19;
  if ( *(_QWORD *)&v25[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v25[440], aCanonicalizeBy_1);
  *(_QWORD *)&v25[440] = v7;
  *(_OWORD *)&v25[448] = v14;
  memcpy(v15, v25, sizeof(v15));
  *(_WORD *)((char *)&v16 + 1) = *(_WORD *)((char *)&v26 + 1);
  HIBYTE(v16) = HIBYTE(v26);
  LOBYTE(v16) = 2;
  clap_builder::builder::command::Command::arg_internal(v45, v15);
  memcpy(v44, v45, sizeof(v44));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[528] = aNoNewline_0;
  *(_QWORD *)&v15[536] = 10LL;
  memcpy(v27, v15, 0x220uLL);
  *(_OWORD *)&v27[560] = *(_OWORD *)&v15[560];
  *(_QWORD *)&v27[580] = *(_QWORD *)&v15[580];
  v28 = v16;
  *(_QWORD *)&v27[544] = aNoNewline_0;
  *(_QWORD *)&v27[552] = 10LL;
  *(_DWORD *)&v27[576] = 110;
  *(_QWORD *)v15 = 0LL;
  *(_QWORD *)&v15[8] = 1LL;
  *(_QWORD *)&v15[16] = 0LL;
  alloc::string::String::push_str(v15, aDoNotOutputThe, 36LL);
  v8 = *(_QWORD *)v15;
  *(_OWORD *)v19 = *(_OWORD *)&v15[8];
  if ( *(_QWORD *)v15 != 0x8000000000000000LL )
    v14 = *(_OWORD *)v19;
  if ( *(_QWORD *)&v27[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v27[440], aDoNotOutputThe);
  *(_QWORD *)&v27[440] = v8;
  *(_OWORD *)&v27[448] = v14;
  memcpy(v15, v27, sizeof(v15));
  *(_WORD *)((char *)&v16 + 1) = *(_WORD *)((char *)&v28 + 1);
  HIBYTE(v16) = HIBYTE(v28);
  LOBYTE(v16) = 2;
  clap_builder::builder::command::Command::arg_internal(v44, v15);
  memcpy(v43, v44, sizeof(v43));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[528] = aQuiet_0;
  *(_QWORD *)&v15[536] = 5LL;
  memcpy(v29, v15, 0x220uLL);
  *(_OWORD *)&v29[560] = *(_OWORD *)&v15[560];
  *(_QWORD *)&v29[580] = *(_QWORD *)&v15[580];
  v30 = v16;
  *(_QWORD *)&v29[544] = aQuiet_0;
  *(_QWORD *)&v29[552] = 5LL;
  *(_DWORD *)&v29[576] = 113;
  *(_QWORD *)v15 = 0LL;
  *(_QWORD *)&v15[8] = 1LL;
  *(_QWORD *)&v15[16] = 0LL;
  alloc::string::String::push_str(v15, aSuppressMostEr, 28LL);
  v9 = *(_QWORD *)v15;
  *(_OWORD *)v19 = *(_OWORD *)&v15[8];
  if ( *(_QWORD *)v15 != 0x8000000000000000LL )
    v14 = *(_OWORD *)v19;
  if ( *(_QWORD *)&v29[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29[440], aSuppressMostEr);
  *(_QWORD *)&v29[440] = v9;
  *(_OWORD *)&v29[448] = v14;
  memcpy(v15, v29, sizeof(v15));
  *(_WORD *)((char *)&v16 + 1) = *(_WORD *)((char *)&v30 + 1);
  HIBYTE(v16) = HIBYTE(v30);
  LOBYTE(v16) = 2;
  clap_builder::builder::command::Command::arg_internal(v43, v15);
  memcpy(v42, v43, sizeof(v42));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[528] = aSilent_0;
  *(_QWORD *)&v15[536] = 6LL;
  memcpy(v31, v15, 0x220uLL);
  *(_OWORD *)&v31[560] = *(_OWORD *)&v15[560];
  *(_QWORD *)&v31[580] = *(_QWORD *)&v15[580];
  v32 = v16;
  *(_QWORD *)&v31[544] = aSilent_0;
  *(_QWORD *)&v31[552] = 6LL;
  *(_DWORD *)&v31[576] = 115;
  *(_QWORD *)v15 = 0LL;
  *(_QWORD *)&v15[8] = 1LL;
  *(_QWORD *)&v15[16] = 0LL;
  alloc::string::String::push_str(v15, aSuppressMostEr, 28LL);
  v10 = *(_QWORD *)v15;
  *(_OWORD *)v19 = *(_OWORD *)&v15[8];
  if ( *(_QWORD *)v15 != 0x8000000000000000LL )
    v14 = *(_OWORD *)v19;
  if ( *(_QWORD *)&v31[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31[440], aSuppressMostEr);
  *(_QWORD *)&v31[440] = v10;
  *(_OWORD *)&v31[448] = v14;
  memcpy(v15, v31, sizeof(v15));
  *(_WORD *)((char *)&v16 + 1) = *(_WORD *)((char *)&v32 + 1);
  HIBYTE(v16) = HIBYTE(v32);
  LOBYTE(v16) = 2;
  clap_builder::builder::command::Command::arg_internal(v42, v15);
  memcpy(v41, v42, sizeof(v41));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[528] = aVerbose_0;
  *(_QWORD *)&v15[536] = 7LL;
  memcpy(v33, v15, 0x220uLL);
  *(_OWORD *)&v33[560] = *(_OWORD *)&v15[560];
  *(_QWORD *)&v33[580] = *(_QWORD *)&v15[580];
  v34 = v16;
  *(_QWORD *)&v33[544] = aVerbose_0;
  *(_QWORD *)&v33[552] = 7LL;
  *(_DWORD *)&v33[576] = 118;
  *(_QWORD *)v15 = 0LL;
  *(_QWORD *)&v15[8] = 1LL;
  *(_QWORD *)&v15[16] = 0LL;
  alloc::string::String::push_str(v15, aReportErrorMes, 20LL);
  v11 = *(_QWORD *)v15;
  *(_OWORD *)v19 = *(_OWORD *)&v15[8];
  if ( *(_QWORD *)v15 != 0x8000000000000000LL )
    v14 = *(_OWORD *)v19;
  if ( *(_QWORD *)&v33[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v33[440], aReportErrorMes);
  *(_QWORD *)&v33[440] = v11;
  *(_OWORD *)&v33[448] = v14;
  memcpy(v15, v33, sizeof(v15));
  *(_WORD *)((char *)&v16 + 1) = *(_WORD *)((char *)&v34 + 1);
  HIBYTE(v16) = HIBYTE(v34);
  LOBYTE(v16) = 2;
  clap_builder::builder::command::Command::arg_internal(v41, v15);
  memcpy(v40, v41, sizeof(v40));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[528] = aZero_0;
  *(_QWORD *)&v15[536] = 4LL;
  memcpy(v35, v15, 0x220uLL);
  *(_OWORD *)&v35[560] = *(_OWORD *)&v15[560];
  *(_QWORD *)&v35[580] = *(_QWORD *)&v15[580];
  v36 = v16;
  *(_QWORD *)&v35[544] = aZero_0;
  *(_QWORD *)&v35[552] = 4LL;
  *(_DWORD *)&v35[576] = 122;
  *(_QWORD *)v15 = 0LL;
  *(_QWORD *)&v15[8] = 1LL;
  *(_QWORD *)&v15[16] = 0LL;
  alloc::string::String::push_str(v15, aSeparateOutput, 44LL);
  v12 = *(_QWORD *)v15;
  *(_OWORD *)v19 = *(_OWORD *)&v15[8];
  if ( *(_QWORD *)v15 != 0x8000000000000000LL )
    v14 = *(_OWORD *)v19;
  if ( *(_QWORD *)&v35[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35[440], aSeparateOutput);
  *(_QWORD *)&v35[440] = v12;
  *(_OWORD *)&v35[448] = v14;
  memcpy(v15, v35, sizeof(v15));
  *(_WORD *)((char *)&v16 + 1) = *(_WORD *)((char *)&v36 + 1);
  HIBYTE(v16) = HIBYTE(v36);
  LOBYTE(v16) = 2;
  clap_builder::builder::command::Command::arg_internal(v40, v15);
  memcpy(v39, v40, sizeof(v39));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v19);
  *(_QWORD *)&v19[528] = aFiles_0;
  *(_QWORD *)&v19[536] = 5LL;
  memcpy(v15, v19, sizeof(v15));
  LOWORD(v16) = 513;
  HIWORD(v16) = v20;
  clap_builder::builder::command::Command::arg_internal(v39, v15);
  memcpy(dest, v39, 0x2C8uLL);
  return dest;
}
