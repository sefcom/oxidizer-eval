__int64 __fastcall linera_exporter::storage::BlockProcessorStorage<S>::index_blob(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD v7[5]; // [rsp+8h] [rbp-50h] BYREF

  result = linera_exporter::state::BlockExporterStateView<C>::index_blob((__int64)v7, a2 + 952);
  if ( *(_QWORD *)&v7[0] == 0x800000000000001CLL )
  {
    result = mini_moka::unsync::cache::Cache<K,V,S>::insert(a2, a3);
    *(_QWORD *)a1 = 0x800000000000001CLL;
  }
  else
  {
    v5 = v7[0];
    v6 = v7[1];
    *(_OWORD *)(a1 + 32) = v7[2];
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
  }
  return result;
}