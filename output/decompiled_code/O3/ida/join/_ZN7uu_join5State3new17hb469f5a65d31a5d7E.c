        char a8)
{
  __int64 v11; // r14
  char v12; // dl
  char v13; // r13
  __int64 v14; // rax
  __int64 (__fastcall **v15)(); // rcx
  __int64 v16; // rcx
  int v17; // r13d
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v22; // [rsp+0h] [rbp-88h]
  __int128 v23; // [rsp+8h] [rbp-80h] BYREF
  __int128 v24; // [rsp+18h] [rbp-70h]
  __int128 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+38h] [rbp-50h] BYREF
  __int64 v27; // [rsp+40h] [rbp-48h]
  _BYTE v28[64]; // [rsp+48h] [rbp-40h] BYREF

  if ( a4 == 1 && *a3 == 45 )
  {
    v22 = a6;
    v11 = std::io::stdio::Stdin::lock(a5);
    *(_QWORD *)&v23 = v11;
    v13 = v12 & 1;
    BYTE8(v23) = v12 & 1;
    v14 = _rust_alloc(16LL, 8LL);
    if ( !v14 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    *(_QWORD *)v14 = v11;
    *(_BYTE *)(v14 + 8) = v13;
    v15 = &off_FDCA8;
LABEL_10:
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 8LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = a3;
    *(_QWORD *)(a1 + 32) = a4;
    *(_QWORD *)(a1 + 40) = v14;
    *(_QWORD *)(a1 + 48) = v15;
    *(_BYTE *)(a1 + 56) = a7;
    *(_QWORD *)(a1 + 64) = v22;
    *(_QWORD *)(a1 + 72) = 1LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_BYTE *)(a1 + 88) = a2;
    *(_BYTE *)(a1 + 89) = a8;
    *(_WORD *)(a1 + 90) = 0;
    return a1;
  }
  *(_QWORD *)&v23 = 0x1B600000000LL;
  DWORD2(v23) = 1;
  WORD6(v23) = 0;
  std::fs::OpenOptions::_open(v28, &v23, a3, a4);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v26,
    v28,
    a3,
    a4);
  if ( !v26 )
  {
    v22 = a6;
    v17 = v27;
    v18 = _rust_alloc(0x2000LL, 1LL);
    if ( !v18 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    *(_QWORD *)&v23 = v18;
    *((_QWORD *)&v23 + 1) = 0x2000LL;
    v24 = 0LL;
    *(_QWORD *)&v25 = 0LL;
    DWORD2(v25) = v17;
    v14 = _rust_alloc(48LL, 8LL);
    if ( !v14 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v19 = v23;
    v20 = v24;
    *(_OWORD *)(v14 + 32) = v25;
    *(_OWORD *)(v14 + 16) = v20;
    *(_OWORD *)v14 = v19;
    v15 = &off_FDC20;
    goto LABEL_10;
  }
  v16 = v27;
  *(_QWORD *)(a1 + 8) = v26;
  *(_QWORD *)(a1 + 16) = v16;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return a1;
}
