__int64 __fastcall linera_exporter::storage::ExporterStorage<S>::get_blob(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm1
  __int64 result; // rax

  *(_QWORD *)(a1 + 200) = a2;
  v3 = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 208) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 224) = v3;
  result = *(unsigned __int8 *)(a3 + 32);
  *(_WORD *)(a1 + 240) = (unsigned __int8)result;
  return result;
}