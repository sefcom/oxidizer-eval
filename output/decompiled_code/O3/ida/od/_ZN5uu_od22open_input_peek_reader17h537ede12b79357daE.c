        __int64 a6)
{
  __int64 v7; // r12
  __int64 v8; // r15
  unsigned __int64 v9; // r13
  _BYTE *v11; // rbp
  __int64 v12; // rax
  bool v13; // r8
  __int64 v14; // rdi
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v18; // [rsp+8h] [rbp-70h]
  __int128 v20; // [rsp+18h] [rbp-60h] BYREF
  __int128 v21; // [rsp+28h] [rbp-50h]
  __int128 v22; // [rsp+38h] [rbp-40h]

  v7 = a5;
  v8 = a4;
  v9 = a3;
  if ( !a3 )
  {
    v12 = 8LL;
    goto LABEL_10;
  }
  if ( a3 > 0x555555555555555LL )
  {
    v18 = 0LL;
LABEL_12:
    alloc::raw_vec::handle_error(v18, 24 * v9);
  }
  v11 = a2;
  v18 = 8LL;
  v12 = _rust_alloc(24 * a3, 8LL);
  if ( !v12 )
    goto LABEL_12;
  a4 = 16LL;
  a3 = v9;
  v7 = a5;
  do
  {
    a2 = *(_BYTE **)&v11[a4 - 8];
    v14 = *(_QWORD *)&v11[a4];
    v13 = v14 == 1 && *a2 == 45;
    *(_QWORD *)(v12 + a4 - 16) = v13;
    *(_QWORD *)(v12 + a4 - 8) = a2;
    *(_QWORD *)(v12 + a4) = v14;
    a4 += 24LL;
    --a3;
  }
  while ( a3 );
LABEL_10:
  *(_QWORD *)&v20 = v9;
  *((_QWORD *)&v20 + 1) = v12;
  v21 = v9;
  BYTE8(v22) = 0;
  uu_od::multifilereader::MultifileReader::next_file(&v20, a2, a3, a4);
  v15 = v20;
  v16 = v21;
  *(_OWORD *)(a1 + 48) = v22;
  *(_OWORD *)(a1 + 32) = v16;
  *(_OWORD *)(a1 + 16) = v15;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = a6;
  *(_QWORD *)(a1 + 64) = v8;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 1LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  return a1;
}
