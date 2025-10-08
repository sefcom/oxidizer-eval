__int64 __fastcall uu_dd::Output::prepare_file(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // rax
  __int64 result; // rax
  __int128 v10; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v11[4]; // [rsp+18h] [rbp-20h] BYREF

  v6 = a3;
  v7 = *(_BYTE *)(a3 + 144) ^ 1;
  DWORD1(v10) = a2;
  BYTE1(v10) = v7;
  LOBYTE(v10) = 1;
  v8 = uu_dd::Dest::seek(&v10, *(_QWORD *)(a3 + 136), a3, a4, a5, a6);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v11,
    v8);
  result = v11[0];
  if ( v11[0] )
  {
    v6 = v11[1];
    *(_QWORD *)(a1 + 8) = v11[0];
    *(_BYTE *)a1 = 4;
    result = core::ptr::drop_in_place<uu_dd::Dest>((unsigned int)v10, DWORD1(v10));
  }
  else
  {
    *(_OWORD *)a1 = v10;
  }
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}