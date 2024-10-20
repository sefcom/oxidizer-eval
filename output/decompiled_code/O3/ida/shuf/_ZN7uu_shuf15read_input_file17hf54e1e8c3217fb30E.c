_QWORD *__fastcall uu_shuf::read_input_file(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 *v5; // rax
  __int64 *v6; // r12
  __int64 (__fastcall **v7)(); // r13
  __int64 v8; // rcx
  int v9; // ebp
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // r14
  __int64 (__fastcall **v16)(); // r15
  __int64 (__fastcall *v17)(); // rax
  __int64 (__fastcall *v18)(); // rsi
  __int128 v20; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+18h] [rbp-90h]
  __int64 v22; // [rsp+20h] [rbp-88h] BYREF
  __int64 v23; // [rsp+28h] [rbp-80h]
  __int128 v24; // [rsp+30h] [rbp-78h]
  __int64 v25; // [rsp+40h] [rbp-68h]
  __int64 *v26; // [rsp+48h] [rbp-60h]
  __int64 (__fastcall **v27)(); // [rsp+50h] [rbp-58h]
  __int64 v28; // [rsp+58h] [rbp-50h] BYREF
  __int64 v29; // [rsp+60h] [rbp-48h]
  _QWORD v30[8]; // [rsp+68h] [rbp-40h] BYREF

  if ( a3 == 1 && *a2 == 45 )
  {
    v4 = std::io::stdio::stdin();
    v5 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v6 = v5;
    *v5 = v4;
    v7 = (__int64 (__fastcall **)())&unk_F2418;
  }
  else
  {
    *(_QWORD *)&v20 = 0x1B600000000LL;
    DWORD2(v20) = 1;
    WORD6(v20) = 0;
    std::fs::OpenOptions::_open(v30, &v20, a2, a3);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v28,
      v30,
      a2,
      a3);
    if ( v28 )
    {
      v8 = v29;
      a1[1] = v28;
      a1[2] = v8;
      *a1 = 0x8000000000000000LL;
      return a1;
    }
    v9 = v29;
    v10 = (__int64 *)_rust_alloc(4LL, 4LL);
    if ( !v10 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    v6 = v10;
    *(_DWORD *)v10 = v9;
    v7 = &off_F23C0;
  }
  v11 = _rust_alloc(0x2000LL, 1LL);
  if ( !v11 )
    alloc::raw_vec::handle_error(1LL, 0x2000LL);
  v22 = v11;
  v23 = 0x2000LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = v6;
  v27 = v7;
  *(_QWORD *)&v20 = 0LL;
  *((_QWORD *)&v20 + 1) = 1LL;
  v21 = 0LL;
  v12 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_end(&v22, &v20);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v30,
    v12,
    v13,
    a2,
    a3);
  if ( v30[0] )
  {
    v14 = v30[1];
    a1[1] = v30[0];
    a1[2] = v14;
    *a1 = 0x8000000000000000LL;
    if ( (_QWORD)v20 )
      _rust_dealloc(*((_QWORD *)&v20 + 1), v20, 1LL);
    if ( v23 )
      _rust_dealloc(v22, v23, 1LL);
    v15 = v26;
    v16 = v27;
    v17 = *v27;
    if ( !*v27 )
      goto LABEL_21;
  }
  else
  {
    a1[2] = v21;
    *(_OWORD *)a1 = v20;
    if ( v23 )
      _rust_dealloc(v22, v23, 1LL);
    v15 = v26;
    v16 = v27;
    v17 = *v27;
    if ( !*v27 )
      goto LABEL_21;
  }
  ((void (__fastcall *)(__int64 *))v17)(v26);
LABEL_21:
  v18 = v16[1];
  if ( v18 )
    _rust_dealloc(v15, v18, v16[2]);
  return a1;
}
