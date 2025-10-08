__int64 __fastcall linera_exporter::storage::BlockProcessorStorage<S>::load(
        __int64 a1,
        __int128 *a2,
        int a3,
        __int64 a4,
        _OWORD *a5)
{
  __int128 v5; // xmm0
  __int64 result; // rax

  v5 = *a2;
  *(_OWORD *)(a1 + 40) = a2[1];
  *(_OWORD *)(a1 + 24) = v5;
  *(_DWORD *)(a1 + 120) = a3;
  *(_OWORD *)a1 = *(_OWORD *)a4;
  result = *(_QWORD *)(a4 + 16);
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)(a1 + 56) = *a5;
  *(_BYTE *)(a1 + 124) = 0;
  return result;
}