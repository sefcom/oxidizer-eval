        __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r13
  __int128 v11; // xmm0
  _QWORD v13[2]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+10h] [rbp-58h]
  unsigned __int64 v15; // [rsp+18h] [rbp-50h]
  _BYTE v16[24]; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+38h] [rbp-30h]

  v5 = *(unsigned __int8 *)(a4 + 41);
  LOBYTE(v5) = 8 * v5;
  v6 = (unsigned int)byte_100A1A >> v5;
  v7 = a1;
  v8 = 0x8000000000000000LL;
  if ( *(_BYTE *)(a4 + 40) )
  {
    v9 = *(_QWORD *)(a4 + 32);
LABEL_6:
    v11 = *(_OWORD *)(a4 + 8);
    *v7 = v8;
    v7[1] = v9;
    *((_BYTE *)v7 + 16) = v6;
    *(_DWORD *)((char *)v7 + 17) = (_DWORD)a1;
    *((_BYTE *)v7 + 23) = BYTE6(a1);
    *(_WORD *)((char *)v7 + 21) = WORD2(a1);
    v7[3] = v5;
    v7[4] = a2;
    v7[5] = a3;
    *((_OWORD *)v7 + 3) = v11;
    *((_BYTE *)v7 + 64) = 1;
    return v7;
  }
  v10 = a3;
  uu_split::number::FixedWidthNumber::new((__int64)v13, v6, *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 32));
  if ( v13[0] != 0x8000000000000000LL )
  {
    v9 = v13[1];
    LOBYTE(v6) = v14;
    v5 = v15;
    a1 = (unsigned __int64 *)(v14 >> 8);
    v8 = v13[0];
    a3 = v10;
    goto LABEL_6;
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(v16);
  v17 = 1;
  a1[1] = alloc::boxed::Box<T>::new(v16);
  a1[2] = (unsigned __int64)&off_149C08;
  *a1 = 0x8000000000000001LL;
  return v7;
}
