void *__fastcall alacritty::config::read_config(_OWORD *dest, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v11; // [rsp+8h] [rbp-8F0h] BYREF
  __int64 v12; // [rsp+18h] [rbp-8E0h]
  __int128 v13; // [rsp+20h] [rbp-8D8h]
  __int128 v14; // [rsp+30h] [rbp-8C8h]
  __int128 v15; // [rsp+40h] [rbp-8B8h]
  __int128 v16; // [rsp+50h] [rbp-8A8h]
  __int128 v17; // [rsp+60h] [rbp-898h]
  __int64 v18; // [rsp+70h] [rbp-888h]
  _OWORD v19[2]; // [rsp+80h] [rbp-878h] BYREF
  _BYTE v20[24]; // [rsp+A0h] [rbp-858h] BYREF
  __int128 v21; // [rsp+B8h] [rbp-840h]
  __int128 v22; // [rsp+C8h] [rbp-830h]
  __int128 v23; // [rsp+D8h] [rbp-820h]
  __int128 v24; // [rsp+E8h] [rbp-810h]
  __int64 v25; // [rsp+F8h] [rbp-800h]
  _BYTE src[960]; // [rsp+100h] [rbp-7F8h] BYREF
  _QWORD v27[135]; // [rsp+4C0h] [rbp-438h] BYREF

  *(_QWORD *)&v11 = 0LL;
  *((_QWORD *)&v11 + 1) = 8LL;
  v12 = 0LL;
  alacritty::config::parse_config(v20, a2, a3, &v11, 5LL);
  v3 = *(_QWORD *)v20;
  v13 = *(_OWORD *)&v20[8];
  v14 = v21;
  if ( *(_QWORD *)v20 != 7LL )
  {
    v7 = v22;
    v8 = v23;
    dest[5] = v24;
    dest[4] = v8;
    dest[3] = v7;
    v9 = v13;
    dest[2] = v14;
    dest[1] = v9;
    *((_QWORD *)dest + 1) = v3;
    goto LABEL_5;
  }
  v19[0] = v13;
  v19[1] = v14;
  <alacritty::config::ui_config::UiConfig as serde::de::Deserialize>::deserialize(v20, v19);
  v13 = *(_OWORD *)&v20[8];
  v14 = v21;
  v15 = v22;
  v16 = v23;
  v17 = v24;
  v18 = v25;
  if ( *(_QWORD *)v20 == 6LL )
  {
    *((_QWORD *)dest + 11) = v18;
    *(_OWORD *)((char *)dest + 72) = v17;
    v4 = v13;
    v5 = v14;
    v6 = v15;
    *(_OWORD *)((char *)dest + 56) = v16;
    *(_OWORD *)((char *)dest + 40) = v6;
    *(_OWORD *)((char *)dest + 24) = v5;
    *(_OWORD *)((char *)dest + 8) = v4;
LABEL_5:
    *(_QWORD *)dest = 6LL;
    return (void *)core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v11);
  }
  memcpy(&v27[12], src, 0x3C0uLL);
  *(_OWORD *)&v27[1] = v13;
  *(_OWORD *)&v27[3] = v14;
  *(_OWORD *)&v27[5] = v15;
  *(_OWORD *)&v27[7] = v16;
  *(_OWORD *)&v27[9] = v17;
  v27[11] = v18;
  v27[0] = *(_QWORD *)v20;
  *(_QWORD *)&v20[16] = v12;
  *(_OWORD *)v20 = v11;
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v27[83]);
  v27[85] = *(_QWORD *)&v20[16];
  *(_OWORD *)&v27[83] = *(_OWORD *)v20;
  return memcpy(dest, v27, 0x420uLL);
}