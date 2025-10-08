__int64 __fastcall linera_proxy::SimpleProxy<S>::try_local_message(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int64 result; // rax

  *(_QWORD *)(a1 + 56) = a2;
  v3 = *(_OWORD *)(a3 + 16);
  v4 = *(_OWORD *)(a3 + 32);
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)(a1 + 32) = v4;
  result = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a1 + 48) = result;
  *(_BYTE *)(a1 + 168) = 0;
  return result;
}