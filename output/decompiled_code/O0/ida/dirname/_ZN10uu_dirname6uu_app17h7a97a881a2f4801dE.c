void *__fastcall uu_dirname::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r15
  __int64 v5; // r15
  __int128 v7; // [rsp+0h] [rbp-1538h]
  __int64 v8; // [rsp+18h] [rbp-1520h] BYREF
  __int128 v9; // [rsp+20h] [rbp-1518h]
  _BYTE v10[588]; // [rsp+30h] [rbp-1508h] BYREF
  int v11; // [rsp+27Ch] [rbp-12BCh]
  _BYTE v12[588]; // [rsp+288h] [rbp-12B0h] BYREF
  int v13; // [rsp+4D4h] [rbp-1064h]
  _QWORD desta[89]; // [rsp+4D8h] [rbp-1060h] BYREF
  _BYTE v15[584]; // [rsp+7A0h] [rbp-D98h] BYREF
  int v16; // [rsp+9E8h] [rbp-B50h]
  __int16 v17; // [rsp+9EEh] [rbp-B4Ah]
  _DWORD v18[178]; // [rsp+9F8h] [rbp-B40h] BYREF
  _BYTE v19[712]; // [rsp+CC0h] [rbp-878h] BYREF
  _QWORD src[89]; // [rsp+F88h] [rbp-5B0h] BYREF
  _BYTE v21[744]; // [rsp+1250h] [rbp-2E8h] BYREF

  desta[8] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(v21, v2, v3);
  clap_builder::builder::command::Command::about(src, v21);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, sizeof(desta));
  uucore::format_usage((unsigned int)&v8);
  v4 = v8;
  if ( v8 != 0x8000000000000000LL )
    *(_OWORD *)v10 = v9;
  if ( desta[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&desta[58], aOptionName);
  desta[58] = v4;
  *(_OWORD *)&desta[59] = *(_OWORD *)v10;
  memcpy(v18, desta, 0x2BCuLL);
  *(_QWORD *)&v18[175] = *(_QWORD *)((char *)&desta[87] + 4) | 0x8800000088LL;
  v18[177] = HIDWORD(desta[88]);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v10);
  *(_QWORD *)&v10[528] = aZero_0;
  *(_QWORD *)&v10[536] = 4LL;
  memcpy(v12, v10, 0x220uLL);
  *(_OWORD *)&v12[560] = *(_OWORD *)&v10[560];
  *(_QWORD *)&v12[580] = *(_QWORD *)&v10[580];
  v13 = v11;
  *(_QWORD *)&v12[544] = aZero_0;
  *(_QWORD *)&v12[552] = 4LL;
  *(_DWORD *)&v12[576] = 122;
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)&v10[8] = 1LL;
  *(_QWORD *)&v10[16] = 0LL;
  alloc::string::String::push_str(v10, aSeparateOutput, 44LL);
  v5 = *(_QWORD *)v10;
  *(_OWORD *)v15 = *(_OWORD *)&v10[8];
  if ( *(_QWORD *)v10 != 0x8000000000000000LL )
    v7 = *(_OWORD *)v15;
  if ( *(_QWORD *)&v12[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v12[440], aSeparateOutput);
  *(_QWORD *)&v12[440] = v5;
  *(_OWORD *)&v12[448] = v7;
  memcpy(v10, v12, sizeof(v10));
  *(_WORD *)((char *)&v11 + 1) = *(_WORD *)((char *)&v13 + 1);
  HIBYTE(v11) = HIBYTE(v13);
  LOBYTE(v11) = 2;
  clap_builder::builder::command::Command::arg_internal(v18, v10);
  memcpy(v19, v18, sizeof(v19));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v15);
  *(_QWORD *)&v15[528] = aDir_0;
  *(_QWORD *)&v15[536] = 3LL;
  memcpy(v10, v15, 0x248uLL);
  *(_DWORD *)&v10[584] = v16 | 4;
  LOWORD(v11) = 513;
  HIWORD(v11) = v17;
  clap_builder::builder::command::Command::arg_internal(v19, v10);
  memcpy(dest, v19, 0x2C8uLL);
  return dest;
}
