__int64 *__fastcall uu_uniq::open_input_file(__int64 *a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // r14
  char v5; // dl
  char v6; // bp
  __int64 v7; // rax
  __int64 (__fastcall **v8)(); // rcx
  __int64 v9; // rdx
  int v10; // ebp
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _QWORD v15[2]; // [rsp+8h] [rbp-60h] BYREF
  __int128 v16; // [rsp+18h] [rbp-50h] BYREF
  __int128 v17; // [rsp+28h] [rbp-40h]
  __int128 v18; // [rsp+38h] [rbp-30h]

  if ( !a2 || a3 == 1 && *a2 == 45 )
  {
    v15[0] = std::io::stdio::stdin();
    v4 = std::io::stdio::Stdin::lock(v15);
    *(_QWORD *)&v16 = v4;
    v6 = v5 & 1;
    BYTE8(v16) = v5 & 1;
    v7 = _rust_alloc(16LL, 8LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    *(_QWORD *)v7 = v4;
    *(_BYTE *)(v7 + 8) = v6;
    v8 = &off_F2DB8;
LABEL_11:
    v9 = 0LL;
    goto LABEL_12;
  }
  *(_QWORD *)&v16 = 0x1B600000000LL;
  DWORD2(v16) = 1;
  WORD6(v16) = 0;
  std::fs::OpenOptions::_open(v15, &v16, a2, a3);
  if ( !LODWORD(v15[0]) )
  {
    v10 = HIDWORD(v15[0]);
    v11 = _rust_alloc(0x2000LL, 1LL);
    if ( !v11 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    *(_QWORD *)&v16 = v11;
    *((_QWORD *)&v16 + 1) = 0x2000LL;
    v17 = 0LL;
    *(_QWORD *)&v18 = 0LL;
    DWORD2(v18) = v10;
    v7 = _rust_alloc(48LL, 8LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v12 = v16;
    v13 = v17;
    *(_OWORD *)(v7 + 32) = v18;
    *(_OWORD *)(v7 + 16) = v13;
    *(_OWORD *)v7 = v12;
    v8 = &off_F2D30;
    goto LABEL_11;
  }
  v7 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
         v15[1],
         a2,
         a3);
  v9 = 1LL;
  v8 = &anon_91813ef2801f4d1d4cad4af8ef82e3d6_9_llvm_14928124353916811356;
LABEL_12:
  a1[1] = v7;
  a1[2] = (__int64)v8;
  *a1 = v9;
  return a1;
}
