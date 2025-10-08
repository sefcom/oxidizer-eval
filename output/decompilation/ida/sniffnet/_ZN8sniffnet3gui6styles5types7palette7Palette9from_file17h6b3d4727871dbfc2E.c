__int64 __fastcall sniffnet::gui::styles::types::palette::Palette::from_file(__int64 a1)
{
  __int64 result; // rax
  int v2; // ecx
  __int128 v3; // xmm0
  __int64 v4; // rdx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // [rsp+0h] [rbp-128h] BYREF
  _OWORD v9[2]; // [rsp+10h] [rbp-118h]
  __int128 v10; // [rsp+30h] [rbp-F8h]
  _BYTE v11[28]; // [rsp+40h] [rbp-E8h]
  _DWORD v12[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+68h] [rbp-C0h]
  _BYTE v14[88]; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v15[76]; // [rsp+D0h] [rbp-58h] BYREF

  std::fs::File::open(v12);
  if ( v12[0] == 1 )
  {
    <toml::de::error::Error as serde_core::de::Error>::custom(v14, v13);
    result = *(_QWORD *)v14;
    v2 = *(_DWORD *)&v14[8];
    *(_OWORD *)&v15[60] = *(_OWORD *)&v14[72];
    *(_OWORD *)&v15[48] = *(_OWORD *)&v14[60];
    *(_OWORD *)&v15[32] = *(_OWORD *)&v14[44];
    *(_OWORD *)&v15[16] = *(_OWORD *)&v14[28];
    *(_OWORD *)v15 = *(_OWORD *)&v14[12];
    v8 = *(_OWORD *)&v14[12];
    v9[0] = *(_OWORD *)&v14[28];
    *(_OWORD *)((char *)v9 + 12) = *(_OWORD *)&v15[28];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v15[60];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v15[44];
    *(_OWORD *)&v11[12] = *(_OWORD *)((char *)v9 + 12);
    *(_OWORD *)v11 = v9[0];
    v10 = v8;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v11[12];
    v3 = v10;
    *(_OWORD *)(a1 + 36) = *(_OWORD *)v11;
    *(_OWORD *)(a1 + 20) = v3;
    *(_QWORD *)(a1 + 8) = result;
    *(_DWORD *)(a1 + 16) = v2;
    *(_DWORD *)a1 = 1;
  }
  else
  {
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v14, v12[1]);
    *(_OWORD *)((char *)v9 + 12) = *(_OWORD *)&v14[32];
    *((_QWORD *)&v9[0] + 1) = *(_QWORD *)&v14[28];
    v10 = *(_OWORD *)&v14[4];
    *(_OWORD *)&v11[12] = *(_OWORD *)((char *)v9 + 12);
    *(_OWORD *)v11 = *(_OWORD *)&v14[20];
    *(_OWORD *)&v15[4] = *(_OWORD *)&v14[4];
    *(_OWORD *)&v15[20] = *(_OWORD *)&v14[20];
    *(_OWORD *)&v15[32] = *(_OWORD *)&v11[12];
    *(_DWORD *)v15 = *(_DWORD *)v14;
    *(_QWORD *)&v8 = 0LL;
    *((_QWORD *)&v8 + 1) = 1LL;
    *(_QWORD *)&v9[0] = 0LL;
    if ( (<std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_string(v15, &v8) & 1) != 0 )
    {
      <toml::de::error::Error as serde_core::de::Error>::custom(v14, v4);
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&v14[80];
      v5 = *(_OWORD *)&v14[16];
      v6 = *(_OWORD *)&v14[32];
      v7 = *(_OWORD *)&v14[48];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v14[64];
      *(_OWORD *)(a1 + 56) = v7;
      *(_OWORD *)(a1 + 40) = v6;
      *(_OWORD *)(a1 + 24) = v5;
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v14;
      *(_DWORD *)a1 = 1;
    }
    else
    {
      toml::de::from_str(a1, *((_QWORD *)&v8 + 1), *(_QWORD *)&v9[0]);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v8);
    return core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(v15);
  }
  return result;
}