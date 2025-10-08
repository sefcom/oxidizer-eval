__int64 __fastcall linera_exporter::state::BlockExporterStateView<C>::initiate(__int64 a1, const void *a2, __int64 a3)
{
  __int64 result; // rax

  memcpy((void *)a1, a2, 0x90uLL);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)a3;
  result = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 160) = result;
  *(_BYTE *)(a1 + 2128) = 0;
  return result;
}