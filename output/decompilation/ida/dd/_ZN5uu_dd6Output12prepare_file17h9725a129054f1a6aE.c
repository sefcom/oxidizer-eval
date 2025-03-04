__int64 __fastcall uu_dd::Output::prepare_file(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  char v4; // al
  __int64 v5; // rax
  __int64 result; // rax
  __int128 v7; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v8[4]; // [rsp+18h] [rbp-20h] BYREF

  v3 = a3;
  v4 = *(_BYTE *)(a3 + 144);
  DWORD1(v7) = a2;
  BYTE1(v7) = v4 ^ 1;
  LOBYTE(v7) = 1;
  v5 = uu_dd::Dest::seek(&v7, *(_QWORD *)(a3 + 136), a3);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v8,
    v5);
  result = v8[0];
  if ( v8[0] )
  {
    v3 = v8[1];
    *(_QWORD *)(a1 + 8) = v8[0];
    *(_BYTE *)a1 = 4;
    result = core::ptr::drop_in_place<uu_dd::Dest>((unsigned int)v7, DWORD1(v7));
  }
  else
  {
    *(_OWORD *)a1 = v7;
  }
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}
