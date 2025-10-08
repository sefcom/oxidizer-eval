__int64 __fastcall forc_tx::<impl core::convert::From<forc_tx::Output> for fuel_tx::transaction::types::output::Output>::from(
        __int64 a1,
        unsigned __int8 *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // [rsp+0h] [rbp-48h]

  result = *a2;
  switch ( *a2 )
  {
    case 0u:
      v3 = *(_OWORD *)(a2 + 8);
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 24);
      *(_OWORD *)(a1 + 16) = v3;
      result = *((_QWORD *)a2 + 9);
      v4 = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(a1 + 64) = v4;
      *(_QWORD *)(a1 + 8) = result;
      *(_BYTE *)a1 = 0;
      break;
    case 1u:
      result = *((unsigned __int16 *)a2 + 33);
      v11 = *(_OWORD *)(a2 + 18);
      v13 = *(_OWORD *)(a2 + 2);
      v12 = *(_OWORD *)(a2 + 34);
      *(_OWORD *)(a1 + 50) = *(_OWORD *)(a2 + 50);
      *(_OWORD *)(a1 + 34) = v12;
      *(_OWORD *)(a1 + 18) = v11;
      *(_OWORD *)(a1 + 2) = v13;
      *(_WORD *)(a1 + 66) = result;
      *(_BYTE *)a1 = 1;
      break;
    case 2u:
      v7 = *(_OWORD *)(a2 + 8);
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 24);
      *(_OWORD *)(a1 + 16) = v7;
      result = *((_QWORD *)a2 + 9);
      v8 = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(a1 + 64) = v8;
      *(_QWORD *)(a1 + 8) = result;
      *(_BYTE *)a1 = 2;
      break;
    case 3u:
      v9 = *(_OWORD *)(a2 + 8);
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 24);
      *(_OWORD *)(a1 + 16) = v9;
      result = *((_QWORD *)a2 + 9);
      v10 = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(a1 + 64) = v10;
      *(_QWORD *)(a1 + 8) = result;
      *(_BYTE *)a1 = 3;
      break;
    case 4u:
      v5 = *(_OWORD *)(a2 + 1);
      *(_OWORD *)(a1 + 17) = *(_OWORD *)(a2 + 17);
      *(_OWORD *)(a1 + 1) = v5;
      v6 = *(_OWORD *)(a2 + 49);
      *(_OWORD *)(a1 + 33) = *(_OWORD *)(a2 + 33);
      *(_OWORD *)(a1 + 49) = v6;
      *(_BYTE *)a1 = 4;
      break;
  }
  return result;
}