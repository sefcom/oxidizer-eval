__int64 __fastcall uu_dd::Input::new_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // ecx
  int v15; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+4h] [rbp-54h]
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  int v18; // [rsp+18h] [rbp-40h]
  __int16 v19; // [rsp+1Ch] [rbp-3Ch]
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+28h] [rbp-30h]

  v17 = 0x1B600000000LL;
  v18 = 1;
  v19 = 0;
  if ( uu_dd::make_linux_iflags((unsigned __int8 *)(a4 + 64)) )
    LODWORD(v17) = v6;
  std::fs::OpenOptions::open(&v15, &v17, a2, a3);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v20,
    &v15,
    a2,
    a3);
  if ( !v20 )
  {
    v9 = v21;
    v16 = v21;
    v15 = 0;
    v10 = *(_QWORD *)(a4 + 128);
    if ( v10 )
    {
      if ( uu_dd::Source::skip(&v15, v10, v7) )
      {
        *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
        *(_QWORD *)(a1 + 16) = v12;
        *(_QWORD *)a1 = 1LL;
        core::ptr::drop_in_place<uu_dd::Source>(v16);
        return a1;
      }
      v13 = v15;
      v9 = v16;
    }
    else
    {
      v13 = 0;
    }
    *(_DWORD *)(a1 + 8) = v13;
    *(_DWORD *)(a1 + 12) = v9;
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  v8 = v21;
  *(_QWORD *)(a1 + 8) = v20;
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)a1 = 1LL;
  return a1;
}
