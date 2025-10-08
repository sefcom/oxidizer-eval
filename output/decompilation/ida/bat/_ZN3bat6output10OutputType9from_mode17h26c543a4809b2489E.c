__int64 __fastcall bat::output::OutputType::from_mode(__int64 a1, char a2, unsigned __int8 a3)
{
  char v3; // al
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _BYTE v9[64]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v10; // [rsp+40h] [rbp-58h]
  __int128 v11; // [rsp+50h] [rbp-48h]
  __int128 v12; // [rsp+60h] [rbp-38h]
  _BYTE v13[31]; // [rsp+70h] [rbp-28h]

  if ( !a2 )
  {
    bat::output::OutputType::try_pager(v9, 1LL, a3);
    v3 = v9[0];
    if ( v9[0] == 13 )
      goto LABEL_4;
LABEL_6:
    *(_OWORD *)&v13[15] = *(_OWORD *)&v9[48];
    *(_OWORD *)v13 = *(_OWORD *)&v9[33];
    v12 = *(_OWORD *)&v9[17];
    v11 = *(_OWORD *)&v9[1];
    *(_OWORD *)(a1 + 64) = v10;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v13[15];
    v4 = v11;
    v5 = v12;
    *(_OWORD *)(a1 + 33) = *(_OWORD *)v13;
    *(_OWORD *)(a1 + 17) = v5;
    *(_OWORD *)(a1 + 1) = v4;
    *(_BYTE *)a1 = v3;
    return a1;
  }
  if ( a2 != 1 )
  {
    bat::output::OutputType::stdout(v9);
    goto LABEL_8;
  }
  bat::output::OutputType::try_pager(v9, 0LL, a3);
  v3 = v9[0];
  if ( v9[0] != 13 )
    goto LABEL_6;
LABEL_4:
  *(_QWORD *)&v13[23] = *(_QWORD *)&v9[56];
  *(_OWORD *)v9 = *(_OWORD *)&v9[8];
  *(_OWORD *)&v9[16] = *(_OWORD *)&v9[24];
  *(_OWORD *)&v9[32] = *(_OWORD *)&v9[40];
  *(_QWORD *)&v9[48] = *(_QWORD *)&v9[56];
LABEL_8:
  *(_QWORD *)(a1 + 56) = *(_QWORD *)&v9[48];
  v7 = *(_OWORD *)v9;
  v8 = *(_OWORD *)&v9[16];
  *(_OWORD *)(a1 + 40) = *(_OWORD *)&v9[32];
  *(_OWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 8) = v7;
  *(_BYTE *)a1 = 13;
  return a1;
}