__int64 __fastcall uu_dd::Output::new_stdout(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int128 v5; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v6[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = a2;
  *((_QWORD *)&v5 + 1) = std::io::stdio::stdout();
  LOBYTE(v5) = 0;
  v3 = uu_dd::Dest::seek(&v5, *(_QWORD *)(a2 + 136));
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v6,
    v3);
  if ( v6[0] )
  {
    v2 = v6[1];
    *(_QWORD *)(a1 + 8) = v6[0];
    *(_BYTE *)a1 = 4;
    core::ptr::drop_in_place<uu_dd::Dest>((unsigned int)v5, DWORD1(v5));
  }
  else
  {
    *(_OWORD *)a1 = v5;
  }
  *(_QWORD *)(a1 + 16) = v2;
  return a1;
}
