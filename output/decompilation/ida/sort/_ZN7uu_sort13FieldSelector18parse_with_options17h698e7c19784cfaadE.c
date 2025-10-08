__int64 __fastcall uu_sort::FieldSelector::parse_with_options(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 result; // rax
  _BYTE v12[7]; // [rsp+8h] [rbp-E0h]
  int v13; // [rsp+10h] [rbp-D8h]
  int v14; // [rsp+10h] [rbp-D8h]
  __int64 v15; // [rsp+18h] [rbp-D0h] BYREF
  _DWORD v16[2]; // [rsp+20h] [rbp-C8h]
  __int128 v17; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-B0h]
  _BYTE v19[24]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-90h]
  __int128 v21; // [rsp+60h] [rbp-88h] BYREF
  __int64 v22; // [rsp+70h] [rbp-78h]
  __int128 v23; // [rsp+80h] [rbp-68h]
  __int128 v24; // [rsp+90h] [rbp-58h]
  __int64 v25; // [rsp+B0h] [rbp-38h]

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v8 = <uu_sort::KeySettings as core::default::Default>::default();
  LODWORD(v15) = v8;
  WORD2(v15) = (v8 & 0xFFFFFFFFFFFFuLL) >> 32;
  uu_sort::FieldSelector::parse_with_options::parse_key_settings(&v17, v6, v7, &v15);
  if ( !__OFSUB__(0LL, (_QWORD)v17) )
  {
    v21 = v17;
    v22 = v18;
    goto LABEL_8;
  }
  uu_sort::KeyPosition::new((__int64)v19, v4, v5, 1LL, BYTE8(v17));
  v25 = v20;
  v21 = *(_OWORD *)&v19[8];
  v22 = v20;
  if ( (v19[0] & 1) != 0 )
  {
LABEL_8:
    result = v22;
    *(_QWORD *)(a1 + 16) = v22;
    *(_OWORD *)a1 = v21;
LABEL_9:
    *(_BYTE *)(a1 + 55) = 2;
    return result;
  }
  v9 = *a3;
  if ( !*a3 )
  {
    LOBYTE(result) = 2;
    goto LABEL_11;
  }
  v10 = a3[1];
  uu_sort::FieldSelector::parse_with_options::parse_key_settings(&v17, a3[2], a3[3], &v15);
  if ( (_QWORD)v17 != 0x8000000000000000LL )
  {
    result = (unsigned __int8)v18;
    v14 = *(_DWORD *)((char *)&v18 + 1);
    HIBYTE(v14) = BYTE4(v18);
    v23 = v17;
    *(_DWORD *)v12 = v14;
    *(_DWORD *)&v12[3] = HIDWORD(v18);
    goto LABEL_13;
  }
  uu_sort::KeyPosition::new((__int64)v19, v9, v10, 0LL, BYTE8(v17));
  result = (unsigned __int8)v20;
  v13 = *(_DWORD *)((char *)&v20 + 1);
  HIBYTE(v13) = BYTE4(v20);
  v23 = *(_OWORD *)&v19[8];
  *(_DWORD *)v12 = v13;
  *(_DWORD *)&v12[3] = HIDWORD(v20);
  if ( (v19[0] & 1) != 0 )
  {
LABEL_13:
    *(_OWORD *)a1 = v23;
    *(_DWORD *)(a1 + 17) = *(_DWORD *)v12;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)&v12[3];
    *(_BYTE *)(a1 + 16) = result;
    goto LABEL_9;
  }
  v24 = v23;
  v16[0] = *(_DWORD *)v12;
  *(_DWORD *)((char *)v16 + 3) = HIDWORD(v20);
LABEL_11:
  *(_OWORD *)v19 = v24;
  v19[16] = result;
  *(_DWORD *)&v19[17] = v16[0];
  *(_DWORD *)&v19[20] = *(_DWORD *)((char *)v16 + 3);
  return uu_sort::FieldSelector::new(a1, &v21, v19, v15);
}