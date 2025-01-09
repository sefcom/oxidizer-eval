__int64 __fastcall uu_dd::Input::new_fifo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // ecx
  int v15; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+4h] [rbp-44h]
  int v17; // [rsp+8h] [rbp-40h] BYREF
  __int64 v18; // [rsp+Ch] [rbp-3Ch]
  __int16 v19; // [rsp+14h] [rbp-34h]
  int v20; // [rsp+18h] [rbp-30h] BYREF
  unsigned int v21; // [rsp+1Ch] [rbp-2Ch]
  __int64 v22; // [rsp+20h] [rbp-28h]

  v18 = 0x1000001B6LL;
  v19 = 0;
  if ( !uu_dd::make_linux_iflags((unsigned __int8 *)(a4 + 64)) )
    v6 = 0;
  v17 = v6;
  std::fs::OpenOptions::open(&v20, &v17, a2, a3);
  if ( !v20 )
  {
    v9 = v21;
    v16 = v21;
    v15 = 2;
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
      v13 = 2;
    }
    *(_DWORD *)(a1 + 8) = v13;
    *(_DWORD *)(a1 + 12) = v9;
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)a1 = 1LL;
  return a1;
}
