__int64 __fastcall alacritty::config::ui_config::_::<impl serde::de::Deserialize for alacritty::config::ui_config::Program>::deserialize(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int64 v5; // rax
  __int128 v6; // kr00_16
  __int64 v7; // rsi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  _BYTE v13[88]; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+60h] [rbp-88h] BYREF
  __int128 v15; // [rsp+70h] [rbp-78h]
  __m256i v16; // [rsp+80h] [rbp-68h]
  __int128 v17; // [rsp+A0h] [rbp-48h]
  __int64 v18; // [rsp+B0h] [rbp-38h]
  _OWORD v19[2]; // [rsp+C0h] [rbp-28h] BYREF

  serde::de::Deserializer::__deserialize_content(v13);
  result = *(_QWORD *)v13;
  v14 = *(_OWORD *)&v13[8];
  v15 = *(_OWORD *)&v13[24];
  if ( *(_QWORD *)v13 != 2LL )
  {
    v2 = *(_OWORD *)&v13[40];
    v3 = *(_OWORD *)&v13[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v13[72];
    *(_OWORD *)(a1 + 56) = v3;
    *(_OWORD *)(a1 + 40) = v2;
    v4 = v14;
    *(_OWORD *)(a1 + 24) = v15;
    *(_OWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = result;
    return result;
  }
  v19[0] = v14;
  v19[1] = v15;
  <serde::__private::de::content::ContentRefDeserializer<E> as serde::de::Deserializer>::deserialize_str(v13, v19);
  if ( *(_DWORD *)v13 == 2 )
  {
    v16.m256i_i64[0] = *(_QWORD *)&v13[24];
    v15 = *(_OWORD *)&v13[8];
    *((_QWORD *)&v14 + 1) = 0x8000000000000000LL;
LABEL_6:
    v5 = *((_QWORD *)&v14 + 1);
    v6 = v15;
    v7 = v16.m256i_i64[0];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v16.m256i_u64[1];
    *(_QWORD *)(a1 + 24) = *((_QWORD *)&v6 + 1);
    *(_QWORD *)(a1 + 32) = v7;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v6;
    goto LABEL_7;
  }
  v14 = *(_OWORD *)v13;
  v18 = *(_QWORD *)&v13[80];
  v17 = *(_OWORD *)&v13[64];
  v16 = *(__m256i *)&v13[32];
  v15 = *(_OWORD *)&v13[16];
  if ( *(_QWORD *)v13 == 2LL )
    goto LABEL_6;
  core::ptr::drop_in_place<core::result::Result<alacritty::config::ui_config::Program,toml::de::error::Error>>(&v14);
  <serde::__private::de::content::ContentRefDeserializer<E> as serde::de::Deserializer>::deserialize_any(v13, v19);
  if ( *(_DWORD *)v13 != 2 )
  {
    core::ptr::drop_in_place<core::result::Result<alacritty::config::ui_config::Program,toml::de::error::Error>>(v13);
    <toml::de::error::Error as serde::de::Error>::custom(v13, aDataDidNotMatc_0, 55LL);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)&v13[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v13[64];
    v10 = *(_OWORD *)v13;
    v11 = *(_OWORD *)&v13[16];
    v12 = *(_OWORD *)&v13[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v13[48];
    *(_OWORD *)(a1 + 32) = v12;
    *(_OWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
    return core::ptr::drop_in_place<serde::__private::de::content::Content>(v19);
  }
  v8 = *(_OWORD *)&v13[8];
  v9 = *(_OWORD *)&v13[24];
  *(_OWORD *)(a1 + 40) = *(_OWORD *)&v13[40];
  *(_OWORD *)(a1 + 24) = v9;
  *(_OWORD *)(a1 + 8) = v8;
LABEL_7:
  *(_QWORD *)a1 = 2LL;
  return core::ptr::drop_in_place<serde::__private::de::content::Content>(v19);
}