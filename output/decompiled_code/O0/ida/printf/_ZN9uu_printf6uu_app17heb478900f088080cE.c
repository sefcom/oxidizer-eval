void *__fastcall uu_printf::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r15
  __int64 v5; // r15
  __int64 v7; // [rsp+8h] [rbp-2460h] BYREF
  __int128 v8; // [rsp+10h] [rbp-2458h]
  _OWORD v9[37]; // [rsp+20h] [rbp-2448h] BYREF
  _OWORD v10[37]; // [rsp+270h] [rbp-21F8h] BYREF
  _QWORD v11[89]; // [rsp+4C8h] [rbp-1FA0h] BYREF
  _QWORD v12[89]; // [rsp+790h] [rbp-1CD8h] BYREF
  _BYTE desta[608]; // [rsp+A58h] [rbp-1A10h] BYREF
  const char *v14; // [rsp+CB8h] [rbp-17B0h]
  __int64 v15; // [rsp+CC0h] [rbp-17A8h]
  __int128 v16; // [rsp+CC8h] [rbp-17A0h]
  __int128 v17; // [rsp+CD8h] [rbp-1790h]
  __int128 v18; // [rsp+CE8h] [rbp-1780h]
  __int128 v19; // [rsp+CF8h] [rbp-1770h]
  __int128 v20; // [rsp+D08h] [rbp-1760h]
  __int64 v21; // [rsp+D18h] [rbp-1750h]
  _BYTE src[624]; // [rsp+D20h] [rbp-1748h] BYREF
  __int128 v23; // [rsp+F90h] [rbp-14D8h]
  __int128 v24; // [rsp+FA0h] [rbp-14C8h]
  __int128 v25; // [rsp+FB0h] [rbp-14B8h]
  __int128 v26; // [rsp+FC0h] [rbp-14A8h]
  __int128 v27; // [rsp+FD0h] [rbp-1498h]
  __int64 v28; // [rsp+FE0h] [rbp-1488h]
  _DWORD v29[178]; // [rsp+FE8h] [rbp-1480h] BYREF
  _QWORD v30[70]; // [rsp+12B0h] [rbp-11B8h] BYREF
  __int128 v31; // [rsp+14E0h] [rbp-F88h]
  __int128 v32; // [rsp+14F0h] [rbp-F78h]
  _BYTE v33[544]; // [rsp+1500h] [rbp-F68h] BYREF
  const char *v34; // [rsp+1720h] [rbp-D48h]
  __int64 v35; // [rsp+1728h] [rbp-D40h]
  __int128 v36; // [rsp+1730h] [rbp-D38h]
  __int128 v37; // [rsp+1740h] [rbp-D28h]
  _BYTE v38[712]; // [rsp+1750h] [rbp-D18h] BYREF
  _BYTE v39[712]; // [rsp+1A18h] [rbp-A50h] BYREF
  _BYTE v40[712]; // [rsp+1CE0h] [rbp-788h] BYREF
  _BYTE v41[592]; // [rsp+1FA8h] [rbp-4C0h] BYREF
  _BYTE v42[624]; // [rsp+21F8h] [rbp-270h] BYREF

  v30[51] = 0LL;
  *((_QWORD *)&v10[29] + 1) = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  BYTE12(v27) |= 2u;
  memcpy(desta, src, sizeof(desta));
  v16 = v23;
  v17 = v24;
  v18 = v25;
  v19 = v26;
  v20 = v27;
  v21 = v28;
  v14 = a0027;
  v15 = 6LL;
  clap_builder::builder::command::Command::about(v12, desta);
  *(_QWORD *)&v9[0] = 0LL;
  *((_QWORD *)&v9[0] + 1) = 1LL;
  *(_QWORD *)&v9[1] = 0LL;
  core::slice::raw::from_raw_parts::precondition_check(&unk_1FF1F, 1LL, 1LL, 9093LL);
  alloc::vec::Vec<T,A>::append_elements(v9, &unk_1FF1F, 9093LL);
  v4 = *(_QWORD *)&v9[0];
  v10[0] = *(_OWORD *)((char *)v9 + 8);
  if ( *(_QWORD *)&v9[0] != 0x8000000000000000LL )
    v9[0] = v10[0];
  if ( v12[52] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v12[52]);
  v12[52] = v4;
  *(_OWORD *)&v12[53] = v9[0];
  memcpy(v11, v12, sizeof(v11));
  uucore::format_usage((unsigned int)&v7);
  v5 = v7;
  if ( v7 != 0x8000000000000000LL )
    v9[0] = v8;
  if ( v11[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v11[58]);
  v11[58] = v5;
  *(_OWORD *)&v11[59] = v9[0];
  memcpy(v29, v11, 0x2BCuLL);
  *(_QWORD *)&v29[175] = *(_QWORD *)((char *)&v11[87] + 4) | 0x14000000140000LL;
  v29[177] = HIDWORD(v11[88]);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *((_QWORD *)&v9[33] + 1) = 4LL;
  memcpy(v30, v9, 0x220uLL);
  v31 = v9[35];
  v32 = v9[36];
  v30[68] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  v30[69] = 4LL;
  clap_builder::builder::arg::Arg::help(v41, v30);
  v41[588] = 5;
  memcpy(v9, v41, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v29, v9);
  memcpy(v40, v29, sizeof(v40));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[33] = aVersion;
  *((_QWORD *)&v9[33] + 1) = 7LL;
  memcpy(v33, v9, sizeof(v33));
  v36 = v9[35];
  v37 = v9[36];
  v34 = aVersion;
  v35 = 7LL;
  clap_builder::builder::arg::Arg::help(v42, v33);
  v42[588] = 8;
  memcpy(v9, v42, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v40, v9);
  memcpy(v39, v40, sizeof(v39));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v10);
  *(_QWORD *)&v10[33] = aFormatstring_0;
  *((_QWORD *)&v10[33] + 1) = 12LL;
  memcpy(v9, v10, sizeof(v9));
  clap_builder::builder::command::Command::arg_internal(v39, v9);
  memcpy(v38, v39, sizeof(v38));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v10);
  *(_QWORD *)&v10[33] = aArgument_0;
  *((_QWORD *)&v10[33] + 1) = 8LL;
  memcpy(v9, v10, 0x24CuLL);
  *(_WORD *)((char *)&v9[36] + 13) = *(_WORD *)((char *)&v10[36] + 13);
  HIBYTE(v9[36]) = HIBYTE(v10[36]);
  BYTE12(v9[36]) = 1;
  clap_builder::builder::command::Command::arg_internal(v38, v9);
  memcpy(dest, v38, 0x2C8uLL);
  return dest;
}
