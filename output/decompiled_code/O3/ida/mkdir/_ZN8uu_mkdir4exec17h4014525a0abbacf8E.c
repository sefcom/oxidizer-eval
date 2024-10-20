__int64 __fastcall uu_mkdir::exec(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 dir; // rbp
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rbx
  void (__fastcall **v19)(__int64); // r15
  void (__fastcall *v20)(__int64); // rsi
  __int64 v21; // r15
  void *v23; // [rsp+8h] [rbp-E0h]
  unsigned int v24; // [rsp+14h] [rbp-D4h]
  unsigned int v25; // [rsp+18h] [rbp-D0h]
  __int64 v27; // [rsp+20h] [rbp-C8h] BYREF
  void (__fastcall **v28)(__int64); // [rsp+28h] [rbp-C0h]
  __int64 v29; // [rsp+30h] [rbp-B8h]
  void *v30; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-A8h]
  _QWORD *v32; // [rsp+48h] [rbp-A0h]
  __int64 v33; // [rsp+50h] [rbp-98h]
  __int64 v34; // [rsp+58h] [rbp-90h]
  __int64 v35; // [rsp+68h] [rbp-80h]
  __int64 v36; // [rsp+70h] [rbp-78h]
  __int64 (__fastcall *v37)(__int64); // [rsp+78h] [rbp-70h]
  __int64 v38; // [rsp+80h] [rbp-68h]
  _QWORD v39[4]; // [rsp+88h] [rbp-60h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-40h] BYREF

  v37 = *(__int64 (__fastcall **)(__int64))a1;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 40);
  v35 = *(_QWORD *)(a1 + 48);
  v25 = a2;
  v24 = a4;
  v36 = v6;
  while ( v7 && v7 != v8 )
  {
    v10 = v5;
LABEL_8:
    v12 = v9;
    v9 = v7;
    v7 += 32LL;
    v5 = v10;
LABEL_12:
    v38 = v12;
    v13 = v37(v9);
    std::sys::os_str::bytes::Slice::to_owned(&v30, *(_QWORD *)(v13 + 8), *(_QWORD *)(v13 + 16));
    v23 = v30;
    v29 = v31;
    uucore::features::fs::dir_strip_dot_for_creation(&v30, v31, v32);
    v14 = v31;
    dir = uu_mkdir::create_dir(v31, v32, v25, v24, 0LL, a3);
    v17 = v16;
    if ( v30 )
      _rust_dealloc(v14, v30, 1LL);
    if ( dir )
    {
      v27 = dir;
      v28 = (void (__fastcall **)(__int64))v17;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, (*(__int64 (__fastcall **)(__int64))(v17 + 96))(dir));
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v40 = xmmword_E9FB0;
      v39[0] = &v40;
      v39[1] = <&T as core::fmt::Display>::fmt;
      v39[2] = &v27;
      v39[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v30 = &unk_E50E8;
      v31 = 3LL;
      v34 = 0LL;
      v32 = v39;
      v33 = 2LL;
      std::io::stdio::_eprint(&v30);
      v18 = v27;
      v19 = v28;
      if ( *v28 )
        (*v28)(v27);
      v20 = v19[1];
      if ( v20 )
        _rust_dealloc(v18, v20, v19[2]);
    }
    v21 = v38;
    v9 = v38;
    v6 = v36;
    if ( v23 )
    {
      _rust_dealloc(v29, v23, 1LL);
      v9 = v21;
    }
  }
  while ( v5 && v5 != v6 )
  {
    v10 = v5 + 24;
    v7 = *(_QWORD *)(v5 + 8);
    v11 = *(_QWORD *)(v5 + 16);
    v8 = v7 + 32 * v11;
    v5 += 24LL;
    if ( v11 )
      goto LABEL_8;
  }
  if ( v9 && v9 != v35 )
  {
    v12 = v9 + 32;
    v7 = 0LL;
    goto LABEL_12;
  }
  return 0LL;
}
