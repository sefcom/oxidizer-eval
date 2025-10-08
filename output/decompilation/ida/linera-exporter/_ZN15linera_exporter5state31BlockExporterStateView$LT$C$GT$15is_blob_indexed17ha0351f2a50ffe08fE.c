__int64 __fastcall linera_exporter::state::BlockExporterStateView<C>::is_blob_indexed(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v3; // xmm1
  __int64 result; // rax

  *(_QWORD *)(a1 + 496) = a2;
  v3 = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 537) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 553) = v3;
  result = *(unsigned __int8 *)(a3 + 32);
  *(_WORD *)(a1 + 569) = (unsigned __int8)result;
  return result;
}