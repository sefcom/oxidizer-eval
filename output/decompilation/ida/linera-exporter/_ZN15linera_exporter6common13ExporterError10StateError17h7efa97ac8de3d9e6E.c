unsigned __int64 __fastcall linera_exporter::common::ExporterError::StateError(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  unsigned __int64 result; // rax

  *(_QWORD *)(a1 + 40) = *((_QWORD *)a2 + 4);
  v2 = *a2;
  *(_OWORD *)(a1 + 24) = a2[1];
  *(_OWORD *)(a1 + 8) = v2;
  result = 0x8000000000000012LL;
  *(_QWORD *)a1 = 0x8000000000000012LL;
  return result;
}