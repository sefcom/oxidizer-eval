__int64 __fastcall linera_indexer::service::Service::get_value(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm1
  __int64 result; // rax

  *(_QWORD *)(a1 + 904) = a2;
  v4 = a3[1];
  *(_OWORD *)a1 = *a3;
  *(_OWORD *)(a1 + 16) = v4;
  v5 = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 946) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 962) = v5;
  result = *(unsigned __int8 *)(a4 + 32);
  *(_BYTE *)(a1 + 978) = result;
  *(_BYTE *)(a1 + 945) = 0;
  return result;
}