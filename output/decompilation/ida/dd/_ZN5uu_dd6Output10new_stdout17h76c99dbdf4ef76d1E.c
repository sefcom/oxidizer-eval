__int64 __fastcall uu_dd::Output::new_stdout(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rax
  __int128 v6; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v7[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = a2;
  *((_QWORD *)&v6 + 1) = std::io::stdio::stdout();
  LOBYTE(v6) = 0;
  v4 = uu_dd::Dest::seek(&v6, *(_QWORD *)(a2 + 136), v3);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v7,
    v4);
  if ( v7[0] )
  {
    v2 = v7[1];
    *(_QWORD *)(a1 + 8) = v7[0];
    *(_BYTE *)a1 = 4;
    core::ptr::drop_in_place<uu_dd::Dest>((unsigned int)v6, DWORD1(v6));
  }
  else
  {
    *(_OWORD *)a1 = v6;
  }
  *(_QWORD *)(a1 + 16) = v2;
  return a1;
}
