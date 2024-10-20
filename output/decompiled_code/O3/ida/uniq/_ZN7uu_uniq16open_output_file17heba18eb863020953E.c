__int64 *__fastcall uu_uniq::open_output_file(__int64 *a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rcx
  __int64 v7; // rdx
  int v8; // ebp
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int128 v12; // [rsp+8h] [rbp-50h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  _QWORD v14[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( !a2 || a3 == 1 && *a2 == 45 )
  {
    v14[0] = std::io::stdio::stdout();
    v4 = std::io::stdio::Stdout::lock(v14);
    *(_QWORD *)&v12 = v4;
    v5 = _rust_alloc(8LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *(_QWORD *)v5 = v4;
    v6 = &off_F2E90;
LABEL_11:
    v7 = 0LL;
    goto LABEL_12;
  }
  *(_QWORD *)&v12 = 0x1B600000000LL;
  DWORD2(v12) = 16777472;
  WORD6(v12) = 1;
  std::fs::OpenOptions::_open(v14, &v12, a2, a3);
  if ( !LODWORD(v14[0]) )
  {
    v8 = HIDWORD(v14[0]);
    v9 = _rust_alloc(0x2000LL, 1LL);
    if ( !v9 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    *(_QWORD *)&v12 = 0x2000LL;
    *((_QWORD *)&v12 + 1) = v9;
    *(_QWORD *)&v13 = 0LL;
    BYTE8(v13) = 0;
    HIDWORD(v13) = v8;
    v5 = _rust_alloc(32LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v10 = v12;
    *(_OWORD *)(v5 + 16) = v13;
    *(_OWORD *)v5 = v10;
    v6 = &off_F2E40;
    goto LABEL_11;
  }
  v5 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
         v14[1],
         a2,
         a3);
  v7 = 1LL;
  v6 = &anon_91813ef2801f4d1d4cad4af8ef82e3d6_9_llvm_14928124353916811356;
LABEL_12:
  a1[1] = v5;
  a1[2] = (__int64)v6;
  *a1 = v7;
  return a1;
}
