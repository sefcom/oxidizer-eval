char __fastcall just::evaluator::Evaluator::run_backtick(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int128 *a5)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  char result; // al
  _BYTE v10[24]; // [rsp+8h] [rbp-80h] BYREF
  _BYTE v11[71]; // [rsp+21h] [rbp-67h]
  __int64 v12; // [rsp+68h] [rbp-20h]

  just::evaluator::Evaluator::run_command(v10, a2, a3, a4, 8LL, 0LL);
  if ( __OFSUB__(0LL, *(_QWORD *)v10) )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v10[8];
    v12 = *((_QWORD *)a5 + 8);
    v6 = *a5;
    v7 = a5[1];
    v8 = a5[2];
    *(_OWORD *)&v11[55] = a5[3];
    *(_OWORD *)&v11[39] = v8;
    *(_OWORD *)&v11[23] = v7;
    *(_OWORD *)&v11[7] = v6;
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v11[63];
    *(_QWORD *)(a1 + 72) = v12;
    *(_OWORD *)(a1 + 49) = *(_OWORD *)&v11[48];
    *(_OWORD *)(a1 + 33) = *(_OWORD *)&v11[32];
    *(_OWORD *)(a1 + 17) = *(_OWORD *)&v11[16];
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v11;
    result = 3;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v10[16];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v10;
    result = 56;
  }
  *(_BYTE *)a1 = result;
  return result;
}