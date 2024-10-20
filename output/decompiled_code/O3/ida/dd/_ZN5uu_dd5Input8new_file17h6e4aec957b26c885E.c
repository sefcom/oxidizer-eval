__int64 __fastcall uu_dd::Input::new_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  int v7; // ecx
  bool v8; // zf
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdx
  _OWORD *v18; // rax
  __int128 v19; // xmm0
  int v20; // ecx
  int fd[2]; // [rsp+8h] [rbp-50h] BYREF
  int v23; // [rsp+10h] [rbp-48h]
  __int16 v24; // [rsp+14h] [rbp-44h]
  __int128 v25; // [rsp+18h] [rbp-40h] BYREF
  __int128 v26; // [rsp+28h] [rbp-30h]

  *(_QWORD *)fd = 0x1B600000000LL;
  v23 = 0;
  v6 = *(unsigned __int8 *)(a4 + 65) << 14;
  v7 = v6 | 0x10000;
  v8 = *(_BYTE *)(a4 + 66) == 0;
  v24 = 0;
  if ( v8 )
    v7 = v6;
  v9 = v7 + 4096;
  if ( !*(_BYTE *)(a4 + 67) )
    v9 = v7;
  v10 = v9 | 0x40000;
  if ( !*(_BYTE *)(a4 + 71) )
    v10 = v9;
  v11 = v10 | 0x100;
  if ( !*(_BYTE *)(a4 + 72) )
    v11 = v10;
  v12 = v11 | 0x20000;
  if ( !*(_BYTE *)(a4 + 73) )
    v12 = v11;
  v13 = v12 | 0x800;
  if ( !*(_BYTE *)(a4 + 70) )
    v13 = v12;
  v14 = v13 | 0x101000;
  v8 = *(_BYTE *)(a4 + 68) == 0;
  LOBYTE(v23) = 1;
  if ( v8 )
    v14 = v13;
  if ( v14 )
    fd[0] = v14;
  std::fs::OpenOptions::_open(&v25, fd, a2, a3);
  if ( (_DWORD)v25 )
  {
    *(_QWORD *)(a1 + 8) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                            *((_QWORD *)&v25 + 1),
                            a2,
                            a3);
    *(_QWORD *)(a1 + 16) = &anon_47fcc33835ba2501a8fd1dfb926be52d_4_llvm_7315772993864627227;
    *(_QWORD *)a1 = 1LL;
    return a1;
  }
  v15 = DWORD1(v25);
  *(_QWORD *)fd = __PAIR64__(DWORD1(v25), 0);
  v16 = *(_QWORD *)(a4 + 128);
  if ( !v16 )
  {
    v20 = 0;
LABEL_25:
    *(_DWORD *)(a1 + 8) = v20;
    *(_DWORD *)(a1 + 12) = v15;
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  if ( !uu_dd::Source::skip(fd, v16) )
  {
    v20 = fd[0];
    v15 = fd[1];
    goto LABEL_25;
  }
  *(_QWORD *)&v25 = 0x8000000000000000LL;
  *((_QWORD *)&v26 + 1) = v17;
  v18 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v18 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v19 = v25;
  v18[1] = v26;
  *v18 = v19;
  *(_QWORD *)(a1 + 8) = v18;
  *(_QWORD *)(a1 + 16) = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
  *(_QWORD *)a1 = 1LL;
  close(fd[1]);
  return a1;
}
