__int64 __fastcall uu_dd::Output::new_file_from_stdout(__int64 a1, unsigned __int8 *a2)
{
  _OWORD *v2; // rax
  __int128 v3; // xmm0
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // ebp
  __int64 v13; // rdx
  _OWORD *v14; // rax
  __int128 v15; // xmm0
  int fd[4]; // [rsp+8h] [rbp-40h] BYREF
  __int128 v18; // [rsp+18h] [rbp-30h]
  int v19[7]; // [rsp+2Ch] [rbp-1Ch] BYREF

  std::io::stdio::stdout();
  v19[0] = 1;
  std::os::fd::owned::BorrowedFd::try_clone_to_owned(fd, v19);
  if ( fd[0] )
  {
    *(_QWORD *)fd = 0x8000000000000000LL;
    *((_QWORD *)&v18 + 1) = *(_QWORD *)&fd[2];
    v2 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v2 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v3 = *(_OWORD *)fd;
    v2[1] = v18;
    *v2 = v3;
    *(_QWORD *)(a1 + 8) = v2;
    *(_QWORD *)(a1 + 16) = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
    *(_BYTE *)a1 = 4;
  }
  else
  {
    v4 = (a2[150] << 10) | 0x4000;
    if ( !a2[152] )
      v4 = a2[150] << 10;
    v5 = v4 | 0x10000;
    if ( !a2[153] )
      v5 = v4;
    v6 = v5 | 0x1000;
    if ( !a2[154] )
      v6 = v5;
    v7 = v6 | 0x40000;
    if ( !a2[158] )
      v7 = v6;
    v8 = v7 | 0x100;
    if ( !a2[159] )
      v8 = v7;
    v9 = v8 | 0x20000;
    if ( !a2[160] )
      v9 = v8;
    v10 = v9 | 0x800;
    if ( !a2[157] )
      v10 = v9;
    v11 = v10 | 0x101000;
    v12 = fd[1];
    if ( !a2[155] )
      v11 = v10;
    if ( v11 && (fd[1] = v11, fd[0] = 5, (unsigned int)nix::fcntl::fcntl(v12, fd)) )
    {
      *(_QWORD *)fd = 0x8000000000000000LL;
      *((_QWORD *)&v18 + 1) = (v13 << 32) | 2;
      v14 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v14 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v15 = *(_OWORD *)fd;
      v14[1] = v18;
      *v14 = v15;
      *(_QWORD *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 16) = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
      *(_BYTE *)a1 = 4;
      close(v12);
    }
    else
    {
      uu_dd::Output::prepare_file(a1, v12, (__int64)a2);
    }
  }
  return a1;
}
