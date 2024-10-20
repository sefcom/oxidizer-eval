__int64 __fastcall uu_dd::Output::prepare_file(__int64 a1, int a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rax
  int fd[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = ~*(_BYTE *)(a3 + 144);
  fd[1] = a2;
  BYTE1(fd[0]) = v4 & 1;
  LOBYTE(fd[0]) = 1;
  if ( uu_dd::Dest::seek(fd, *(_QWORD *)(a3 + 136))
    && (v6 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v5)) != 0 )
  {
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = &anon_03cf1666c72ffecffa9b2ee592f2558f_5_llvm_12236334141226123511;
    *(_BYTE *)a1 = 4;
    if ( (unsigned __int8)(LOBYTE(fd[0]) - 1) <= 1u )
    {
      std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd[1]);
      close(fd[1]);
    }
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)fd;
    *(_QWORD *)(a1 + 16) = a3;
  }
  return a1;
}
