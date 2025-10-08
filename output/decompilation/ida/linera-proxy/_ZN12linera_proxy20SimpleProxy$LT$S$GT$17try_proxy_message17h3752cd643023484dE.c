__int64 __fastcall linera_proxy::SimpleProxy<S>::try_proxy_message(
        __int64 a1,
        __int128 *a2,
        _OWORD *a3,
        char a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 result; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm1

  result = a8;
  *(_QWORD *)(a1 + 80) = *((_QWORD *)a2 + 6);
  v9 = *a2;
  v10 = a2[1];
  *(_OWORD *)(a1 + 64) = a2[2];
  *(_OWORD *)(a1 + 48) = v10;
  *(_OWORD *)(a1 + 32) = v9;
  v11 = a3[1];
  *(_OWORD *)a1 = *a3;
  *(_OWORD *)(a1 + 16) = v11;
  *(_BYTE *)(a1 + 440) = a4;
  *(_QWORD *)(a1 + 88) = a5;
  *(_DWORD *)(a1 + 96) = a6;
  *(_QWORD *)(a1 + 104) = a7;
  *(_DWORD *)(a1 + 112) = a8;
  *(_BYTE *)(a1 + 441) = 0;
  return result;
}