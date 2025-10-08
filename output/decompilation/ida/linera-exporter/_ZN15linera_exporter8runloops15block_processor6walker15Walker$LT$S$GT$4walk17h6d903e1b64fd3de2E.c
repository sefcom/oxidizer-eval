__int64 __fastcall linera_exporter::runloops::block_processor::walker::Walker<S>::walk(
        __int64 a1,
        __int128 *a2,
        __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int64 result; // rax

  *(_QWORD *)(a1 + 112) = *((_QWORD *)a2 + 14);
  *(_OWORD *)(a1 + 96) = a2[6];
  *(_OWORD *)(a1 + 80) = a2[5];
  *(_OWORD *)(a1 + 64) = a2[4];
  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 32) = v5;
  *(_OWORD *)(a1 + 16) = v4;
  *(_OWORD *)a1 = v3;
  v6 = *(_OWORD *)(a3 + 16);
  v7 = *(_OWORD *)(a3 + 32);
  v8 = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 136) = v6;
  *(_OWORD *)(a1 + 152) = v7;
  *(_OWORD *)(a1 + 168) = v8;
  result = *(_QWORD *)(a3 + 64);
  *(_QWORD *)(a1 + 184) = result;
  *(_BYTE *)(a1 + 888) = 0;
  return result;
}