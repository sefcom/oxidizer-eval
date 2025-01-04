__int64 __fastcall uu_sort::FieldSelector::parse_with_options(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 result; // rax
  _BYTE v10[7]; // [rsp+8h] [rbp-F0h]
  int v11; // [rsp+10h] [rbp-E8h]
  int v12; // [rsp+10h] [rbp-E8h]
  __int64 v13; // [rsp+18h] [rbp-E0h] BYREF
  _DWORD v14[2]; // [rsp+20h] [rbp-D8h]
  __int128 v15; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C0h]
  _BYTE v17[24]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A0h]
  __int128 v19; // [rsp+60h] [rbp-98h] BYREF
  __int64 v20; // [rsp+70h] [rbp-88h]
  __int128 v21; // [rsp+80h] [rbp-78h]
  __int64 *v22; // [rsp+98h] [rbp-60h]
  __int128 v23; // [rsp+A0h] [rbp-58h]
  __int64 v24; // [rsp+C0h] [rbp-38h]

  v22 = a3;
  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  <uu_sort::KeySettings as core::default::Default>::default();
  WORD2(v13) = 1536;
  LODWORD(v13) = 0;
  uu_sort::FieldSelector::parse_with_options::parse_key_settings(&v15, v5, v6, &v13);
  if ( (_QWORD)v15 != 0x8000000000000000LL )
  {
    v19 = v15;
    v20 = v16;
    goto LABEL_8;
  }
  uu_sort::KeyPosition::new((__int64)v17, v3, v4, 1LL, BYTE8(v15));
  v24 = v18;
  v19 = *(_OWORD *)&v17[8];
  v20 = v18;
  if ( *(_QWORD *)v17 )
  {
LABEL_8:
    result = v20;
    *(_QWORD *)(a1 + 16) = v20;
    *(_OWORD *)a1 = v19;
LABEL_9:
    *(_BYTE *)(a1 + 55) = 2;
    return result;
  }
  v7 = *v22;
  if ( !*v22 )
  {
    LOBYTE(result) = 2;
    goto LABEL_11;
  }
  v8 = v22[1];
  uu_sort::FieldSelector::parse_with_options::parse_key_settings(&v15, v22[2], v22[3], &v13);
  if ( (_QWORD)v15 != 0x8000000000000000LL )
  {
    result = (unsigned __int8)v16;
    v12 = *(_DWORD *)((char *)&v16 + 1);
    HIBYTE(v12) = BYTE4(v16);
    v21 = v15;
    *(_DWORD *)v10 = v12;
    *(_DWORD *)&v10[3] = HIDWORD(v16);
    goto LABEL_13;
  }
  uu_sort::KeyPosition::new((__int64)v17, v7, v8, 0LL, BYTE8(v15));
  result = (unsigned __int8)v18;
  v11 = *(_DWORD *)((char *)&v18 + 1);
  HIBYTE(v11) = BYTE4(v18);
  v21 = *(_OWORD *)&v17[8];
  *(_DWORD *)v10 = v11;
  *(_DWORD *)&v10[3] = HIDWORD(v18);
  if ( *(_QWORD *)v17 )
  {
LABEL_13:
    *(_OWORD *)a1 = v21;
    *(_DWORD *)(a1 + 17) = *(_DWORD *)v10;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)&v10[3];
    *(_BYTE *)(a1 + 16) = result;
    goto LABEL_9;
  }
  v23 = v21;
  v14[0] = *(_DWORD *)v10;
  *(_DWORD *)((char *)v14 + 3) = HIDWORD(v18);
LABEL_11:
  *(_OWORD *)v17 = v23;
  v17[16] = result;
  *(_DWORD *)&v17[17] = v14[0];
  *(_DWORD *)&v17[20] = *(_DWORD *)((char *)v14 + 3);
  return uu_sort::FieldSelector::new(a1, &v19, v17, v13);
}
