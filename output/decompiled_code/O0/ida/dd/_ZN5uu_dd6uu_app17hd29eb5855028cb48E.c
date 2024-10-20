void *__fastcall uu_dd::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v6; // [rsp+8h] [rbp-1590h] BYREF
  __int128 v7; // [rsp+10h] [rbp-1588h]
  __int128 v8; // [rsp+20h] [rbp-1578h] BYREF
  __int64 v9; // [rsp+30h] [rbp-1568h]
  __int64 v10; // [rsp+38h] [rbp-1560h]
  __int64 v11; // [rsp+40h] [rbp-1558h]
  _BYTE v12[552]; // [rsp+48h] [rbp-1550h] BYREF
  _QWORD v13[89]; // [rsp+278h] [rbp-1320h] BYREF
  __int128 v14; // [rsp+540h] [rbp-1058h] BYREF
  _QWORD v15[69]; // [rsp+568h] [rbp-1030h] BYREF
  _BYTE v16[712]; // [rsp+790h] [rbp-E08h] BYREF
  _QWORD src[89]; // [rsp+A58h] [rbp-B40h] BYREF
  _DWORD v18[178]; // [rsp+D20h] [rbp-878h] BYREF
  _BYTE v19[712]; // [rsp+FE8h] [rbp-5B0h] BYREF
  _BYTE desta[744]; // [rsp+12B0h] [rbp-2E8h] BYREF

  v15[2] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v13, desta);
  uucore::format_usage((unsigned int)&v6);
  v4 = v6;
  if ( v6 != 0x8000000000000000LL )
    v8 = v7;
  if ( v13[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v13[58], aOperandOption);
  v13[58] = v4;
  *(_OWORD *)&v13[59] = v8;
  memcpy(v19, v13, sizeof(v19));
  clap_builder::builder::command::Command::after_help(v18, v19);
  *(_QWORD *)&v18[175] |= 0x8000000080uLL;
  memcpy(v16, v18, sizeof(v16));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(&v14);
  v15[61] = aOperands;
  v15[62] = 8LL;
  v8 = v14;
  memcpy(v12, v15, sizeof(v12));
  v9 = 1LL;
  v10 = 1LL;
  v11 = -1LL;
  clap_builder::builder::command::Command::arg_internal(v16, &v8);
  memcpy(dest, v16, 0x2C8uLL);
  return dest;
}
