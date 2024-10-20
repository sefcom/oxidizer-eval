__int64 __fastcall uu_dd::Output::new_stdout(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int fd[4]; // [rsp+8h] [rbp-20h] BYREF

  *(_QWORD *)&fd[2] = std::io::stdio::stdout();
  LOBYTE(fd[0]) = 0;
  if ( uu_dd::Dest::seek(fd, *(_QWORD *)(a2 + 136)) )
  {
    *(_QWORD *)(a1 + 8) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v2);
    *(_QWORD *)(a1 + 16) = &anon_47fcc33835ba2501a8fd1dfb926be52d_4_llvm_7315772993864627227;
    *(_BYTE *)a1 = 4;
    if ( (unsigned __int8)(LOBYTE(fd[0]) - 1) <= 1u )
      close(fd[1]);
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)fd;
    *(_QWORD *)(a1 + 16) = a2;
  }
  return a1;
}
