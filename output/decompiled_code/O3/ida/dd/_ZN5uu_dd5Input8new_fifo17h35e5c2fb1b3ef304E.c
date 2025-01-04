__int64 __fastcall uu_dd::Input::new_fifo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // edx
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // ecx
  int v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+4h] [rbp-44h]
  int v16; // [rsp+8h] [rbp-40h] BYREF
  __int64 v17; // [rsp+Ch] [rbp-3Ch]
  __int16 v18; // [rsp+14h] [rbp-34h]
  int v19; // [rsp+18h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+1Ch] [rbp-2Ch]
  __int64 v21; // [rsp+20h] [rbp-28h]

  v17 = 0x1000001B6LL;
  v18 = 0;
  if ( !(unsigned int)uu_dd::make_linux_iflags(a4 + 64) )
    v6 = 0;
  v16 = v6;
  std::fs::OpenOptions::open(&v19, &v16, a2, a3);
  if ( !v19 )
  {
    v8 = v20;
    v15 = v20;
    v14 = 2;
    v9 = *(_QWORD *)(a4 + 128);
    if ( v9 )
    {
      if ( uu_dd::Source::skip(&v14, v9) )
      {
        *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        *(_QWORD *)(a1 + 16) = v11;
        *(_QWORD *)a1 = 1LL;
        core::ptr::drop_in_place<uu_dd::Source>(v15);
        return a1;
      }
      v12 = v14;
      v8 = v15;
    }
    else
    {
      v12 = 2;
    }
    *(_DWORD *)(a1 + 8) = v12;
    *(_DWORD *)(a1 + 12) = v8;
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)a1 = 1LL;
  return a1;
}
