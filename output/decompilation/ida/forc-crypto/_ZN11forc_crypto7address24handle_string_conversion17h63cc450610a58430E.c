__int64 __fastcall forc_crypto::address::handle_string_conversion(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  char v6; // al
  __int128 v7; // xmm0
  _BYTE v8[33]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v3 = <alloc::string::String as core::convert::AsRef<[u8]>>::as_ref(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  core::str::converts::from_utf8(v8, v3);
  v4 = *(_QWORD *)&v8[8];
  if ( *(_DWORD *)v8 == 1 )
  {
    *(_OWORD *)v8 = *(_OWORD *)&v8[8];
    *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v8);
    *(_BYTE *)a1 = 1;
    return core::ptr::drop_in_place<alloc::string::String>(a2);
  }
  else
  {
    v9[0] = *(_QWORD *)&v8[8];
    v9[1] = *(_QWORD *)&v8[16];
    <fuel_types::array_types::Address as core::str::traits::FromStr>::from_str(v8);
    if ( v8[0] == 1 )
    {
      *(_QWORD *)(a1 + 8) = forc_crypto::address::handle_string_conversion::{{closure}}(v9, v4);
      v6 = 1;
    }
    else
    {
      v7 = *(_OWORD *)&v8[1];
      *(_OWORD *)(a1 + 17) = *(_OWORD *)&v8[17];
      *(_OWORD *)(a1 + 1) = v7;
      v6 = 0;
    }
    *(_BYTE *)a1 = v6;
    return core::ptr::drop_in_place<alloc::string::String>(a2);
  }
}