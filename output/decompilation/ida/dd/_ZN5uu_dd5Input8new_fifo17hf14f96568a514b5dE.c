__int64 __fastcall uu_dd::Input::new_fifo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char linux_iflags; // al
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rdx
  unsigned int v10; // eax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // ecx
  int v16; // [rsp+8h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+Ch] [rbp-3Ch]
  __int64 v18; // [rsp+10h] [rbp-38h]
  int v19; // [rsp+18h] [rbp-30h] BYREF
  __int64 v20; // [rsp+1Ch] [rbp-2Ch]
  __int16 v21; // [rsp+24h] [rbp-24h]

  v20 = 0x1000001B6LL;
  v21 = 0;
  linux_iflags = uu_dd::make_linux_iflags(a4 + 64);
  v8 = 0;
  if ( (linux_iflags & 1) != 0 )
    v8 = v7;
  v19 = v8;
  std::fs::OpenOptions::open(&v16, &v19, a2, a3);
  if ( v16 != 1 )
  {
    v10 = v17;
    v16 = 2;
    v11 = *(_QWORD *)(a4 + 128);
    if ( v11 )
    {
      if ( (uu_dd::Source::skip(&v16, v11) & 1) != 0 )
      {
        *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
        *(_QWORD *)(a1 + 16) = v13;
        *(_QWORD *)a1 = 1LL;
        core::ptr::drop_in_place<uu_dd::Source>(v17);
        return a1;
      }
      v14 = v16;
      v10 = v17;
    }
    else
    {
      v14 = 2;
    }
    *(_DWORD *)(a1 + 8) = v14;
    *(_DWORD *)(a1 + 12) = v10;
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)a1 = 1LL;
  return a1;
}