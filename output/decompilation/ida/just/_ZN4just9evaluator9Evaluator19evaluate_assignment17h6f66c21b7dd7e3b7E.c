__int64 __fastcall just::evaluator::Evaluator::evaluate_assignment(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rbp
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 result; // rax
  char v9; // al
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  char v13; // cl
  __int64 v14; // rdx
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  _BYTE v18[96]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+70h] [rbp-68h]
  _BYTE v20[31]; // [rsp+80h] [rbp-58h]

  v3 = (__int128 *)(a3 + 128);
  v4 = just::token::Token::lexeme(a3 + 128);
  v6 = v5;
  v7 = a2 + 40;
  if ( !(unsigned __int8)just::scope::Scope::bound(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48), v4, v5) )
  {
    just::evaluator::Evaluator::evaluate_expression(v18, a2, a3);
    result = v18[0];
    if ( v18[0] != 56 )
    {
      v15 = *(_OWORD *)&v18[32];
      v16 = *(_OWORD *)&v18[48];
      *(_OWORD *)&v20[15] = *(_OWORD *)&v18[16];
      *(_OWORD *)v20 = *(_OWORD *)&v18[1];
      *(_QWORD *)(a1 + 96) = v19;
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v18[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v18[64];
      *(_OWORD *)(a1 + 48) = v16;
      *(_OWORD *)(a1 + 32) = v15;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v20[15];
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v20;
      *(_BYTE *)a1 = result;
      return result;
    }
    *(_QWORD *)&v20[23] = *(_QWORD *)&v18[24];
    *(_OWORD *)&v20[7] = *(_OWORD *)&v18[8];
    *(_QWORD *)&v18[16] = *(_QWORD *)&v18[24];
    *(_OWORD *)v18 = *(_OWORD *)&v20[7];
    v9 = *(_BYTE *)(a3 + 205);
    *(_QWORD *)&v18[88] = *((_QWORD *)v3 + 8);
    v10 = *v3;
    v11 = v3[1];
    v12 = v3[2];
    *(_OWORD *)&v18[72] = v3[3];
    *(_OWORD *)&v18[56] = v12;
    *(_OWORD *)&v18[40] = v11;
    *(_OWORD *)&v18[24] = v10;
    v13 = *(_BYTE *)(a3 + 206);
    BYTE4(v19) = 0;
    BYTE5(v19) = v9;
    LODWORD(v19) = 0;
    BYTE6(v19) = v13;
    just::scope::Scope::bind(v7, v18);
  }
  result = just::scope::Scope::value(v7, v4, v6);
  if ( !result )
    core::option::unwrap_failed(&off_42FB08);
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = v14;
  *(_BYTE *)a1 = 56;
  return result;
}