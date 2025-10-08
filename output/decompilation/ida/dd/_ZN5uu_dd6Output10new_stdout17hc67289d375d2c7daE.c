__int64 __fastcall uu_dd::Output::new_stdout(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int128 v9; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v10[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = a2;
  *((_QWORD *)&v9 + 1) = std::io::stdio::stdout();
  LOBYTE(v9) = 0;
  v7 = uu_dd::Dest::seek(&v9, *(_QWORD *)(a2 + 136), v3, v4, v5, v6);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v10,
    v7);
  if ( v10[0] )
  {
    v2 = v10[1];
    *(_QWORD *)(a1 + 8) = v10[0];
    *(_BYTE *)a1 = 4;
    core::ptr::drop_in_place<uu_dd::Dest>((unsigned int)v9, DWORD1(v9));
  }
  else
  {
    *(_OWORD *)a1 = v9;
  }
  *(_QWORD *)(a1 + 16) = v2;
  return a1;
}