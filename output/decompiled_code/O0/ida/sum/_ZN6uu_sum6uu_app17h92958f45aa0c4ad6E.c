void *__fastcall uu_sum::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int128 v8; // [rsp+0h] [rbp-1D18h]
  __int64 v9; // [rsp+18h] [rbp-1D00h] BYREF
  __int128 v10; // [rsp+20h] [rbp-1CF8h]
  _BYTE v11[588]; // [rsp+30h] [rbp-1CE8h] BYREF
  int v12; // [rsp+27Ch] [rbp-1A9Ch]
  _BYTE v13[588]; // [rsp+280h] [rbp-1A98h] BYREF
  int v14; // [rsp+4CCh] [rbp-184Ch]
  _BYTE v15[588]; // [rsp+4D0h] [rbp-1848h] BYREF
  int v16; // [rsp+71Ch] [rbp-15FCh]
  _BYTE v17[584]; // [rsp+720h] [rbp-15F8h] BYREF
  int v18; // [rsp+968h] [rbp-13B0h]
  __int16 v19; // [rsp+96Eh] [rbp-13AAh]
  _QWORD desta[89]; // [rsp+978h] [rbp-13A0h] BYREF
  _QWORD v21[89]; // [rsp+C40h] [rbp-10D8h] BYREF
  _BYTE v22[712]; // [rsp+F08h] [rbp-E10h] BYREF
  _BYTE v23[712]; // [rsp+11D0h] [rbp-B48h] BYREF
  _QWORD src[89]; // [rsp+1498h] [rbp-880h] BYREF
  _DWORD v25[178]; // [rsp+1760h] [rbp-5B8h] BYREF
  _BYTE v26[752]; // [rsp+1A28h] [rbp-2F0h] BYREF

  v21[22] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, sizeof(desta));
  uucore::format_usage((unsigned int)&v9);
  v4 = v9;
  if ( v9 != 0x8000000000000000LL )
    *(_OWORD *)v11 = v10;
  if ( desta[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&desta[58], aOptionFile);
  desta[58] = v4;
  *(_OWORD *)&desta[59] = *(_OWORD *)v11;
  memcpy(v26, desta, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v25, v26);
  *(_QWORD *)&v25[175] |= 0x8000000080uLL;
  memcpy(v23, v25, sizeof(v23));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v17[528] = aFile;
  *(_QWORD *)&v17[536] = 4LL;
  memcpy(v11, v17, 0x248uLL);
  *(_DWORD *)&v11[584] = v18 | 4;
  LOWORD(v12) = 769;
  HIWORD(v12) = v19;
  clap_builder::builder::command::Command::arg_internal(v23, v11);
  memcpy(v22, v23, sizeof(v22));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[528] = aR;
  *(_QWORD *)&v11[536] = 1LL;
  memcpy(v15, v11, 0x240uLL);
  *(_QWORD *)&v15[580] = *(_QWORD *)&v11[580];
  v16 = v12;
  *(_DWORD *)&v15[576] = 114;
  *(_QWORD *)v11 = 0LL;
  *(_QWORD *)&v11[8] = 1LL;
  *(_QWORD *)&v11[16] = 0LL;
  alloc::string::String::push_str(v11, aUseTheBsdSumAl, 50LL);
  v5 = *(_QWORD *)v11;
  *(_OWORD *)v17 = *(_OWORD *)&v11[8];
  if ( *(_QWORD *)v11 != 0x8000000000000000LL )
    v8 = *(_OWORD *)v17;
  if ( *(_QWORD *)&v15[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v15[440], aUseTheBsdSumAl);
  *(_QWORD *)&v15[440] = v5;
  *(_OWORD *)&v15[448] = v8;
  memcpy(v11, v15, sizeof(v11));
  *(_WORD *)((char *)&v12 + 1) = *(_WORD *)((char *)&v16 + 1);
  HIBYTE(v12) = HIBYTE(v16);
  LOBYTE(v12) = 2;
  clap_builder::builder::command::Command::arg_internal(v22, v11);
  memcpy(v21, v22, sizeof(v21));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[528] = aSysv;
  *(_QWORD *)&v11[536] = 4LL;
  memcpy(v13, v11, 0x220uLL);
  *(_OWORD *)&v13[560] = *(_OWORD *)&v11[560];
  *(_QWORD *)&v13[580] = *(_QWORD *)&v11[580];
  v14 = v12;
  *(_QWORD *)&v13[544] = aSysv;
  *(_QWORD *)&v13[552] = 4LL;
  *(_DWORD *)&v13[576] = 115;
  *(_QWORD *)v11 = 0LL;
  *(_QWORD *)&v11[8] = 1LL;
  *(_QWORD *)&v11[16] = 0LL;
  alloc::string::String::push_str(v11, aUseSystemVSumA, 48LL);
  v6 = *(_QWORD *)v11;
  *(_OWORD *)v17 = *(_OWORD *)&v11[8];
  if ( *(_QWORD *)v11 != 0x8000000000000000LL )
    v8 = *(_OWORD *)v17;
  if ( *(_QWORD *)&v13[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v13[440], aUseSystemVSumA);
  *(_QWORD *)&v13[440] = v6;
  *(_OWORD *)&v13[448] = v8;
  memcpy(v11, v13, sizeof(v11));
  *(_WORD *)((char *)&v12 + 1) = *(_WORD *)((char *)&v14 + 1);
  HIBYTE(v12) = HIBYTE(v14);
  LOBYTE(v12) = 2;
  clap_builder::builder::command::Command::arg_internal(v21, v11);
  memcpy(dest, v21, 0x2C8uLL);
  return dest;
}
