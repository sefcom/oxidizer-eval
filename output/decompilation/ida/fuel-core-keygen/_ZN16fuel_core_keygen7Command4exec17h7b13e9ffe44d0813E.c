__int64 __fastcall fuel_core_keygen::Command::exec(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ecx
  __int64 v4; // rcx
  char v5; // dl
  int v6; // ecx
  unsigned __int8 v7; // [rsp+8h] [rbp-200h] BYREF
  _BYTE v8[7]; // [rsp+9h] [rbp-1FFh]
  __int64 v9; // [rsp+10h] [rbp-1F8h]
  __int128 v10; // [rsp+18h] [rbp-1F0h]
  __int64 v11; // [rsp+28h] [rbp-1E0h] BYREF
  __int64 v12; // [rsp+30h] [rbp-1D8h]
  _OWORD src[9]; // [rsp+38h] [rbp-1D0h] BYREF
  _QWORD v14[2]; // [rsp+C8h] [rbp-140h] BYREF
  __int128 v15; // [rsp+D8h] [rbp-130h]
  __int128 v16; // [rsp+E8h] [rbp-120h]
  __int128 v17; // [rsp+F8h] [rbp-110h]
  __int128 v18; // [rsp+108h] [rbp-100h]
  __int128 v19; // [rsp+118h] [rbp-F0h]
  __int128 v20; // [rsp+128h] [rbp-E0h]
  __int128 v21; // [rsp+138h] [rbp-D0h]
  _QWORD v22[2]; // [rsp+148h] [rbp-C0h] BYREF
  _BYTE dest[144]; // [rsp+158h] [rbp-B0h] BYREF

  if ( !__OFSUB__(0LL, *(_QWORD *)a2) )
  {
    fuel_core_keygen::parse_secret(&v11, *(unsigned __int8 *)(a2 + 25), *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    result = v12;
    if ( v11 == 2 )
    {
LABEL_5:
      *(_QWORD *)a1 = result;
      *(_BYTE *)(a1 + 32) = 2;
      return result;
    }
    v21 = src[6];
    v20 = src[5];
    v19 = src[4];
    v18 = src[3];
    v17 = src[2];
    v16 = src[1];
    v15 = src[0];
    v14[0] = v11;
    v14[1] = v12;
    serde_json::value::to_value(&v7, v14);
    result = v7;
    if ( v7 != 6 )
    {
      v6 = *(_DWORD *)v8;
      *(_DWORD *)(a1 + 4) = *(_DWORD *)&v8[3];
      *(_DWORD *)(a1 + 1) = v6;
      v4 = v9;
      *(_OWORD *)(a1 + 16) = v10;
      v5 = *(_BYTE *)(a2 + 24);
      goto LABEL_10;
    }
LABEL_11:
    result = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v9);
    goto LABEL_5;
  }
  result = fuel_core_keygen::new_key(&v11, *(unsigned __int8 *)(a2 + 9));
  if ( v11 == 2 )
  {
    *(_QWORD *)a1 = v12;
    *(_BYTE *)(a1 + 32) = 2;
    return result;
  }
  memcpy(dest, src, sizeof(dest));
  v22[0] = v11;
  v22[1] = v12;
  serde_json::value::to_value(&v7, v22);
  result = v7;
  if ( v7 == 6 )
    goto LABEL_11;
  v3 = *(_DWORD *)v8;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)&v8[3];
  *(_DWORD *)(a1 + 1) = v3;
  v4 = v9;
  *(_OWORD *)(a1 + 16) = v10;
  v5 = *(_BYTE *)(a2 + 8);
LABEL_10:
  *(_BYTE *)a1 = result;
  *(_QWORD *)(a1 + 8) = v4;
  *(_BYTE *)(a1 + 32) = v5;
  return result;
}