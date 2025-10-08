__int64 __fastcall alacritty::config::cursor::_::<impl serde::de::Deserialize for alacritty::config::cursor::ConfigCursorStyle>::deserialize(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  _BYTE v8[88]; // [rsp+8h] [rbp-E0h] BYREF
  _OWORD v9[2]; // [rsp+60h] [rbp-88h] BYREF
  __int128 v10; // [rsp+80h] [rbp-68h] BYREF
  __int128 v11; // [rsp+90h] [rbp-58h]
  __int128 v12; // [rsp+A0h] [rbp-48h]
  __int128 v13; // [rsp+B0h] [rbp-38h]
  __int128 v14; // [rsp+C0h] [rbp-28h]
  __int64 v15; // [rsp+D0h] [rbp-18h]

  serde::de::Deserializer::__deserialize_content(v8);
  result = *(_QWORD *)v8;
  v10 = *(_OWORD *)&v8[8];
  v11 = *(_OWORD *)&v8[24];
  if ( *(_QWORD *)v8 != 2LL )
  {
    v2 = *(_OWORD *)&v8[40];
    v3 = *(_OWORD *)&v8[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v8[72];
    *(_OWORD *)(a1 + 56) = v3;
    *(_OWORD *)(a1 + 40) = v2;
    v4 = v10;
    *(_OWORD *)(a1 + 24) = v11;
    *(_OWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = result;
    return result;
  }
  v9[0] = v10;
  v9[1] = v11;
  <serde::__private::de::content::ContentRefDeserializer<E> as serde::de::Deserializer>::deserialize_str(v8, v9);
  if ( *(_DWORD *)v8 == 2 )
  {
    BYTE8(v10) = 3;
    BYTE9(v10) = v8[8];
    *(_QWORD *)&v10 = 2LL;
  }
  else
  {
    v10 = *(_OWORD *)v8;
    v15 = *(_QWORD *)&v8[80];
    v14 = *(_OWORD *)&v8[64];
    v13 = *(_OWORD *)&v8[48];
    v12 = *(_OWORD *)&v8[32];
    v11 = *(_OWORD *)&v8[16];
    if ( *(_QWORD *)v8 != 2LL )
    {
      core::ptr::drop_in_place<core::result::Result<core::option::Option<()>,toml::de::error::Error>>(&v10);
      <serde::__private::de::content::ContentRefDeserializer<E> as serde::de::Deserializer>::deserialize_any(v8, v9);
      if ( *(_DWORD *)v8 == 2 )
      {
        *(_WORD *)(a1 + 8) = *(_WORD *)&v8[8];
        *(_QWORD *)a1 = 2LL;
        core::ptr::drop_in_place<core::result::Result<core::option::Option<()>,toml::de::error::Error>>(v8);
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<core::option::Option<()>,toml::de::error::Error>>(v8);
        <toml::de::error::Error as serde::de::Error>::custom(v8, aDataDidNotMatc, 65LL);
        *(_QWORD *)(a1 + 80) = *(_QWORD *)&v8[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v8[64];
        v5 = *(_OWORD *)v8;
        v6 = *(_OWORD *)&v8[16];
        v7 = *(_OWORD *)&v8[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v8[48];
        *(_OWORD *)(a1 + 32) = v7;
        *(_OWORD *)(a1 + 16) = v6;
        *(_OWORD *)a1 = v5;
      }
      return core::ptr::drop_in_place<serde::__private::de::content::Content>(v9);
    }
  }
  *(_WORD *)(a1 + 8) = WORD4(v10);
  *(_QWORD *)a1 = 2LL;
  core::ptr::drop_in_place<core::result::Result<core::option::Option<()>,toml::de::error::Error>>(&v10);
  return core::ptr::drop_in_place<serde::__private::de::content::Content>(v9);
}