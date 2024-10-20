void *__fastcall uu_unlink::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  int v5; // ebp
  __int64 v7; // [rsp+8h] [rbp-1000h] BYREF
  __int128 v8; // [rsp+10h] [rbp-FF8h]
  _BYTE v9[592]; // [rsp+20h] [rbp-FE8h] BYREF
  _BYTE v10[592]; // [rsp+270h] [rbp-D98h] BYREF
  _DWORD v11[178]; // [rsp+4C0h] [rbp-B48h] BYREF
  _DWORD v12[178]; // [rsp+788h] [rbp-880h] BYREF
  _QWORD src[89]; // [rsp+A50h] [rbp-5B8h] BYREF
  _BYTE desta[752]; // [rsp+D18h] [rbp-2F0h] BYREF

  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v11, desta);
  uucore::format_usage((unsigned int)&v7);
  v4 = v7;
  if ( v7 != 0x8000000000000000LL )
    *(_OWORD *)v9 = v8;
  if ( *(_QWORD *)&v11[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v11[116], aFileOption);
  *(_QWORD *)&v11[116] = v4;
  *(_OWORD *)&v11[118] = *(_OWORD *)v9;
  memcpy(v12, v11, 0x2BCuLL);
  *(_QWORD *)&v12[175] = *(_QWORD *)&v11[175] | 0x8000000080LL;
  v12[177] = v11[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v9);
  *(_QWORD *)&v9[528] = aFile;
  *(_QWORD *)&v9[536] = 4LL;
  memcpy(v10, v9, 0x248uLL);
  *(_DWORD *)&v10[584] = *(_DWORD *)&v9[584] | 5;
  *(_DWORD *)&v10[588] = *(_DWORD *)&v9[588];
  v5 = HIWORD(*(_DWORD *)&v9[588]);
  if ( *(_QWORD *)&v10[80] >= 4uLL && *(_QWORD *)&v10[80] != 5LL )
  {
    if ( **(_QWORD **)&v10[96] )
      (**(void (__fastcall ***)(_QWORD))&v10[96])(*(_QWORD *)&v10[88]);
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v10[88]);
    LOWORD(v5) = *(_WORD *)&v10[590];
  }
  *(_QWORD *)&v10[80] = 2LL;
  memcpy(v9, v10, 0x24DuLL);
  v9[589] = 2;
  *(_WORD *)&v9[590] = v5;
  clap_builder::builder::command::Command::arg_internal(v12, v9);
  memcpy(dest, v12, 0x2C8uLL);
  return dest;
}
