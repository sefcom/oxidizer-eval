char __fastcall uu_dd::Output::prepare_file(__int64 a1, int a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // rax
  __int64 v6; // rdx
  int fd[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = *(_BYTE *)(a3 + 144);
  fd[1] = a2;
  BYTE1(fd[0]) = v4 ^ 1;
  LOBYTE(fd[0]) = 1;
  v5 = uu_dd::Dest::seek(fd, *(_QWORD *)(a3 + 136));
  if ( v5 )
  {
    *(_QWORD *)(a1 + 8) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v6);
    *(_QWORD *)(a1 + 16) = &anon_47fcc33835ba2501a8fd1dfb926be52d_4_llvm_7315772993864627227;
    *(_BYTE *)a1 = 4;
    LOBYTE(v5) = LOBYTE(fd[0]) - 1;
    if ( (unsigned __int8)(LOBYTE(fd[0]) - 1) <= 1u )
      LOBYTE(v5) = close(fd[1]);
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)fd;
    *(_QWORD *)(a1 + 16) = a3;
  }
  return v5;
}
